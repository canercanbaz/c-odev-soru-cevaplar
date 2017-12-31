#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int dizi[20];
    srand(time(NULL));
    int diziToplami = 0, ortalamadanBuyuk = 0, ortalamadanKucuk = 0;
    double diziOrtalamasi = 0;

    for (int i = 0; i < 20; i++)
    {
       dizi[i] = 1 + rand() % 20;;
       diziToplami = diziToplami + dizi[i];
    }

    diziOrtalamasi = diziToplami / 20;

    for (int diziElemani = 0; diziElemani < 20; diziElemani++)
    {
       if (dizi[diziElemani] > diziOrtalamasi)
        ortalamadanBuyuk = ortalamadanBuyuk + 1;
       else
       ortalamadanKucuk = ortalamadanKucuk + 1;
    }

    printf("Ortalama: %lf \nOrtalamadan Buyuk Eleman Sayisi: %d, Ortalamadan Kucuk Eleman Sayisi: %d", diziOrtalamasi, ortalamadanBuyuk, ortalamadanKucuk);

    return 0;
}