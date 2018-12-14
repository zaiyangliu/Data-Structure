#include<iostream>
#include "SeqStack.h"
using namespace std;

int main(){
  SeqStack s;
  InitStack(s);
  Push(s,2);
  Push(s,3);
  int x = 0;
  GetTop(s, x);
  cout << x;
  return 0;
}
