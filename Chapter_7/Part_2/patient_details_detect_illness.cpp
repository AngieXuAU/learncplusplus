#include <cstdio>
struct PatientDetails{
    char Name[8];
    float BodyTemperature;
    int Coughing;
}; PatientDetails PatientIndex[200];
bool Sick(int i){
    if (!PatientIndex[i].Coughing || PatientIndex[i].BodyTemperature<37.5){
        return false;
    }
    return true;
}
int main(){
    int PatientCount, SickCount=0;
    printf("Enter number of patients:\n");
    scanf("%d", &PatientCount);
    printf("Enter the name, temperature and 1 for coughing, 0 for not pf %d patients\n", PatientCount);
    for (int i = 0; i < PatientCount; ++i) {
        scanf("%s %f %d", &PatientIndex[i].Name, &PatientIndex[i].BodyTemperature, &PatientIndex[i].Coughing);
    }
    for (int i = 0; i < PatientCount; ++i) {
        if (Sick(i)){
            printf("%s\n", PatientIndex[i].Name);
            SickCount++;
        }
    }
    printf("%d", SickCount);
}