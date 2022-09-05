#include <iostream>
#include "stack.cpp"
using namespace std;
Stack<int> s(4);
Stack<int> p(4);
Stack<int> d(4);
void print()
{
    s.displayStack();
    p.displayStack();
    d.displayStack();
}

int main()
{
    char ch, cha;
    int var,i=0;
    {
        s.push(4);
        s.push(3);
        s.push(2);
        s.push(1);
    }
    while (1)
    {
        retry:
        print();
        cout << "enter s p d for take out element\n";
        cin >> ch;
        if (ch == 's')
        {
            if(s.isEmpty())
            {
                goto retry;
            }
            var = s.pop();
        }
        else if (ch == 'p')
        {
            if(p.isEmpty())
            {
                goto retry;
            }
            var = p.pop();
        }
        else if (ch == 'd')
        {
            if(d.isEmpty())
            {
                goto retry;
            }
            var = d.pop();
        }
        else
        {
            continue;
        }
    
    again:
        cout << "where do you want to push the " << var << endl;
        cin >> cha;
        if (cha == 's')
        {
            if (var < s.peek()||s.isEmpty())
            {

                s.push(var);
            }
            else
            {
                if (ch == 's')
                {

                    s.push(var);
                }
                else if (ch == 'p')
                {

                    p.push(var);
                }
                else if (ch == 'd')
                {
                    d.push(var);
                }
            }
        }
        else if (cha == 'p')
        {

            if (var < p.peek()||p.isEmpty())
            {

                p.push(var);
            }
            else
            {
                if (ch == 's')
                {

                    s.push(var);
                }
                else if (ch == 'p')
                {

                    p.push(var);
                }
                else if (ch == 'd')
                {
                    d.push(var);
                }
            }
        }
        else if (cha == 'd')
        {
            if (var < d.peek()||d.isEmpty())
            {
                d.push(var);
            }
            else
            {
                if (ch == 's')
                {

                    s.push(var);
                }
                else if (ch == 'p')
                {

                    p.push(var);
                }
                else if (ch == 'd')
                {
                    d.push(var);
                }
            }
        }
        else
        {
            goto again;
        }
        if (d.isFull())
        {
        break;
        }
        i++;
        
    }
    print();
cout<<"game completed in "<<i<<"steps congrats";
    return 0;
}
