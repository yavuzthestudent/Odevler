/******************************************************************************
BMT-103 Dersi 9. hafta uygulama ödevi. 
Bu kod parçası iki matrise 0-100 arasında rastgele değerler atayıp sonrasında
bu iki matrisi toplamakta ve sonucunu 3. bir matrisi atamaktadır. 
Açıkalamar doğrultusunda;
- matris_yazdir fonksiyonu tanımlayınız. 
- main fonksiyonu icerisindeki talimatlar doğrultusunda kodu tamamlayınız. 
*******************************************************************************/

/*
Ad Soyad:Yavuz Altay  
Numara:22181616040
Şube: 1
*/
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#define SAT 5
#define SUT 4

/*
Bu fonksiyonu herhangi bir büyüklükteki matrisi ekrana yazdıracak şekilde
kodlayınız. 
*/
void matris_yazdir(short dizi[][SUT], int sat){
    for(int i = 0 ; i < SAT ; i++){
        for(int j = 0 ; j < SUT ; j++){
            printf("%d\n", dizi[i][j]);
        }
        printf("\n");
    }
}


int main()
{
    
    short matrisA[SAT][SUT], matrisB[SAT][SUT], matrisT[SAT][SUT];
     // Burada matrisA ve matrisB ye 0 ile 100 arasında rastgele değerler atayan kodu yazınız. 
     srand(time(NULL));
     for(int i = 0 ; i< SAT ; i++){
        for(int j = 0 ; j < SUT ; j++){
            matrisA[i][j] = (rand()%100);
            matrisB[i][j] = (rand()%100);
        }
     }
    
    
    // yukarıda tanımlı fonksiyonu kullanarak matrisA ve matrisB yi ekrana yazdırınız. 
    printf("matris A = \n");
    matris_yazdir(matrisA, SAT );
    printf("matris B = \n ");
    matris_yazdir(matrisB, SAT);
    
    // Burada iki matrisA ve matrisB yi toplayarak sonucunu matrisT ye atayınız. 
     for(int i = 0 ; i< SAT ; i++){
        for(int j = 0 ; j < SAT ; j++){
            matrisT[i][j] = matrisA[i][j] + matrisB[i][j];
        }
     }
    
     // yukarıda tanımlı fonksiyonu kullanarak matrisA ve matrisB yi ekrana yazdırınız. 
     printf("matris T = \n");
    matris_yazdir(matrisT, SAT);

    return 0;
}