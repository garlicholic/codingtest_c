#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int chicken) {
    int answer = 0;
    int n;
    
    while(1){
        if(chicken<10){
            break;
        }
        
        n = chicken%10;
        chicken/=10;
        
        answer+=chicken;
        
        chicken+=n;
    }
    return answer;
}
