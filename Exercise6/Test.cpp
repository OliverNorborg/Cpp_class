#include <iostream>
#include <fstream>
#include <vector>
#include <stack>
#include <set>
#include <algorithm>
#include <string>
using namespace std;


class fraction
{
private:
    int numerator, denominator; 
public:
    fraction()
    {
        numerator = 1;
        denominator = 1;
    }
    fraction(int n, int d)
    {
        numerator = n;
        if (d==0) 
        {
            cout << endl;
            exit(0); // will terminate the program if division by 0 is attempted
        }
        else
            denominator = d;
    }

    fraction add(fraction f)
    {
        int n = numerator*f.denominator+f.numerator*denominator;
        int d = denominator*f.denominator;
        return fraction(n/gcd(n,d),d/gcd(n,d));
    }

    fraction mult(fraction f)
    {
        int n = numerator*f.numerator;
        int d = denominator*f.denominator;
        return fraction(n/gcd(n,d),d/gcd(n,d));
    }
    fraction div(fraction f)
    {
        int n = numerator*f.denominator;
        int d = denominator*f.numerator;
        return fraction(n/gcd(n,d),d/gcd(n,d));
    }

    int gcd(int n, int d)
    {
        int remainder;
        while (d != 0)
        {
            remainder = n % d;
            n = d;
            d = remainder;
        }
        return n;
    }
    void display() // Display method
    {
       cout << numerator << " / " << denominator << endl;
    }
};


int main()
{
    int num1, num2;
    int denom1, denom2;
    char slash1, slash2;
    string act;

    while(true) {
        cin >> num1;
        cin >> slash1;
        cin >> denom1;
        fraction a(num1, denom1);
        if (cin.fail()) {
            return 0;
        }
        cin >> act;
        string str_inp1(act);

        cin >> num2;
        cin >> slash2;
        cin >> denom2;
        fraction b(num2, denom2);

        if(str_inp1.compare("+") == 0){
            fraction c;
            c = a.add(b); 
            c.display();
        }
        if(str_inp1.compare("*") == 0){
            fraction c;
            c = a.mult(b); 
            c.display();
        }
        if(str_inp1.compare("div") == 0){
            fraction c;
            c = a.div(b); 
            c.display();
        }
        
    }
}