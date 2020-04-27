/*
W03 INHERITANCE Part 01
    1. Create class Human that can store the data name og age:
    2. Create constructor
    3. get- and set-methods
    4. Print method
    5. Create two classes, Student and Professor, with the added data ects (for Student) and papers (for Professors):
    6. Constructor calls the constructor in the base class and use that for initialising the class.
    7. get- and set-methods
    8.Print that also used the base class print method
 */
#include <iostream>
#include <string>

//------------------------------------
class Human {
public:
    // Defalut constructor
    Human() {      
        std::cout<<"Creating default Human"<<std::endl;
    }
    // Overloaded Constructor
    Human(std::string n, int a) {                           
        Name = n;
        Age = a;
        std::cout<<"Creating overloaded Human"<<std::endl;
    }
    
    // Get (accessors)
    std::string getName() const {return Name;}
    int getAge() const {return Age;}
    
    // Set (mutators)
    void setName(std::string n) {Name = n;}
    void setAge(int a) {Age = a;}
    
    // Print method
    virtual void printHuman() {
        std::cout<<"Name: "<<Name<<std::endl
        <<"Age: "<<Age<<std::endl;
    }
    
private: // Store these values privatly
    std::string Name;
    int Age;
};
//------------------------------------
class Student : public Human {
public:
    Student(std::string Name, int Age, int E) : Human(Name, Age) {
        ECTS = E;
        std::cout<<"Creating overloaded Student"<<std::endl;
    }
    int getECTS() const {return ECTS;}
    void printStudent() {
        Human::printHuman(); //Print Human first then add Student ETCS
        std::cout<<"ECTS: "<<ECTS<<std::endl;
    }
private:
    int ECTS;
};
//------------------------------------
class Professor : public Human {
public:
    Professor(std::string Name, int Age, int P) : Human(Name, Age) {
        Papers = P;
        std::cout<<"Creating overloaded Professor"<<std::endl;
    }
    int getPapers() const {return Papers;}
    void printProfessor() {
        Human::printHuman(); //Print Human first then add Professor Papers
        std::cout<<"Papers: "<<Papers<<std::endl;
    }
private:
    int Papers;
};
//------------------------------------

int main() {
    Student stu("Student",20,300); // Set predefined Student name, age and ects
    stu.printStudent();
    
 //alt.
 //Student stu("Student",20,300);
 //Student* s_p = &stu;
 //s_p->printStudent();
 
    Professor pro("Prof.",30,50); // Set predefined Professor name, age and papers
    pro.printProfessor();
    return 0;
}

/* OUTPUT:
    Creating overloaded Human
    Creating overloaded Student
    Name: Student
    Age: 20
    ECTS: 300
    Creating overloaded Human
    Creating overloaded Professor
    Name: Prof.
    Age: 30
    Papers: 50
*/