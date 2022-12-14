#include <stdio.h>

int parametrebuyuktopla(int dizi[], int gelecekdeger){
    int toplam = 0;
    int kackez;
    for(int i = 0 ; i<5 ; i++)
    {
        if(dizi[i]> gelecekdeger){
            toplam = toplam + dizi[i];
            kackez++;
        }   
    }
    return toplam/kackez; 
}
int main(){
    int deger;
 int dizi[] = {1,3,5,7,9};
 printf("dizide hangi sayidan buyuk sayilarin ortalamasi alinsin? \n");
 scanf("%d", &deger);
 printf("degerinizinden buyuk sayilarin ortalamasi: %d", parametrebuyuktopla(dizi, deger));
 return 0;
}