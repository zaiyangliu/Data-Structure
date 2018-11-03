#include <iostream>
#include <cstdlib>

using namespace std;
void bubblesort(int A[], int n);

int main(){
  int A[5] = {1, 23, 32, 12,3232};
  bubblesort(A, 5);
  for(int i = 0; i < 5; i++){
    cout << A[i] << endl;
  }
  return 0;
}

void bubblesort(int A[], int n){
  bool sorted = false;
  while(!sorted){
    sorted = true;
    for(int i = 1; i < n; i++){
      if(A[i-1] > A[i]){
	swap(A[i-1], A[i]);
	sorted = false;
      }
    }
    n--;
  }
}
