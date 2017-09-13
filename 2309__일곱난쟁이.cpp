//
//  일곱난쟁이(2309).cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 8. 29..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <cstdio>
#include <algorithm>
using namespace std;

int main(){
    int little_man[9] = {0};
    int total = 0;
    int idx_1 = 0, idx_2 = 0;
    
    for(int i = 0; i < 9; ++i){
        scanf("%d", &little_man[i]);
        total += little_man[i];
    }
    total -= 100;
    sort(little_man, little_man + 9);
    for(int i = 0; i < 9; ++i){
        for (int j = i + 1; j < 9; ++j) {
            if(little_man[i] + little_man[j] == total){
                idx_1 = i, idx_2 = j;
            }
        }
    }
    for (int i = 0; i < 9; ++i) {
        if(i != idx_1 && i != idx_2)
            printf("%d\n", little_man[i]);
    }
    return 0;
}
