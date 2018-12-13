#include "SeqStack.h"
#include <cstdio>
#include <iostream>
#define initSize 100
#define increment 20
typedef struct{
  ElemType *elem;
  int maxSize, top;
}SeqStack;
using namespace std;
void InitStack(SeqStack &s){
  s.elem = new ElemType[initSize];
  if(s.elem == NULL){
    cerr<<"wrong" << endl;
    exit(1);
  }
  s.maxSize = initSize;
  s.top = -1;
};

void Push(SeqStack &s, ElemType x){
  if(StackFull(s)){
      overflowProcess(s);
  }
  s.elem[++s.top] = x;
};
void overflowProcess(SeqStack &s){
  ElemType *newArray = new ElemType[s.maxSize + increament];
  if(newArray == NULL){
    cerr << "wrong" << endl;
    exit(1);
  }
  for(int i= 0; i <= s.top; i++){
    newArray[i] = s.elem[i];
  }
  s.maxSize = s.maxSize + increament;
  delete[] s.elem;
  s.elem = newArray;
};

bool Pop(SeqStack &s, ElemType &x){
  if(s.top == -1){
    return false;
  }
  x = s.elem[s.top--];
  return true;
};

bool GetTop(SeqStack &s, ElemType &x){
  if(s.top == -1){
    return false;
  }
  x = s.elem[s.top];
  return true;
};

bool StackEmpty(SeqStack &s){
  return s.top == -1;
};

bool StackFull(SeqStack &s){
  return s.top == s.maxSize;
};

int SeqStack(SeqStack &s){
  return top + 1;
};

    
