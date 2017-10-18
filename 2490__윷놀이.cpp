//
//  2490__윷놀이.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 10. 18..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int y[4] = {0};
int main(){
    for(int i = 0; i < 3; ++i){
        int k = 0;
        scanf("%d %d %d %d",&y[0], &y[1], &y[2], &y[3]);
        for(int j = 0; j < 4; ++j){
            if(y[j] == 1)
                k++;
        }if(k==4)
            printf("E\n");
        else if(k==3)
            printf("A\n");
        else if(k==2)
            printf("B\n");
        else if(k==1)
            printf("C\n");
        else
            printf("D\n");
    }return 0;
}
