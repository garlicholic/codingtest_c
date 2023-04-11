#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(int)*strlen(s));
    int k=0;
    int cnt =0;
    char tmp;
    
    for(int i=0; i<strlen(s); i++){
        for(int j=0; j<strlen(s); j++){
            if(s[i]==s[j]){
                cnt++;
            }
        }
        if(cnt==1){
            answer[k++]=s[i];
        }
        cnt = 0;
    }
    answer[k]='\0';
    
    for(int i=0; i<k; i++){
        for(int j=0; j<k; j++){
            if(answer[i]<answer[j]){
                tmp=answer[i];
                answer[i]=answer[j];
                answer[j]=tmp;
            }
        }
    }
    return answer;
}
