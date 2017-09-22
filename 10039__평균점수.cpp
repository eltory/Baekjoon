//
//  10039__평균점수.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 22..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int main(){
    int total = 0, num = 5, input;
    while(num--){
        scanf("%d", &input);
        if(input < 40)
            input = 40;
        total += input;
    } printf("%d", total / 5);
    return 0;
}
