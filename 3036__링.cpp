//
//  3036__링.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 4..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int ring[100];
int gcd(int, int);
int main(){
    int N;
    scanf("%d", &N);
    for (int i = 0; i < N; ++i){
        scanf("%d", &ring[i]);
        if(i != 0){
            int div = gcd(ring[0], ring[i]);
            printf("%d/%d\n", ring[0] / div, ring[i] / div);
        }
    } return 0;
}

int gcd(int a, int b){
    while (b != 0) {
        int r = a % b;
        a = b;
        b = r;
    } return a;
}

