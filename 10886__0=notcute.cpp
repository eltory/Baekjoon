//
//  0=notcute__10886.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 7..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
int main(){
    int N, tmp;
    vector<bool> cute, n_cute;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &tmp);
        if(tmp == 1)
            cute.push_back(1);
        else
            n_cute.push_back(1);
    }
    if(cute.size() > n_cute.size())
        printf("Junhee is cute!");
    else
        printf("Junhee is not cute!");
    return 0;
}
