#include <stdio.h>

int ortbul(int dizi[]){
    int ortalama = 0;
    int dizitoplam = 0;
  
    for(int i = 0 ; i < 5 ; i++){
       dizitoplam = dizi[i] + dizitoplam;
    }   
    ortalama = dizitoplam/5;
    
    return ortalama;
}
int main(){
    int dizi[] = {1,3,5,7,9};
   int a;
   a = ortbul(dizi);
   for(int j = 0 ; j < 5 ; j++){
    if(dizi[j] < a)
   printf("%d sayisi ortalamadan kucuktur\n", dizi[j]);
     
   }   
    return 0;
}