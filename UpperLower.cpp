// To find character uppercase or lower case

#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<< "Enter any alphabet : ";
    cin >> ch;

    if(ch>=65 && ch<=90){
        cout <<"Character is LowerCase"<<endl;
    }
    else if(ch>=96 && ch<=121){
        cout <<"Character is UpperCase"<<endl;
    }
    else
        cout<< "Invalid" <<endl;
    return 0;
}