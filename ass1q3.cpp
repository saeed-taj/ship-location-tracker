#include <iostream>
#include <iomanip>  // For setprecision and fixed
using namespace std;

// Re-use the Angle class from Q1
class Angle {
private:
    int degrees;
    float minutes;
    char direction; // 'N', 'S', 'E', 'W'

public:
    // Constructor with three arguments
    Angle(int deg = 0, float min = 0.0, char dir = 'N') : degrees(deg), minutes(min), direction(dir) {}

    // Member function to input angle values
    void getAngle() {
        do {
            cout << "Enter degrees between 0 to 180: ";
            cin >> degrees;

            if (degrees < 0 || degrees > 180)
                cout << "Error: Invalid input. Enter degrees from 0 to 180." << endl;

        } while (degrees < 0 || degrees > 180);

        do {
            cout << "Enter minutes from 0 to 59.9: ";
            cin >> minutes;

            if (minutes < 0 || minutes >= 60)
                cout << "Error: Invalid input. Enter minutes from 0 to 59.9." << endl;
            
        } while (minutes < 0 || minutes >= 60);

        do {
            cout << "Enter direction (N, S, E, W): ";
            cin >> direction;

            direction = toupper(direction);  // Convert to uppercase

            if (direction != 'N' && direction != 'S' && direction != 'E' && direction != 'W')
                cout << "Error: Invalid input. Enter correct direction (N, S, E, W)." << endl;

        } while (direction != 'N' && direction != 'S' && direction != 'E' && direction != 'W');
    }

    // Member function to display angle in 179°59.9' E format
    void displayAngle() const {
        cout << degrees << '\xF8' << fixed << setprecision(1) << minutes << "' " << direction;
    }
};

// Ship class to track each ship's serial number and position
class Ship {
private:
    static int shipCount;  // Static variable to count total number of ships
    int serialNumber;      // Serial number for each ship
    Angle latitude;        // Ship's latitude (Angle object)
    Angle longitude;       // Ship's longitude (Angle object)

public:
    // Constructor
    Ship() {
        shipCount++;        // Increment static ship counter
        serialNumber = shipCount;  // Assign the serial number based on ship count
    }

    // Function to input the ship's position
    void getPosition() {
        cout << "Enter the latitude for ship " << serialNumber << ": " << endl;
        latitude.getAngle();  // Input latitude

        cout << "Enter the longitude for ship " << serialNumber << ": " << endl;
        longitude.getAngle(); // Input longitude
    }

    // Function to display the ship's serial number and position
    void displayPosition() const {
        cout << "Ship " << serialNumber << " Position: Latitude: ";
        latitude.displayAngle();  // Display latitude
        cout << ", Longitude: ";
        longitude.displayAngle(); // Display longitude
        cout << endl;
    }
};

// Initialize the static member variable outside the class
int Ship::shipCount = 0;

int main() {
    // Create three ship objects
    Ship ship1, ship2, ship3;

    // Get the position for each ship
    ship1.getPosition();
    ship2.getPosition();
    ship3.getPosition();

    // Display the position for each ship
    ship1.displayPosition();
    ship2.displayPosition();
    ship3.displayPosition();

    return 0;
}
