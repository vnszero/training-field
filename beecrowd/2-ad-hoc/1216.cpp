#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>
using namespace std;
int main()
{
    string name, last;
    float dist, avg = 0;
    int count = 0;
    while(cin >> name >> last)
    {
        cin >> dist;
        avg += dist;
        count++;
    }
    avg /= count;
    printf("%.1f\n", avg);
    return 0;
}