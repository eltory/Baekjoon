//
//  2455__지능형기차.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 9..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
int people[4][2] = {0};
int main(){
    int max = 0, total = 0;
    int in, out;
    for(int i = 0; i < 4; ++i){
        scanf("%d %d", &out, &in);
        if(i == 0){
            total = in - out;
            max = total;
        }else{
            total += (in - out);
            if(max < total)
                max = total;
        }
    } printf("%d", max);
    return 0;
}
