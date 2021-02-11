#include <cstdio>
struct Date{
    int Year;
    int MonthNumber;
    int Day;
};


Date SetOfDates[2];
char MonthName[2][9], ArrayOfMonth[12][10]={"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
int i=0, time_index=0;
int Compare(int a, int b){
    if (a>b){
        return 1;
    } else if (b<a){
        return 0;
    } else {
        Compare(SetOfDates[0].MonthNumber, SetOfDates[1].MonthNumber);
    }
}
int ConvertMonthToInt(char month_function[]){
    for (int j = 0; j < 12; ++j) {
        if (ArrayOfMonth[j]==month_function){
            return j+1;
        }
    }
    return -1;
}
int main(){
    printf("Enter the first date by year, month then day");
    scanf("%d %s %d", SetOfDates[0].Year, MonthName[0], SetOfDates[0].Day);
    printf("Enter the second date by year, month then day");
    scanf("%d %s %d", SetOfDates[1].Year, MonthName[1], SetOfDates[1].Day);
    SetOfDates[0].MonthNumber=ConvertMonthToInt(MonthName[0]);
    SetOfDates[1].MonthNumber=ConvertMonthToInt(MonthName[1]);
    Compare(SetOfDates[0].Year, SetOfDates[1].Year);
    return 0;
}