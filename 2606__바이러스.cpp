//
//  2606__바이러스.cpp
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

int computer[MAX_N][MAX_N];
int total = 0;

int main(){
    int n, m, a, b;
    scanf("%d", &n);
    scanf("%d", &m);
    for(int i = 0; i < n; ++i){
        fill(computer[i], computer[i] + n, INF);
        computer[i][i] = 0;
    }
    for(int i = 0; i < m; ++i){
        scanf("%d %d", &a, &b);
        computer[a-1][b-1] = 1;
        computer[b-1][a-1] = 1;
    }
    for(int k = 0; k < n; ++k)
        for(int i = 0; i < n; ++i)
            for(int j = 0; j < n; ++j)
                computer[i][j] = min(computer[i][j], computer[i][k] + computer[k][j]);
    for(int i = 0; i < n; ++i)
        if(computer[0][i] != INF)
            total++;
    printf("%d", total-1);
    return 0;
}

