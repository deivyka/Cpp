/*
W04 TEMPLATES Task 1
    1. Compile and run the swap example
    2. Verify that that the program actually swaps the values.
    3. Can you swap the value of two objects of the class string or your home made CString?
        Discuss Why / Why not
*/

#include<iostream>

/* template<class X>
    void Swap( X &a, X &b ) // "&" is an referance
    {
        X temp; // temp is an object with type X
        temp = a; // assignment operator does not need to be defined
        a = b;
        b = temp;
    } */

int main()
{
    int nI = 10, nJ = 2;
    char c1 = 'B', c2 = 'A';
    float f1 = 0.0, f2 = -1.0;
    std::string s1 = "S1", s2 = "S2";
    const char *Cs1 = "Cs1", *Cs2 = "Cs2"; // since it is a string it has to "*" point value to Csx object

    std::swap( nI, nJ );
    std::swap( c1, c2 );
    std::swap( f1, f2 );
    std::swap( s1, s2 );
    std::swap( Cs1, Cs2);

    std::cout << "nI = "<< nI << std::endl;
    std::cout << "nJ = "<< nJ << std::endl;
    std::cout << "c1 = "<< c1 << std::endl;
    std::cout << "c2 = "<< c2 << std::endl;
    std::cout << "f1 = "<< f1 << std::endl;
    std::cout << "f2 = "<< f2 << std::endl;
    std::cout << "s1 = "<< s1 << std::endl;
    std::cout << "s2 = "<< s2 << std::endl;
    std::cout << "Cs1 = "<< Cs1 << std::endl;
    std::cout << "Cs2 = "<< Cs2 << std::endl;
}

/* OUTPUT:
    nI = 2, nJ = 10
    c1 = A, c2 = B
    f1 = -1, f2 = 0
    s1 = S2, s2 = S1
    Cs1 = Cs2, Cs2 = Cs1
*/