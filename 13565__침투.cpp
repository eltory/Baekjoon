//
//  13565__침투.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 2..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  DFS로 풀었으나, BFS로 풀면 시간이 줄어드는 듯 하다.
 *  추후 BFS로도 돌려보고 차이를 적을 것.
 */
#include <stdio.h>
const int MAX = 1001;
int grid[MAX][MAX];
bool dfs(int, int);
int Dx[4] = {1, 0, -1, 0};
int Dy[4] = {0, -1, 0, 1};
int N, M;
int main(){
    scanf("%d %d", &M, &N);
    for(int i = 0; i < M; ++i)
        for(int j = 0; j < N; ++j)
            scanf("%1d", &grid[i][j]);
    for(int i = 0; i < N; ++i){
        if(grid[0][i] == 0){
            if(dfs(0, i)){
                printf("YES");
                return 0;
            }
        }
    }
    printf("NO");
    return 0;
}
bool dfs(int x, int y){
    if(x == M-1) return true;
    grid[x][y]++;
    for(int i = 0; i < 4; ++i){
        int dx = x + Dx[i];
        int dy = y + Dy[i];
        if(dx >= 0 && dy >= 0 && dx < M && dy < N && grid[dx][dy] == 0)
            if(dfs(dx, dy)) return true;
    }
    return false;
}


