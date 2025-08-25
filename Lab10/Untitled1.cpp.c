#include<iostream>
using namespace std;
int sum(int x, int y){
    int l;
    l=x+y;
    return l;
}
int main(){
    int a, b, s;
    cin>>a>>b;
    s=sum(a, b);
    cout<<s<<endl;
}
