//
//  11437__LCA.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 2. 9..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  Sparse Table을 이용한 LCA 구하기
 */
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
const int MAX_N = 50001;
int N, M, parent[MAX_N][18];
vector<vector<int>> adj;
vector<int> d, visit;
void dfs(int u){
    for(int i = 1; (1<<i) <= d[u]; ++i)
        parent[u][i] = parent[parent[u][i-1]][i-1];
    for(auto v : adj[u]){
        if(d[v] == -1){
            d[v] = d[u]+1;
            parent[v][0] = u;
            dfs(v);
        }
    }
}

int lca(int x, int y){
    if(d[x] > d[y])
        swap(x, y);
    for(int i = 17; i >= 0; --i){
        if(d[y] - d[x] >= 1 << i)
            y = parent[y][i];
    }
    if(x == y) return x;
    for(int i = 17; i >= 0; --i){
        if(parent[x][i] != parent[y][i]){
            x = parent[x][i];
            y = parent[y][i];
        }
    }
    return parent[x][0];
}

int main(){
    int x, y;
    scanf("%d", &N);
    adj.resize(N+1);
    d.resize(N+1);
    fill(d.begin(), d.end(), -1);
    visit.resize(N+1);
    for(int i = 0; i < N-1; ++i){
        scanf("%d %d", &x, &y);
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    d[1] = 0;
    dfs(1);
    scanf("%d", &M);
    while(M--){
        scanf("%d %d", &x, &y);
        printf("%d\n", lca(x, y));
    }
    return 0;
}

