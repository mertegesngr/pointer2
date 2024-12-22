#include <stdio.h>
#include <stdlib.h>

int main() {

char *ptr =(char *)malloc(26*sizeof(char)); 

for(int i =0 ; i<26 ; i++){

ptr[i]= 'A'+ i ; 
}

for(int i =0 ; i<26 ; i++){

printf("%c ",ptr[i]);  
}



    return 0 ; 
}