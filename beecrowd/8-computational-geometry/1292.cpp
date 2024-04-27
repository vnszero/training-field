#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

    // Pitagoras' solution
    // a solution that faces round troubles.
    /*
        pentagon_big_radius = (pentagon_side/2) / sin(angle_to_radians(36))
        square_diagon = 2 * (pentagon_big_radius * sin(angle_to_radians(54)) / sin(angle_to_radians(108)))
        square_side = ((square_diagon**2)/2)**(1/2)
    */

    // current solution
    /*
        Reminder: internal angle in square = 90 degrees
        Reminder: internal angle in regular pentagon = 108 degrees
        
        (108 - 90) / 2 = 9 degrees
        
        imagine triangle ABC
        
        angles
        A - 9 degrees
        B - 108 degrees
        C - 180 - 108 - 9 = 63 degrees

        AB = pentagon side
        AC = square side
        BC = part of pentagon side

        sin propertie
        ( AB / sin(C) ) = ( AC / sin(B) )
    */

double angle_to_radians(int angle)
{
    return angle*M_PI/180;
}

int main() 
{
    double pentagon_side;
    double square_side;
    while(cin >> pentagon_side){
        square_side = pentagon_side;
        square_side = pentagon_side*sin(angle_to_radians(108)) / sin(angle_to_radians(63));
        cout << fixed << setprecision(10) << square_side << endl;
    }
    return 0;
}