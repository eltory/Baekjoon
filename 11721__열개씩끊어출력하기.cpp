//
//  열개씩끊어출력하기__11721.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 9..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
char buf[101];
int i = 0;
int main(){
    scanf("%s", buf);
    while(1){
        if(buf[i] == '\0')
            return 0;
        printf("%c",buf[i++]);
        if(i % 10 == 0)
            printf("\n");
    }
    return 0;
}

