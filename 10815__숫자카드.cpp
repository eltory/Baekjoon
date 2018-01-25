//
//  10815__숫자카드.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 12..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  단순 이분탐색
 */
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> card;
int main(){
    int N, M, num;
    scanf("%d", &N);
    card.resize(N);
    for(int i = 0; i < N; ++i)
        scanf("%d", &card[i]);
    sort(card.begin(), card.end());
    scanf("%d", &M);
    for(int i = 0; i < M; ++i){
        scanf("%d", &num);
        printf("%d ", binary_search(card.begin(), card.end(), num) ? 1 : 0);
    }
    return 0;
}

