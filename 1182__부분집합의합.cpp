//
//  1182__부분집합의합.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 12..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int input[20];
int N, S;
int cnt = 0;
void comb(int, int);

int main(){
    scanf("%d %d", &N, &S);
    for(int i = 0; i < N; ++i)
        scanf("%d", &input[i]);
    comb(0,0);
    printf("%d", cnt);
    return 0;
}

void comb(int sum, int i){
    if(i == N)
        return;
    sum += input[i];
    if(sum == S)
        cnt++;
    comb(sum, i+1);
    comb(sum - input[i], i+1);
}

