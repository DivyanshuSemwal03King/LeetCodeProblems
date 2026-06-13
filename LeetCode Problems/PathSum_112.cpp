#include <iostream>
#include <vector>
using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution
{
public:
     bool solve(TreeNode *root, int targetSum, vector<int>& path){
        if(root==NULL) return false;
        path.push_back(root->val);
        if(root->left==NULL&&root->right==NULL){
            int sumValue = 0;
            for(int x : path){
                sumValue+=x;
            }
            if(sumValue==targetSum) return true;
        }

        bool left = solve(root->left,targetSum,path);
        bool right=solve(root->right,targetSum,path);

        path.pop_back();

        return left||right;

     }
    bool hasPathSum(TreeNode *root, int targetSum)
    {
         vector<int> path;
     return  solve(root,targetSum, path);
    //     if(root==NULL) return false;
    //     if(root->left==NULL&&root->right==NULL){
    //         return targetSum==root->val;
    //     }
    //   return  hasPathSum(root->left,targetSum-root->val)||
    //      hasPathSum(root->right,targetSum-root->val);

    }
   
};

int main(){
    TreeNode *root=new TreeNode(5);
    root->left=new TreeNode(4);
    root->right=new TreeNode(8);
    root->left->left=new TreeNode(11);
    root->left->left->left=new TreeNode(7);
    root->left->left->right=new TreeNode(2);
    root->right->left=new TreeNode(13);
    root->right->right=new TreeNode(4);
    root->right->right->right=new TreeNode(1);

    Solution s;
    cout<<s.hasPathSum(root,22)<<endl;
}