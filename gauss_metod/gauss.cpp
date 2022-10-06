#include <stdio.h>

const int n=2;

int main()
{
    int A[n][n],b[n];
    int i, j, k;
    double mu;
    printf("vvedite matricu: \n");
    for (i=0;i<n;i++)
        for (j=0;j<n;j++)
            scanf ("%d", &A[i][j]);

    for (k = 0; k < n; k++)
    {
        for (i = k + 1; i < n; i++)
        {
            mu=(double) A[i][k] / A[k][k];
            for (j = 0; j < n; j++)
                A[i][j] -= A[k][j] * mu;
            //  b[i]-=b[k]*mu;
        }
    }
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
            printf ("%d\t", A[i][j]);
        printf ("\n");
    }
    return 0;
}
