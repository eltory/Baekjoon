//
//  11404__플로이드.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 11. 14..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
using namespace std;
const int INF = 1e9;
const int MAX_N = 100;
int cost[MAX_N][MAX_N];

int main(){
    int n, m;
    int a, b, c;
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i = 0; i < n; ++i){
        fill(cost[i], cost[i] + n, INF);
        cost[i][i] = 0;
    }
    for(int i = 0; i < m; ++i){
        scanf("%d %d %d", &a, &b, &c);
        cost[a-1][b-1] = min(cost[a-1][b-1], c);
    }
    for(int k = 0; k < n; ++k)
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                cost[i][j] = min(cost[i][j], cost[i][k] + cost[k][j]);
    for(int i = 0; i < n; ++i){
        for(int j = 0; j < n; ++j){
            printf("%d ", cost[i][j]);
        }printf("\n");
    } return 0;
}
