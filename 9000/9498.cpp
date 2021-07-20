#include <stdio.h>

int main(){
    int score;
    scanf("%d", &score);
    
    // 범위 제한
    if(score < 0) score = 0;
    else if(score > 100) score = 100;
    
    // 두 수 비교
    if(score >= 90) printf("A\n");
    else if(score >= 80 && score < 90) printf("B\n");
    else if(score >= 70 && score < 80) printf("C\n");
    else if(score >= 60 && score < 70) printf("D\n");
    else printf("F\n");
    
    return 0;
}
