/*
 * Program  : Cetak Tabel Perkalian (Tantangan 1)
 * Nama     : Rendi Muhammad Padillah
 * NIM      : 12046126020
 * Deskripsi: Nested for loop untuk tabel perkalian N x N
 */
#include <stdio.h>
 
int main() {
    int N;
 
    printf("=== CETAK TABEL PERKALIAN ===\n");
    printf("Masukkan N (1-10): ");
    scanf("%d", &N);
 
    // Validasi rentang input
    if (N < 1 || N > 10) {
        printf("\nERROR: N harus di antara 1 - 10!\n");
        return 1;
    }
 
    printf("\n");
    // Loop luar: baris, loop dalam: kolom
    for (int baris = 1; baris <= N; baris++) {
        for (int kolom = 1; kolom <= N; kolom++) {
            printf("%4d", baris * kolom);
        }
        printf("\n");
    }
 
    return 0;
}
