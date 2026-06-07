#include<iostream>
#include<unordered_map>
#include<vector>
#include<unordered_set>

using namespace std;


  struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
 
 TreeNode* createBinaryTree(vector<vector<int>>& descriptions) {
        unordered_map<int,TreeNode*> mp;
        unordered_set<int>childern;

        for(auto & d : descriptions){
            int parent=d[0];
            int child = d[1];
            int isleft = d[2];

            if(mp.find(parent)==mp.end()){
                mp[parent]=new TreeNode(parent);
            }
            if(mp.find(child)==mp.end()){
                mp[child]=new TreeNode(child);
            }

            if(isleft){
                mp[parent]->left=mp[child];
            }
            else{
                mp[parent]->right=mp[child];
            }
            childern.insert(child);
        }
        for(auto & d: descriptions){
            int parent = d[0];

            if(childern.find(parent)==childern.end()){
                  return mp[parent];
            }
        }
        return nullptr;
    }