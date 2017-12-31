#include <stdio.h>
#include <stdlib.h>

int main() {
    int toplam = 0, sayi = 0;
    do{
        printf("Sayi giriniz:");
        scanf("%d", &sayi);
        toplam = toplam + sayi;
    }while (toplam < 21);

    printf("Sayilarin toplami 21' esit veya 21'den buyuk!");

    return 0;
}
