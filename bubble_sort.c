#include <stdio.h>

void BubbleSort(int A[], int n)
{
    for (int i = 0; i <= n - 2; i++)
    {
        for (int j = 0; j <= n - 2 - i; j++)
        {
            if (A[j + 1] < A[j])
            {
                int aux;
                aux = A[j];
                A[j] = A[j+1];
                A[j+1] = aux;
            }
        }
    }
}

int main()
{
    int A[] = {2,4,1,3,5};
    BubbleSort(A, 5);
    for (int i = 0; i < 5; i++)
        printf("%d ", A[i]);
}