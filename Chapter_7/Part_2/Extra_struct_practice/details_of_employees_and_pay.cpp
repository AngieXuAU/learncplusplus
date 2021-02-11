#include <cstdio>
struct WorkerInfo{
    char WorkerName[15];
    int HoursWorked;
    int CurrentSalary;
};
WorkerInfo Worker[10];
int IncreasedSalary(int index){
    if (Worker[index].HoursWorked>=12){
        return Worker[index].CurrentSalary+150;
    } else if (Worker[index].HoursWorked>=10){
        return Worker[index].CurrentSalary+100;
    } else if (Worker[index].HoursWorked>=8){
        return Worker[index].CurrentSalary+50;
    } else {
        return Worker[index].CurrentSalary;
    }
}
int main(){
    for (int i = 0; i < 3; ++i) {
        printf("Enter worker %d details here: \n", i+1);
        scanf("%s %d %d", Worker[i].WorkerName, Worker[i].HoursWorked, Worker[i].CurrentSalary);
    }
    for (int i = 0; i < 3; ++i) {
        printf("%s\t%d\n", Worker[i].WorkerName, IncreasedSalary(i));
    }
    return 0;
}