#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v1;//Growable array 2x
    for(int i=11; i<=20; i++){
        v1.push_back(i);
    }

    for(int i=0; i<10; i++){
        cout<<v1[i]<<" ";
    }
}