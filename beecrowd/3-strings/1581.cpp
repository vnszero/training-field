#include <bits/stdc++.h>
using namespace std;
int main(){
    int cases;
    int people;
    string language;
    string main_language;
    bool keep_patter;

    cin >> cases;
    while (cases > 0){
        cin >> people;
        keep_patter = true;

        for (int i=0; i<people; i++)
        {
            cin >> language;

            if (keep_patter){
                if (i==0)
                {
                    main_language.assign(language);
                }
                else
                {
                    if (main_language.compare(language) != 0)
                    {
                        keep_patter = false;
                    }
                }
            }
        }
        if (keep_patter)
        {
            cout << main_language << endl;
        }
        else
        {
            cout << "ingles" << endl;
        }
        cases--;
    }
}