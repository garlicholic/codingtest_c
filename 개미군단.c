#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int hp) {
    int answer = 0;
    int j,b,i=0;
    
    j = hp/5;
    b = (hp-5*j)/3;
    i = hp-5*j-3*b;
    
    answer = j+b+i;
    
    return answer;
}
