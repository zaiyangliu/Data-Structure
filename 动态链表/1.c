#include <stdio.h>
#include <stdlib.h>
#include "list.h"
int main(){

  int num;

  list_pointer head1, head2;

  head1 = creat(head1);

  printf("\nHead1 is\n");

  display(head1);



  head2 = creat(head2);

  printf("\nHead2 is\n");

  display(head2);



  num = compare(head1, head2);

  printf("\n num is %d\n", num);



  connect(head1, head2);

  printf("\nHead1 + Head2 is \n");

  display(head1);



  num = lenth(head1);

  printf("\nlenth is %d\n", num);



  num = get(head1, 3);

  printf("\n get is %d\n", num);



  num = locate(head1, 12);

  printf("\n locate 12 is %d\n", num);



  head1 = insert(head1, 888, 5);

  display(head1);



  head1 = del(head1, 5);

  display(head1);



  head1 = setnull(head1);

  display(head1);

}
