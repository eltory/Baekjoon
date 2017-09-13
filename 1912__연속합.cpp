//
//  1912__연속합.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 13..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;
int arr[100000], dp[100000];
int main(){
    int n, max = -999999999;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i){
        scanf("%d", &arr[i]);
    }
    dp[0] = arr[0];
    for(int i = 1; i < n; ++i){
        if(dp[i-1] + arr[i] > 0){
            if(dp[i-1] + arr[i] > arr[i])
                dp[i] = dp[i-1] + arr[i];
            else
                dp[i] = arr[i];
        }
        else
            dp[i] = arr[i];
    }
    for(int i = 0; i < n; ++i){
        if(max<dp[i])
            max = dp[i];
    }
    printf("%d",max);
    return 0;
}
