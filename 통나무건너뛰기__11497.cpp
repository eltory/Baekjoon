//
//  통나무건너뛰기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 7. 28..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <cstdio>
#include <algorithm>
using namespace std;
int m[100000] = {0};
int T, n, i;
int main(){
    scanf("%d",&T);
    while(T--){
        int min = 0;
        scanf("%d",&n);
        for(i = 0; i < n; ++i)
            scanf("%d",&m[i]);
        sort(m, m + n);
        if(m[0] == m[n - 1])
            printf("%d\n", min);
        else{
            for(i = 2; i < n; i+=2){
                min = max(min, m[i] - m[i - 2]);
                min = max(min, m[i + 1] - m[i - 1]);
            }printf("%d\n", min);
        }
    } return 0;
}
