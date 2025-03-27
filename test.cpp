#include <iostream>

void sort(int arr[], int size)
{
    
}

int main()
{
    int arr[] = { 1, 2, 3, 4, 5, 6 };
    int size = sizeof(arr) / sizeof(arr[0]);
    sort(arr, size);

    for(int i = 0; i < size; i++)
    {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}