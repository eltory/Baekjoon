//
//  1197__최소스패닝트리.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 22..
//  Copyright © 2017년 LSH. All rights reserved.
//

/**
 * 크루스칼을 이용한 단순 최소스패닝트리
 */
#include <stdio.h>
#include <algorithm>
#include <queue>
#include <vector>
using namespace std;
typedef struct edge{
    int u, v, w;
    bool operator < (const edge &a) const {return w < a.w;}
}edge;
vector<edge> edges;
vector<int> N;
int find_set(int);
bool union_set(int, int);

int main(){
    int V, E, sum = 0, t = 0;
    scanf("%d %d", &V, &E);
    N.resize(E+1);
    fill(N.begin(), N.end(), -1);
    for(int i = 0; i < E; ++i){
        int u, v, w;
        edge e;
        scanf("%d %d %d", &u, &v, &w);
        e.u = u-1;
        e.v = v-1;
        e.w = w;
        edges.push_back(e);
    }
    sort(edges.begin(), edges.end());
    for(int i = 0; i < E; ++i){
        if(union_set(edges[i].u, edges[i].v)){
            sum += edges[i].w;
            if(++t == V-1){
                printf("%d", sum);
                return 0;
            }
        }
    } return 0;
}

int find_set(int a){
    if(N[a] < 0)
        return a;
    return N[a] = find_set(N[a]);
}

bool union_set(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a == b)
        return false;
    if(a > b)
        swap(a, b);
    N[b] = a;
    return true;
}


