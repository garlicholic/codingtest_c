#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int k) {
    int answer = 0;
    int ser = n/10;
    answer = 12000*n + 2000*(k-ser);
    return answer;
}
