/*
1. Use vector
2. Reuse Point class to represent individual 3D points in the input
3. Update Point class with 

*/


#include <iostream>
#include <algorithm> // For sort and next_permutation
#include <vector>
#include <math.h> // For calculateDist(sqrt and pow)
#include<fstream>
using namespace std;


class Point {
public:
    // Constructors
    //Point(){};
    Point(double a1, double a2, double a3){
        PointA1 = a1;
        PointA2 = a2;
        PointA3 = a3;
    }; 
    //~Point(){};

    //-Accessors (const = not modifiable)
    double getPointA1() const {return PointA1;}; 
    double getPointA2() const {return PointA2;};             
    double getPointA3() const {return PointA3;};

    // Calculate distance between A and B points using (x,y,z) coordinates in 3D space
    // Formula: AB = sq root((x2−x1)^2+(y2−y1)^2+(z2−z1)^2))
    double calculateDist(const Point &points) const{
        return sqrt(    pow(points.getPointA1() - PointA1, 2)
                     +  pow(points.getPointA2() - PointA2, 2)
                     +  pow(points.getPointA3() - PointA3, 2));
    };     
    
private:
    double PointA1, PointA2, PointA3;     
};


// Create a vector with points as referance
void FillVector(vector<Point> &points){
    double a1, a2, a3;
    int rows;
    cin>>rows;
    cout<<"How many points?  " << rows << endl;

    // Store all new points in a vectors
    for (int i=0; i<rows; i++) {
        cin >> a1 >> a2 >> a3;
        Point tempPoints(a1,a2,a3); 
        points.push_back(tempPoints);
    }
}


// Print created vector with
void PrintVector(const vector<Point> &points) {
    for (int i=0; i<points.size(); i++) {
        cout<<"Point "<<i<<": "
            <<" "<<points[i].getPointA1()
            <<" "<<points[i].getPointA2()
            <<" "<<points[i].getPointA3()
            << endl;
    }
}

// Takes a vector of points and the order of which those points are visited
// Computes total lengh of the path with spesified travel order 
double circuitLength(const vector<Point> &points, const vector<int> &order){
    double distance_total = 0.0;
    for (int i=0; i<points.size(); i++)
    {
        distance_total += points[order[i]].calculateDist(points[order[(i+1) % (order.size())]]);
    }
    //cout << "Print all distances from <circuitLenght> loop: " << distance_total << endl;
    return distance_total;
    
}


// Takes a vector of points and returns a vector that specifies the order to visit all 
// points in a single round trip
vector<int> findShortestPath(const vector<Point> &points){
    
    double shortestDistance;
    vector<int> bestPath;
    vector<int> currentPath(points.size());
    
    
    for (int i = 0; i < currentPath.size(); i++) 
    {
        currentPath[i] = i;
    };

    shortestDistance = circuitLength(points, currentPath);
    bestPath = currentPath;

    // Find all permutations for each point and compare with current best path
    while(next_permutation(currentPath.begin(), currentPath.end()))
    {
        if ((circuitLength(points, currentPath) < shortestDistance))
        {
            shortestDistance = circuitLength(points, currentPath);
            bestPath = currentPath;
        }
    };

    // Print out shortest distance
    cout << "Shortest distance: " << shortestDistance << endl;
    return bestPath;
}

// Print method from vector with adress points
void printPath(const vector<int> &bestPath) {
    cout << "best order [ " ;
    for (int i=0; i < bestPath.size(); i++){
        cout << bestPath[i] << " ";
    }
    cout << "]" << endl;
}


int main() {
    // Prompt for points and store them in vector
    cout << "Enter points manually or press ctrl+c and add <inputs/test-x.txt" << endl;
    vector<Point> pnt;
    FillVector(pnt);
    PrintVector(pnt);
    vector<int> shortestPath;
    
    shortestPath = findShortestPath(pnt);
    printPath(shortestPath);
    circuitLength(pnt, shortestPath);
    return 0;
}


/*
How many points?  5
  Point 0:  9 0 3   =18
  Point 1:  4 4 2   =20
  Point 2:  6 7 3   =32
  Point 3:  1 9 5   =30
  Point 4:  8 6 3   =34
  Best order:  [0 1 3 2 4]
  Shortest distance:  27.1016
*/