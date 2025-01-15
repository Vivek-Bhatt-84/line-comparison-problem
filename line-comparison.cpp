#include <iostream>
#include <cmath>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x = 0, int y = 0) : x(x), y(y) {}
};

class Line {
private:
    Point p1, p2;

public:
    Line(Point p1, Point p2) : p1(p1), p2(p2) {}

    double length() const {
        int xDiff = p2.x - p1.x;
        int yDiff = p2.y - p1.y;
        return sqrt(xDiff * xDiff + yDiff * yDiff);
    }

    bool isEqualTo(const Line& other) const {
        double length1 = this->length();
        double length2 = other.length();

        if (length1 != length2)
            return false;

        // Check if endpoints match, order doesn't matter
        return ((p1.x == other.p1.x && p1.y == other.p1.y && p2.x == other.p2.x && p2.y == other.p2.y) || 
                (p1.x == other.p2.x && p1.y == other.p2.y && p2.x == other.p1.x && p2.y == other.p1.y));
    }

    static void compare(const Line& line1, const Line& line2) {
        double length1 = line1.length();
        double length2 = line2.length();

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
};

int main() {
    cout << "Welcome to line-comparison-computation-program" << endl;

    // Input for Line 1
    int x1, y1, x2, y2;
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

    // Create Point and Line objects
    Point p1(x1, y1), p2(x2, y2);
    Line line1(p1, p2);

    Point a(a1, b1), b(a2, b2);
    Line line2(a, b);

    // Display lengths
    cout << "Length of Line 1: " << line1.length() << endl;
    cout << "Length of Line 2: " << line2.length() << endl;

    // Check if lines are equal
    if (line1.isEqualTo(line2)) {
        cout << "The two lines are equal." << endl;
    } else {
        cout << "The two lines are not equal." << endl;
    }

    // Compare the two lines
    Line::compare(line1, line2);

    return 0;
}
