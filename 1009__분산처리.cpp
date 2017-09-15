//
//  1009__분산처리.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 15..
//  Copyright © 2017년 LSH. All rights reserved.
//
//
#include <stdio.h>
int data_1[4][4]={
    {2,4,8,6},
    {3,9,7,1},
    {7,9,3,1},
    {8,4,2,6}
};
int data_2[2][2] = {
    {4,6},
    {9,1}
};
int main(){
    int T;
    int a, b;
    scanf("%d", &T);
    while(T--){
        scanf("%d %d", &a, &b);
        a = a % 10;
        if (a == 0)
            printf("10\n");
        else if(a == 1 || a == 5 || a == 6)
            printf("%d\n",a);
        else if(a == 2 || a == 3 || a == 7 || a == 8){
            while(b >= 4)
                b = b % 4;
            b = (b + 3) % 4;
            if(a == 2)
                printf("%d\n", data_1[0][b]);
            else if(a == 3)
                printf("%d\n", data_1[1][b]);
            else if(a == 7)
                printf("%d\n", data_1[2][b]);
            else
                printf("%d\n", data_1[3][b]);
        }else{
            while(b >= 2)
                b = b % 2;
            b = (b + 1) % 2;
            if(a == 4)
                printf("%d\n", data_2[0][b]);
            else
                printf("%d\n", data_2[1][b]);
        }
    }
    return 0;
}
