#include <algorithm>
#include <iostream>
using namespace std;

struct Node{
    int Data;
    int Rank;
    int Index;
}; Node a[10001];

int n;

bool Compare1(Node x, Node y){
    return x.Data<y.Data;
}
bool Compare2(Node x, Node y){
    return x.Index<y.Index;
}

int main(){
    cin>>n;
    for (int i = 1; i <= n; ++i) {
        cin>>a[i].Data;
        a[i].Index=i;
    }
    sort(a+1,a+1+n, Compare1);
    for (int i = 1; i <= n; ++i) {
        a[i].Rank=i;
    }
    sort(a+1, a+1+n, Compare2);
    for (int i = 1; i <= n; ++i) {
        cout<<a[i].Rank<<' ';
    }
    return 0;
}