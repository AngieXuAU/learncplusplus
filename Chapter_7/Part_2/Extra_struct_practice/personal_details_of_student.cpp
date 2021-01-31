#include <cstdio>
struct Details{
    int RollNumber;
    char Name[20];
    int Age;
};
Details Student[4];
bool AgeMatch(int age){
    return age==14;
}
bool RollEven(int roll_no){
    return roll_no%2==0;
}
int main(){
    int i;
    for (i = 0; i < 4; ++i) {
        printf("Enter the name and age of student %d \n", i+1);
        Student[i].RollNumber=i+1;
        scanf("%s %d", &Student[i].Name, &Student[i].Age);
    }
//    for (int j = 0; j <= i; ++j) {
//        if (AgeMatch(Student[j].Age)){
//            printf("Student %d: \n%s %d", j+1, Student[j].Name, Student[j].Age);
//        }
//    }
    for (int j = 0; j < i; ++j) {
        if (RollEven(Student[j].RollNumber)){
            printf("Student %d: \n%s %d\n", j+1, Student[j].Name, Student[j].Age);
        }
    }
    return 0;
}