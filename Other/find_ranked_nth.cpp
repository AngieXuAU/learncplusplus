#include <iostream>
using namespace std;
int DataPoints, DataArray[20], RankedArray[20];
int Ranked(int rank, int i){
    int HighestNumber=0;
    for (int l = 0; l <= rank; ++l) {
        for (int j = 0; j <= i; ++j) {
            for (int k = 0; k < j; ++k) {
                if (DataArray[k]>=HighestNumber){
                    HighestNumber=DataArray[k];
                    RankedArray[j]=DataArray[k];
                }
            }
        }
    }
}
int main(){
    int WantedRank;
    cout<<"Enter the number of data points and rank you want to find";
    cin>>DataPoints>>WantedRank;
    for (int i = 0; i < DataPoints; ++i) {
        cin>>DataArray[i];
    }
    cout<<Ranked(WantedRank, DataPoints);
}