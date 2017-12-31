#include <stdio.h>
#include <stdlib.h>

int main() {
    int toplam=0, binaToplam=0, sayi = 0;
    int bina[3][2];
    for (int i =0; i < 3; i++)
    {
        for (int j= 0; j <2; j++)
        {
            printf("%d.kat %d dairede oturan kisi sayisini giriniz: ", i+1 ,j+1);
            scanf("%d", &bina[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j <2; j++) {
            toplam = toplam + bina[i][j];
        }
        printf("%d.katta oturan kisi sayisi: %d\n", i+1, toplam);
        binaToplam = binaToplam + toplam;
        toplam=0;
    }

    printf("Binada oturan kisi sayisi: %d", binaToplam);

    return 0;
}
