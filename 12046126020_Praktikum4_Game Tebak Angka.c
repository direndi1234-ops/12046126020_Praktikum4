/*
 * Program   : Game Tebak Angka
 * Nma       : Rendi Muhammad Padillah
 * NIM       : 12046126020
 * Deskripsi : Nested for loop untuk pola segitiga bintang
 */
 
 #include <stdio.h>
int main() {
    const int ANGKA_RAHASIA = 73;
    int tebak = 0;
    int jumlah_coba = 0;

    printf("=== GAME TEBAK ANGKA ===\n");
    printf("Saya punya angka rahasia antara 1-100.\n");
    printf("Coba tebak!\n\n");

    while (tebak != ANGKA_RAHASIA) {
        printf("Masukan tebakan Anda: ");
        scanf("%d", &tebak);
        jumlah_coba++;

        if (tebak < ANGKA_RAHASIA) {
            printf("Tebak terlalu KECIL! Coba lagi..\n\n");
        } else if (tebak > ANGKA_RAHASIA) {
            printf("Tebak terlalu BESAR! Coba lagi.\n\n");
        } else {
            printf("\n*** SELAMAT! Anda benar! ***\n");
            printf("Angka rahasianya adalah: %d\n", ANGKA_RAHASIA);
        }
    }

    printf("\nAnda menebak sebanyak %d kali.\n", jumlah_coba);
    printf("Terima Kasih sudah bermain!\n");

    return 0;
}
  