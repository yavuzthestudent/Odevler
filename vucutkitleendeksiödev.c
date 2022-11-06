#include <stdio.h>
 
int main(){

    float boy,kilo,sonuc;
      
    printf("Boyunuzu(metre) giriniz: \n");
    scanf("%f",&boy);
    printf("Kilonuzu(kilogram) giriniz: \n");
    scanf("%f",&kilo);
    
    sonuc = kilo / (boy * boy);
    printf("Beden Kitle indeksi = %f\n",sonuc);
    
    if (sonuc <= 18){
        printf("Zayif");
    }
    else if (sonuc <= 25){
        printf("Normal");
    }
    else if (sonuc <= 30){
        printf("Kilolu ");
    }
    else if (sonuc <= 35){
        printf("Sisman");
    }
    else {
        printf("Obez");
    }
    return 0;
}