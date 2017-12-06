//
//  1516__게임개발.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 6..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;
vector<int> degree;
vector<int> building;
vector<int> cost;
vector<vector<int>> adj;
queue<int> tps;

int main(){
    int N;
    scanf("%d", &N);
    degree.resize(N);
    adj.resize(N);
    for(int i = 0; i < N; ++i){
        int a;
        scanf("%d", &a);
        building.push_back(a);
        cost.push_back(a);
        while(scanf("%d", &a) && a != -1){
            adj[a-1].push_back(i);
            degree[i]++;
        }
    }
    for(int i = 0; i < degree.size(); ++i)
        if(degree[i] == 0)
            tps.push(i);
    while(!tps.empty()){
        int i = tps.front(); tps.pop();
        for(int to : adj[i]){
            cost[to] = max(cost[to], building[to] + cost[i]);
            if(--degree[to] == 0)
                tps.push(to);
        }
    }
    for(int i : cost)
        printf("%d\n", i);
    return 0;
}
