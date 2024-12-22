#include <stdio.h>
#include <stdlib.h>

int main() {


char *ptr=(char *) malloc(50*sizeof(char *));
if(ptr==NULL){
    printf("bellekte yeterli alan bulunamadı"); 
    return 1 ;
}
printf("bir şeyler yazın : "); 
gets(ptr); 

int sayac =0  ; 

for (int i =0 ;i<50 ; i++){
if(ptr[i]=='\0'){
    break ; 
}
sayac++ ; 
}

printf("karakter sayısı : %d",sayac ); 


free(ptr); 
    return 0 ; 
}