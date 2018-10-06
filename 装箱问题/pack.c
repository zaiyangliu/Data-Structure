#include <stdio.h>
int main(){
  int N;
  int i = 0;
  int Object[1002] = {0};
  int Box[1002] = {0};
  scanf("%d", &N);
  for(i = 0; i< N; i++){
    scanf("%d", &Object[i]);
  }
  for(i = 0; i < N; i++){
    for(int j = 1; j <= N; j++){
      if(Box[j] + Object[i] <= 100){
	Box[j] += Object[i];
	printf("%d %d\n", Object[i], j);
	break;
      }
      else{
	continue;
      }
    }
  }
  int count = 0;
  for(i = 1; i <= N; i++){
    if(Box[i] != 0)
      count++;
  }
  printf("%d\n", count);
  return 0;
}
    
  
    
