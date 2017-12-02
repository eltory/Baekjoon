//
//  2252__줄세우기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 2..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;
queue<int> order;
vector<vector<int>> adj;
vector<int> degree;

int main(){
    int N, M, a, b;
    scanf("%d %d", &N, &M);
    degree.resize(N);
    adj.resize(N);
    for(int i = 0; i < M; ++i){
        scanf("%d %d", &a, &b);
        adj[a-1].push_back(b-1);
        degree[b-1]++;
    }
    for(int i = 0; i < N; ++i)
        if(degree[i] == 0)
            order.push(i);
    while(!order.empty()){
        int from = order.front();
        printf("%d ", from + 1);
        order.pop();
        for(int to : adj[from])
            if(--degree[to] == 0)
                order.push(to);
    } return 0;
}
