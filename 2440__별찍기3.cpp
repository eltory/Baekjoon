//
//  2440__별찍기3.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 10. 12..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int main(){
    int N;
    scanf("%d",&N);
    for(int i = 1; i <= N; ++i){
        for(int j = i; j <= N; ++j)
            printf("*");
        printf("\n");
    }
    return 0;
}
