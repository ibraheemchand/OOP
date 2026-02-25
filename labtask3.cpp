#include <iostream>
using namespace std;

class ArrayOperations
{
public:
    void DisplayContents(int array[], int size)
    {
        for (int i = 0; i < size; i++)
            cout << array[i] << " ";
        cout << endl;
    }

    void findEvenValues(int array[], int size)
    {
        for (int i = 0; i < size; i++)
            if (array[i] % 2 == 0)
                cout << array[i] << " ";
        cout << endl;
    }

    void findOddValues(int array[], int size)
    {
        for (int i = 0; i < size; i++)
            if (array[i] % 2 != 0)
                cout << array[i] << " ";
        cout << endl;
    }

    int* findMinMax(int array[], int size)
    {
        int* result = new int[2];
        int min = array[0];
        int max = array[0];

        for (int i = 1; i < size; i++)
        {
            if (array[i] < min)
                min = array[i];
            if (array[i] > max)
                max = array[i];
        }

        result[0] = min;
        result[1] = max;
        return result;
    }

    int* SortArray(int array[], int size, char orderType)
    {
        int* sorted = new int[size];

        for (int i = 0; i < size; i++)
            sorted[i] = array[i];

        for (int i = 0; i < size - 1; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                if ((orderType == 'a' || orderType == 'A') && sorted[i] > sorted[j])
                    swap(sorted[i], sorted[j]);
                else if ((orderType == 'd' || orderType == 'D') && sorted[i] < sorted[j])
                    swap(sorted[i], sorted[j]);
            }
        }

        return sorted;
    }
};

int main()
{
    int arr[] = {12, 5, 7, 20, 3, 18, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    ArrayOperations obj;

    obj.DisplayContents(arr, size);
    obj.findEvenValues(arr, size);
    obj.findOddValues(arr, size);

    int* minMax = obj.findMinMax(arr, size);
    cout << minMax[0] << " " << minMax[1] << endl;

    int* asc = obj.SortArray(arr, size, 'A');
    obj.DisplayContents(asc, size);

    int* desc = obj.SortArray(arr, size, 'D');
    obj.DisplayContents(desc, size);

    delete[] minMax;
    delete[] asc;
    delete[] desc;

    return 0;
}
