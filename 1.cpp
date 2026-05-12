#include <iostream>
#include <cmath>
using namespace std;

int fun(double k){
    if(k>0){
    if(k-(int)(k)>0.5) return (int)(k)+1;
    else return (int)k;
    }
    else{
        
        if(abs(k-(int)(k))>=0.5) return (int)(k)-1;
        else return (int)k;
    }
}

int main(){
    int n; cin >> n;
    for(int i = 1; i<=n; i++){
        double a, b;
        cin >> a >> b;
        cout << fun(a) << " " << fun(b) << endl;
    }

}