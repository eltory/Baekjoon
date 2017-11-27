//
//  2920__음계.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 11. 21..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>

int main(){
    int piano[9], order[3];
    for(int i = 1; i <= 8; ++i)
        scanf("%d", &piano[i]);
    order[0] = piano[1] == 1 ? 1 : 0;
    order[1] = piano[1] == 8 ? 1 : 0;
    order[2] = (order[0] || order[1]) == 0 ? 1 : 0;
    for(int i = 1; i <= 8; ++i)
        if((order[0] && (piano[i] != i)) || (order[1] && (piano[i] != 9 - i)))
            order[2] = 1;
    if(order[2])
        printf("mixed");
    else
        printf("%s", order[0] == 1 ? "ascending" : "descending");
    return 0;
}

