//
//  1927__최소힙.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 5..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <queue>
using namespace std;
priority_queue<int> pq;
int main(){
    int N, x;
    scanf("%d",&N);
    for(int i = 0; i < N; ++i){
        scanf("%d", &x);
        if(x == 0){
            if(!pq.empty()){
                printf("%d\n", pq.top());
                pq.pop();
            }else
                printf("0\n");
        }else
             pq.push(x);
    } return 0;
}



