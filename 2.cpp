#include <bits/stdc++.h>
#define ll long long
using namespace std;

int wei(ll k){
    int count1 = 0;
    while(k!=0){
        count1++;
        k = k/10;
    }
    return count1;
}

ll A(int m, int k){
    int count1 = 1;
    for(int i = m; i>=m-k+1; i--){
        count1*=i;
    }
    return count1;
}

int fun2(ll k, int k_ti){
    vector<int> g;
    while(k!=0){
        int m = k%10;
        g.push_back(m);
        k=k/10;
    }
    ll count1 = 0;
    for(int i = g.size()-1; i>=0; i--){
        if(i==wei(k)-1){
            if(g[i]>=k_ti) return 0;
            else count1*=g[i];
        }
        else count1*=min(g[i], k_ti-1)+1;
    }
    return count1;
}

ll fun(ll k, int k_ti){
    ll count1 = 0;
    int len = wei(k);
    int geshu = k_ti - 1;
    for(int i = 1; i<=wei(k)-1; i++){
        count1+=A(geshu, i);

    }
    return count1;
}

int main(){
    int a, b; cin >> a >> b;
    cout << fun2(199, 8);
}