//
//  1094.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 9..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int main(){
    int X, num = 0;
    scanf("%d", &X);
    for(int i = 64; i > 0; i/=2){
        if(!X)
            break;
        if(i <= X){
            num++;
            X -= i;
        }
    }
    printf("%d", num);
    return 0;
}
