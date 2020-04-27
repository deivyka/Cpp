/* 
W02 CLASSES Part B_02
    Create table with:
    Size three(3) that stores objects of the type pointer to Student.
*/

#include <iostream>
#include <vector>
//#include <string>
//---------------------student.h---------------------------------
class Student {
public:
    //Constructors
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
    void printData();
    
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
Student::~Student() {
}

//-----------Get----------------------
std::string Student::getName() const {return Name;}
int Student::getAge() const {return Age;}
std::string Student::getDegree() const {return Degree;}

//-----------Set----------------------
// Create a vector with new_students adress and point to it
void fillVec(std::vector<Student*>& new_Vec_students) {
    Student* p_students = NULL;
    std::string n;
    int a;
    std::string d;
    std::cout<<"How many students? ";
    int size;
    std::cin>>size;
    
    for (int i=0; i<size; i++) {
        std::cout<<"Student("<<i+1<<") name: ";
        std::cin>>n;
        std::cout<<"Student("<<i+1<<") age: ";
        std::cin>>a;
        std::cout<<"Student("<<i+1<<") degree: ";
        std::cin>>d;
        std::cout<<std::endl;
        p_students = new Student(n,a,d);
        new_Vec_students.push_back(p_students);
    }
}

// a->b =(*a).b, access member through pointer
void printVec(const std::vector<Student*> new_students) {
    for (int i=0; i<new_students.size(); i++) {
        std::cout<<"Created a student: "<<new_students[i]->getName()
        <<", "<<new_students[i]->getAge()
        <<", "<<new_students[i]->getDegree()<< std::endl;
        std::cout<<std::endl;
    }
}

// Clean up pointers after creation
static void cleanUP(std::vector<Student*>& students) {
    for (std::vector<Student*>::iterator pObj = students.begin(); pObj!=students.end(); ++pObj) {
        delete *pObj;
    }
    for (int i=0; i<students.size(); ++i) {
        std::cout<<"Deleting: "<<students[i]->getName()
        <<", "<<students[i]->getAge()
        <<", "<<students[i]->getDegree()<< std::endl;
    }
    students.clear();
}

int main() {
    std::vector<Student*> students;
    students.reserve(3);
    fillVec(students);
    printVec(students);
    cleanUP(students);
    return 0;
}

/* OUTPUT:
    How many students? 2
    Student(1) name: Stud
    Student(1) age: 20
    Student(1) degree: MS

    Student(2) name: Stud2
    Student(2) age: 21
    Student(2) degree: MS1

    Created a student: Stud, 20, MS
    Created a student: Stud2, 21, MS1

    terminate called after throwing an instance of 'std::logic_error'
        what():  basic_string::_M_construct null not valid
    Aborted (core dumped)
*/