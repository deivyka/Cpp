/*
W02 CLASSES Part B_01
    Create table with:
    Size three(3) that stores objects of the type Student.
*/

#include <iostream>
#include <vector>
//#include <string>
//---------------------student.h---------------------------------
class Student {
public:
    // Constructors
    Student();  //-Default constructor
    Student(std::string, int, std::string); //-Overloaded constructor
    ~Student(); //-Destructor
    
    //-Accessors (const = not modifiable)
    std::string getName() const;     //-return name
    int getAge() const;             //-return age
    std::string getDegree() const;   //-return degree
    
    //-Mutators (modifiable)
    void setName();     //-modify name
    void setAge();      //-modify age
    void setDegree();   //-modify degree
    
    // Print method
    //void printData();
    
private:
    std::string Name;
    int Age;
    std::string Degree;
};
//------------------------------------------------------

//-Default constructor (:: = 'scope resolution')
Student::Student() {
    Name = "John Doe";
    Age = -1;
    Degree = "Other degree";
}
//-Overloaded constructor
Student::Student(std::string n, int a, std::string d) {
    Name = n;
    Age = a;
    Degree = d;
}
//-Destructor
Student::~Student() {}

//-----------Get----------------------
std::string Student::getName() const {return Name;}
int Student::getAge() const {return Age;}
std::string Student::getDegree() const {return Degree;}

//-----------Set----------------------
// Create a vector with new_students adress
void fillVec(std::vector<Student>& new_students){
    std::string n;
    int a;
    std::string d;

    std::cout<<"How many students? ";
    int size;
    std::cin>>size;
    
    for (int i=0; i<size; i++) { //Create as many students as in "int size"
        std::cout<<"Student("<<i+1<<") name: ";
        std::cin>>n;
        std::cout<<"Student("<<i+1<<") age: ";
        std::cin>>a;
        std::cout<<"Student("<<i+1<<") degree: ";
        std::cin>>d;
        
        // Store all new students in vector
        Student newStud(n,a,d); 
        new_students.push_back(newStud);
    }
}

// Print method from vector with adress new_students
void printVec(const std::vector<Student>& new_students) {
    // Get number of students and print theese out
    for (int i=0; i<new_students.size(); i++) {
        std::cout   <<"Created a student: "<<new_students[i].getName()
                    <<", "<<new_students[i].getAge()
                    <<", "<<new_students[i].getDegree()<< std::endl;
    }
}

int main() {
    std::vector<Student> students;
    fillVec(students);
    printVec(students);
    return 0;
}

/* OUTPUT:
    How many students? 2
    Student(1) name: Student1
    Student(1) age: 20
    Student(1) degree: Bach
    Student(2) name: Student2
    Student(2) age: 21
    Student(2) degree: Bach2
    Created a student: Student1, 20, Bach
    Created a student: Student2, 21, Bach2
*/