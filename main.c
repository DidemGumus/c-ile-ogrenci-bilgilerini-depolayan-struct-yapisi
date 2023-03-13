
#include <stdio.h>
#include<stdlib.h>


//Didem GÜMÜŞ

struct ogrencibilgi{ 
    char ogrenciad[20];
    char ogrencisoyad[20];
    int ogrencino;
    float ortalama;
    char adres[30];
};

int main(){
    system("COLOR 1");
    printf("*  OGRENCI BILGILERI  *\n\n");
    
    struct ogrencibilgi o1={"Elif","KARADAS",120,80.50,"Simav/Kusu"};
    printf("1.Ogrencinin Adi:%s\n",o1.ogrenciad);
    printf("1.Ogrencinin Soyadi:%s\n",o1.ogrencisoyad);
    printf("1.Ogrencinin Numarasi:%d\n",o1.ogrencino);
    printf("1.Ogrencinin Ortalamasi:%.2f\n",o1.ortalama);
    printf("1.Ogrencinin Adresi:%s\n",o1.adres);
    
    printf("\n***\n");
    
    struct ogrencibilgi o2={"Nermin","ADALI",301,89.00,"Manisa/Saruhanli"};
    printf("\n2.Ogrencinin Adi:%s\n",o2.ogrenciad);
    printf("2.Ogrencinin Soyadi:%s\n",o2.ogrencisoyad);
    printf("2.Ogrencinin Numarasi:%d\n",o2.ogrencino);
    printf("2.Ogrencinin Ortalamasi:%.2f\n",o2.ortalama);
    printf("2.Ogrencinin Adresi:%s\n",o2.adres);
    
    printf("\n***\n");
    
    struct ogrencibilgi o3={"Kadir","IR",330,85.25,"Kocaeli/Gebze"};
    printf("\n3.Ogrencinin Adi:%s\n",o3.ogrenciad);
    printf("3.Ogrencinin Soyadi:%s\n",o3.ogrencisoyad);
    printf("3.Ogrencinin Numarasi:%d\n",o3.ogrencino);
    printf("3.Ogrencinin Ortalamasi:%.2f\n",o3.ortalama);
    printf("3.Ogrencinin Adresi:%s\n",o3.adres);
    
    printf("\n***\n");
    
    struct ogrencibilgi o4={"Janset","Gumus",355,78.25,"İzmir/Buca"};
    printf("\n4.Ogrencinin Adi:%s\n",o4.ogrenciad);
    printf("4.Ogrencinin Soyadi:%s\n",o4.ogrencisoyad);
    printf("4.Ogrencinin Numarasi:%d\n",o4.ogrencino);
    printf("4.Ogrencinin Ortalamasi:%.2f\n",o4.ortalama);
    printf("4.Ogrencinin Adresi:%s\n",o4.adres);
    
    printf("\n***\n");
    
    struct ogrencibilgi o5={"Gizem","Gumus",554,90.15,"Sivas/Merkez"};
    printf("\n5.Ogrencinin Adi:%s\n",o5.ogrenciad);
    printf("5.Ogrencinin Soyadi:%s\n",o5.ogrencisoyad);
    printf("5.Ogrencinin Numarasi:%d\n",o5.ogrencino);
    printf("5.Ogrencinin Ortalamasi:%.2f\n",o5.ortalama);
    printf("5.Ogrencinin Adresi:%s\n",o5.adres);
    
    
    
    
    return 0;
}
