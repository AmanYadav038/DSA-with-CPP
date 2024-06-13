#include<bits/stdc++.h>
using namespace std;

class TreeNode{
    public :
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode (int val1, TreeNode *left1,TreeNode *right1){
        left=left1;
        right=right1;
        val=val1;
    }
};
void creationTree(TreeNode *root,int data){
    TreeNode *temp=root;
    TreeNode *newNode=new TreeNode(data,nullptr,nullptr);
    if (root==nullptr){
        root=newNode;
        newNode->left=nullptr;
        newNode->right=nullptr;
    }
    else{
        int n;
        cout<<"enter 1 for left insertion and 2 for right insertion:"<<endl;
        cin>>n;
        if (n==1){
            cout>>"enter data":
            cin>>data;
            creationTree(temp->left,data);
        }
        else{
            cout>>"enter data":
            cin>>data;
            creationTree(temp->right,data);
        }
    }

}
void inorderTraversal(TreeNode *root){
    if (root==nullptr){
        return ;
    }
    else{
        inorderTraversal(root->left);
        cout<<root->val<<endl;
        inorderTraversal(root->right);
    }
}




int main(){
    TreeNode *y=new TreeNode();
    creationTree(y,12);
    inorderTraversal(y);
    
}