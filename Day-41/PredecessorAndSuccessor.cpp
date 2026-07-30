/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/
/* BST Node
class Node {
   public:
    int data;
    Node *left;
    Node *right;

    Node(int x){
        data = x;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    Node* pre ;
    Node* suc ;
    void findPre(Node* root, int key) {
        if(!root) return ;
        if(root->data <key) 
        {
            pre=root;
            findPre(root->right,key);
            
        }
        else {
            findPre(root->left ,key);
        }
    }
    
    void findSuc(Node* root, int key) {
        if(!root) return ;
        if(root->data >key) 
        {
            suc=root;
            findSuc(root->left,key);
            
        }
        else {
            findSuc(root->right,key);
        }
    }
    vector<Node*> findPreSuc(Node* root, int key) {
        // code here
        pre=nullptr;
        suc=nullptr;
        
        findPre(root,key);
        findSuc(root,key);
        
        return {pre,suc};
    }
};



// class Solution {
//   public:
//     Node* pre ;
//     Node* suc ;
//     void dfs(Node* root, int key) {
//         if(!root) return ;
//         if(root->data > key &&  suc->data > root->data) suc=root;
//         if(root->data <key && pre->data <root->data) pre=root;
//         dfs(root->left,key);
//         dfs(root->right,key);
//     }
//     vector<Node*> findPreSuc(Node* root, int key) {
//         // code here
//         pre=new Node(-1);
//         suc=new Node(1000001);
//         dfs(root,key);
//         if(pre->data==-1) pre=NULL;
//         if(suc->data==1000001) suc=NULL;
//         return {pre,suc};
//     }
// };