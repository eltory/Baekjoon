//
//  1157__단어공부.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 5..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  단순 char형 변환 및 개수 구하기
 */
#include <iostream>
using namespace std;
int alpha[26];
int main(){
    ios::sync_with_stdio(false);
    string word;
    int n, max_preq = 0, num = 0, idx = 0;
    bool many = false;
    cin >> word;
    n = word.size();
    for(int i = 0; i < n; ++i){
        if('a' <= word[i] && word[i] <= 'z')
            alpha[word[i] - ('a' - 'A')]++;
    }
    max_preq = alpha[0];
    for(int i = 1; i < 26; ++i){
        if(max_preq == alpha[i]) many = true;
        if(max_preq < alpha[i]){
            idx = i;
            max_preq = alpha[i];
            many = false;
        }
    }
    printf("%c", many ? '?' : (char)('A' + idx));
    return 0;
}

