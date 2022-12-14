#include <stdio.h>

int main()
{
  // Öğrencilerin vize ve final notlarını tutacak diziler
  int vize_notlari[5];
  int final_notlari[5];

  // Öğrencilerin ortalama notlarını tutacak dizi
  float ortalama_notlar[5];

  // Öğrencilerin numaralarını tutacak dizi
  int ogrenci_numaralari[5];

  // Öğrenci sayısı
  int ogrenci_sayisi = 5;

  printf("Lutfen ogrencilerin numaralarini giriniz: \n");

  // Öğrenci numaralarını al
  for (int i = 0; i < ogrenci_sayisi; i++) {
    printf("%d. ogrencinin numarasi: ", i + 1);
    scanf("%d", &ogrenci_numaralari[i]);
  }

  printf("\nLutfen ogrencilerin vize notlarini giriniz: \n");

  // Öğrencilerin vize notlarını al
  for (int i = 0; i < ogrenci_sayisi; i++) {
    printf("%d. ogrencinin vize notu: ", i + 1);
    scanf("%d", &vize_notlari[i]);
  }

  printf("\nLutfen ogrencilerin final notlarini giriniz: \n");

  // Öğrencilerin final notlarını al
  for (int i = 0; i < ogrenci_sayisi; i++) {
    printf("%d. ogrencinin final notu: ", i + 1);
    scanf("%d", &final_notlari[i]);
  }

  // Öğrencilerin ortalama notlarını hesapla
  for (int i = 0; i < ogrenci_sayisi; i++) {
    ortalama_notlar[i] = (float)(vize_notlari[i] + final_notlari[i]) / 2;
  }

  // Öğrencilerin vize, final ve ortalama notlarını yazdır
  printf("\nOgrenci notlari:\n");
  printf("Numara\tVize\tFinal\tOrtalama\n");
  
  
  return 0;
}
