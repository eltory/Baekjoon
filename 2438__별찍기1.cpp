//
//  2438__별찍기2.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 10. 13..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        for(j=1;j<=i;++j)
            printf("*");
        printf("\n");
    } return 0;
}
