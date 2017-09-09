//
//  별찍기2__2439.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 5..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    for(int i = 1; i <= N; ++i){
        for(int j = 1; j < i; ++j)
            printf(" ");
        for(int j = N - i; j >= 0; --j)
            printf("*");
        printf("\n");
    }
    return 0;
}
