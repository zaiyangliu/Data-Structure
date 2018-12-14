
typedef int ElemType;
typedef struct{
  ElemType *elem;
  int maxSize, top;
}SeqStack;
void InitStack(SeqStack &s);
void Push(SeqStack &s, ElemType x);
bool Pop(SeqStack &s, ElemType &x);
bool GetTop(SeqStack &s, ElemType &x);
bool StackFull(SeqStack &s);
bool StackEmpty(SeqStack &s);
int StackSize(SeqStack &s);
void overflowProcess(SeqStack &s);
