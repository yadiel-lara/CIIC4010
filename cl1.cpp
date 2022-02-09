#include <cmath>
#include <iostream>

using namespace std;

double calculateTriangleArea(double s1, double s2, double s3){

    double s = (s1 + s2 + s3) / 2;
    double area = sqrt(s*(s-s1) * (s-s2) * (s-s3));
    return area;

}

int main(){

    cout << "Area is: " << calculateTriangleArea(4, 13, 15)  << endl;

    cout << "Area is: " << calculateTriangleArea(10, 10, 10) << endl;

    cout << "Area is: " << calculateTriangleArea(20, 20, 20) << endl;

}
