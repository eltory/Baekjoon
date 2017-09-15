//
//  1010__다리놓기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 15..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int dp[31][31];
int main(){
    int T;
    int N, M;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &N, &M);
        for(int i = 1; i < 30; ++i)
            dp[1][i] = i;
        for(int i = 2; i <= N; ++i)
            for(int j = 2; j <= M; ++j)
                dp[i][j] = dp[i][j-1] + dp[i-1][j-1];
        printf("%d\n",dp[N][M]);
    } return 0;
}
