//
//  숫자의 합__11720.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 5..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <bits/stdc.h>

int main(){
    int T, N, result = 0;
    scanf("%d",&T);
    while(T--){
        scanf("%1d",&N);
        result += N;
    }
    printf("%d",result);
    return 0;
}
