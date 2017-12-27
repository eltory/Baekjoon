//
//  10989__수정렬하기3.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 12. 27..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;
int arr[10001];
bool visit[10001];
vector<int> idx;
int main(){
    int N, index;
    scanf("%d",&N);
    for(int i = 0; i < N; ++i){
        scanf("%d",&index);
        arr[index]++;
        if(!visit[index]){
            visit[index] = true;
            idx.push_back(index);
        }
    }
    sort(idx.begin(), idx.end());
    for(auto i : idx)
        for(int j = 0; j < arr[i]; ++j)
            printf("%d\n",i);
    return 0;
}
