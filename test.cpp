//
// Created by wmike on 22-10-23.
//
#include <iostream>
#include <unordered_map>

using namespace std;

int main(){
    // unordered_map<int,int> umap;
    // umap[1];
    // cout << umap[1];
    // for(int i =0; i<10;++i){
    //     ++umap[i];
    //     cout<<umap[i];
    // }
    int b;
    const int *a =&b;
    int const *p = &b;
    int const* const c = &b;

    const int* const d = &b; 
    cout << sizeof(long);
    cout << sizeof(float);
}