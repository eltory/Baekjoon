//
//  1546__평균.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 22..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int main(){
    int N, input, max = -1, total = 0;
    scanf("%d", &N);
    for(int i = 0; i < N; ++i){
        scanf("%d", &input);
        if(max < input)
            max = input;
        total += input;
    } printf("%0.2f", (float)total/N/max*100);
    return 0;
}
