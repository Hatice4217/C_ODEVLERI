#include <stdio.h>

int main() {
    int a = 5, b = 10, gecici;
    
    
    gecici = a;
    a = b;
    b = gecici;
    printf("a = %d, b = %d\n", a, b);
    return 0;
}
