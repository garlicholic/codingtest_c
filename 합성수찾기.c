#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int temp=0;
    
    for (int i = 4; i <= n; i++){
        for (int j=2; j<i; j++){
            if(i%j==0){
                temp+=1;
            }
        }
        if (temp!=0){
            answer += 1;
        }
        temp=0;
    }
    
    
    return answer;
}
