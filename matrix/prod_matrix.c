#include <stdio.h>
void prod_matrix(int a[300][300], int b[300][300], int m, int s, int n){
  int i, j, k;
  int c[300][300];
  for(i = 0; i < m; i++){
    for(j = 0; j < n; j++){
      for(int k = 0; k < s; k++){
	c[i][j] += a[i][k] * b[k][j];
      }
    }
  }
  //print_matrix(c[300][300],  m,  n); 用函数的形式出错，不知道为啥？
  for( i = 0; i < m; i++){
    for( j = 0; j < n; j++){
      printf("%d", c[i][j]);
    }
    printf("\n");
  }
}
//void print_matrix(int matrix[300][300], int m, int n){
//int i, j;
//for(i = 0; i < m; i++){
//  for(j = 0; j < n; j++){
//    printf("%d", matrix[i][j]);
//  }
//  printf("\n");
//}
//}

int main(){
  int m, s, n;
  scanf("%d%d%d", &m, &s, &n);
  int a[300][300] = {0};
  int b[300][300] = {0};
  int c[300][300] = {0};
  for(int i = 0; i < m; i++){
    for(int j = 0; j < s; j++){
      scanf("%d", &a[i][j]);
    }
  }
  for(int i = 0; i < s; i++){
    for(int j =0; j < n; j++){
      scanf("%d", &b[i][j]);
    }
  }
  prod_matrix(a, b, m, s, n);
  return 0;
}
