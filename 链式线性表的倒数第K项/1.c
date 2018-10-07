#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Node{
  int data;
  struct Node *Next;
};
int main(){
  int k;
  int num;
  int count = 0;
  scanf("%d", &k);
  struct Node *Head = (struct Node *)malloc(sizeof(struct Node));//先给头指针分配空间
  struct Node *Last;
  struct Node *Ptrk = Head;//指在倒数第k个元素的指针先赋值在头指针处
  Head -> Next = NULL;//头指针是一个空指针
  Last = Head;//最后一个元素的指针初始状态在头指针处
  while(scanf("%d", &num) != EOF && num >= 0){
    struct Node *P = (struct Node *)malloc(sizeof(struct Node));//逐一分配空间，并且连接在已有数组的后边
    P -> data = num;
    P -> Next = NULL;
    Last -> Next = P;//Last指针始终指向最后一个元素
    Last = P;
    count++;//每插入一个元素，计数加一
    if(count >= k){
      
      //      Ptrk = Head;
      Ptrk = Ptrk -> Next;//当插入的元素等于k时，Ptrk也随之移动，这样就能够保证Ptrk一直是指向倒数第K个元素
     
    }
  }
  if(count >= k)
    printf("%d", Ptrk -> data);
  else
    printf("NULL");
}
    
