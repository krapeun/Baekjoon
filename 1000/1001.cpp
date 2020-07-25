#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    
    if(A < 0) A = 1;
    else if(A > 10) A = 9;
    if(B < 0) B = 1;
    else if(B > 10) B = 9;
    
    printf("%d\n", A - B);
    
    return 0;
}
