//
//  2623__음악프로그램.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 22..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  위상정렬 한번에 처리하기
 */
#include <iostream>
#include <vector>
#include <queue>
using namespace std;
const int MAX_N = 1001;
vector<int> adj[MAX_N];
vector<int> dgr;
vector<int> seq;
queue<int> q;

int main(){
    ios::sync_with_stdio(false);
    int N, M, input;
    cin >> N >> M;
    dgr.resize(N+1);
    seq.resize(N);
    for(int i = 0; i < M; ++i){
        cin >> input;
        int curr;
        cin >> curr;
        for(int j = 0; j < input-1; ++j){
            int next;
            cin >> next;
            adj[curr].push_back(next);
            dgr[next]++;
            curr = next;
        }
    }
    for(int i = 1; i <= N; ++i)
        if(dgr[i] == 0)
            q.push(i);
    for(int i = 1; i <= N; ++i){
        if(q.empty()){
            cout << 0;
            return 0;
        }
        int u = q.front(); q.pop();
        seq[i-1] = u;
        for(int v : adj[u])
            if(--dgr[v] == 0)
                q.push(v);
    }
    for(int n : seq)
        cout << n << endl;
    return 0;
}
