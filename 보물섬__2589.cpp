//
//  보물섬__2589.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 6..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <queue>
using namespace std;
bool map[50][51] = {0};
int dist[50][50] = {0};
int N, M;
int moved = 0;
const int dx[4] = {-1,1,0,0}, dy[4] = {0,0,-1,1};
void bfs(int, int);
void init();

int main(){
    char tmp;
    scanf("%d %d%*c", &N, &M);
    for(int i = 0; i < N; ++i){
        for(int j = 0; j <= M; ++j){
            scanf("%c", &tmp);
            if(tmp == 'L')
                map[i][j] = 1;
        }
    }
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            if(map[i][j] == 1){
                bfs(i,j);
                memset(dist,0,sizeof(dist));
            }
        }
    }
    printf("%d",moved);
    return 0;
}

void bfs(int x, int y){
    queue<int> q;
    q.push(x*M + y);
    while(!q.empty()){
        int here = q.front();
        q.pop();
        x = here / M;
        y = here % M;
        for(int i = 0; i < 4; ++i){
            int nx = x + dx[i];
            int ny = y + dy[i];
            if(nx < 0 || ny < 0 || nx > N-1 || ny > M-1)
                continue;
            if(map[nx][ny] == 1 && dist[nx][ny] == 0){
                q.push(nx*M + ny);
                dist[nx][ny] = dist[x][y] + 1;
                if(moved < dist[nx][ny])
                    moved = dist[nx][ny];
            }
        }
    }
}
