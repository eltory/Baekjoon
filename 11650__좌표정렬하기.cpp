//
//  11650__좌표정렬하기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 23..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  priority_queue 를 이용한 단순 정리 -> sort 이용으로 시간 단축
 */
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> P;
vector<P> loc;

int main (){
    int N;
    scanf("%d", &N);
    while(N--){
        P p;
        scanf("%d %d", &p.first, &p.second);
        loc.push_back(p);
    }
    sort(loc.begin(), loc.end());
    for(auto p : loc)
        printf("%d %d\n", p.first, p.second);
    return 0;
}

