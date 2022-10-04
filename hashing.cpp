#include <iostream>
using namespace std;

int main()
{
    int m;
    int data[100];
    int banyak;
    cout << "Input M : ";
    cin >> m;
    cout << "Input banyak angka : ";
    cin >> banyak;
    int key[banyak];
    for (int a = 0; a < banyak; a++)
    {
        cout << "Input key ke " << a + 1 << " : ";
        cin >> key[a];
    }

    for (int a = 0; a < m; a++)
    {
        data[a] = -1;
    }

    for (int a = 0; a < banyak; a++)
    {
        int index = key[a] % m;
        if (data[index] == -1)
        {
            data[index] = key[a];
        }
        else
        {
            int i = index + 1;
            bool run = true;
            while (run)
            {
                if (data[i] == -1)
                {
                    data[i] = key[a];
                    run = false;
                }
                else
                {
                    if (i >= m)
                    {
                        i = 0;
                    }
                    i++;
                }
            }
        }
    }
    for (int a = 0; a < m; a++)
    {
        if (data[a] == -1)
        {
            cout << a << "-->"
                 << "[ ]" << endl;
        }
        else
        {
            cout << a << "-->"
                 << "[" << data[a] << "]" << endl;
        }
    }
    return 0;
}