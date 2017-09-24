//
//  2156__포도주시식.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 20..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
using namespace std;
int dp[10001] = {0};
int glass[10001] = {0};
int main(){
    int N, max_val = 0;
    scanf("%d", &N);
    for(int i = 1; i <= N; ++i)
        scanf("%d", &glass[i]);
    dp[1] = glass[1];
    dp[2] = glass[2] + dp[1];
    for(int i = 3; i <= N; ++i)
        dp[i] = max(dp[i-1], max(dp[i-3] + glass[i-1] + glass[i], dp[i-2] + glass[i]));
    for(int i = 1; i <= N; ++i)
        if(max_val < dp[i])
            max_val = dp[i];
    for(int i = 1; i <= N; ++i)
        printf("%d\n", dp[i]);
    printf("%d", max_val);
    return 0;
}
