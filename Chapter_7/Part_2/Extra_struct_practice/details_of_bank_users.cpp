#include <cstdio>
struct BankAccount{
    char Name[20];
    int AccountNumber;
    int Balance;
};
BankAccount Member[5];
int Add100(int balance){
    if (balance>1000){
        return balance+100;
    } else {
        return balance;
    }
}
int main(){
    int i;
    for (i = 0; i < 5; ++i) {
        printf("Enter details of user %d: \n", i+1);
        Member[i].AccountNumber=i+1;
        scanf("%s %d", &Member[i].Name, &Member[i].Balance);
    }
    for (int j = 0; j < i; ++j) {
        if (Member[j].Balance<200){
            printf("%s \n", Member[i].Name);
        }
    }
//    for (int j = 0; j < i; ++j) {
//        if (Member[j].Balance>1000){
//            printf("%s's account balance is %d \n", Member[i].Name, Add100(Member[j].Balance));
//        }
//    } 's account balance is less than $200",
    return 0;
}