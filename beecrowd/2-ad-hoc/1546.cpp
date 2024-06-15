#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    vector<string> members = {"Rolien", "Naej", "Elehcim", "Odranoel"};
    
    int days, feedbacks, index;
    cin >> days;
    for (int i = 0; i < days; i++)
    {
        cin >> feedbacks;
        for (int j = 0; j < feedbacks; j++)
        {
            cin >> index;
            cout << members[index - 1] << endl;
        }
    }
    return 0;
}