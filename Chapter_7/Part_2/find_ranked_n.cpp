#include <iostream>
using namespace std;
struct Portfolio{
    int StudentID;
    float Score;
}; Portfolio Students[100];
int Find(int rank){

}
int main(){
    int NumberOfStudents, RankedNth;
    cin>>NumberOfStudents>>RankedNth;
    for (int i = 0; i < NumberOfStudents; ++i) {
        cin>>Students[i].StudentID>>Students[i].Score;
    }
    cout<<Students[Find(RankedNth)].StudentID<<Students[Find(RankedNth)].Score;
}