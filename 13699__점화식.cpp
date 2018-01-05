//
//  13699__점화식.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 4..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  단순 점화식 문제
 */
#include <stdio.h>
long long int t[36];
int main(){
    int n;
    scanf("%d", &n);
    t[0] = 1;
    for(int i = 1; i <= n; ++i)
        for(int j = 0; j < i; ++j)
            t[i] += t[j]*t[i-j-1];
    printf("%lld", t[n]);
    return 0;
}

