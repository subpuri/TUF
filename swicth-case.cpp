#include<bits/stdc++.h>
using namespace std;

int main(){
    int day;
    cout <<"enter day: ";
    cin >> day;
    cout <<endl;
    switch (day)
    {
    case 1:
        /* code */
        cout <<"Sunday"<<endl;
        break;
    case 2:
        cout <<"Monday"<<endl;
        break;
    case 3:
        cout <<"Tuesday"<<endl;
        break;
    case 4:
        cout <<"Wednesday"<<endl;
        break;
    case 5:
        cout <<"Thursday"<<endl;
        break;
    case 6:
        cout <<"Friday"<<endl;
    case 7:
        cout <<"Sturday"<<endl;
    
    
    default:
        cout <<"Invalid input!!"<<endl;
        break;
    }
    return 0;
}