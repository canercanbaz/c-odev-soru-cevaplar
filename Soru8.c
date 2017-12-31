#include <stdio.h>
#include <stdlib.h>

int main() {
    int dizi[20], tekSayi = 0, tekSayiToplam = 0;

    for (int i = 0; i < 20; i++)
    {
        printf("%d. sayiyi giriniz:", i+1);
        scanf("%d", &dizi[i]);

        if (dizi[i] % 2 != 0)
        {
           tekSayiToplam = tekSayiToplam + dizi[i];
           tekSayi++;
        }
    }

    printf("Tek sayilarin sayisi: %d \n", tekSayi);
    printf("Tek sayilarin toplami: %d", tekSayiToplam);

    return 0;
}