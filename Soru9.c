#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int sayilar[50];
    int min, max;
    srand(time(NULL));

    for (int i = 0; i < 50; i++)
    {
        sayilar[i] = 1 + rand() % 100;
        printf("%d\n", sayilar[i]);
    }

    min = sayilar[0];
    max = sayilar[0];

    for (int i = 1; i < 50; i++)
    {
        if (min > sayilar[i])
            min = sayilar[i];
        if (max < sayilar[i])
            max = sayilar[i];
    }

    printf("Dizi icindeki en buyuk sayi: %d\n", max);
    printf("Dizi icindeki en kucuk sayi: %d", min);

    return 0;
}