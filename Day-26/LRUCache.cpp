class LRUCache {
public:
    vector<pair<int,int>> vec; // {key, value}
    int size;

    LRUCache(int capacity) {
        size = capacity;
    }
    
    int get(int key) {
        // Search for the key in vec
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i].first == key) {
                int value = vec[i].second;

                // Move this (key,value) pair to the front (most recently used)
                auto it = vec.begin() + i;
                pair<int,int> temp = *it;
                vec.erase(it);
                vec.insert(vec.begin(), temp);

                return value;
            }
        }
        return -1; // not found
    }
    
    void put(int key, int value) {
        // If key already exists, update it and move to front
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i].first == key) {
                auto it = vec.begin() + i;
                vec.erase(it);
                vec.insert(vec.begin(), {key, value});
                return;
            }
        }

        // If capacity full, remove least recently used (last element)
        if (vec.size() == size) {
            vec.pop_back();
        }

        // Insert new (key,value) at front
        vec.insert(vec.begin(), {key, value});
    }
};


class LRUCache {
public:
    list<int> dll; //it contains the key
    map<int, pair<list<int>::iterator, int>> cache; //key->(list_node, value)
    int capacity;
    
    LRUCache(int capacity) {
        this->capacity = capacity;
    }
    
    void makeMostRecentlyUsed(int key) {
        dll.erase(cache[key].first);
        dll.push_front(key);
        cache[key].first = dll.begin();
    }
    
    int get(int key) {
        if(!cache.count(key))
            return -1;
        
        makeMostRecentlyUsed(key);
        return cache[key].second;
    }
    
    void put(int key, int value) {
        if(cache.count(key)) {
            cache[key].second = value;
            makeMostRecentlyUsed(key);
        } else {
            dll.push_front(key);
            cache[key] = {dll.begin(), value};
            capacity--;
        }
        
        if(capacity < 0) {
            cache.erase(dll.back());
            dll.pop_back();
            capacity++;
        }
    }
};