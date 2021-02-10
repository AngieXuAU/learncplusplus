#include <cstdio>
struct Detail{
    int Score;
    char Name[20];
}; Detail Student[100];
int TopStudentIndex(int n){
    int top_score=0, top_rank;
    for (int i = 0; i < n; ++i) {
        if (Student[i].Score>top_score){
            top_score=Student[i].Score;
            top_rank=i;
        }
    }
    return top_rank;
}
int main(){
    int NumberOfStudents;
    scanf("%d", &NumberOfStudents);
    for (int i = 0; i < NumberOfStudents; ++i) {
        scanf("%s %d", &Student[i].Name, &Student[i].Score);
    }
    printf("Top Scorer: %s", Student[TopStudentIndex(NumberOfStudents)].Name);
    return 0;
}