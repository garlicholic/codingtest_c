#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// array_len은 배열 array의 길이입니다.
int* solution(int array[], size_t array_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)malloc(sizeof(int)*2);
    int tmp;
    
    for(int i=0; i<array_len; i++){
        for(int j=0; j<array_len; j++){
            if(array[i]<array[j]){
                answer[0]=array[j];
                answer[1]=j;
            }
        }
    }
    
    return answer;
}
