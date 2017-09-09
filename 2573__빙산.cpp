//
//  빙산(2573).cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 7. 31..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <cstdio>
#include <vector>
#include <string.h>
using namespace std;
const int MAX = 300;
int ocean[MAX][MAX] = {0};
int visit[MAX][MAX] = {0};
int N, M;
int stage = 1;
int result = 0, k = 1;
void dfs(int, int);

int main(){
    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            scanf("%d", &ocean[i][j]);
        }
    }
    while(k){
        result = 0;
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < M; ++j){
                if(ocean[i][j] != 0 && visit[i][j] != stage){
                    result++;
                    if(result == 2){
                        printf("%d",stage-1);
                        return 0;
                    }dfs(i, j);
                }
            }
        }
        k = result;
        stage++;
    } printf("0");
    return 0;
}

void dfs(int x, int y){
    visit[x][y]=stage;
    if(x > 0 && visit[x-1][y] != stage){
       if(ocean[x-1][y] != 0)
           dfs(x-1, y);
       else if(ocean[x][y] != 0)
           ocean[x][y]--;
    }
    if(x < N-1 && visit[x+1][y] != stage){
        if(ocean[x+1][y] != 0)
            dfs(x+1, y);
        else if(ocean[x][y] != 0)
            ocean[x][y]--;
    }
    if(y > 0 && visit[x][y-1] != stage){
        if(ocean[x][y-1] != 0)
            dfs(x, y-1);
        else if(ocean[x][y] != 0)
            ocean[x][y]--;
    }
    if(y < M-1 && visit[x][y+1] != stage){
        if(ocean[x][y+1] != 0)
            dfs(x, y+1);
        else if(ocean[x][y] != 0)
            ocean[x][y]--;
    }
}
