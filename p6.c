#include <stdio.h>
#include <stdlib.h>

void fonksiyon (int dizi[],int * toplam , int *enK ,int *enB){
*toplam =0 ; 
*enK=dizi[0]; 
*enB=dizi[0]; 
for(int i =0 ; i<5 ; i++){

if(dizi[i]>*enB){
    *enB=dizi[i]; 
}
if(dizi[i]<*enK){
    *enK=dizi[i]; 
}
*toplam+=dizi[i]; 
}

}



int main() {
int toplam , enK ,enB ;
int dizi[5]; 
for(int i =0; i<5;i++){
 printf("sayi %d gir :",i+1);
 scanf("%d",&dizi[i]);
 
}

fonksiyon(dizi,&toplam,&enK,&enB);


printf("toplam = %d \n en büyük = %d \n en küçük =%d",toplam,enB,enK);

    return 0 ; 
}