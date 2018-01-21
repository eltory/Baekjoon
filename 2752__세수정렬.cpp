//
//  2752__세수정렬.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 18..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  단순 정렬
 */
#include <stdio.h>
#include <algorithm>
using namespace std;
int main(){
    int n[3];
    scanf("%d %d %d", &n[0], &n[1], &n[2]);
    sort(n,n+3);
    printf("%d %d %d", n[0], n[1], n[2]);
    return 0;
}

