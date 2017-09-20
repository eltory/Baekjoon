//
//  1193__분수찾기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 19..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int main(){
    int cycle = 1, count = 0, dif = 0, N;
    scanf("%d", &N);
    while(1){
        if(cycle*(cycle-1)/2 < N && N <= cycle*(cycle+1)/2){
            dif = (cycle*(cycle+1)/2) - N;
            if(cycle%2)
                printf("%d/%d", dif+1, cycle - dif);
            else
                printf("%d/%d", cycle - dif, dif+1);
            return 0;
        }count++;
        if(count == cycle*(cycle+1)/2)
            cycle++;
    } return 0;
}
