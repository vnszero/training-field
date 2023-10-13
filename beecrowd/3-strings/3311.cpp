#include <bits/stdc++.h>
using namespace std;
class Chainlink
{
private:
    string m_name;
    Chainlink *m_next;

public:
    Chainlink(string name) : m_name(name), m_next(nullptr) {}

    string get_name()
    {
        return m_name;
    }
    void set_name(string name)
    {
        m_name = name;
    }

    Chainlink *get_next()
    {
        return m_next;
    }
    void set_next(Chainlink *next)
    {
        m_next = next;
    }
};
class Chain
{
private:
    int m_size;
    Chainlink *m_begin;
    Chainlink *m_end;

public:
    Chain() : m_size(0), m_begin(nullptr), m_end(nullptr) {}
    bool isEmpty()
    {
        return m_begin == nullptr && m_end == nullptr;
    }
    void print()
    {
        Chainlink *current = m_begin;
        if(!isEmpty()){
            while (current != m_end)
            {
                cout << current->get_name() << endl;
                current = current->get_next();
            }
            cout << current->get_name() << endl;
        }
    };
    void insert(string name)
    {
        Chainlink *temp = new Chainlink(name);
        m_size += 1;
        if (isEmpty())
        {
            m_begin = temp;
        }
        else
        {
            Chainlink *current = m_begin;
            while (current->get_next() != nullptr)
            {
                current = current->get_next();
            }
            current->set_next(temp);
        }
        m_end = temp;
    }
    void insert_in_order(string name)
    {
        Chainlink *temp = new Chainlink(name);
        m_size += 1;
        if (isEmpty())
        {
            m_begin = temp;
            m_end = temp;
        }
        else if (name.compare(m_begin->get_name()) < 0)
        {
            temp->set_next(m_begin);
            m_begin = temp;
        }
        else
        {
            Chainlink *current = m_begin;
            Chainlink *previous = nullptr;
            
            while (current != nullptr && name.compare(current->get_name()) >= 0)
            {
                previous = current;
                current = current->get_next();
            }
            
            previous->set_next(temp);
            temp->set_next(current);

            if (current == nullptr)
            {
                m_end = temp;
            }
        }
    }
};
int main()
{
    Chain names;
    string name;
    int N;
    cin >> N;
    for (int i=0; i<N; i++)
    {
        cin >> name;
        names.insert_in_order(name);
    }
    names.print();
    return 0;
}