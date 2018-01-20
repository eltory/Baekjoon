//
//  2667__단지번호붙이기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 18..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  dfs를 이용한 단순 재귀 탐색 flood fill 
 */
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX_N = 26;
vector<int> build;
int map[MAX_N][MAX_N];
int Dx[4] = {-1,0,1,0};
int Dy[4] = {0,1,0,-1};
int N;

int dfs(int i, int j, int cnt){
    map[i][j] = 0;
    cnt++;
    for(int k = 0; k < 4; ++k){
        int dx = i + Dx[k];
        int dy = j + Dy[k];
        if(dx < N && dy <N && dx >= 0 && dy >= 0 && map[dx][dy] != 0)
            cnt = dfs(dx, dy, cnt);
    }
    return cnt;
}

int main(){
    scanf("%d", &N);
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < N; ++j)
            scanf("%1d",&map[i][j]);
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < N; ++j)
            if(map[i][j])
                build.push_back(dfs(i,j,0));
    printf("%d\n", (int)build.size());
    sort(build.begin(), build.end());
    for(int i = 0; i < build.size(); ++i)
        printf("%d\n", build[i]);
    return 0;
}
