//
//  10809__알파벳찾기.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 18..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <cstring>
using namespace std;
int main(){
    int spell[26];
    char S[101];
    memset(spell, -1, sizeof(spell));
    fgets(S, sizeof(S), stdin);
    for(int i = 0; i < strlen(S); ++i)
        if(spell[S[i] - 97] == -1)
            spell[S[i] - 97] = i;
    for(int i = 0; i < 26; ++i)
        printf("%d ", spell[i]);
    return 0;
}
