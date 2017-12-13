//
//  1005__ACMcraft.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 12..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;

int main(){
    int T, N, K, X, Y, W;
    scanf("%d", &T);
    while(T--){vector<vector<int>> adj;
        vector<int> degree;
        vector<int> cost;
        vector<int> build;
        queue<int> order;
        scanf("%d %d", &N, &K);
        cost.resize(N), degree.resize(N), adj.resize(N), build.resize(N);
        for(int i = 0; i < N; ++i){
            scanf("%d", &cost[i]);
            build[i] = cost[i];
        }
        for(int i = 0; i < K; ++i){
            scanf("%d %d", &X, &Y);
            adj[X-1].push_back(Y-1);
            degree[Y-1]++;
        } scanf("%d", &W);
        for(int i = 0; i < N; ++i)
            if(degree[i] == 0)
                order.push(i);
        for(int i = 0; i < N; ++i){
            int from = order.front(); order.pop();
            for(int to : adj[from]){
                build[to] = max(build[to], build[from] + cost[to]);
                if(--degree[to] == 0)
                    order.push(to);
            }
        } printf("%d\n", build[W-1]);
    } return 0;
}



