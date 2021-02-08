#include <cstdio>
struct BankAccount{                     //struct setup
    char Name[20];
    int AccountNumber;
    int Balance;
};
BankAccount Member[5];
int main(){
    int i;
    for (i = 0; i < 5; ++i) {           //input
        printf("Enter details of user %d: \n", i+1);
        Member[i].AccountNumber=i;
        scanf("%s %d", &Member[i].Name, &Member[i].Balance);
    }

    for (int j = 0; j < i; ++j) {       //details of users whose balance is less than 200
        if (Member[j].Balance<200){
            printf("%s's account balance is less than $200\n", Member[j].Name);
        }
    }

    for (int j = 0; j < i; ++j) {       //details of users whose balance is more than 1000
        if (Member[j].Balance>1000){
            printf("%s's account balance is $%d \n", Member[j].Name, Member[j].Balance+100);
        }
    }
    return 0;
}