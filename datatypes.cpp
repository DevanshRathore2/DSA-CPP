#include <iostream>
using namespace std;

int main(){
    int age = 25;
    char grade = 'a';
    float PI = 3.14f;
    bool isSafe = false;
    double price = 100.99;

    int a = grade;   //TypeCasting
    int newPrice= (int)price;   //TypeConversion
    
    cout <<newPrice;
    return 0;
}
