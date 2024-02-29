#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

class Circle{
    private:
        float radius;
        float area;
        float circ;

        float x_center;
        float y_center;

        void calculateArea(){float area = M_PI*radius*radius;}
        void calculateCirc(){float circ = 2*M_PI*radius;}
        float calculateDistance(float x2, float y2){return sqrt(pow((x2 - x_center), 2) + pow((y2 - y_center), 2));}

    public:

        void setRadius(float r){radius = r;}
        void increaseRadiusByPercentage(float percentage){radius = radius + radius*(percentage/100);}
        void setCenter(float x, float y)
        {
            x_center = x;
            y_center = y;
        }
        void printRadius(){cout << "Radius: " << radius << endl;}
        void printCenter(){cout << "X center: " << x_center << endl << "Y center: " << y_center << endl;}
        void printArea(){cout << "Area: "<< area << endl;}
        float calculateCenterDist(const Circle otherCircle){return calculateDistance(otherCircle.x_center, otherCircle.y_center);}    
};

int main()
{
    Circle circle1;
    cout << "Circle 1:" << endl;
    circle1.setRadius(3);
    circle1.printRadius();
    circle1.setCenter(3, 4);
    circle1.printCenter();
    circle1.increaseRadiusByPercentage(10);
    circle1.printRadius();

    cout << endl;
    cout << "Circle 2:";

    Circle circle2;
    circle2.setRadius(2);
    circle2.printRadius();
    circle2.setCenter(0, 0);
    circle2.printCenter();
    circle2.increaseRadiusByPercentage(50);
    circle2.printRadius();
    
    float dist = circle1.calculateCenterDist(circle2);

    cout << endl << "Distance between circle1 and circle2 is " << dist;

}