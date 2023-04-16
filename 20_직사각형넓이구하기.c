#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define min(x,y) (x)<(y)?(x):(y)
#define max(x,y) (x)>(y)?(x):(y)

// dots_rows는 2차원 배열 dots의 행 길이, dots_cols는 2차원 배열 dots의 열 길이입니다.
int solution(int** dots, size_t dots_rows, size_t dots_cols) {
    int answer = 0;
    
    int x1=min(min(dots[0][0], dots[1][0]), min(dots[2][0], dots[3][0]));
    int y1=min(min(dots[0][1], dots[1][1]), min(dots[2][1], dots[3][1]));
    int x2=max(max(dots[0][0], dots[1][0]), max(dots[2][0], dots[3][0]));
    int y2=max(max(dots[0][1], dots[1][1]), max(dots[2][1], dots[3][1]));
    
    answer=(x2-x1)*(y2-y1);
    
    return answer;
}
