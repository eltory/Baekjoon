//
//  유기농배추.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 7. 29..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <cstdio>
#include <cstring>

using namespace std;
const int MAX = 50;
bool field[MAX][MAX];
int M, N, K;
int x, y;
void dfs(int, int);

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
        int count = 0;
        scanf("%d %d %d", &M, &N, &K);
        for(int i = 0; i < K; ++i){
            scanf("%d %d", &x, &y);
            field[x][y] = 1;
        }
        for(int i = 0; i < M; ++i){
            for(int j = 0; j <N; ++j){
                if(field[i][j] == 1){
                    dfs(i,j);
                    count++;
                }
            }
        } printf("%d\n", count);
    } return 0;
}

void dfs(int x, int y){
    field[x][y] = 0;
    if(x < 1 || x >= M-1 || y < 1 || y >= N-1)
        return ;
    if(field[x-1][y] == 1)
        dfs(x-1, y);
    if(field[x+1][y] == 1)
        dfs(x+1, y);
    if(field[x][y-1] == 1)
        dfs(x, y-1);
    if(field[x][y+1] == 1)
        dfs(x, y+1);
}
