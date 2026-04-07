#include <stdio.h>
#include <stdbool.h> // true/false mantýðýný kullanabilmek için ekliyoruz

int main() {
    // 1. Adým: Diziyi tanýmla
    int dizi[] = {1, 2, 5, 0, 8, 10};

    // Aradýðýmýz sayýyý belirliyoruz (Tahtada 8 iþaretlenmiþ)
    int aranan = 9;

    // Dizinin kaç elemanlý olduðunu buluyoruz
    int boyut = sizeof(dizi) / sizeof(dizi[0]);

    // Baþlangýçta sayýyý bulamadýðýmýzý varsayýyoruz
    bool bulundu = false;

    // 2. Adým: Dizinin içinde dönerek sayýyý ara
    for (int i = 0; i < boyut; i++) {
        if (dizi[i] == aranan) {
            bulundu = true; // Sayýyý bulursak durumu "true" yapýyoruz
            break; // Bulduðumuz için aramaya devam etmeye gerek yok, döngüden çýkýyoruz
        }
    }

    // 3. Adým: Sonucu ekrana yazdýr (varsa true, yoksa false)
    if (bulundu) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
