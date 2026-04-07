#include <stdio.h>
#include <stdbool.h> // true/false mantığını kullanabilmek için ekliyoruz

int main() {
    // 1. Adım: Diziyi tanımla
    int dizi[] = {1, 2, 5, 0, 8, 10};

    // Aradığımız sayıyı belirliyoruz 
    int aranan = 9;

   
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

   
    bool bulundu = false;

    // 2. Adım: Dizinin içinde dönerek sayıyı ara
    for (int i = 0; i < boyut; i++) {
        if (dizi[i] == aranan) {
            bulundu = true; // Sayıyı bulursak durumu "true" yapıyoruz
            break; // Bulduğumuz için aramaya devam etmeye gerek yok, döngüden çıkıyoruz
        }
    }

    // 3. Adım: Sonucu ekrana yazdır (varsa true, yoksa false)
    if (bulundu) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
