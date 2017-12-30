//
//  2193__이친수.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 30..
//  Copyright © 2017년 LSH. All rights reserved.
//

/**
 *  이 문제는 2자리 수까지는 각각 1개씩이고, 그 이후 부터는 앞자리 수가 0일 경우 올수있는 경우는 2가지이고, 1일 경우 올수있는 경우는 1가지다.
 *  이를 잘 조합하다 보면 n >= 3 에 대하여, pinary[n] = pinary[n-1] + pinary[n-2] 로 귀결된다
 *  주의할 점은 n이 커질수록 값이 커지므로 int형이 아닌 long long 이상으로 저장해야함
 */
#include <stdio.h>
long long int dp[91];
int main(){
    int N;
    scanf("%d", &N);
    dp[1] = 1, dp[2] = 1;
    for(int i = 3; i <= N; ++i)
        dp[i] = dp[i-2] + dp[i-1];
    printf("%lld", dp[N]);
    return 0;
}


