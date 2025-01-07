#pragma once


std::array<int, 6> insertionSort(std::array<int,6> arr)
{
    int j = 0;
    int key = 0;
    
    for (int i = 1; i < arr.size(); i++)
    {
        key = arr[i];
        j = i-1;
        
        while(j >= 0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j = j-1;
        }
        arr[j+1] = key;
        
    }
    return arr;
    
}
