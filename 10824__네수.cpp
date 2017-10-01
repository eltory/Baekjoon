//
//  10824__네수.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 10. 2..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int main(){
    long long A, B, C, D, sum = 0;
    scanf("%lld %lld %lld %lld", &A, &B, &C, &D);
    sum += (B + D);
    while(B!=0 || D!= 0){
        if(B!=0)
            A *= 10;
        if(D!=0)
            C *= 10;
        B/=10, D/=10;
    }
    sum += (A + C);
    printf("%lld", sum);
    return 0;
}

