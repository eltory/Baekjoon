//
//  1110__더하기사이클.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 19..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>

int main(){
    int N, N_Num, cycle = 0;
    scanf("%d", &N);
    N_Num = N;
    while(1){
        N_Num = ((N_Num % 10) * 10) + (((N_Num % 10) + (N_Num / 10)) % 10);
        cycle++;
        if(N == N_Num){
            printf("%d", cycle);
            return 0;
        }
    } return 0;
}
