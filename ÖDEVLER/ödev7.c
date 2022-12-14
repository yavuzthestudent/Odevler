#include <stdio.h>

int parametrebuyuktopla(int dizi[], int gelecekdeger){
    int toplam = 0;
    
    for(int i = 0 ; i<5 ; i++)
    {
        if(dizi[i]> gelecekdeger){
            toplam += dizi[i];
        }
    
    }
    return toplam;
}
int main(){
    int deger;
 int dizi[] = {1,3,5,7,9};
 printf("dizide hangi sayidan buyuk sayilar toplansin? \n");
 scanf("%d", &deger);
 printf("degerinizinden buyuk sayilarin toplami: %d", parametrebuyuktopla(dizi, deger));
 return 0;
}