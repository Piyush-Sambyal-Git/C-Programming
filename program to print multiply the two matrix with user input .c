#include <stdio.h>
int main() 
{
    int rows, columns, i, j;
    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    int matrix1[rows][columns], matrix2[rows][columns], sum[rows][columns];

    printf("\nEnter elements of matrix 1:\n");
    for (i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
    scanf("%d", &matrix1[i][j]);
        }
} 
    printf("\nEnter elements of matrix 2:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) 
    {
        scanf("%d", &matrix2[i][j]);
        
    }
  }
    for (i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) {
    sum[i][j] = matrix1[i][j] + matrix2[i][j];
        }
  }

    printf("\nSum of the matrices:\n");
    for (i = 0; i < rows; i++) {
    for (j = 0; j < columns; j++) 
    {
    printf("%d ", sum[i][j]);
    }
    printf("\n");
  }

    return 0;
}