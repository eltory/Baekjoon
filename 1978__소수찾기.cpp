//
//  1978__소수찾기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 12..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  에라테네스의 체를 이용하여 최대 값까지 소수 만들어보고 그중 입력받은 수들이 소수인지만 판별하면 됨
 */
#include <stdio.h>
#include <algorithm>
using namespace std;
int prime[1000];
int num[100];
int main(){
    int N, max_p = 0, cnt = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; ++i){
        scanf("%d", &num[i]);
        max_p = max(max_p, num[i]);
    }
    for(int i = 2; i <= max_p; ++i)
        prime[i] = i;
    for(int i = 2; i <= max_p; ++i){
        if(prime[i] == 0)
            continue;
        for(int j = 2*i; j <= max_p; j += i)
            prime[j] = 0;
    }
    for(int i = 0; i < N; ++i)
        if(prime[num[i]] != 0)
            cnt++;
    printf("%d",cnt);
    return 0;
}

