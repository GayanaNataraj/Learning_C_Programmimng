#include <stdio.h>
#define N 3
int *spiralPrint(int **matrix)
{
    int reow = N;
    int cols = N;
    int top = 0;
    int bottom = N - 1;
    int left = 0;
    int right = N - 1;
    static int result[N * N];
    int k = 0;
    while (top <= bottom && left <= right)
    {
        //Left to right
        for (int i = left; i <= right; i++)
        {
            result[k++] = matrix[top][i];
        }
        top++;
        //Top to bottom
        for (int i = top; i <= bottom; i++)
        {
            result[k++] = matrix[i][right];
        }
        right--;
        //Right to left
        if (top <= bottom)
        {
            for (int i = right; i >= left; i--)
            {
                result[k++] = matrix[bottom][i];
            }
            bottom--;
        }
        //Bottom to top
        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                result[k++] = matrix[i][left];
            }
            left++;
        }
    }
    return result;
}
    int main()
    {
        int arr[N][N] = {
            {1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int *matrix[N];
        for (int i = 0; i < N; i++)
        {
            matrix[i] = arr[i];
        }
        int *result = spiralPrint(matrix);
        for (int i = 0; i < N * N; i++)
        {
            printf("%d ", result[i]);
        }
        printf("\n");
        return 0;
    }