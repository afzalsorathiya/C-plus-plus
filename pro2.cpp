#include<iostream>
using namespace std;
// \n & <<endl both use new line
// \n\n is Blank line
int main(){
    int num1;
    int IR;
    int name = 100;

    // cout << "This is your Roll Number : " << num << "\t Hello afzal" << endl;
    // cout << "Hello Afzal";
    cout << "This is Tutorial for c++" << name <<endl;
    cout << "Enter Number ==> \t";
    cin >> num1;
    cout << "Enter Intrest Rate ==> \t";
    cin >> IR;
    cout<< "Your Actual Amount is ==> \t" << num1 * IR /100 + num1;
    
    // for (int i = 0; i < 10; i++)
    // {
    //     /* code */
    //     cout << "Type your number" <<endl;
    // }
    
    // cin >> x;
    // cout << 'Your number is :' << x;
    return 0; 
}