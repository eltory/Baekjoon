//
//  1976__여행가자.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 22..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
using namespace std;

const int MAX_N = 201;
int V[MAX_N];
int H[MAX_N];
int find_set(int);
void union_set(int, int);
int main(){
    std::ios::sync_with_stdio(false);
    int N, M, edge;
    cin >> N >> M;
    fill(V, V + N, -1);
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j){
            cin >> edge;
            if(edge == 1)
                union_set(i, j);
        }
    }
    int prev = -1, curr;
    while(M--){
        cin >> curr;
        if(prev != -1 && find_set(prev) != find_set(curr)){
            cout << "NO" << endl;
            return 0;
        } prev = curr;
    }
    cout << "YES" << endl;
    return 0;
}

int find_set(int a){
    if(V[a] < 0)
        return a;
    return V[a] = find_set(V[a]);
}

void union_set(int a, int b){
    a = find_set(a);
    b = find_set(b);
    if(a == b)
        return;
    if(a > b)
        swap(a, b);
    V[b] = a;
}


