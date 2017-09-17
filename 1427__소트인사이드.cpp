//
//  소트인사이드__1427.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 6..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
using namespace std;

int main(){
    int N[10] = {0}, i = 0;
    long long num;
    scanf("%lld",&num);
    while(num){
        N[i] = num % 10;
        num /= 10;
        i++;
    }
    sort(N, N+i);
    for(int j = i-1; j >= 0 ; --j)
        printf("%d",N[j]);
    return 0;
}
