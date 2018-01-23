//
//  6679__싱기한네자리숫자.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 17..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  단순 진수법 변환
 */
#include <stdio.h>
bool sum(int n){
    int sum1 = 0, sum2 = 0, sum3 = 0;
    int n1 = n, n2 = n, n3 = n;
    while(n1){
        sum1 += n1 % 10;
        n1 /= 10;
    }
    while(n2){
        sum2 += n2 % 12;
        n2 /= 12;
    }
    if(sum1 != sum2) return false;
    while(n3){
        sum3 += n3 % 16;
        n3 /= 16;
    }
    if(sum2 != sum3) return false;
    return true;
}
int main(){
    for(int n = 1000; n < 10000; ++n)
        if(sum(n))
            printf("%d\n", n);
    return 0;
}

