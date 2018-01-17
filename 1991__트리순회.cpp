//
//  1991__트리순회.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 13..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  Tree를 구조체를 이용하여 손쉽게 만드는법으로 품
 */
#include <iostream>
#include <vector>
using namespace std;
struct Tree{
    int N;
    vector<pair<int, int>> child;
    Tree(int n): N(n){
        child.resize(N, make_pair(-1,-1));
    }
    void insert_key(int p, int l, int r){
        if(l+'A' != '.') child[p].first = l;
        if(r+'A' != '.') child[p].second = r;
    }
    void pre_order(int root){
        cout << char(root+'A');
        if(child[root].first != -1) pre_order(child[root].first);
        if(child[root].second != -1) pre_order(child[root].second);
    }
    void in_order(int root){
        if(child[root].first != -1) in_order(child[root].first);
        cout << char(root+'A');
        if(child[root].second != -1) in_order(child[root].second);
    }
    void post_order(int root){
        if(child[root].first != -1) post_order(child[root].first);
        if(child[root].second != -1) post_order(child[root].second);
        cout << char(root+'A');
    }
};

int main(){
    int N;
    char a, b, c;
    cin >> N;
    Tree* tree = new Tree(N);
    for(int i = 0; i < N; ++i){
        cin >> a >> b >> c;
        tree->insert_key(a-'A', b-'A', c-'A');
    }
    tree->pre_order(0);
    cout << endl;
    tree->in_order(0);
    cout << endl;
    tree->post_order(0);
    return 0;
}



