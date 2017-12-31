#include <stdio.h>
#include <stdlib.h>

int main() {

    double odenecekTutar = 0;
    int kalinanSure = 0, aracTipi = 0;

    printf("Arac Tipleri\nTaksi: 1, Minibus: 2, Ticari: 3\n");

    printf("Lutfen Arac Tipini Giriniz : ");
    scanf("%d", &aracTipi);

    printf("Kalinan Sureyi Giriniz: ");
    scanf("%d", &kalinanSure);

    if (kalinanSure > 1)
    {
        for (int i = 1; i <= kalinanSure; i++)
        {
            if (i == 1) {
                if (aracTipi == 1)
                    odenecekTutar = i * 5;
                else if (aracTipi == 2)
                    odenecekTutar = i * 6;
                else if (aracTipi == 3)
                    odenecekTutar = i * 6.5;
            }
            else {
                kalinanSure = kalinanSure - 1;
                if (aracTipi == 1)
                    odenecekTutar = odenecekTutar + kalinanSure * 5 * 1.20;
                else if (aracTipi == 2)
                    odenecekTutar = odenecekTutar + kalinanSure * 6 * 1.215;
                else if (aracTipi == 3)
                    odenecekTutar = odenecekTutar + kalinanSure * 6.5 * 1.25;
            }
        }
    }
    else {
        if (aracTipi == 1)
            odenecekTutar = kalinanSure * 5;
        else if (aracTipi == 2)
            odenecekTutar = kalinanSure * 6;
        else if (aracTipi == 3)
            odenecekTutar = kalinanSure * 6.5;
    }
    printf("Odenecek Tutar : %lf TL", odenecekTutar);
    return 0;
}
