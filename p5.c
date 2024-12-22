#include <stdio.h>
#include <stdlib.h>

int main() {
char *ptr=(char *) malloc(20*sizeof(char *));
if(ptr==NULL){
    printf("bellekte yeterli alan bulunamadı"); 
    return 1 ;
}
printf("kelime giriniz : "); 
gets(ptr); 

int kelimeUzunluk =0 ; 

for (int i =0 ; i<20 ; i++){

if(ptr[i]=='\0'){
    break;
}
    kelimeUzunluk++; 
}
char gecici; 
for (int i = 0 ; i<kelimeUzunluk/2; i++){
    gecici=ptr[i]; 
    ptr[i]= ptr[kelimeUzunluk-i-1]; 
    ptr[kelimeUzunluk-i-1]=gecici; 

}
ptr = (char *)realloc(ptr, kelimeUzunluk*sizeof(char)); 
printf("%s",ptr);




free(ptr);
    return 0 ; 
}