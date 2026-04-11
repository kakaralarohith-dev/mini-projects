#include<iostream>
#include<cmath>
using namespace std;


int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

double divide(int a, int b)
{
    if(b == 0)
    {
        cout << "Division by zero is not allowed!" << endl;
        return 0;
    }
    return (double)a / b;
}

int Modulus(int a, int b)
{
    if(b == 0)
    {
        cout << "Modulus by zero not allowed!" << endl;
        return 0;
    }
    return a % b;
}


long long power(int base, int exp)
{
    long long result = 1;
    for(int i = 1; i <= exp; i++)
        result *= base;
    return result;
}

long long power(int base)
{
    return base * base;
}

int square(int n)
{
    return n * n;
}

double square(double n)
{
    return n * n;
}

int cube(int n)
{
    return n * n * n;
}


double squareroot(double n)
{
    if (n < 0)
    {
        cout << "Negative number not allowed!" << endl;
        return 0;
    }
    return sqrt(n);
}

int factorial(int n)
{
    int fact = 1;
    for(int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

bool isprime(int n)
{
    if(n <= 1)
        return false;

    for(int i = 2; i * i <= n; i++)
    {
        if(n % i == 0)
            return false;
    }
    return true;
}

int digitsum(int n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}
int digitsum(long long n)
{
    int sum = 0;
    while(n > 0)
    {
        sum += n % 10;
        n = n / 10;
    }
    return sum;
}


int main()
{
    int num, base, exp;
    int a, b;
    double x, y;

    cout << "Enter a number: ";
    cin >> num;
    
    cout << "________________________________________________________________________";
    cout << "\nFactorial: " << factorial(num) << endl;
    cout << "Prime check: " << (isprime(num) ? "Prime" : "Not Prime") << endl;
    cout << "Digit sum: " << digitsum(num) << endl;
    cout << "Cube: " << cube(num) << endl;
    cout << "Square: " << square(num) << endl;
    cout << "Square (double overload): " << square((double)num) << endl;
    cout << "Square root: " << squareroot(num) << endl;
    cout << "__________________________________________________________________________";

    cout << "\nEnter two integers: ";
    cin >> a >> b;
    
    cout << "__________________________________________________________________________";
    cout << "Addition (int): " << add(a, b) << endl;
    cout << "Subtraction: " << subtract(a, b) << endl;
    cout << "Multiplication: " << multiply(a, b) << endl;
    cout << "Division: " << divide(a, b) << endl;
    cout << "Modulus: " << Modulus(a, b) << endl;
    cout << "____________________________________________________________________________";

    cout << "\nEnter two decimal numbers: ";
    cin >> x >> y;

    cout << "Addition (double overload): " << add(x, y) << endl;
    
    cout << "\nEnter base and exponent: ";
    cin >> base >> exp;

    cout << "Power (base, exp): " << power(base, exp) << endl;

    return 0;
}
