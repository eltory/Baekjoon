//
//  4673__셀프넘버.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 18..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <cstring>
using namespace std;
bool isSelfNum[10003];
void SelfNum(int);
int main(){
    memset(isSelfNum, true, sizeof(isSelfNum));
    for(int i = 1; i <= 10000; ++i)
        SelfNum(i);
    for(int i = 1; i <= 10000; ++i)
        if(isSelfNum[i] == true)
            printf("%d\n", i);
    return 0;
}

void SelfNum(int n){
    int self_num = n;
    while(n){
        self_num += n % 10;
        n /= 10;
    } isSelfNum[self_num] = false;
}
