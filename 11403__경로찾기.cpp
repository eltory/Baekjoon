//
//  11403__경로찾기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 11. 14..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
using namespace std;
const int INF = 1e8;
const int MAX_N = 100;

int path[MAX_N][MAX_N];

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < n; ++j){
            scanf("%d", &path[i][j]);
            if(path[i][j] == 0)
                path[i][j] = INF;
        }
    for(int k = 0; k < n; ++k)
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                path[i][j] = min(path[i][j], path[i][k] + path[k][j]);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j)
            printf("%d ", path[i][j] == INF ? 0 : 1);
        printf("\n");
    } return 0;
}

