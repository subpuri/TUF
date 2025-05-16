#include<bits/stdc++.h>
using namespace std;

int main()
{
    int marks;
    cout <<"Enter your marks: ";
    cin >>marks;
    cout <<endl;
    char grade;
    if (marks < 25 ){
        grade = "F";
    }
    else if (marks < 50 ){
        grade = "D";
    }
    else if (marks < 70){
        grade = "C";
    }
    else if (marks < 90){
        grade = "B";
    }
    else if ( marks <=100){
        grade = "A";
    }
    else{
        cout <<"Please enter valid marks!!"<<endl;
        return 0;
    }
    cout << "Grade: "<<grade<<endl;



    return 0;

}

