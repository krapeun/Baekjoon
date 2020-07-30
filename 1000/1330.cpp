// 1330 두 수 비교하기
// 두 정수 A와 B가 주어졌을 때, A와 B를 비교하는 프로그램을 작성하시오.

#include <stdio.h>

int main(){
    int A, B;
    scanf("%d %d", &A, &B);
    
    // 범위 제한
    if(A < -10000) A = -10000;
    else if(A > 10000) A = 10000;
    if(B < -10000) B = -10000;
    else if(B > 10000) B = 10000;
    
    // 두 수 비교
    if(A > B) printf(">\n");
    else if(A < B) printf("<\n");
    else printf("==\n");
    
    return 0;
}
