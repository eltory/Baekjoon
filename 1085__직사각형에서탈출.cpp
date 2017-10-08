//
//  1085__직사각형에서탈출.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 10. 9..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int main(){
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    printf("%d",min(min(a,b),min(c-a,d-b)));
    return 0;
}

