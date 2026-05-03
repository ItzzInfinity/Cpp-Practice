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
        // Declare a variable, assign a value later (not at declaration), then print it
        // Declare a variable with `const` and try to understand why you can't change it
        // Print the size of `int` using `sizeof(int)`
        // Print the size of `double` using `sizeof(double)`
        // Print the size of `char` using `sizeof(char)`
        // Print the size of `bool` using `sizeof(bool)`
        // Declare an `unsigned int` and print it
        // Declare a `long` variable and print it
        // Declare a `long long` variable with a very large number and print it
        // Declare a `short` variable and print it
        // Initialize a variable using `auto` and let the compiler deduce the type
        // Declare two variables of the same type in one line (e.g. `int a = 1, b = 2;`)
        // Swap the values of two variables using a third temp variable    
        
    return 0;
}