#include <stdio.h>
#include <string.h>
void left_shift_once(int list[], int n);
int main(){
  int a[100];
  int len;
  int shift;
  scanf("%d%d", &len, &shift);
  for(int i = 0; i < len; i++){
    scanf("%d", &a[i]);
  }
  for(int i = 0; i < shift; i++){
    left_shift_once(a, len);
  }
  for(int i = 0; i < len-1; i++){
    printf("%d ", a[i]);
  }
  printf("%d", a[len-1]);
  return 0;
}

void left_shift_once(int list[], int len){
  int temp;
  temp = list[0];
  for(int i = 0; i < len; i++){
    list[i] = list[i+1];
  }
  list[len-1] = temp;
}

