//
//  1547__공.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 10. 7..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>

int main(){
    bool cup[3] = {true,}, tmp;
    int X, Y, M;
    scanf("%d", &M);
    while(M--){
        scanf("%d %d", &X, &Y);
        if(X!=Y){
            tmp = cup[X-1];
            cup[X-1] = cup[Y-1];
            cup[Y-1] = tmp;
        }
    }
    for(int i = 0; i < 3; ++i)
        if(cup[i])
            printf("%d", i+1);
    return 0;
}

