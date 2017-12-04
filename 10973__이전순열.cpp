//
//  10973__이전순열.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 1..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int N, p;
    vector<int> permutation;
    scanf("%d", &N);
    
    for(int i = 0; i < N; ++i){
        scanf("%d", &p);
        permutation.push_back(p);
    }
    if(prev_permutation(permutation.begin(), permutation.end())){
        for(int i = 0; i < N; ++i)
            printf("%d ", permutation[i]);
        printf("\n");
    }else
        printf("-1\n");
    return 0;
}


