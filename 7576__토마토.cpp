//
//  7576__토마토.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2017. 10. 7..
//  Copyright © 2017년 LSH. All rights reserved.
//

/**
 *  bfs 를 이용해서 썩어가는 것을 표현하고 현재 단계에서 각 인접한 토마토가 모두 썩은 후에 day를 증가시키는 방식으로 품
 *  속도를 개선할 필요가 있을 듯 하다.
 */
#include <stdio.h>
#include <queue>
using namespace std;
const int MAX = 1001;
int dx[4] = {-1,0,1,0}, dy[4] = {0,-1,0,1};
int box[MAX][MAX];

int main(){
    int M, N, total = 0;
    int cnt = 0, tmp = 0, day = 0, one = 0;
    queue<int> tomato;
    scanf("%d %d", &M, &N);
    total = M * N;
    for(int i = 0; i < N; ++i){
        for(int j = 0; j < M; ++j){
            scanf("%d", &box[i][j]);
            if(box[i][j] == 1){
                tomato.push(M*i + j);
                cnt++;
            }else if(box[i][j] == -1)
                total--;
        }
    }
    if(total == cnt){
        printf("0");
        return 0;
    }
    one = cnt;
    while (!tomato.empty()) {
        int p = tomato.front(); tomato.pop();
        int i = p/M, j = p%M;
        if(cnt == 0){
            day++;
            cnt = tmp;
            tmp = 0;
        }
        for(int k = 0; k < 4; ++k){
            int Dx = i + dx[k], Dy = j + dy[k];
            if(Dx >= 0 && Dy >= 0 && Dx < N && Dy < M && (box[Dx][Dy] == 0)){
                tomato.push(Dx*M + Dy);
                tmp++;
                one++;
                box[Dx][Dy] = 1;
            }
        }
        cnt--;
    }
    printf("%d", total == one ? day : -1);
    return 0;
}



