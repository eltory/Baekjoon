//
//  1766__문제집.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 12..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  위상정렬이긴 한데, 난이도 순서가 각자 있기 때문에 priority_queue를 이용하여 난이도가 낮은 순의 위상정렬을 함
 */
#include <stdio.h>
#include <vector>
#include <queue>
using namespace std;
typedef pair<int, int> P;
vector<vector<int>> adj;
vector<int> degree;

int main(){
    int N, M;
    int a, b;
    priority_queue<P, vector<P>, greater<P>> order;
    scanf("%d %d", &N, &M);
    adj.resize(N);
    degree.resize(N);
    for(int i = 0; i < M; ++i){
        scanf("%d %d", &a, &b);
        adj[a-1].push_back(b-1);
        degree[b-1]++;
    }
    for(int i = 0; i < degree.size(); ++i)
        if(degree[i] == 0)
            order.push(P(0, i));

    while(!order.empty()){
        P p = order.top(); order.pop();
        int u = p.second;
        printf("%d ", u + 1);
        for(int v : adj[u])
            if(--degree[v] == 0)
                order.push(P(0, v));
    }
    return 0;
}
