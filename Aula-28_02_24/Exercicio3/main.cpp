#include <iostream>
#include <vector>
#include <string>


using namespace std;

class Car{

    public:
    float km;
    float fuel;
    float maxFuel;
    float avgKmL;
    Car(float capacity, float consumption);

    void toFuel(float l){
        if (l+fuel >= maxFuel){
            fuel = maxFuel;
        }
        else{fuel = fuel + l;}
    }

    void drive(float distance){
        if (fuel - distance/avgKmL >= 0){
            km = km + distance;
            fuel = fuel - distance/avgKmL;
        }
        else{
            cout << "It's not possible to drive that distance with the actual fuel ammount!" << endl;
            cout << "With the actual fuel amount (" << fuel << ") the car can drive only (" << fuel*avgKmL << ")" << endl;
        }
    }
    void displayInfos(){
        cout << "Travelled distance: " << km << endl;
        cout << "Remaining fuel: " << fuel << endl;
    }

};

Car::Car(float capacity, float consumption){
    maxFuel = capacity;
    avgKmL = consumption;
}

int main(){
    Car car1(40, 12);
    Car car2(50, 14);

    car1.toFuel(20);
    car2.toFuel(30);

    car1.drive(200);
    car2.drive(350);

    cout << "Car 1: " << endl;
    car1.displayInfos();
    cout << "Car 2: " << endl;
    car2.displayInfos();
}
