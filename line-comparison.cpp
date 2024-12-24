#include<bits/stdc++.h>

using namespace std;

double calcLength(int x1 ,int y1 ,int x2 ,int y2){
    int x = x2 - x1 ;
    int y  = y2 - y1 ;

    return sqrt(x * x + y * y);

}

int main()
{
    cout << "Welcome to line-Comparison-computation-program" << endl;

    int x1 , x2 , y1 , y2 ;
    cout << "Enter the co-ordinates of point P ." << endl;
    cout << "Enter x co-ordinate of point P ." << endl;
    cin >> x1 ;
    cout << "Enter y co-ordinate of point P ." << endl;
    cin >> y1 ;

    cout << "Enter the co-ordinates of point Q ." << endl;
    cout << "Enter x co-ordinate of point Q ." << endl;
    cin >> x2 ;
    cout << "Enter y co-ordinate of point Q ." << endl;
    cin >> y2 ;


    double resLength = calcLength(x1 ,y1 ,x2 ,y2);
    cout << "Length of line joining given two points is : " << resLength << endl ;


    return 0;
}
