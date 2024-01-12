bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target) {
  int left = 0;
  int right = matrixSize * *matrixColSize - 1;   

  while(left <= right){
    int mid = (left + right) / 2;
    int mid_val = matrix[mid / *matrixColSize][mid % *matrixColSize];

    if(mid_val == target){
      return 1;
    }else if(mid_val < target){
      left = mid + 1;
    }else{
      right = mid - 1;
    }
  }
  return 0;
}