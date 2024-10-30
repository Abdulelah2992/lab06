#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr =NULL, a ,count=0,i=0,sum=0,j=0;
    float avr=0;
    
    
    do {
       
        ptr = (int*) realloc(ptr, (count + 1) * sizeof(int));
        count++;
    if (ptr == NULL) { 
    printf("Memory allocation failed.\n");
    
        exit(0);
    }
    
    printf("Enter a sample integer value : ");
    scanf("%d",&ptr[i]);
    sum += ptr[i];
    i++;
    
    printf("Do you want to add more samples? (y=1/n=0):");
    scanf("%d",&a);
        } while(a==1);
        
        printf("You entered the following samples: ");
        for(j=0 ;j<count;j++){
            printf(" %d ",ptr[j]);
                }
            printf("\n");
        avr = (float) sum / count ;
        
        printf("Calculated average (DC value): %f \n",avr);
        
        printf("Final adjusted samples after DC shift:\n");
        for(i=0;i<count;i++){
            printf("%d  ",ptr[i]-(int)avr);
        }
        
        free(ptr);
        return 0;
        }
