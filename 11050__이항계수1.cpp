//
//  이항 계수1(11050).cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 4..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>

int main(){
    int N, K, result = 1;
    scanf("%d %d",&N, &K);
    for(int i = N; i > N - K; --i)
        result *= i;
    for(int i = K; i > 1; --i)
        result /= i;

    printf("%d",result);
    return 0;
}
