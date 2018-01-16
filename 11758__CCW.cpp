//
//  11758__CCW.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 12..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  단순 CCW -> 선분(벡터)로 나타내어 벡터의 곱으로도 풀기
 */
#include <stdio.h>
#include <algorithm>
using namespace std;
typedef pair<int, int> P;

int main(){
    P p[3];
    for(int i = 0; i < 3; ++i)
        scanf("%d %d", &p[i].first, &p[i].second);
    int op = p[0].first * p[1].second + p[1].first * p[2].second + p[2].first * p[0].second -
    (p[0].second * p[1].first + p[1].second * p[2].first + p[2].second * p[0].first);
    if(op > 1)
        printf("1");
    else if(op == 0)
        printf("0");
    else
        printf("-1");
    return 0;
}

