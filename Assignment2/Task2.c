
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void perfectnum(int start, int end){
    for (int i=start; i<end;i++){
        int sum=0;
        
        for (int j=1; j<i; j++){
            if (i%j==0){
                sum=sum+j;
            }
        }
        if (sum==i){
            printf("%d \n", i);
        }
    }
}

int main(){
    int start;
    int end;
    printf("Enter Start: ");
    scanf("%d", &start);
    printf("Enter End: ");
    scanf("%d", &end);
    perfectnum(start,end);
    return 0;
}
