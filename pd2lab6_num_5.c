#include <stdio.h>
#include <stdlib.h>

int main(){
    int *p1 = malloc(10 * sizeof(int));
    if(p1== NULL){
        return 0;
    }
    
    printf("Insert 10 elements in the heap:\n");
    for(int i=0; i<10; i++){
        printf("p1[%d]: ", i);
        scanf("%d", &p1[i]);
    }
    
    int even = 0;
    int odd = 0;
    
    for(int i=0; i<10; i++){
        if(p1[i]%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    
    int *p2 = calloc(10, sizeof(int));
    int *p3 = calloc(10, sizeof(int));
    if(p2==NULL || p3==NULL){
        return 0;
    }
    
    int evenInd = 0;
    int oddInd = 0;
    
    for(int i=0; i<10; i++){
        if(p1[i]%2==0){
            p2[evenInd++] = p1[i];
        }
        else{
            p3[oddInd++] = p1[i];
        }
    }
    
    
    printf("\n\n Even digits:\n");
    for(int i=0; i<even; i++){
        printf(" %-3d", p2[i]);
    }
    printf("\n Odd digits:\n");
    for(int i=0; i<odd; i++){
        printf(" %-3d", p3[i]);
    }
    printf("\n");
    
    free(p1);
    free(p2);
    free(p3);
    
    return 0;
}