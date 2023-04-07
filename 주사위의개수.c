#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// box_len은 배열 box의 길이입니다.
int solution(int box[], size_t box_len, int n) {
    int answer = 0;
    int n1, n2, n3;
    
    n1 = box[0]/n;
    n2 = box[1]/n;
    n3 = box[2]/n;
    
    answer = n1*n2*n3;
    return answer;
}
