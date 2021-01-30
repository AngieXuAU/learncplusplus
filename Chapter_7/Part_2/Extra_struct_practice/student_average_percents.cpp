#include <cstdio>
struct Portfolio{
    int chem_score;
    int math_score;
    int physics_score;
    int average_percent;
};
Portfolio Student[5];

int AveragePercent(int cs, int ms, int ps){
    return (cs+ms+ps)/3;
}

int main(){
    for (int i = 0; i < 1; ++i) {
        printf("Enter student %d's scores: ", i+1);
        scanf("%d %d %d", &Student[i].chem_score, &Student[i].math_score, &Student[i].physics_score);
        Student[i].average_percent=AveragePercent(Student[i].chem_score, Student[i].math_score, Student[i].physics_score);
    }
    for (int i = 0; i < 1; ++i) {
        printf("Student %d average: %d%c", i+1, Student[i].average_percent, '%');
    }
}