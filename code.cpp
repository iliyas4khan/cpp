#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter num till u want sum : " ;
    cin >> n;

    int OddSum =0;
    int i=1;

    while( i<=n ){
        if( i%2 != 0 ){
            OddSum+=i;
        }
        i++;
    }
    cout<< "OddSum = " << OddSum <<endl;

    return 0;
}