#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* my_string) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(int)*strlen(my_string));
    char tmp;
    
    for(int i=0; i<strlen(my_string); i++){
        if(my_string[i]>='A'&&my_string[i]<='Z'){
            answer[i]=my_string[i]+32;
        }
        else{
            answer[i]=my_string[i];
        }
    }
    
    for(int j=0; j<strlen(my_string); j++){
        for(int k=0; k<strlen(my_string); k++){
            if(answer[j]<answer[k]){
                tmp = answer[k];
                answer[k]=answer[j];
                answer[j]=tmp;
            }
        }
    }
    
    answer[strlen(my_string)]='\0';
    return answer;
}
