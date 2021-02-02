class Person {
public:
    // Defalut constructor
    Person() {}
    // Overloaded Constructor
    Person(std::string n, int c) {                           
        Name = n;
        Car = c;
    }
    
    // Get (accessors)
    std::string getName() const {return Name;}
    int getCar() const {return Car;}
    
    // Set (mutators)
    void ByCar()
    void SellCar()
    
private:
    std::string Name;
    Car[] ListOfCars;
};
//------------------------------------
class Car : public Person {
public:
    Car(std::string Colour, int EnginePower) : Person(Name, Car) {
    }
    int getECTS() const {return ECTS;}
    void printStudent() {
        Person::printHuman(); //Print Human first then add Student ETCS
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

