#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

float KE(const float, const float);
void displayKE(float);
void input (float&, float&);

int main()
{
    float mass, velocity;
    //arguments inside parentheses - function call.
    input(mass, velocity);
    displayKE(KE(mass, velocity));

    //get value and pass into another function - 1 statement

    return 0;
}

void input(float &mass, float &velocity)
{
    cout << "Please enter the mass: ";
    cin >> mass;
    cout << "Please enter the velocity: ";
    cin >> velocity;
}

float KE(const float mass, const float velocity) //parameters inside parenthesis
{
    return .5 * mass * pow(velocity, 2);
}

void displayKE(float ke)
{
    cout << "The Kinetic Energy is: " << fixed << setprecision(3) << ke;
}


