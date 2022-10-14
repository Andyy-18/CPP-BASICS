#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        left=NULL;
        right=NULL;
    }

};
node* bulidtree(node* root){
    cout<<"enter the data for the node expt 0"<<endl;
    int data;
    cin>>data;
    if(!data){return NULL;}
        root=new node(data);
    cout<<"for left part"<<endl;
    root->left=bulidtree(root->left);
    cout<<"for right part"<<endl;
    root->right=bulidtree(root->right);
    return root;
}
int main(){
node* root=NULL;
root=bulidtree(root);
}
