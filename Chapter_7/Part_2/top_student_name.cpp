#include <cstdio>
struct Detail{
    int Score;
    char Name[20];
}; Detail Student[100];
int Rank(int n){
    return n;
}
int main(){
    int NumberOfStudents;
    scanf("%d", &NumberOfStudents);
    for (int i = 0; i < NumberOfStudents; ++i) {
        scanf("%s %d", &Student[i].Name, &Student[i].Score);
    }
    printf("Top Scorer: %s", Student[Rank(NumberOfStudents)].Name);
    return 0;
}