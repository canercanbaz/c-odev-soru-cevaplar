#include <stdio.h>
#include <stdlib.h>

int main() {
    double fiyat = 0, komisyon = 0, toplamKomisyon = 0;

    for (int i = 0; i < 5; i++)
    {
        printf("%d. urunun fiyatini giriniz:", i+1);
        scanf("%lf", &fiyat);

        if (fiyat > 50.0)
            komisyon = fiyat * 0.02;
        else
            komisyon = fiyat * 0.03;

        printf("Urunun komisyonu: %lf TL\n", komisyon);

        toplamKomisyon = toplamKomisyon + komisyon;
    }

    printf("Alinan toplam komisyon: %lf TL", toplamKomisyon);

    return 0;
}
