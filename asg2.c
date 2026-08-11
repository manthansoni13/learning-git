#include <stdio.h>

void add(int A[3][3], int B[3][3], int C[3][3])
{
    int i, j;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            C[i][j] = A[i][j] + B[i][j];
}

void sub(int A[3][3], int B[3][3], int C[3][3])
{
    int i, j;
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            C[i][j] = A[i][j] - B[i][j];
}

void mul(int A[3][3], int B[3][3], int C[3][3])
{
    int i, j, k;

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            C[i][j] = 0;
            for(k=0; k<3; k++)
                C[i][j] += A[i][k] * B[k][j];
        }
    }
}

void display(int C[3][3])
{
    int i, j;
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
}

int main()
{
    int A[3][3], B[3][3], C[3][3];
    int i, j;

    printf("Enter Matrix A:\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&A[i][j]);

    printf("Enter Matrix B:\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d",&B[i][j]);

    add(A,B,C);
    printf("\nAddition:\n");
    display(C);

    sub(A,B,C);
    printf("\nSubtraction:\n");
    display(C);

    mul(A,B,C);
    printf("\nMultiplication:\n");
    display(C);

    return 0;
}