//
//  계단 오르기(2579).cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 8. 2..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <cstdio>
#include <algorithm>
using namespace std;
int N;
int stair[302] = {0};
int memo[302] = {0};
int main(){
    scanf("%d", &N);
    for(int i = 1; i <= N; ++i)
        scanf("%d", &stair[i]);
    memo[1] = stair[1];
    memo[2] = memo[1] + stair[2];
    for(int i = 3; i <= N; ++i)
        memo[i] = max(memo[i-2] + stair[i], stair[i-1] + stair[i] + memo[i-3]);
    printf("%d" , memo[N]);
    return 0;
}
