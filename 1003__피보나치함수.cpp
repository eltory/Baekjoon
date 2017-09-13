//
//  1003__피보나치함수.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 13..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int dp[40][2] = {};
int N;
void fibo(int );
int main(){
    scanf("%d", &N);
    while(N--){
        dp[0][0] = 1;
        dp[0][1] = 0;
        dp[1][0] = 0;
        dp[1][1] = 1;
        int n;
        scanf("%d", &n);
        fibo(n);
        printf("%d %d\n", dp[n][0], dp[n][1]);
    } return 0;
}

void fibo(int n){
    for(int i = 2; i <= n; ++i){
        dp[i][0] = dp[i-2][0] + dp[i-1][0];
        dp[i][1] = dp[i-2][1] + dp[i-1][1];
    }
}
