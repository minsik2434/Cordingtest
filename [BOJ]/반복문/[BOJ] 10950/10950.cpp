/*
10950 문제
두 정수 A와 B를 입력받은 다음, A+B를 출력하는 프로그램을 작성하시오.

입력
첫째 줄에 테스트 케이스의 개수 T가 주어진다.

각 테스트 케이스는 한 줄로 이루어져 있으며, 각 줄에 A와 B가 주어진다. (0 < A, B < 10)

출력
각 테스트 케이스마다 A+B를 출력한다.
*/
#include <stdio.h>

int main(void){

    int num;
    int x,y;
    
    scanf("%d",&num);
    int result[num];
    for(int i=0; i<num; i++){
        scanf("%d %d",&x,&y);
        result[i] = x+y;
    }
    for(int i=0; i<num; i++){
        printf("%d\n",result[i]);
    }
    return 0;
}