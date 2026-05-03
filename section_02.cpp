#include <iostream>
#include <string>

using namespace std;

int main(){
    int a = 3.14; // Declare an `int` variable and print it
    cout << a << endl; // Declare an `int` variable and print it
    float b = 3.1428565932;    // Declare a `float` variable and print it
    cout << b << endl;    // Declare a `float` variable and print it
    double d = 3.1428565932;   // Declare a `double` variable and print it
    cout << d << endl;   // Declare a `double` variable and print it
    // ^^ in both cases 3.14286 gets printed Look into it how varibales work
    char c = 'A' ;  // Declare a `char` variable and print it
    cout << c << endl;  // Declare a `char` variable and print it
    bool B = true;    // Declare a `bool` variable, set it to `true`, and print it
    cout << B << endl;  // Declare a `bool` variable, set it to `true`, and print it
    //^^ It returns 1 Not TRUE// turns out You can set it to T/F or 0/1
    string str = "It\'s a string";    // Declare a `string` variable and print it
    cout << str << endl;    // Declare a `string` variable and print it
    cout << "The two integers are: " << a << " and " << int(b) << endl;    // Declare two `int` variables and print both
    int var;    // Declare a variable, assign a value later (not at declaration), then print it
    var = 10;    // Declare a variable, assign a value later (not at declaration), then print it
    cout << var << endl;    // Declare a variable, assign a value later (not at declaration), then print it
    const int const_a = 30;    // Declare a variable with `const` and try to understand why you can't change it
    // int const_a = 40;    // Declare a variable with `const` and try to understand why you can't change it
    cout << const_a << endl;        // Declare a variable with `const` and try to understand why you can't change it
    cout << sizeof(int) << endl;    // Print the size of `int` using `sizeof(int)`
    cout << sizeof(double) << endl;    // Print the size of `double` using `sizeof(double)`
    cout << sizeof(char) << endl;    // Print the size of `char` using `sizeof(char)`
    cout << sizeof(bool) << endl;    // Print the size of `bool` using `sizeof(bool)`
    cout << sizeof(long) << endl;    // Print the size of `bool` using `sizeof(bool)`
    unsigned int un = 127;    // Declare an `unsigned int` and print it
    cout << un << endl;    // Declare an `unsigned int` and print it
    long ln = 254454410;    // Declare a `long` variable and print it
    cout << ln << endl;    // Declare a `long` variable and print it
    long long lnt = 2165465465455646840;     // Declare a `long long` variable with a very large number and print it
    cout << lnt << endl;    // Declare a `long long` variable with a very large number and print it
    short srt = 16192;    // Declare a `short` variable and print it
    cout << srt << endl;    // Declare a `short` variable and print it
    auto auto_var1 = 'A';    // Initialize a variable using `auto` and let the compiler deduce the type
    auto auto_var2 = 123;    // Initialize a variable using `auto` and let the compiler deduce the type
    auto auto_var3 = 3.14;    // Initialize a variable using `auto` and let the compiler deduce the type
    auto auto_var4 = 123.91256;    // Initialize a variable using `auto` and let the compiler deduce the type
    cout << auto_var1 << endl;    // Initialize a variable using `auto` and let the compiler deduce the type
    cout << auto_var2 << endl;    // Initialize a variable using `auto` and let the compiler deduce the type
    cout << auto_var3 << endl;    // Initialize a variable using `auto` and let the compiler deduce the type
    cout << auto_var4 << endl;    // Initialize a variable using `auto` and let the compiler deduce the type
    //^^ only prints upto 123.913
    int var1 =23 , var2 = 32;    // Declare two variables of the same type in one line (e.g. `int a = 1, b = 2;`)
    cout << "var1 is : " << var1 << " & var2 is : " << var2 << endl;    // Declare two variables of the same type in one line (e.g. `int a = 1, b = 2;`)
    int var3 = var1;    // Swap the values of two variables using a third temp variable    
    var1 = var2;    // Swap the values of two variables using a third temp variable    
    var2 = var3;    // Swap the values of two variables using a third temp variable    
    cout << "var1 is : " << var1 << " & var2 is : " << var2 << endl;    // Declare two variables of the same type in one line (e.g. `int a = 1, b = 2;`)
        
    return 0;
}