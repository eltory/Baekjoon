//
//  14920__3n+1수열.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 11. 21..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>

int main(){
    int C, n = 1;
    scanf("%d", &C);
    while(C != 1){
        C = C % 2 == 0 ? C / 2 : 3 * C + 1;
        n++;
    } printf("%d", n);
    return 0;
}

