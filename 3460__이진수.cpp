//
//  3460__이진수.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 17..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  10진수 -> 2진수 바꾸는 작업이 아닌, bit 연산을 통해 직접적인 bit를 구함
 */
#include <stdio.h>
int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        unsigned int n;
        int i = 0;
        scanf("%d", &n);
        while(n){
            if(n & 1)
                printf("%d ", i);
            n >>= 1; i++;
        }
        printf("\n");
    }
    return 0;
}

