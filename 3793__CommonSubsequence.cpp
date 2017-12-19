//
//  3793__CommonSubsequence.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 19..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <iostream>
#include <string>
#include <stack>
#include <algorithm>
using namespace std;
stack<char> seq;
string str1, str2;
int lcs[1001][1001];
int dx[3] = {-1, 0, -1};
int dy[3] = {0, -1, -1};

int main(){
    string tmp1, tmp2;
    while(cin >> tmp1 >> tmp2){
        str1 = '0' + tmp1;
        str2 = '0' + tmp2;
        
        int len1 = str1.size(), len2 = str2.size();
        int i, j;
        for(int i = 0; i < len1; ++i){
            for(int j = 0; j < len2; ++j){
                if(i == 0 || j == 0){
                    lcs[i][j] = 0;
                    continue;
                }
                if(str1[i] == str2[j])
                    lcs[i][j] = lcs[i-1][j-1] + 1;
                else
                    lcs[i][j] = max(lcs[i-1][j], lcs[i][j-1]);
            }
        } cout << lcs[len1 - 1][len2 - 1] << endl;
    } return 0;
}
