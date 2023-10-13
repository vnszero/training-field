#include <bits/stdc++.h>
using namespace std;
#define A 65
#define Z 90
#define a 97
#define z 122
#define zero 48
#define nine 57
void fix_string(string text);
void test_password(string password);
int main()
{
    string password = "";
    char letter;
    bool there_is_buffer;
    while(scanf("%c", &letter) != EOF){
        if (letter != '\n' && letter != '\r' && letter != '\t'){
            there_is_buffer = true;
            password += letter;
        } 
        else 
        {
            if (there_is_buffer == true){
                there_is_buffer = false;
                fix_string(password);
                test_password(password);
            }
            password = "";
        }
    }
    if (there_is_buffer){
        password += '\0';
        test_password(password);
    }
    return 0;
}
void fix_string(string text)
{
    for (int i=text.length(); i>=0; i--){
        if (text[i] >= A && text[i] <= Z || text[i] >= a && text[i] <= z || text[i] >= zero && text[i] <= nine){
            break;
        }
        else
        {
            text[i] = '\0';
        }
    }
}
void test_password(string password){
    bool there_is_upper_case = false;
    bool there_is_lower_case = false;
    bool there_is_number = false;
    bool valid_password = false;
    if (password.length() - 1 >= 6 && password.length() - 1 <= 32)
    { // ok
        for (int i=0; password[i] != '\0'; i++)
        {
            if (password[i] >= A && password[i] <= Z)
            {
                there_is_upper_case = true;
            }
            else if (password[i] >= a && password[i] <= z)
            {
                there_is_lower_case = true;
            }
            else if (password[i] >= zero && password[i] <= nine)
            {
                there_is_number = true;
            }
            else
            { // nok
                valid_password = false;
                break;
            }
        }

        if (there_is_lower_case && there_is_upper_case && there_is_number)
        {
            valid_password = true;
        }
        else
        { 
            valid_password = false;
        }
    }
    else
    { // nok
        valid_password = false;
    }
    if (valid_password)
    {
        cout << "Senha valida." << endl;
    }
    else
    {
        cout << "Senha invalida." << endl;
    }
}