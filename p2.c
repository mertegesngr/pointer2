#include <stdio.h>
#include <stdlib.h>

int main() {


int dizi[5];

for (int i =0 ; i<5 ; i++){
    printf("sayı %d gir : ",i+1); 
    scanf("%d",&dizi[i]);
}

int *ptr= (int *) malloc(5*sizeof(int));
if(ptr==NULL){
    printf("bellekte yeterli alan bulunamadı"); 
    return 1 ;
}


for(int i =0 ; i<5;i++){

ptr[4-i]=dizi[i]; 

}

for (int i =0 ; i<5; i++){
    printf("%d ",ptr[i]); 
}

free(ptr); 

    return 0 ; 
}