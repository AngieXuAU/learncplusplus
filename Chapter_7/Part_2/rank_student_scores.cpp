#include <cstring>
#include <iostream>
using namespace std;
struct StudentInfo{
    char Name[20];
    int Score;
}; StudentInfo IndividualStudent[20];
int NumberOfStudents;
int TopStudent(int a){
    int TopScore=0, TopIndex;
    for (int i = a; i < NumberOfStudents; ++i) {
        if (IndividualStudent[i].Score>TopScore){
            TopScore=IndividualStudent[i].Score;
            TopIndex=i;
        }
    }
    return TopIndex;
}
int main(){
    cin>>NumberOfStudents;
    for (int i = 0; i < NumberOfStudents; ++i) {
        cin>>IndividualStudent[i].Name>>IndividualStudent[i].Score;
    }
    for (int i = 0; i < NumberOfStudents; ++i) {
        cout<<IndividualStudent[TopStudent(i)].Name<<' '<<IndividualStudent[TopStudent(i)].Score;
    }
}