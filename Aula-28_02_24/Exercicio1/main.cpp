#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Person{
    private:
        string name;
        int age;
        float height;
    public:
        // Getter methods
        string getName() const {return name;}
        int getAge() const {return age;}
        float getHeight() const {return height;}

        // Setter methods
        void setName(string nameToSet){name = nameToSet;}
        void setAge(int ageToSet){age = ageToSet;}
        void setHeight(float heightToSet){height = heightToSet;}

        void printPerson(){
            cout << "Name: "   << name << endl;
            cout << "Age: "    << age << endl;
            cout << "Height: " << height << endl;
        }
};

int main()
{
    Person person1;
    person1.setName("Artur Nilo Valle");
    person1.setAge(21);
    person1.setHeight(1.81);

    person1.printPerson();

    return 0;
}