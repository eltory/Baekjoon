//
//  10610__30.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 12..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <functional>
using namespace std;
const int MAX_N = 100001;
int num[MAX_N-1];
char buf[MAX_N];
bool can = false;
bool isTree(int);

int main(){
    scanf("%s", buf);
    int N = strlen(buf), sum = 0;
    for(int i = 0; i < N; ++i){
        num[i] = buf[i] - '0';
        if(num[i] == 0)
            can = true;
        sum += num[i];
    }
    if(!can || !isTree(sum)){
        printf("-1\n");
        return 0;
    }
    sort(num, num + N, greater<int>());
    for(int i = 0; i < N; ++i)
        buf[i] = num[i] +'0';
    printf("%s",buf);
    return 0;
}

bool isTree(int sum){
    return sum % 3 == 0 ? true : false;
}
