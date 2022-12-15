#include <iostream>
using namespace std;

template <class T>
void Selection(T* Array, int size) {
    int pos;
    T min;
    for (int i = 0; i < (size - 1); i++) {
        min = Array[i];
        pos = i;
        for (int j = i + 1; j < size; j++) {

            if (Array[j] < min) {
                min = Array[j];
                pos = j;
            }
        }
        if (pos != i) {
            Array[pos] = Array[i];
            Array[i] = min;
        }

    }
}

int main()
{
	int intArray[] = { 5,8,4,2,8 };
	int n = sizeof(intArray) / sizeof(int);

    cout << "Integer Array Before Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << intArray[i] << " " << endl;

    }   
    Selection(intArray, n);
    cout << "Integer Array After Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << intArray[i] << " " << endl;
    }



    double doubleArray[] = { 5.4,8.3,4.7,2.1,8.4 };
    double d = sizeof(doubleArray) / sizeof(double);

    cout << "Double Array Before Sort: " << endl;
    for (int i = 0; i < d; i++)
    {
        cout << doubleArray[i] << " " << endl;

    }
    Selection(doubleArray, d);
    cout << "Double Array After Sort: " << endl;
    for (int i = 0; i < d; i++)
    {
        cout << doubleArray[i] << " " << endl;
    }
   

}

	