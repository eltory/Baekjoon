//
//  DFS와BFS__1260.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 9..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
void DFS(int );
void BFS(int );
vector<vector<int>> adj;
vector<int> visited;
int main(){
    int N, M, V;
    int u, v;
    scanf("%d %d %d", &N, &M, &V);
    adj.resize(N);
    visited.resize(N);
    while (M--) {
        scanf("%d %d", &u, &v);
        adj[u-1].push_back(v-1);
        adj[v-1].push_back(u-1);
    }
    for(int i = 0; i < N; ++i)
        sort(adj[i].begin(), adj[i].end());
    DFS(V-1);
    printf("\n");
    BFS(V-1);
    return 0;
}

void DFS(int here){
    printf("%d ", here+1);
    visited[here] = true;
    for(int i = 0; i < adj[here].size(); ++i){
        int there = adj[here][i];
        if(!visited[there])
            DFS(there);
    }
}

void BFS(int start){
    vector<bool> discovered(adj.size(), false);
    queue<int> q;
    discovered[start] = true;
    q.push(start);
    while(!q.empty()){
        int here = q.front();
        q.pop();
        printf("%d ", here+1);
        for(int i = 0; i < adj[here].size(); ++i){
            int there = adj[here][i];
            if(!discovered[there]){
                q.push(there);
                discovered[there] = true;
            }
        }
    }
}
