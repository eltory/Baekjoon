//
//  11051__이항계수2.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 18..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  메모이제이션을 이용하여 속도를 줄이고 단지 (a+b) mod != (a mod + b mod) 주의!
 */
#include <stdio.h>
const int mod = 10007;
int dp[1001][1001];
int comb(int n, int k){
    if(n == k || k == 0) return 1;
    int& rtn = dp[n][k];
    if(rtn != 0) return rtn;
    return rtn = (comb(n-1,k) + comb(n-1,k-1))%mod;
}
int main(){
    int N, K;
    scanf("%d %d", &N, &K);
    printf("%d", comb(N, K));
    return 0;
}
