#include <iostream>
#include <string>

using namespace std;
int main()
{
    string tape;
    int max_read;
    int counter;
    int cycles;
    while (std::cin >> tape)
    {
        cin >> max_read;
        counter = 0;
        cycles = 0;
        for(int i=0; tape[i]!='\0'; i++)
        {
            if(tape[i] == 'R')
            {
                counter++;
            }
            else if (tape[i] == 'W')
            {
                if (counter > 0)
                {
                    cycles++;
                    counter = 0;
                }
                cycles++;
            }
            if (counter == max_read)
            {
                cycles++;
                counter = 0;
            }
        }
        if (counter > 0)
        {
            cycles ++;
        }
        cout << cycles << endl;
    }
    return 0;
}