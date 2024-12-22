#include <stdio.h>
#include <stdlib.h>

void Toplam (int *ptr,int N,int * toplam){
    *toplam =0 ;
for(int i =0; i<N;i++){
 printf("sayi %d gir :",i+1);
 scanf("%d",&ptr[i]);
(*toplam)+=ptr[i]; 
}



}

int main() {


int N ,toplam; 

printf("kaç tane sayıyı toplamak istiyorsunuz:"); 
scanf("%d",&N); 


int *ptr = (int *)malloc(N*sizeof(int));
if (ptr == NULL) { 
        printf("Bellek tahsisi başarısız oldu.\n");
        return 1;
    }

Toplam(ptr,N,&toplam); 

printf("sayıların toplamı = %d",toplam);



    return 0 ; 
}