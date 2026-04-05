#include <stdio.h>

int main() {
    char islem;
    double sayi1, sayi2;

    // Kullanýcýdan önce iþlemi alýyoruz
    printf("Lutfen bir islem seciniz (+, -, *, /): ");
    scanf("%c", &islem);

    // Sonra hesaplanacak iki sayýyý alýyoruz
    printf("Iki sayi giriniz: ");
    scanf("%lf %lf", &sayi1, &sayi2);

    // Seçilen iþleme göre switch-case yapýsý
    switch(islem) {
        case '+':
            printf("%.2lf + %.2lf = %.2lf\n", sayi1, sayi2, sayi1 + sayi2);
            break;
        case '-':
            printf("%.2lf - %.2lf = %.2lf\n", sayi1, sayi2, sayi1 - sayi2);
            break;
        case '*':
            printf("%.2lf * %.2lf = %.2lf\n", sayi1, sayi2, sayi1 * sayi2);
            break;
        case '/':
            // Bölme iþleminde sýfýra bölünme hatasýný önlemek için ufak bir kontrol
            if (sayi2 != 0) {
                printf("%.2lf / %.2lf = %.2lf\n", sayi1, sayi2, sayi1 / sayi2);
            } else {
                printf("Hata! Bir sayi sifira bolunemez.\n");
            }
            break;
        default:
            // Geçersiz bir iþlem girilirse çalýþýr
            printf("Hatali bir islem operatoru girdiniz!\n");
    }

    return 0;
}
