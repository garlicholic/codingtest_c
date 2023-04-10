#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int solution(int array[], size_t array_len, int n) {
    int answer;
    int min_diff = 999, diff;
    
    for(int i=0; i<array_len; i++){
        if (array[i]>=n){
            diff = array[i]-n;
        }
        else{
            diff = n-array[i];
        }
        
        if (diff<min_diff){
                min_diff=diff;
                answer = array[i];
        }
        else if(diff==min_diff){
            if(array[i]<answer){
                answer = array[i];
            }
        }
    }

    return answer;
}
