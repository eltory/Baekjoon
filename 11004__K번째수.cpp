//
//  11004__K번째수.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 19..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<int> A;
    int N, K;
    scanf("%d %d", &N, &K);
    A.resize(N);
    for(int i = 0; i < N; ++i)
        scanf("%d", &A[i]);
    nth_element(A.begin(), A.begin() + K-1, A.end());
    printf("%d", A[K-1]);
    return 0;
}
