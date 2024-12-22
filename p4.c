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
 int sesliHarf=0 ,sessizHarf=0; 

for(int i =0 ; i<20 ; i++){
if(ptr[i]=='\0'){
    break; 
}
if((ptr[i]<='z'&&ptr[i]>='a')||(ptr[i]<='Z'&&ptr[i]>='A')){
if(ptr[i]=='a'||ptr[i]=='e'||ptr[i]=='o'||ptr[i]=='u'||ptr[i]=='i'||ptr[i]=='A'||ptr[i]=='E'||ptr[i]=='O'||ptr[i]=='U'||ptr[i]=='I'){
sesliHarf++; 
}
else{
    sessizHarf++ ; 
}
}
}

printf("sesli harf sayısı : %d \n sessiz harf sayısı :%d",sesliHarf,sessizHarf); 




    return 0 ; 
}