/*
W04 TEMPLATES task 2
    Implement these mathematical operations by using templates:
    answer = myAbs(x);
    answer = myAdd(x,y);
    answer = myPow(x,int);

1.  Demonstrate that your code works by printing:
    myAbs(-5) myAbs(-3.14)
    myAdd(5,-5) myAdd(2.71, -3.14) myAdd('1','G')
    myPow(3.14,10) myPow('c',2)

2.  What happens if we have two string-objects s1 "hei” and  s2 "hallo":
    myAbs(s1);
    myAdd(s1,s2);
    myPow(s2,2);
*/

#include <iostream>
#include <cmath>

template <typename T> // Template to show absolute value
T myAbs(T x){
    return (x*((x>0)-(x<0)));
    //return abs(x);
}

template <typename T> // Template to add values
T myAdd(T x, T y){
    return (x + y);
}

template <typename T> // Template to raise x to the power of y
T myPow(T x, int y){
    return pow(x, y);
}

int main(int argc, const char * argv[]) {
    std::string s1 = "hei";
    std::string s2 = "hallo";
    
    std::cout<<"myAbs: "<<myAbs(-5)<<std::endl;
    std::cout<<"myAdd: "<<myAdd(s1, s2)<<std::endl;
    std::cout<<"myPow: "<<myPow('c', 2)<<std::endl;

    return 0;
}

/* OUTPUT:
1. Demonstrate
    myAbs: -5
    myAdd: heihallo
    myPow: I

2. What happens if we have two string-objects s1 "hei” and  s2 "hallo":
    myAbs(s1); // doesnt work because of abs()
    myAdd(s1,s2); --> = heihallo
    myPow(s2,2); // doesnt work because of pow()

*/