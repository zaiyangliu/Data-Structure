#include <iostream>
#include <cstdio>
using namespace std;
  
struct node{
    char data;//data是char类型 
    node* lchild;
    node* rchild;
};
void PostOrder(node* root){//后根遍历,传入参数为根节点 
    if(root==NULL){
        return;
    }
    PostOrder(root->lchild);
    PostOrder(root->rchild);
    printf("%c",root->data);
}
  
node* Create(string preorder,string inorder){
    node* root=NULL;
    if(preorder.size()>0){
        root=new node;
        root->data=preorder[0];//根节点
        root->lchild=NULL;
        root->rchild=NULL;
        string pre1,pre2;
        string in1,in2;
        int index=inorder.find(preorder[0]);//中序中找到根
        pre1=preorder.substr(1,index);
        pre2=preorder.substr(index+1,preorder.size()-index-1); 
        in1=inorder.substr(0,index);
        in2=inorder.substr(index+1,inorder.size()-index-1);
         
        root->lchild=Create(pre1,in1);
        root->rchild=Create(pre2,in2);
    }
    return root;
} 
  
int main(int argc, char** argv) {
    string s1,s2;
    while(cin>>s1>>s2){
        node* t=Create(s1,s2);
        PostOrder(t);
        cout<<endl; 
    }
    return 0;
}
/**************************************************************
    Problem: 1910
    User: zaiyangliu
    Language: C++
    Result: 正确
    Time:0 ms
    Memory:2020 kb
****************************************************************/
