#include <iostream>
using namespace std;
typedef struct student* link;
struct student{
  long num;
  float score;
  link next;
};

int main(){
  struct student a, b, c;
  struct student *head, *p;
  a.num = 12;
  a.score = 34;
  b.num = 123;
  b.score = 45;
  c.num = 1233;
  c.score = 89;
  head = &a;
  a.next = &b;
  b.next = &c;
  c.next = NULL;
  p = head;
  while(p != NULL){
    cout <<p->num<<" "<<p->score<<endl;
    p = p->next;
  }
  //getchar();
  return 0;
}
