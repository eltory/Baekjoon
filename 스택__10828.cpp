//
//  스택__10828.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 7..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <string.h>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    char buf[10];
    int N, input;
    scanf("%d", &N);
    while(N--){
        scanf("%s", buf);
        if(strcmp(buf, "push") == 0){
            scanf("%d", &input);
            s.push(input);
        }else if(strcmp(buf, "pop") == 0){
            if(!s.empty()){
                printf("%d\n",s.top());
                s.pop();
            }else
                printf("-1\n");
        }else if(strcmp(buf, "size") == 0){
            printf("%lu\n",s.size());
        }else if(strcmp(buf, "empty") == 0){
            if(s.empty())
                printf("1\n");
            else
                printf("0\n");
        }else{
            if(!s.empty())
                printf("%d\n",s.top());
            else
                printf("-1\n");
        }
    } return 0;
}
