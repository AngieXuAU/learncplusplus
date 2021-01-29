#include <cstdio>
int main(){
    struct Student{
        int RollNumber;
        char Name[30];
        int Age;
        int Marks;
    };
    Student p1 ={4, "Brown", 14, 78};
    printf("%d %s %d %d\n", p1.RollNumber, p1.Name, p1.Age, p1.Marks);
}
