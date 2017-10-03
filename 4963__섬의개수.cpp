//
//  4963__섬의개수.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 10. 1..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int dx[8] = {-1,0,1,1,1,0,-1,-1};
int dy[8] = {-1,-1,-1,0,1,1,1,0};
int map[50][50];
void island(int, int);
int count;
int w, h;
int main(){
    while(scanf("%d %d", &h, &w) && (w || h != 0)){
        count = 0;
        for(int i = 0; i < w; ++i)
            for(int j = 0; j < h; ++j)
                scanf("%d", &map[i][j]);
        for(int i = 0; i < w; ++i)
            for(int j = 0; j < h; ++j){
                if(map[i][j]){
                    island(i, j);
                    count++;
                }
            }
        printf("%d\n",count);
    } return 0;
}
void island(int i, int j){
    map[i][j] = 0;
    for(int k = 0; k < 8; ++k){
        int nx = i + dx[k];
        int ny = j + dy[k];
        if(nx < 0 || ny < 0 || nx > w-1 || ny > h-1)
            continue;
        if(map[nx][ny])
            island(nx, ny);
    }
}

