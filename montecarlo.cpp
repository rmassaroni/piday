#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

double approximatePi(int numPoints) {
    int pointsInsideCircle = 0;

    // Generate random points and check if they fall inside the circle
    for (int i = 0; i < numPoints; ++i) {
        double x = (double)rand() / RAND_MAX;  // Random x-coordinate between 0 and 1
        double y = (double)rand() / RAND_MAX;  // Random y-coordinate between 0 and 1

        // Check if the point falls within the unit circle
        if (x * x + y * y <= 1) {
            pointsInsideCircle++;
        }
    }

    // Approximate Pi using the ratio of points inside the circle to total points
    return 4.0 * pointsInsideCircle / numPoints;
}

int main() {
    // Seed the random number generator
    srand(time(nullptr));

    int numPoints;
    cout << "Enter the number of points to use in the simulation: ";
    cin >> numPoints;

    // Perform the Monte Carlo simulation to approximate Pi
    double approximatedPi = approximatePi(numPoints);

    cout << "Approximated value of Pi using " << numPoints << " points: " << approximatedPi << endl;

    return 0;
}

