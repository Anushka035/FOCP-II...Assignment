// A shopkeeper wants to calculate the total bill amount after applying a 20% discount on the purchase.
// Implement a solution to accept item no., quantity, and unit price. Compute the amount and apply 20% discount.
#include<iostream>
using namespace std;
int main(){
    int item_no,quantity;
    float price;
    cout<<"Enter item no.,quantity and price:";
    cin>>item_no>>quantity>>price;
    float total=quantity*price;
    float discount=total*0.2;
    cout<<total-discount<<"amount after applying discount";


    return 0;
}