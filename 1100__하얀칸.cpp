//
//  1100__하얀칸.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 10. 10..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int main(){
    char game[8][9];
    int count = 0;
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 9; ++j){
            game[i][j] = getchar();
        }
    }
    for(int i = 0; i < 8; ++i){
        for(int j = 0; j < 9; ++j){
            if(game[i][j] == 'F' && (i + j) % 2 == 0)
                count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
