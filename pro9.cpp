/*
c++ control structure 
Basic Control structures
    1. Sequence Structure
    2. Selection Structure
    3. Loop Structure

    1.Sequence Structure
        Entry ===> Action 1 ===> Action 2 ===> Action n.... ===> exit


*/

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout << "Tell me your age "<<endl;
    cin >> age;
    if (age<18)
    {
        cout <<"Your age is below 18";
    }
    // else if (age==10)
    // {
    //     cout <<"Your age is below 10";
    // }
    else
    {
        cout <<"Your age is Above 18";
        
    }
    
    
    
    
    return 0;
}

