// sum of all numbers from 1 to n divisible by 3

#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter a number : ";
    cin >> n;

    int sum=0;
    for(int i=1;i<=n;i++){
        if(i%3==0){
            sum+=i;
        }
    }
    cout <<"Sum is " << sum << endl;
    return 0;
}