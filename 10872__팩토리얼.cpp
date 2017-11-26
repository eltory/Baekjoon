//
//  10872__팩토리얼.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 11. 22..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int main(){
    int N, factorial = 1;
    scanf("%d", &N);
    for(int i = 1; i <= N; ++i)
        factorial *= i;
    printf("%d", factorial);
    return 0;
}


