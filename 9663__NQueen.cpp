////
////  9663__NQueen.cpp
////  Algorithm_study_group
////
////  Created by LSH on 2017. 11. 15..
////  Copyright © 2017년 LSH. All rights reserved.
////
//
//#include <stdio.h>
//#include <cmath>
//#include <vector>
//using namespace std;
//const int MAX_N = 15;
//int total = 0;
//int N;
//int board[MAX_N][MAX_N];
//bool promising(int);
//void NQueen(int);
//vector<int> col;
//
//int main(){
//    scanf("%d", &N);
//    col.resize(N);
//    NQueen(0);
//    printf("%d", total);
//    return 0;
//}
//void NQueen(int i){
//    if(promising(i)){
//        if(i == N){
//            total++;
//            return;
//        }else{
//            for(int j = 1; j <= N; ++j){
//                col[i+1] = j;
//                NQueen(i+1);
//            }
//        }
//    }
//}
//bool promising(int i){
//    bool promising = true;
//    int k = 1;
//    while(k < i && promising){
//        if(col[k] == col[i] || abs(col[k] - col[i]) == abs(k - i))
//            promising = false;
//        k++;
//    }
//    return promising;
//}

