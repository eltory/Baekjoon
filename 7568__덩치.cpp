//
//  7568__덩치.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 10. 10..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int people[50][3] = {0};
int main(){
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; ++i)
        scanf("%d %d", &people[i][0], &people[i][1]);
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < N; ++j)
            if(people[i][0] < people[j][0] && people[i][1] < people[j][1])
                people[i][2]++;
        printf("%d ",people[i][2]+1);
    } return 0;
}
