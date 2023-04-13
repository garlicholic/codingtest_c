#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int num, int k) {
    int answer = -1;
    int list[1000000]={0,};
    int cnt = 0;
    
    while(num>=10)
    {
        list[cnt++]=num%10;
        num/=10;
    }
    list[cnt]=num;
    
    for(int i = 0; i<=cnt; i++){
        if(list[i]==k){
            answer = cnt-i+1;
        }
    }
    return answer;
}
