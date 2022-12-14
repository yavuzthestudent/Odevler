#include <stdio.h>
int enbuyukbul(int dizi[5])
{
    int enbuyuk = 0;
    for (int i = 0; i < 5; i++)
    {
        if (dizi[i] >= enbuyuk)
        {
            enbuyuk = dizi[i];
        }
    }
    return enbuyuk;
}

int main()
{
    int dizi[5];
    for (int i = 0; i < 5; i++)
    {

        printf("%d . tam sayiyi girin:\n", i + 1);
        scanf("%d", &dizi[i]);
    }
    printf("%d en buyuk sayi", enbuyukbul(dizi));
    return 0;
}
