//
//  1026__보물.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 9. 11..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int A[100],B[100];
    int n;
    scanf("%d",&n);
    for(int i = 0; i < n; ++i)
        scanf("%d",&A[i]);
    for(int i = 0; i < n; ++i)
        scanf("%d",&B[i]);
    sort(A,A+n);
    sort(B,B+n);
    int result = 0;
    for(int i = 0; i <n; ++i){
        result += A[i] * B[n-1-i];
    }
    printf("%d",result);
    return 0;
}
