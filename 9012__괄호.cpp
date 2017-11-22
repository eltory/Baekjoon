//
//  9012__괄호.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 11. 21..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>

int main(){
    int T, val, k;
    char VPS;
    scanf("%d%*c", &T);
    while (T--) {
        val = k = 0;
        while (scanf("%1c", &VPS) && (VPS != '\n')) {
            val = VPS == '(' ? val+1 : val-1;
            if(val < 0) k = 1;
        } printf("%s\n", (val || k) == 0 ? "YES" : "NO");
    } return 0;
}

