//
//  수정렬하기__2750.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 9..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <functional>
using namespace std;
int main(){
    int N, num[1000], i = 0;
    scanf("%d", &N);
    while(N--){
        scanf("%d", &num[i++]);
    }
    sort(num, num + i, greater<int>());
    while(i--){
        printf("%d\n",num[i]);
    } return 0;
}
