//
//  10988__팰린드롬인지확인하기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 31..
//  Copyright © 2017년 LSH. All rights reserved.
//

/**
 *  manacher's algorithm 을 사용하려 했지만, 크기가 크지 않아 단순 loop로 같은지 다른지 확인
 */
#include <iostream>
using namespace std;
int main(){
    string word;
    cin >> word;
    int l = 0, r = word.size()-1;
    while(l < r){
        if(word[l] != word[r]){
            cout << 0;
            return 0;
        }l++, r--;
    }cout << 1;
    return 0;
}

