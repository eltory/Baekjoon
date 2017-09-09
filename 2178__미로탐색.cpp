//
//  미로탐색(2178).cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 8. 1..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <cstdio>
#include <queue>
using namespace std;
const int MAX = 100;
int maze[MAX][MAX] = {0};
int dist[MAX][MAX] = {1};
int N, M;
void bfs(int, int);

int main(){
    scanf("%d %d",&N, &M);
    for(int i = 0; i < N; ++i)
        for(int j = 0; j < M; ++j)
            scanf("%1d", &maze[i][j]);
    bfs(0,0);
    printf("%d", dist[N-1][M-1]);
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
        if(x > 0 && maze[x-1][y] != 0){
            if(dist[x-1][y] == 0){
                q.push((x-1)*M + y);
                dist[x-1][y] = dist[x][y]+1;
            }
        }
        if(x < N-1 && maze[x+1][y] != 0){
            if(dist[x+1][y] == 0){
                q.push((x+1)*M + y);
                dist[x+1][y] = dist[x][y]+1;
            }
        }
        if(y > 0 && maze[x][y-1] != 0){
            if(dist[x][y-1] == 0){
                q.push(x*M + y-1);
                dist[x][y-1] = dist[x][y]+1;
            }
        }
        if(y < M-1 && maze[x][y+1] != 0){
            if(dist[x][y+1] == 0){
                q.push(x*M + y+1);
                dist[x][y+1] = dist[x][y]+1;
            }
        }
    }
}

