//
//  최단경로(1753).cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 8. 4..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <cstdio>
#include <queue>
#include <algorithm>
using namespace std;
const int MAX = 20000;
const int INF = 999999999;
vector<pair<int, int>> adj[MAX];
vector<bool> visited = {0};
priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> Q;
int dist[MAX];
int main(){
    int V, E, K;
    int u, v, w;
    scanf("%d %d", &V, &E);
    scanf("%d", &K);
    for(int i = 0; i < E; ++i){
        scanf("%d %d %d", &u, &v, &w);
        adj[u-1].push_back(make_pair(v-1, w));
    }
    fill(dist, dist+MAX, INF);
    dist[K-1] = 0;
    Q.push(make_pair(K-1, 0));
    while(!Q.empty()){
        int here = Q.top().first;
        Q.pop();

        for(pair<int, int> P : adj[here]){
            int next = P.first;
            int dis = P.second;
            if (dist[next] > dist[here] + dis) {
                dist[next] = dist[here] + dis;
                Q.push(make_pair(next, dist[next]));
            }
        }
    }
    for(int i = 0; i < V; ++i){
        if(dist[i] == INF)
            printf("INF\n");
        else
            printf("%d\n",dist[i]);
    }
    return 0;
}
