/** EL2208 Praktikum Pemecahan Masalah dengan C 2020/2021
*   Modul               : 3
*   Soal                : 2
*   Hari dan Tanggal    : 
*   Nama (NIM)          : 
*   Asisten (NIM)       : 
*   Nama File           : soal-02.c
*   Deskripsi           : Deskripsi file ini.
*/

#include <stdio.h>

void getN(int *N);                             // Mendapatkan dimensi barisan
void getBarisan(int N, int barisan[50][50]);   // Mendapatkan barisan dari input
void sortColumn(int N, int barisan[50][50]);   // Sortir kolom
void sortRow(int N, int barisan[50][50]);      // Sortir baris
void swap(int *x, int *y);                     // Menukar x dan y
void printBarisan(int N, int barisan[50][50]); // Print barisan

int main()
{
    int N;
    int barisan[50][50];

    getN(&N);
    getBarisan(N, barisan);
    sortColumn(N, barisan);
    sortRow(N, barisan);
    printBarisan(N, barisan);
}

void getN(int *N)
{
}

void getBarisan(int N, int barisan[50][50])
{
}

void swap(int *x, int *y)
{
}

void sortColumn(int N, int barisan[50][50])
{
}

void sortRow(int N, int barisan[50][50])
{
}

void printBarisan(int N, int barisan[50][50])
{
}
