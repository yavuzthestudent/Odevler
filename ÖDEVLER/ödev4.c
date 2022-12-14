#include <stdio.h>
int enbuyuk2bul(int dizi[])
{
    int enbuyuk = 0;
    int enbuyuk2 = 0;
    for (int i = 0; i < 5; i++)
    {
        if (enbuyuk <= dizi[i])
        {
            enbuyuk = dizi[i];
        }
    }
    for (int i = 0; i < 5; i++)
    {

        if (enbuyuk2 <= dizi[i] && enbuyuk != dizi[i])
        {
            enbuyuk2 = dizi[i];
        }
       
    }
     return enbuyuk2;
}
    int main()
    {
        int dizi[] = {5,9,4,8,2};
        printf("%d en buyuk 2. sayi", enbuyuk2bul(dizi));
        return 0;
    }
