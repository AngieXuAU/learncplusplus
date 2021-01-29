#include <cstdio>
int main(){
    struct Student{
        int RollNumber;
        char Name[20];
        int Age;
    }; Student Individual[5];
    for (int i = 0; i < 5; ++i) {
        printf("Student %d\n", i+1);
        Individual[i].RollNumber=i+1;
        printf("Enter Name: \n");
        scanf("%s ", &Individual[i].Name);
        printf("Enter Age: \n");
        scanf("%d", &Individual[i].Age);
    }
    int i=2;
    printf("Student: %d\n", i);
    printf("Name: %s\n", Individual[i-1].Name);
    printf("Age: %d\n", Individual[i-1].Age);
    return 0;
}
