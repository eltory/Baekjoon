//
//  2170__선긋기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 2. 1..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  라인스위핑 이용
 */
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> P;
vector<P> line;

int main(){
    int l, r, length = 0;
    int N;
    scanf("%d", &N);
    line.resize(N);
    for(int i = 0; i < N; ++i){
        scanf("%d %d", &line[i].first, &line[i].second);
    }
    sort(line.begin(), line.end());
    l = line[0].first;
    r = line[0].second;
    length = r-l;
    for(int i = 1; i < N; ++i){
        if(l <= line[i].first && line[i].first <= r && r <= line[i].second){
            length += (line[i].second - r);
            r = line[i].second;
        }else if(r < line[i].first){
            l = line[i].first;
            r = line[i].second;
            length += (r-l);
        }
    }
    printf("%d", length);
    return 0;
}

