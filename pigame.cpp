#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

const string PI = "3.14159265358979323846264338327950288419716939937510";

int main() {
    cout << "Welcome to the Pi memorization game!\n";
    cout << "Enter as many digits of Pi as you can remember (up to 50 digits):\n";

    string userPi;
    cin >> userPi;

    // Check user input against actual value of Pi
    int correctDigits = 0;
    for (size_t i = 0; i < userPi.size() && i < PI.size(); ++i) {
        if (userPi[i] == PI[i]) {
            correctDigits++;
        } else {
            cout << "Game over! You entered an incorrect digit.\n";
            //break; // Exit loop as soon as a mismatch is found
            return 0;
        }
    }

    cout << "You got " << correctDigits << " digits correct out of " << PI.size() << ".\n";
    if (correctDigits == PI.size()) {
        cout << "Congratulations! You remembered Pi up to " << PI.size() << " digits!\n";
    } else {
        cout << "Keep practicing! Pi starts with " << PI << endl;
    }

    return 0;
}

