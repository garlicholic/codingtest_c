#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int order) {
    int answer = 0;
    int temp;
    
    while(1){
        temp = order%10;
        if(temp%10!=0&&temp%3==0){
            answer++;
        }
        order = order/10;
        if(order==0){
            break;
        }
    }
    
    return answer;
}
