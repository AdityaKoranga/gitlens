#include <iostream>
#include <set>
#include <math.h>
using namespace std;

set<char> tempSet;

int cardinality(int n, char *A)
{

    for (int i = 0; i < n; i++)
        tempSet.insert(A[i]);

    return tempSet.size();
}

void print(int n, char *A)
{
    cout << "{ ";
    for (int i = 0; i < n; i++)
    {
        cout << A[i];
        if (i != n - 1)
            cout << ", ";
    }
    cout << " }\n";
}

bool ismember(int n, char *A, char ch)
{
    for (int i = 0; i < n; i++)
        if (A[i] == ch)
            return true;

    return false;
}

void powerset(int n, char *A)
{
    cout << "{  ";
    for (int i = 0; i < pow(2, tempSet.size()); i++)
    {
        cout << "{";
        int flag = 1;
        int j = 0;
        for (auto k : tempSet)
        {
            if (i & (1 << j))
            {
                if (!flag) 
                    cout << ",";

                flag = 0;

                cout << k;
            }
            j++;
        }
        if (i != (pow(2, tempSet.size()) - 1))
            cout << "}, ";
        else
            cout << "}";
    }
    cout << "  }";
}

int main()
{
    int n;
    cout << "Enter size of Array: ";
    cin >> n;

    char A[n];
    cout << "Enter elements of the Array: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];

    cout << "\nSet: ";
    print(n, A);
    cout << endl;

    cout << "Cardinality: " << cardinality(n, A) << endl;

    char find;
    cout << "\nTake an element to find within an Array: ";
    cin >> find;
    if (ismember(n, A, find))
        cout << find << " is present in the Array.\n\n";
    else
        cout << find << " is not present in the Array.\n\n";

    cout << "Powerset of Array: ";
    powerset(n, A);
    cout << endl;
}