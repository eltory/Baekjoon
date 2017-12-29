//
//  11060__점프점프.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 29..
//  Copyright © 2017년 LSH. All rights reserved.
//

/**
 *  왼쪽에서부터 올라가면서 점프했을때 위치들의 값이 더 최소가 될 수 있도록 업데이트 해가면서 마지막에 도착 가능할 시 그 값을 보여주고 아니면 -1
 */
#include <stdio.h>
#include <algorithm>
using namespace std;
const int MAX_N = 1000;
const int INF = 1e7;
int maze[MAX_N];
int dp[MAX_N];
int main(){
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; ++i){
        scanf("%d", &maze[i]);
        dp[i] = i == 0 ? 0 : INF;
    }
    for(int i = 0; i < N; ++i){
        int jump = maze[i];
        for(int j = 1; j <= jump; ++j)
            if(i+j < N)
                dp[i+j] = min(dp[i+j], dp[i] + 1);
    }
    printf("%d", dp[N-1] == INF ? -1 : dp[N-1]);
    return 0;
}

