#include<iostream>
using namespace std;
int main(){
    int s,t,a,b,m,n,c=0,c1=0;
    cin >> s;
    cin >> t;
    cin >> a;
    cin >> b;
    cin >> m;
    cin >> n;
    int apples[m],oranges[n];
    int apples1[m],oranges1[n];
    for(int i=0;i<m;i++){
        cin >> apples[i];
    }
    for(int i=0;i<n;i++){
        cin >> oranges[i];
    }
    for(int i=0;i<m;i++){
        apples1[i] = (apples[i]+a);
    }
    for(int j=0;j<n;j++){
        oranges1[j] = oranges[j]+b;
    }
    for(int i=0;i<m;i++){
        if(apples1[i]>=s && apples1[i]<=t){
            c=c+1;
        }
    }
    for(int i=0;i<n;i++){
        if(oranges1[i]>=s && oranges1[i]<=t){
            c1 = c1+1;
        }
    }
     cout<<c <<"\n";
     cout << c1;
    
    
    return 0;
}
