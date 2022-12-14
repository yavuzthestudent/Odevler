#include <stdio.h>

int kackezvar(int deger, int dizi[])
{
    int i;
    int sayac = 0;
    for (i = 0; i < 5; i++)
    {
        if (deger == dizi[i])
        {
            ++sayac;
        }
    }
    return sayac;
}

int main()
{
    int deger;
    int dizi[5] = {9, 8, 7, 6, 5};
    printf("kontrol etmek istediginiz degeri giriniz: \n");
    scanf("%d", &deger);
    printf("%d kadar dizide geciyor ", kackezvar(deger,dizi));
    return 0;
}