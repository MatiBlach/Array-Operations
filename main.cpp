#include <iostream>

#define SIZE 1000
using namespace std;

int main() {
        int t[SIZE] = {};
        int n,i,m,j,l,p,k;
        cin>>n;
        if(n < 0) {
                return 0;
        }
        for(i = 0; i < n; i++) {
                cin>>t[i];
        }
        cin>>m;
        
        for(i = 0; i < m; i++) {
                char z;
                int a,b;
                cin>>z;
                if(z == 'c') {
                        cin>>a>>b; // a=w1, b=w2
                        int ile = 0;
                        for(j = 0; j < n; j++) {
                                if(t[j] == a) {
                                        ile++;
                                        t[j] = b;
                                }
                        }
                        cout<<ile<<endl;
                }
                else if(z == 's') {
                        cin>>a; //a=k
                        for(j = 0; j < a; j++) {
                                int suma = 0;
                                for(l = 0; l < n; l++) {
                                    if(j+(l*a) <= n) suma = suma + t[j+(l*a)];
                                }
                                if(j < n)
                                cout<<suma<<" ";
                        }
                       cout<<endl;
                }
                else if(z == 'm') {
                        cin>>p>>k; //a=p, b=k
                        int max = -2000000000;
                        if(p > k or p > n or k <= 0) {
                                cout<<"#"<<endl;
                        }
                        else {
                                if(p <= 0) p = 1;
                                if(k > n) k = n - 1;
                                for(j = p - 1; j <= k - 1; j++) {
                                        if(t[j] > max) max = t[j];
                                }
                                cout<<max<<endl;
                        }  
                }
        }
        return 0;
}
