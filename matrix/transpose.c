void transpose(int a[][MAX_SIZE]){
  int i, j, temp;
  for(i = 0; i < MAX_SIZE; i++){
    for(j = i + 1; j < MAX_SIZE; j++){  //主要理解为啥从i+1开始；
      SWAP(a[i][j], a[j][i], temp);
    }
  }
}
