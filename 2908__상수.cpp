//
//  2908__상수.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 22..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>
int main(){
    char A[4], B[4], tmp;
    int a, b;
    scanf("%s %s", A, B);
        tmp = A[2];
        A[2] = A[0];
        A[0] = tmp;
        tmp = B[2];
        B[2] = B[0];
        B[0] = tmp;
    a = atoi(A), b = atoi(B);
    if(a>b)
        printf("%s", A);
    else
        printf("%s", B);
    return 0;
}
