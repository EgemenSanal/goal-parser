#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    // gol yorumlayici

    char kelime[100] ;
    char sonuc[100];
    int i, j = 0;

    gets(kelime); //kullanicidan kelimeyi alma

    int uzunluk;
    uzunluk = strlen(kelime); //girilen kelimenin uzunlugunu alma
    for (i = 0; i < uzunluk; i++) { //girilen kelimenin uzunlugu boyunca yapilacak dongu
        if (kelime[i] == 'G' || kelime[i] == 'g') { //eger kullanici g veya G yazdiysa bunu G olarak cevirecek komut
            sonuc[j++] = 'G';

        }
        else if (kelime[i] == '(' && kelime[i + 1] == ')') { // eger kullanici () yazarsa bunu  O olarak cevirecek komut 
            sonuc[j++] = 'O';
            i++;
        }
        else if (kelime[i] == '(' && kelime[i + 1] == 'l' && kelime[i + 2] == ')') { // eger kullanici (l) yazarsa bunu  L olarak cevirecek komut 
            sonuc[j++] = 'L';
            i += 2;
        }
    }
    sonuc[j] = '\0'; // ekrana yazdirinca ortaya cikan istenmeyen karakterler sillmek icin (bazi derleyicilerde gerek kalmiyor).
    printf("%s\n", sonuc);
    return 0;
}








