#include <stdio.h>

int main() {
    int i, j;

    // Dýþ döngü: 5 satýr oluþturmak için (i = satýr numarasý)
    for (i = 1; i <= 5; i++) {

        // Ýç döngü: Bulunulan satýr sayýsý kadar yýldýz basmak için
        for (j = 1; j <= i; j++) {
            printf("* ");
        }

        // Ýç döngü bitip yýldýzlar basýldýktan sonra bir alt satýra geç
        printf("\n");
    }

    return 0;
}
