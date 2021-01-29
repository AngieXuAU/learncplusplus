#include <iostream>
#include <string>
using namespace std;
struct Student{
    string Name;
    int Chinese, Math;
    int Total;
};
Student a[110];
int n;
int main(){
    Student Temp;
    cin>>n;
    for (int i = 0; i < n; ++i) {
        cin>>a[i].Name;
        cin>>a[i].Chinese>>a[i].Math;
        a[i].Total=a[i].Math+a[i].Chinese;
    }


    for (int i = n-1; i > 0; --i) {
        for (int j = 0; j < i; ++j) {
            if (a[j].Total<a[j+1].Total){
                swap(a[j], a[j+1]);
//                Temp=a[j+1];
//                a[j+1]=a[j];
//                a[j]=Temp;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout<<a[i].Name<<' '<<a[i].Chinese<<' '<<a[i].Math<<' '<<a[i].Total<<endl;
    }
    return 0;
}