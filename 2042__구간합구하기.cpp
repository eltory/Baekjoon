//
//  2042__구간합구하기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 26..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  펜윅트리를 이용한 구간 합
 */
#include <stdio.h>
#include <vector>
using namespace std;
vector<long> arr;
vector<long> tree;
int N, M, K;
int a, b, c;

void update(int idx, long val){
    while(idx <= N){
        tree[idx] += val;
        idx += (idx & -idx);
    }
}
long sum(int idx){
    long s = 0;
    while(idx > 0){
        s += tree[idx];
        idx &= (idx - 1);
    }
    return s;
}
int main(){
    scanf("%d %d %d", &N, &M, &K);
    arr.resize(N+1);
    tree.resize(N+1);
    for(int i = 1; i <= N; ++i){
        scanf("%ld", &arr[i]);
        update(i, arr[i]);
    }
    for(int i = 1; i <= M + K; ++i){
        scanf("%d %d %d", &a, &b, &c);
        if(a == 1){ update(b, c - arr[b]); arr[b] = c;}
        else printf("%ld\n", sum(c) - sum(b-1));
    }
    return 0;
}


