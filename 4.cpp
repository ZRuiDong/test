#include <iostream>
using namespace std;

void fun(int n){
    vector<int> k;
    while(n!=0){
        k.push_back(n%10);
        n=n/10;
    }
    sort(k.begin(),k.end());
    int max = 0, min = 0;
    for(int i = 0, j=k.size()-1; i<k.size() && j>=0; i++, j--){
        max=max*10+k[i];
        min=min*10+k[i];
    }
    cout << max << endl << min << endl;
}

int main(){
    fun(2314);
    // cout << "hello world";
}