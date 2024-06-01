#include <iostream>
#include <vector>

using namespace std;

void group_by(int small, int big, vector<int>& collection);
int rollover(int reference, int next, vector<int>& collection);
int findReference(int index, vector<int> collection);

int main()
{
    int N, L;
    int x, y;
    cin >> N >> L;
    vector<int> collection(N + 1, 0);
    for (int j = 1; j < N+1; j++)
    {
        collection[j] = 0;
    }

    for (int i = 0; i < L; i++)
    {
        cin >> x >> y;
        if (collection[x] == 0)
        {
            collection[x] = x;
        }
        if (collection[y] == 0)
        {
            collection[y] = y;
        }

        if (x < y)
        {
            group_by(x, y, collection);
        }
        else
        {
            group_by(y, x, collection);
        }
    }
    int origin;
    int index;
    int condition = 1;
    for (index = 1; index < N+1; index++)
    {
        if (collection[index] == index)
        {
            collection[index] = origin;
            index++;
            break;
        }
    }
    for (; index < N+1; index++)
    {
        if (findReference(index, collection) != origin)
        {
            condition = 0;
            break;
        }
    }

    if (condition)
    {
        cout << "COMPLETO" << endl;
    }
    else
    {
        cout << "INCOMPLETO" << endl;
    }

    return 0;
}

void group_by(int small, int big, vector<int>& collection)
{
    int father = findReference(small, collection);
    
    if (collection[big] != 0)
    {
        collection[big] = rollover(father, collection[big], collection);
    }
    else
    {
        collection[big] = father;
    }
}

int rollover(int reference, int next, vector<int>& collection)
{
    if (collection[next] != next)
    {
        collection[next] = rollover(reference, collection[next], collection);
    }
    collection[next] = collection[reference];
    return collection[reference];
}

int findReference(int current, vector<int> collection)
{
    while(collection[current] != current)
    {
        current = collection[current];
    }
    return current;
}
