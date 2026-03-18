#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int imag;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(const Complex &obj)
    {
        return Complex(real + obj.real, imag + obj.imag);
    }

    bool operator==(const Complex &obj)
    {
        return real == obj.real && imag == obj.imag;
    }

    void display()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4), c2(2, 5);
    Complex c3 = c1 + c2;

    cout << "First complex number: ";
    c1.display();

    cout << "Second complex number: ";
    c2.display();

    cout << "Sum after overloading + operator: ";
    c3.display();

    if (c1 == c2)
    {
        cout << "Both complex numbers are equal." << endl;
    }
    else
    {
        cout << "Both complex numbers are not equal." << endl;
    }

    return 0;
}
