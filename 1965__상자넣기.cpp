//
//  1965__상자넣기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 15..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> box;

int main(){
    int n, input, lis = 0;
    scanf("%d", &n);
    box.push_back(-1e9);
    for(int i = 0; i < n; ++i){
        scanf("%d", &input);
        if(box.back() < input){
            box.push_back(input);
            lis++;
        } else{
            auto idx = lower_bound(box.begin(), box.end(), input);
            *idx = input;
        }
    }
    printf("%d", lis);
    return 0;
}
