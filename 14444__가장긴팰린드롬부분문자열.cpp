//
//  14444__가장긴팰린드롬부분문자열.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 2. 5..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 * Manacher 알고리즘 이용 
 */
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
string S, tmp;
vector<int> A;
int manacher(int N){
    int r = 0, p = 0, max_r = 0;
    for(int i = 0; i < N; i++){
        A[i] = i > r ? 0 : min(A[2*p-i], r-i);
        while(i-A[i]-1 >= 0 && i+A[i]+1 < N && S[i-A[i]-1] == S[i+A[i]+1])
            A[i]++;
        if(r < i+A[i]){
            r = i+A[i];
            p = i;
        }
        max_r = max(max_r, A[i]);
    }
    return max_r;
}

int main(){
    std::ios::sync_with_stdio(false);
    cin >> tmp;
    int N = tmp.size();
    S += '#';
    for(int i = 0; i < N; ++i){
        S += tmp[i];
        S += '#';
    }
    N = S.size();
    A.resize(N);
    cout << manacher(N);
    return 0;
}

