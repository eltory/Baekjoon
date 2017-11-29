//
//  14612__김식당.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 11. 28..
//  Copyright © 2017년 LSH. All rights reserved.
//

#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int, int> P;
vector<P> table;
void print();

int main(){
    int N, M;
    int a, b, c;
    char buf[50];
    scanf("%d %d%*c", &N, &M);
    for(int i = 0; i < N; ++i){
        scanf("%s", buf);
        if(buf[0] == 'o'){
            scanf("%d %d", &a, &b);
            table.push_back(P(b, a));
        }if(buf[0] == 's'){
            sort(table.begin(), table.end());
        }if(buf[0] == 'c'){
            scanf("%d", &c);
            for(int i = 0; i < table.size(); ++i)
                if(table[i].second == c)
                    table.erase(table.begin() + i);
        } print();
    } return 0;
}

void print(){
    if(table.size() == 0){
        printf("sleep\n");
        return;
    }
    for(int i = 0; i < table.size(); ++i)
        printf("%d ",table[i].second);
    printf("\n");
}
