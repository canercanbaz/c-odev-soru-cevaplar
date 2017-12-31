#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	double AhmetToplamMaas = 0, HasanToplamMaas = 0, AhmetBaslangicMaasi = 0, HasanBaslangicMaasi = 0;
    int i = 0, AhmetAy = 0, HasanAy = 0;
    char isim[100];
    do
    {
        printf("Calisan adi giriniz:");
        scanf("%s", isim);

        if (!strcmp(isim, "Ahmet"))
        {
          printf("Ahmet'in baslangic maasi: ");
          scanf("%lf", &AhmetBaslangicMaasi);
          printf("Hesaplanacak ay: ");
          scanf("%d", &AhmetAy);

          for (int j = 1; j <= AhmetAy; j++)
          {
              if (j % 2 == 0)
              {
                  AhmetBaslangicMaasi = AhmetBaslangicMaasi + (AhmetBaslangicMaasi * 0.50);
              }
              else
              {
                  AhmetBaslangicMaasi = AhmetBaslangicMaasi - (AhmetBaslangicMaasi * 0.25);
              }
          }
              AhmetToplamMaas = AhmetBaslangicMaasi;
        }

        if (!strcmp(isim, "Hasan"))
        {
            printf("Hasan'in baslangic maasi: ");
            scanf("%lf", &HasanBaslangicMaasi);
            printf("Hesaplanacak ay: ");
            scanf("%d", &HasanAy);

            for (int k = 1; k <= HasanAy; k++)
            {
                HasanBaslangicMaasi = HasanBaslangicMaasi + (HasanBaslangicMaasi * 0.25);
            }

            HasanToplamMaas = HasanBaslangicMaasi;
        }
        i++;
    }
    while (i <= 1);

    printf("Ahmet'in Maasi: %lf\n", AhmetToplamMaas);
    printf("Hasan'in Maasi: %lf\n", HasanToplamMaas);

    if (HasanToplamMaas > AhmetToplamMaas)
    {
        printf("Hasan'in Maasi daha fazladir.");
    }
    if (HasanToplamMaas < AhmetToplamMaas)
    {
        printf("Ahmet'in Maasi daha fazladir.");
    }
    if (HasanToplamMaas == AhmetToplamMaas)
    {
        printf("Maaslar esittir.");
    }
	return 0;
}
