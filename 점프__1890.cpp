//
//  점프(1890).cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 7. 31..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <cstdio>
#include <string.h>
const int MAX = 100;
int N;
int board[MAX][MAX] = {0};
long long memo[MAX][MAX];
long long canJump(int, int);
int main(){
    scanf("%d", &N);
    memset(memo, -1, sizeof(memo));
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < N; ++j)
            scanf("%d", &board[i][j]);
    canJump(0, 0);
    printf("%lld", memo[0][0]);
    return 0;
}
long long canJump(int x, int y){
    if(x >= N || y >= N)
        return 0;
    if(x == N-1 && y == N-1)
        return 1;
    if(memo[x][y] != -1)
        return memo[x][y];
    int jump = board[x][y];
    if(jump == 0)
        return 0;
    return memo[x][y] += (canJump(x + jump, y) + canJump(x, y + jump) + 1);
}
