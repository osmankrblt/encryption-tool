#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main()
{
     setlocale(LC_ALL,"Turkish");
     char kriptoMetin[999];
int cikis,space;
int secim;
char harfSecim;
int harfAscii;
char harf;
int test,fark;
int uzunluk ;
printf("\n 1.Þifrelemek istiyorum... \n 2.Þifre çözmek istiyorum...\n");
scanf("%d",&secim);
     printf("Kullanma talimatlar... \n ==> Bitirmek içim * a bas.. \n ==> Boþluk için < bas.. \n");
     char yeniHarf;
     int sifre[7],sifrelemeAnahtari,sifreSayac=0,anahtarAtama,harfSayac=0,karakterUzunlugu;
    int diziSayac=0;
    printf(" Þifreleme anahtarýný gir... (8 TANE RAKAM) \n");
    for( diziSayac;diziSayac<8;diziSayac++){
        scanf("%d",&sifrelemeAnahtari);
        sifre[diziSayac]=sifrelemeAnahtari;

    }



switch(secim){


case 1:
    printf("HARF GiR \n");
    menu:
       scanf(" %c",&harfSecim);
       cikis=harfSecim;
       space=harfSecim;
    if(cikis!=42){


    harfAscii=harfSecim;

    if(space==60){

    kriptoMetin[harfSayac]=' ';
    harfSayac=harfSayac+1;

    goto menu;
}

    anahtarAtama=sifre[sifreSayac];



test=anahtarAtama+harfAscii;
if(test>122){
test=test%122;
anahtarAtama=test;
harfAscii=96;

}

harf=anahtarAtama+harfAscii;
    kriptoMetin[harfSayac]=harf;
    ++harfSayac;
    ++sifreSayac;
if(sifreSayac==8){
    sifreSayac=0;
}

goto menu;
    }break;


case 2:
printf("HARF GiR \n");
    menuu:
       scanf(" %c",&harfSecim);
       cikis=harfSecim;
       space=harfSecim;
    if(cikis!=42){


    harfAscii=harfSecim;

    if(space==60){

    kriptoMetin[harfSayac]=' ';
    harfSayac=harfSayac+1;

    goto menuu;
}

    anahtarAtama=sifre[sifreSayac];
char harf;


test=harfAscii-anahtarAtama;
if(test<97){
    fark=97 % test;
anahtarAtama=fark;
harfAscii=123;

}

harf=harfAscii-anahtarAtama;
    kriptoMetin[harfSayac]=harf;
    ++harfSayac;
    ++sifreSayac;
if(sifreSayac==8){
    sifreSayac=0;
}

goto menuu;
    }break;



}
uzunluk=strlen(kriptoMetin);
for(int sayac=0;sayac<uzunluk;sayac++){
    printf("%c",kriptoMetin[sayac]);
}




    return 0;
}
