#include <iostream>

class CCar
{
private : 
    int m_nNOfWheels;

public :
    CCar(int nNOfWheels = 4){};
    virtual void Drive() 
    { 
        std::cout << "vroom"; 
    };
};

class CMaserati:public CCar
{
public :
    CMaserati(){};
    virtual void Drive()
    { 
        std::cout << "VROOOAAAAMMMGRRRRBANGSSHJ!!";
    };
};

class CLada:public CCar
{
public :
    CLada(){};
    virtual void Drive()
    { 
        CCar::Drive();
        std::cout << "-hnark" << std::endl;
    };
};

int main ()
{
    CCar MyCar;
    CMaserati MyMaserati;
    CLada MyLada;

    std::cout << "MyCar:"; MyCar.Drive(); std::cout << std::endl;
    std::cout << "MyMaserati:"; MyMaserati.Drive(); std::cout << std::endl;
    std::cout << "MyLada:"; MyLada.Drive(); std::cout << std::endl;
}

/* OUTPUT
MyCar:vroom
MyMaserati:VROOOAAAAMMMGRRRRBANGSSHJ!!
MyLada:vroom-hnark
*/