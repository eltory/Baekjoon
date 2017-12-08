//
//  10868__최소값.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 8..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
const int INF = 1e9;
typedef pair<int, int> P;
vector<int> input;
vector<P> p;
vector<int> tree;
int make_segment_tree(int, int, int);
int find_min(int, int, int, int, int);

int main(){
    int N, M;
    scanf("%d %d", &N, &M);
    input.resize(N+1);
    for(int i = 1; i <= N; ++i)
        scanf("%d", &input[i]);
    for(int i = 0; i < M; ++i){
        int a, b;
        scanf("%d %d", &a, &b);
        p.push_back(P(a, b));
    }
    tree.resize(4 * input.size());
    make_segment_tree(1, input.size()-1, 1);
    for(P i : p){
        int a = i.first, b = i.second;
        printf("%d\n", find_min(1, input.size()-1, a, b, 1));
    } return 0;
}

int make_segment_tree(int left, int right, int idx){
    if(left == right)
        return tree[idx] = input[left];
    int mid = (left + right) / 2;
    return tree[idx] = min(make_segment_tree(left, mid, idx * 2),make_segment_tree(mid + 1, right, idx * 2 + 1));
}

int find_min(int start, int end, int left, int right, int idx){
    if (left > end || right < start)
        return INF;
    if (left <= start && end <= right)
        return tree[idx];
    int mid = (start + end) / 2;
    return min(find_min(start, mid, left, right, idx * 2), find_min(mid+1, end, left, right, idx * 2 + 1));
}

