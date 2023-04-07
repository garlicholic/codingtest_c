#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int temp=1;
    int i;
    
    for (int i =1; i<2*n; i++){
        temp *= i;
        if (temp > n){
            answer = i-1;
            break;
        }
    }
    return answer;
}
