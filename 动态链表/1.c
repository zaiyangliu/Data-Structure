#include <stdio.h>
#include <stdlib.h>

typedef int ElemType;
typedef struct List* list_pointer;
typedef struct List list_node;

struct List{
  ElemType data;
  list_pointer link;
};

list_pointer setnull(list_pointer Head){
  list_pointer ptr;
  ptr = Head;
  while(ptr != NULL){
    ptr = ptr->link;
    free(Head);
    Head = ptr;
  }
  return Head;
}

list_pointer insert(list_pointer Head, ElemType x, int i){
  list_pointer new_node;
  list_pointer ptr = Head;
  int j = 1;
  new_node = (list_pointer)malloc(sizeof(list_node));
  new_node->data = x;
  if(i == 1){
    new_node->link = Head;
    Head = new_node;
  }
  else{
    while(j < i-1 && ptr->link != NULL){
      ptr = ptr->link;
      j++;
    }
    if(j == i-1){
      new_node->link = ptr->link;
      ptr->link = new_node;
    }
    else{
      printf("insert is Failure, i is not right!");
    }
  }
  return Head;
}

list_pointer creat(list_pointer Head){
  ElemType new_data;
  list_pointer new_node;
  Head = (list_pointer)malloc(sizeof(list_node));
  printf("please input number:\n");
  scanf("%d", &new_data);
  Head->data = new_data;
  Head->link = NULL;
  while(1){
    new_node = (list_pointer)malloc(sizeof(list_node));
    if(new_node == NULL){
      break;
    }
    printf("please input number: input '-1' means exit\n");
    scanf("%d", &new_data);
    if(new_data == -1)
      return Head;
    new_node->data= new_data;
    new_node->link = Head;
    Head = new_node;
  }
  return Head;
}

int lenth(list_pointer Head){
  int len = 0;
  list_pointer ptr;
  ptr = Head;
  while(ptr != NULL){
    len++;
    ptr = ptr->link;
  }
  return len;
}

ElemType get(list_pointer Head, int i){
  int j = 1;
  list_pointer ptr;
  ptr = Head;
  while(j < i && ptr != NULL){
    ptr = ptr->link;
    j++;
  }
  if(ptr != NULL)
    return ptr->data;
  else
    printf("data is error!\n");
  return -1;
}

int locate(list_pointer Head, ElemType x){
  int n = 1;
  list_pointer ptr;
  ptr = Head;
  while(ptr != NULL && ptr->data != x){
    ptr = ptr->link;
    n++;
  }
  if(ptr == NULL)
    return -1;
  else
    return n;
}

void display(list_pointer Head){
  list_pointer ptr;
  ptr = Head;
  if(ptr == NULL){
    printf("\nlist is empty\n");
  }
  else{
    while(ptr != NULL){
      printf("%d ", ptr->data);
      ptr = ptr->link;
    }
    printf("\n");
  }
}

list_pointer connect(list_pointer Head1, list_pointer Head2){
  list_pointer ptr;
  ptr = Head1;
  while(ptr->link != NULL){
    ptr = ptr->link;
  }
  ptr->link = Head2;
  return Head1;
}

list_pointer del(list_pointer Head, int i){
  int j = 1;
  list_pointer ptr, temp;
  ptr = Head;
  if(i == 1){
    ptr = ptr->link;
    free(Head);
    Head = ptr;
  }
  else{
    while(j < i-1 && ptr->link != NULL){
      ptr = ptr->link;
      j++;
    }
    if(ptr->link != NULL && j == i-1){
      temp = ptr->link;
      ptr->link = temp->link;
    }
    if(temp != NULL)
      free(temp);
  }
  return Head;
}



int compare(list_pointer Head1, list_pointer Head2){
  list_pointer ptr1, ptr2;
  ptr1 = Head1;
  ptr2 = Head2;
  while(1){
    if((ptr1->link == NULL) && (ptr2->link == NULL) )
      return 1;
    if(ptr1->data != ptr2->data)
      return 0;
    else{
      ptr1 = ptr1->link;
      ptr2 = ptr2->link;
    }
  }
}

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
