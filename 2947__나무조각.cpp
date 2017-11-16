//
//  2947__나무조각.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 11. 14..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>

int main(){
    int wood[5];
    for(int i = 0; i < 5; ++i)
        scanf("%d", &wood[i]);
    for(int i = 0; i < 4; ++i)
        for(int j = 0; j < 5; ++j){
            if(wood[j] > wood[j+1]){
                int tmp = wood[j+1];
                wood[j+1] = wood[j];
                wood[j] = tmp;
                for(int k = 0; k < 5; ++k)
                    printf("%d ", wood[k]);
                printf("\n");
            }
        }
    return 0;
}

