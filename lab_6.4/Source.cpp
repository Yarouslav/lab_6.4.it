    #include <iostream>
    #include <iomanip>
    #include <Windows.h>

    using namespace std;

    void create(int* arr, int SIZE, double MIN, double MAX)
    {
        for (int i = 0; i < SIZE; i++)
        {
            arr[i] = (MAX - MIN) * rand() / RAND_MAX + MIN;
        }
    }

    void print(int* arr, int SIZE)
    {
        for (int i = 0; i < SIZE; i++)
        {
            cout << arr[i] << " ";
        }
    }

    int calculateSumOfSquares(int arr[], int SIZE) {
        int sum = 0;
        for (int i = 0; i < SIZE; i++) {
            sum += pow(arr[i], 2);
        }
        return sum;
    }

    void sort(int* arr, const int SIZE)
    {
        for (int i = 0; i < SIZE - 1; i++)
        {
            int min = arr[i];
            int imin = i;
            for (int j = i + 1; j < SIZE; j++)
                if (min < arr[j])
                {
                    min = arr[j];
                    imin = j;
                }
            arr[imin] = arr[i];
            arr[i] = min;
        }
    }

    int main()
    {
        srand((unsigned)time(NULL));

        SetConsoleCP(1251);
        SetConsoleOutputCP(1251);

        double MIN, MAX;
        int SIZE;

        cout << "¬вед≥ть розм≥р масиву (SIZE): "; cin >> SIZE;
        cout << "¬вед≥ть д≥апазон елемент≥в масиву (MIN): "; cin >> MIN;
        cout << "¬вед≥ть д≥апазон елемент≥в масиву (MAX): "; cin >> MAX;
        cout << endl;

        int* arr = new int[SIZE];
        create(arr, SIZE, MIN, MAX);

        print(arr, SIZE);
        cout << endl;
        cout << "—ума квадрат≥в: " << calculateSumOfSquares(arr, SIZE) << endl;
        sort(arr, SIZE);
        cout << endl;
        print(arr, SIZE);

        delete[] arr;

        return 0;
    }