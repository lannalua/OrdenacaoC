#include <stdio.h>
#include <stdlib.h>

// void copy(int L[], int inicio, int fim,int A[],int k)
// {
//     for (int i = inicio; i <= fim; i++)
//     {
//         A[k++] = L[i];
//     }

// }

void merge(int B[], int C[], int A[], int p, int q)
{
    int j = 0;
    int i = 0;
    int k = 0;
    while (i < p && j < q)
    {
        if (B[i] <= C[j])
        {
            A[k] = B[i];
            i++;
        }
        else
        {
            A[k] = C[j];
            j++;
        }
        k++;
    }
    // if (i==p){
    //     copy(C,j,q-1,A,k);
    // }
    // else{copy(B,i,p-1,A,k);}

    if (i == p)
    {
        for (int a = j; a < q; a++)
        {
            A[k] = C[a];
            k++;
        }
    }
    else
    {
        for (int a = i; a < p; a++)
        {
            A[k] = B[a];
            k++;
        }
    }
}

void mergeSort(int A[],int n){
    if (n>1){
        int aux = (n/2);
        int *B = (int *)malloc(aux * sizeof(int));
        int *C = (int *)malloc((n-aux) * sizeof(int));

        for(int i = 0; i<aux;i++){
            B[i] = A[i];
        }
        for(int i = aux; i<n;i++){
            C[i-aux] = A[i];
        }
        //copy(A,0,aux-1,B,0);
        //copy(A,aux,n-1,C,0);
        mergeSort(B,aux);
        mergeSort(C,n-aux);
        merge(B,C,A,aux,n-aux);
        free(B);
        free(C);
    }
}
int main() {
    int A[] = {8,3,2,9,7,1,5,4};
    int n = 8;

    printf("Array before sorting: ");
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    mergeSort(A, n);

    printf("\nArray after sorting: ");
    for (int i = 0; i < n; i++)
        printf("%d ", A[i]);

    return 0;
}
