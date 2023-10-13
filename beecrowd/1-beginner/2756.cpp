#include <iostream>
using namespace std;
void process(int order){
    if (order == 0){
        cout << "    D     D" << endl;
        cout << "     C   C" << endl;
        cout << "      B B" << endl;
        cout << "       A" << endl;
    }
    else
    {
        cout << "       A" << endl;
        cout << "      B B" << endl;
        cout << "     C   C" << endl;
        cout << "    D     D" << endl;
    }
}
void goal(){
    process(1);
    cout << "   E       E" << endl;
    process(0);
}
int main(){
    process(1);
    goal();
    process(0);
    process(1);
    goal();
    process(0);

}