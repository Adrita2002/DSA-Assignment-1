#include <stdio.h>

int main() {
  int n, m , i;
  printf("Please enter n and m:");
  scanf("%d %d", &n, &m);
  
  int array1D[n*m];
  int array2D[n][m];

  printf("Please enter the elements of the array1D :");
  for(int i = 0; i<n*m; i++)
    scanf("%d", &array1D[i]);
    

  for(int i = 0; i<n; i++)
    for(int j = 0; j<m; j++)
      array2D[i][j] = array1D[(i*m) + j];
    
  printf("array2D is given by:\n ");
  for(int i = 0; i<n; i++) {
    for(int j = 0; j<m; j++)
      printf("%d ", array2D[i][j]);
    printf("\n");
  }
  return 0;
}