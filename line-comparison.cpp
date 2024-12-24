#include<bits/stdc++.h>

using namespace std;

double calcLength(int x1 ,int y1 ,int x2 ,int y2){
    int x = x2 - x1 ;
    int y  = y2 - y1 ;

    return sqrt(x * x + y * y);

}

void compareLines(int x1, int y1, int x2, int y2, int a1, int b1, int a2, int b2) {
    double length1 = calcLength(x1, y1, x2, y2);
    double length2 = calcLength(a1, b1, a2, b2);

    cout << "Length of Line 1: " << length1 << endl;
    cout << "Length of Line 2: " << length2 << endl;

    if (length1 == length2) {
        cout << "The two lines are equal." << endl;
    } else if (length1 > length2) {
        cout << "Line 1 is greater than Line 2." << endl;
    } else {
        cout << "Line 1 is less than Line 2." << endl;
    }
}

bool areEqual(int x1 ,int y1 ,int x2 ,int y2,int a1, int b1, int a2, int b2){

    // calculate length of 2 lines 
    double length1 = calcLength(x1, y1, x2, y2);
    double length2 = calcLength(a1, b1, a2, b2);

    if (length1 != length2) return false;

    // Check if endpoints match, order doesn't matter
    if ((x1 == a1 && y1 == b1 && x2 == a2 && y2 == b2) || 
        (x1 == a2 && y1 == b2 && x2 == a1 && y2 == b1)) {
        return true;
    }

    return false;
}

int main()
{
    cout << "Welcome to line-Comparison-computation-program" << endl;

    // input of line 1
    int x1 , x2 , y1 , y2 ;
    cout << "Enter the coordinates of Line 1:" << endl;
    cout << "Point P (x1, y1): ";
    cin >> x1 >> y1;
    cout << "Point Q (x2, y2): ";
    cin >> x2 >> y2;


    // Input for Line 2
    int a1, b1, a2, b2;
    cout << "Enter the coordinates of Line 2:" << endl;
    cout << "Point A (a1, b1): ";
    cin >> a1 >> b1;
    cout << "Point B (a2, b2): ";
    cin >> a2 >> b2;


    double resLength1 = calcLength(x1 ,y1 ,x2 ,y2);
    double resLength2 = calcLength(a1 ,b1 ,a2 ,b2);
    cout << "Length of line 1 : " << resLength1 << endl ;
    cout << "Length of line 2 : " << resLength2 << endl ;

    // Check if two lines are equal 
    if (areEqual(x1, y1, x2, y2, a1, b1, a2, b2)) {
        cout << "The two lines are equal." << endl;
    } else {
        cout << "The two lines are not equal." << endl;
    }


    // Compare two lines 
    compareLines(x1, y1, x2, y2, a1, b1, a2, b2);


    return 0;
}
