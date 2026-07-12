class LFUCache {
public:
    int capacity;
    int size=0;
    unordered_map<int ,list<vector<int>>::iterator >mp; // key -> address of list of vector{key, value, freq}
    map<int , list<vector<int>>>counter; //counter -> list of vector{key, value, freq}

    LFUCache(int capacity) {
        this->capacity=capacity;
        size=0;
    }
    void makeMostFreqUsed(int key)
    {
        auto &vec= *(mp[key]);
        int val=vec[1];
        int freq=vec[2];

        counter[freq].erase(mp[key]);

        // if counter of that freq is empty then remove it 
        if(counter[freq].empty()) counter.erase(freq);

        freq++;
        // push in front of counter[freq]
        counter[freq].push_front(vector<int>{key,val,freq});
        // update address of that key in map
        mp[key]=counter[freq].begin();
    }
    int get(int key) {
        if(mp.find(key)==mp.end()) return -1;

        auto &vec= *(mp[key]); //

        int val=vec[1];
        int freq=vec[2];

        makeMostFreqUsed(key);

        return val;
    }
    
    void put(int key, int value) {
        if(capacity==0) return ;

        if(mp.find(key)!=mp.end())
        {
            auto &vec =*(mp[key]);
            vec[1]=value;
            makeMostFreqUsed(key);
        }
        else if(size<capacity)
        {
            counter[1].push_front(vector<int>{key,value,1});
            mp[key]=counter[1].begin();
            size++;
        }
        else {
            //Time to remove LFU if tie then remove LRU
            auto &listToBeDelete=counter.begin()->second;

            int keyToBeDelete = listToBeDelete.back()[0];  //ordered_map ensures that the begin() will be the least frequency

            listToBeDelete.pop_back();
            mp.erase(keyToBeDelete);

            if(listToBeDelete.empty())
            {
                counter.erase(counter.begin()->first);
            }

            counter[1].push_front(vector<int>{key,value,1});
            mp[key]=counter[1].begin();
        }
        
    }
};

/**
 * Your LFUCache object will be instantiated and called as such:
 * LFUCache* obj = new LFUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */