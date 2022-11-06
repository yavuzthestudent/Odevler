#include <stdio.h>

int main(){

 int ales,yds,mezuniyet;

 printf("yds puaninizi girin\n");
 scanf("%d",&yds);
 printf("ales puaninizi girin\n");
 scanf("%d",&ales);
 printf("mezuniyet ortalamanizi girin\n");
 scanf("%d",&mezuniyet);

 if (0<ales && ales<101 && 0<yds && yds<101 && 0<mezuniyet && mezuniyet<101) {
 
  if (yds>=70){
  
   if (ales/2 + mezuniyet/4 + yds/4 >= 60)
   printf("basvurunuz yapilabilir");
   
   else
   printf("basvuru icin yetersiz puan");

  }


  else
  printf("basvurunuz icin yds puaniniz yetersiz");




 }

 else
 printf("girdiginiz puanlari kontrol edin");

 return 0;
 }