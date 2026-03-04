#include <stdio.h>

int main() {
    
    int sayi1,sayi2;
    
    printf("Birinci tam sayiyi girin\n");
    scanf("%d",&sayi1);
    printf("Ikinci tam sayiyi girin\n");
    scanf("%d",&sayi2);
    
    int toplam = sayi1 + sayi2;
    
    printf("Toplam %d\n",toplam);
    
    return 0;
}
