//
//  1916__최소비용구하기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 11. 7..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <cstdio>
#include <vector>
#include <queue>
using namespace std;
const int MAX_V = 1000;
const int INF = 1e10;
typedef pair<int, int> P;

int dist[MAX_V];
vector<P> adj[MAX_V];
priority_queue<P, vector<P>, greater<P>> PQ;

int main(){
    int V, E, start, end;
    scanf("%d", &V);
    scanf("%d", &E);
    for(int i = 0; i < E; ++i){
        int u, v, w;
        scanf("%d %d %d", &u, &v, &w);
        adj[u-1].push_back(P(v-1,w));
    }
    scanf("%d %d", &start, &end);
    start--, end--;
    fill(dist, dist+MAX_V, INF);
    dist[start] = 0;
    PQ.push(P(start, dist[start]));
    
    while(!PQ.empty()){
        int here = PQ.top().first; PQ.pop();
        for(int i = 0; i < adj[here].size(); ++i){
            int next = adj[here][i].first, d = adj[here][i].second;
            if(dist[next] > dist[here] + d){
                dist[next] = dist[here] + d;
                PQ.push(P(next, dist[next]));
            }
        }
    }
    printf("%d\n",dist[end]);
    return 0;
}

