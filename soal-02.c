#include <stdio.h>

void getN(int *N);                             // Mendapatkan dimensi barisan
void getBarisan(int N, int barisan[50][50]);   // Mendapatkan barisan dari input
void sortColumn(int N, int barisan[50][50]);   // Sortir kolom
void sortRow(int N, int barisan[50][50]);      // Sortir N
void swap(int *x, int *y);                     // Menukar x dan y
void printBarisan(int N, int barisan[50][50]); // Print barisan

int main()
{
    int N;
    int barisan[50][50];

    getN(&N);
    getBarisan(N, barisan);
    sortColumn(N, barisan); // Kalo kondisi udah memenuhi tapi salah dari testcase, mungkin karena
    sortRow(N, barisan);    // kebalik dari sortColumn sama sortRownya, jadi kalo bisa suruh dituker deh
    printBarisan(N, barisan);
}

void getN(int *N)
{
    printf("Masukkan nilai N: ");
    scanf("%d", N);
};

void getBarisan(int N, int barisan[50][50])
{
    printf("Masukkan barisan: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            scanf("%d", &barisan[i][j]);
        }
    }
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

void sortColumn(int N, int barisan[50][50])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            for (int k = 0; k < N - j - 1; k++)
            {
                if (barisan[k][i] < barisan[k + 1][i])
                {
                    swap(&barisan[k][i], &barisan[k + 1][i]);
                }
            }
        }
    }
}

void sortRow(int N, int barisan[50][50])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - 1; j++)
        {
            for (int k = 0; k < N - j - 1; k++)
            {
                if (barisan[i][k] < barisan[i][k + 1])
                {
                    swap(&barisan[i][k], &barisan[i][k + 1]);
                }
            }
        }
    }
}

void printBarisan(int N, int barisan[50][50])
{
    printf("\nHasil: \n");
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (j != N - 1)
                printf("%d ", barisan[i][j]);
            else
                printf("%d", barisan[i][j]);
        }
        printf("\n");
    }
}
