//
//  수찾기__1920.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 7..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> A;

int main(){
    int N, i = 0, val;
    scanf("%d" ,&N);
    A.resize(N);
    while(N--){
        scanf("%d",&A[i++]);
    }
    sort(A.begin(), A.end());
    scanf("%d",&N);
    while(N--){
        scanf("%d", &val);
        if(binary_search(A.begin(), A.end(), val))
            printf("1\n");
        else
            printf("0\n");
    }return 0;
}
