#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
  	// Complete the code to print the pattern.
    int N= 2*n-1;
    
    for(int i=0;i<N;i++){
        
        for(int j=0;j<N;j++){
            int min=i<j?i:j;
            min=min<N-i?min:N-i-1;
            min=min<N-j?min:N-j-1;
            printf("%d ",n-min);
        }
        printf("\n");
        
    }
    return 0;
}