//
//  5052__전화번호목록.cpp
//  Algorithm_study_group
//
//  Created by LSH on 2018. 1. 6..
//  Copyright © 2018년 LSH. All rights reserved.
//

/**
 *  트라이를 이용하여 prefix가 차일드를 갖지만 finish 된 부분유무에 따라 결과값
 */
#include <iostream>
#include <string.h>
using namespace std;
struct Trie{
    bool finish;
    Trie* next[10];
    Trie() : finish(false){
        memset(next, 0, sizeof(next));
    }
    ~Trie(){
        for(int i = 0; i < 10; ++i)
            if(next[i])
                delete next[i];
    }
    void insert(const char* key){
        if(*key == '\0') finish = true;
        else{
            int curr = *key - '0';
            if(next[curr] == NULL)
                next[curr] = new Trie();
            next[curr]->insert(key + 1);
        }
    }
    bool find(const char* key){
        if(*key == '\0') return false;
        if(finish) return true;
        int curr = *key - '0';
        return next[curr]->find(key + 1);
    }
};
const int MAX_N = 10000;
char phone[MAX_N][11];

int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int n;
        bool result = false;
        Trie* root = new Trie;
        cin >> n;
        for(int i = 0; i < n; ++i){
            cin >> phone[i];
            root->insert(phone[i]);
        }
        for(int i = 0; i < n;++i)
            if(root->find(phone[i])){
                result = true;
                break;
            };
        printf("%s\n", result ? "NO" : "YES");
        delete root;
    }
    return 0;
}

