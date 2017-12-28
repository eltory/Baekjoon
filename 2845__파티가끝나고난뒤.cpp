//
//  2845__파티가끝나고난뒤.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 28..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int main(){
    int L, P;
    scanf("%d %d", &L, &P);
    for(int i = 0; i < 5; ++i){
        int input;
        scanf("%d", &input);
        printf("%d ", input - (L*P));
    } return 0;
}

