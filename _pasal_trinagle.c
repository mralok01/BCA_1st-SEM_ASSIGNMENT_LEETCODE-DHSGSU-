
#include <stdlib.h>
int** generate(int numRows, int* returnSize, int** returnColumnSizes) {
    *returnSize = numRows;
   
    int** triangle = (int**)malloc(numRows * sizeof(int*));
    *returnColumnSizes = (int*)malloc(numRows * sizeof(int));
    
    for (int i = 0; i < numRows; i++) {
        int cols = i + 1;
        (*returnColumnSizes)[i] = cols;
        triangle[i] = (int*)malloc(cols * sizeof(int));
        
        // First and last elements of every row are always 1
        triangle[i][0] = 1;
        triangle[i][cols - 1] = 1;
        for (int j = 1; j < cols - 1; j++) {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }
    
    return triangle;
}