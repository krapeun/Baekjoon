// 10869 사칙연산
// 모든 연산 문제

#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    
    // 범위 제한
    if(A < 1) A = 1;
    else if(A > 10000) A = 10000;
    if(B < 1) B = 1;
    else if(B > 10000) B = 10000;
    
    printf("%d\n", A + B);
    printf("%d\n", A - B);
    printf("%d\n", A * B);
    printf("%d\n", A / B);
    printf("%d\n", A % B);
    
    return 0;
}
