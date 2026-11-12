/*
 * Program  : Sistem Login dengan Batas Percobaan (Tantangan 2)
 * Nama     : Rendi Muhammad Padillah
 * NIM      : 12046126020
 * Deskripsi: While loop, counter percobaan, dan break untuk login
 */
#include <stdio.h>
#include <string.h>
 
int main() {
    const int MAKS_PERCOBAAN = 3;
    char username[50];
    int password;
    int percobaan = 0;
    int berhasil = 0;
 
    printf("=== SISTEM LOGIN ===\n");
 
    while (percobaan < MAKS_PERCOBAAN) {
        printf("\nPercobaan ke-%d dari %d\n", percobaan + 1, MAKS_PERCOBAAN);
        printf("Username : ");
        scanf("%49s", username);
        printf("Password : ");
        scanf("%d", &password);
        percobaan++;
 
        if (strcmp(username, "admin") == 0 && password == 1234) {
            berhasil = 1;
            break;  
        }
        printf("Username atau password salah!\n");
    }
 
    if (berhasil) {
        printf("\nLogin Berhasil\n");
    } else {
        printf("\nAkun terkunci! Hubungi admin.\n");
    }
 
    return 0;
}
