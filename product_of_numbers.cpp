#include <iostream>
using namespace std;

int main()
{
    double FirstNumber, SecondNumber, Product;
    cout << "Enter two numbers: ";

    cin >> FirstNumber >> SecondNumber;
 
    Product = FirstNumber * SecondNumber;  

    cout << "Product = " << Product;    
    
    return 0;
}
