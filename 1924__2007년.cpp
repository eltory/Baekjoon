//
//  1924__2007년.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 17..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>

int main(){
    int x, y;
    int day_sum = 0;
    int day[12];
    for(int i = 0; i < 12; ++i){
        if(i == 0 || i == 2 || i == 4 || i == 6 || i == 7 || i == 9 || i ==  11)
            day[i] = 31;
        else if(i == 1)
            day[i] = 28;
        else
            day[i] = 30;
    }
    scanf("%d %d", &x, &y);
    for(int i = 1; i < x; ++i)
        day_sum += day[i-1];
    day_sum += y;
    if(day_sum % 7 == 1)
        printf("MON");
    else if(day_sum % 7 == 2)
        printf("TUE");
    else if(day_sum % 7 == 3)
        printf("WED");
    else if(day_sum % 7 == 4)
        printf("THU");
    else if(day_sum % 7 == 5)
        printf("FRI");
    else if(day_sum % 7 == 6)
        printf("SAT");
    else
        printf("SUN");
    return 0;
}
