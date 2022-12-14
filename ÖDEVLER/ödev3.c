#include <stdio.h>
int enkucukbul(int dizi[5]){
    int enkucuk = dizi[1];
    for(int i = 0 ; i < 5 ; i++){
if(dizi[i] < enkucuk){
 enkucuk = dizi[i];
}
    }
    return enkucuk;
}

int main(){
    int dizi[5];
    for(int i = 0 ; i<5 ; i++){
       
        printf("%d . tam sayiyi girin:\n", i+1);
        scanf("%d", &dizi[i]);
    }
 printf("%d", enkucukbul(dizi));
    return 0;
}
