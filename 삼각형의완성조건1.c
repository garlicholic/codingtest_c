#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// sides_len은 배열 sides의 길이입니다.
int solution(int sides[], size_t sides_len) {
    int temp ;
    
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            if(sides[i]<sides[j]){
                temp = sides[j];
                sides[j]=sides[i];
                sides[i]=temp;
            }
        }
    }
    
    if (sides[0]+sides[1]>sides[2]){
        return 1;
    }
    else{
        return 2;
    }
}
