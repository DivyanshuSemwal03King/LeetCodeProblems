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
   
   
    void inOrder(TreeNode *root,vector<int>&result){
        if(root!=NULL){
            inOrder(root->left,result);
            result.push_back(root->val);
            inOrder(root->right,result);
        }
    }

    int kthSmallest(TreeNode *root, int k)
    {   
           vector<int> result;
           inOrder(root,result);

           return result[k-1];
        
    }
};

int main(){
    TreeNode *root=new TreeNode(5);
    root->left=new TreeNode(3);
    root->right=new TreeNode(6);
    root->left->left=new TreeNode(2);
    root->left->right=new TreeNode(4);
    root->left->left->left=new TreeNode(1);

    Solution s;
    cout<<s.kthSmallest(root,3)<<endl;
}