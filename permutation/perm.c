#include <stdio.h>
#include <string.h>
#define SWAP(x, y, temp) ( (temp) = (x), (x) = (y), (y) = (temp) )
void perm(char *list, int i, int n);
int sum = 0;
int main(){
  char s[1005];
  while(scanf("%s", s) != EOF){
    getchar();
    int len = strlen(s);
    perm(s, 0, len-1);
    printf("%d", sum);
    sum = 0;
  }
  return 0;
}

void perm(char *list, int i, int n){
  int j, temp;
  if(i == n){
    for(j = 0; j <= n; j++){
      printf("%c", list[j]);
    }
    sum++;
    printf("\n");
  }
  else{
    for(j = i; j <= n; j++){
      SWAP(list[i], list[j], temp);
      perm(list, i+1, n);
      SWAP(list[i], list[j], temp);
    }
  }
}
