#include <stdio.h>
#include <stdlib.h>
 
 void push(char n, char *ptr , int *s);
 char pop( char *ptr , int *s)
 
int main() {
    printf("enter the size of your string");
    scanf("%d",s);
    
    ptr = (char*) malloc(s* sizeof(char));
    if (ptr == NULL ) {
        printf("Error! Memory cannot be allocated.\n");
             return 1;
    }
    
    printf("Enter your string : ");
    scanf("%s", ptr);
    
    
}

 void push(char n, char *ptr , int *s){
     ptr=(char*)realloc(ptr,*s+1);
     *s = *s + 1;
     
     ptr[*s-2]=n;
     ptr[*s-1]='\0';
 }
 
 char pop( char *ptr , int *s){
     char k = ptr[*s-1];
     *s-- ;
     ptr=(char*)realloc(ptr,*s);
     return k ;
     
 }
