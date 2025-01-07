#pragma once


std::array<int, 50> bubbleSort(std::array<int, 50> arr)
{
 
    int temp;
    for (int i = 0; i < arr.size(); i++)
    {
        for(int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
    }
    return arr;
}
