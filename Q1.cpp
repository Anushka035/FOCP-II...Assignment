// A teacher wants to calculate the average marks of three students to determine the class performance.
//Implement a solution to accept three numbers and compute their average.
#include<iostream>
using namespace std;
int main(){
    int mks1,mks2,mks3;
    cin>>mks1>>mks2>>mks3;
    int avg;
    avg=(mks1+mks2+mks3)/3;
    cout<<"average of marks is:"<<avg;
    return 0;

}