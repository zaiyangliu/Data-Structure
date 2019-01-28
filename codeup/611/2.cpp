#include <iostream>
#include<vector>
#include<cstring>
#include<cstdio>

using namespace std;
const int maxn = 100;
struct node{
    char data;
    node* lchild;
    node* rchild;
};
char pre[maxn], in[maxn];
node* creat(int preL, int preR, int inL, int inR){
    if(preL > preR)
        return NULL;
    node* root = new node;
    root->data = pre[preL];
    int k;
    for(k = inL; k <= inR; k++){
        if(in[k] == pre[preL])
        break;
    }
    int numLeft = k - inL;
    root->lchild = creat(preL + 1, preL + numLeft, inL, k - 1);
    root->rchild = creat(preL + numLeft + 1, preR, k + 1, inR);
    return root;
}
void postorder(node* root){
    if(root == NULL)
        return;
    postorder(root->lchild);
    postorder(root->rchild);
    cout << root->data;
}
int main(int argc, char** argv)
{
    string s1, s2;
    while(cin>>s1>>s2){
        int len1 = s1.size();
        int len2 = s2.size();
        for(int i = 0; i < len1; i++){
            pre[i] = s1[i];
        }
        for(int i = 0; i < len2; i++){
            in[i] = s2[i];
        }
        node* root = creat(0, len1 - 1, 0, len2 - 1);
        postorder(root);
        cout << endl;

    }
    return 0;
}
