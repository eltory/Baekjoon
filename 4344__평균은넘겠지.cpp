//
//  4344__평균은넘겠지.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 21..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
int main(){
    int C, N, total, up_num;
    float avg;
    vector<int> student;
    scanf("%d", &C);
    while(C--){
        total = up_num = 0;
        scanf("%d", &N);
        student.resize(N);
        for(int i = 0; i < N; ++i){
            scanf("%d", &student[i]);
            total += student[i];
        }
        avg = float(total / N);
        for(int i = 0; i < N; ++i){
            if(student[i] > avg)
                up_num++;
        }
        printf("%0.3f%%\n", 100*(float)up_num / N);
    } return 0;
}
