//
//  수정렬하기2(2751).cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 3..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
using namespace std;
int N[1000000];
int main(){
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; ++i)
        scanf("%d", &N[i]);
    sort(N, N+n);
    for(int i = 0; i < n; ++i)
        printf("%d\n", N[i]);
    return 0;
}
