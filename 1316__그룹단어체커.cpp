//
//  1316__그룹단어체커.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 31..
//  Copyright © 2017년 LSH. All rights reserved.
//

/**
 *  그룹단어에서 핵심은 어떤 알파벳이 떨어져서 나오면 그룹단어가 아니라는 것을 착안하여 연속되지 않는 알파벳이 있다면 이전 존재 여부에 따라 구분할 수 있음
 */
#include <iostream>
#include <algorithm>
using namespace std;
int alpha[26];

int main(){
    int N, cnt = 0;
    string s;
    cin >> N;
    while(N--){
        cin >> s;
        fill(alpha, alpha+26, 0);
        for(int i = 0; i < s.size(); ++i){
            if((i > 0) && (s[i-1] != s[i]) && (alpha[s[i] - 'a'] > 0))
                break;
            alpha[s[i] - 'a']++;
            if(i == s.size() - 1)
                cnt++;
        }
    }
    cout << cnt;
    return 0;
}

