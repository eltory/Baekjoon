//
//  2577__숫자의개수.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 18..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>

int main(){
    int A, B, C, mul;
    int num[10] = {0};
    scanf("%d %d %d", &A, &B, &C);
    mul = A * B * C;
    while(mul){
        num[(mul % 10)]++;
        mul /= 10;
    }
    for(int i = 0; i < 10; ++i)
        printf("%d\n", num[i]);
    return 0;
}

