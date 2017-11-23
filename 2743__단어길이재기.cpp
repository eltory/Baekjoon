//
//  2743__단어길이재기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 11. 21..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>

int main(){
    char word[102];
    int i = 0, cnt = 0;
    gets(word);
    while (word[i]!= '\0') {
        if((word[i] < 91 && word[i] > 64)||(word[i] < 123 && word[i] > 96))
            cnt++;
        i++;
    }
    printf("%d", cnt);
    return 0;
}

