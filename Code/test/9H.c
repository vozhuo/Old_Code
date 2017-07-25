#include<stdio.h>
#define MAX_SIZE 110
int i, j, k;
int get_matrix(int ma[110][110], int m, int n)
{
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &ma[i][j]);
}
int put_matrix(int ma[110][110], int m, int n)
{
    for(i = 0; i < m; i++)
    {
        for(j = 0; j < n; j++)
            if(j == 0) printf("%d", ma[i][j]);
                  else  printf(" %d", ma[i][j]);
        printf("\n");
    }

}
int mul_matrix(int pr[110][110], int m1[110][110], int m2[110][110], int m, int n, int q)
{
    for(j = 0; j < m; j++)
        for(k = 0; k < q; k++)
            for(i = 0; i < n; i++)
                pr[j][k] += m1[j][i] * m2[i][k];
}
int main()
{
    int m, n, q;
    int product[MAX_SIZE][MAX_SIZE];
    int matrix1[MAX_SIZE][MAX_SIZE];
    int matrix2[MAX_SIZE][MAX_SIZE];

    scanf("%d%d%d", &m, &n, &q);
    get_matrix(matrix1, m, n);
    get_matrix(matrix2, n, q);
    mul_matrix(product, matrix1, matrix2, m, n, q);
    put_matrix(product, m, q);

    return 0;
}
