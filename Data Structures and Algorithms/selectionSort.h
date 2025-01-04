#pragma once



const int s = 5;
std::array<int, s> selectionSort(std::array<int, s> arr)
{
    const int size = arr.size();
    
    int min;
    int min_pos;
    
    for (int i = 0; i < size - 1; i++)
    {
        min = arr[i];
        min_pos = i;
        for (int j = i + 1; j < size; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                min_pos = j;
            }
        }
        arr[min_pos] = arr[i];
        arr[i] = min;
    }
    return arr;
}

/*    std::array<int, 5> argss = {5, 4, 3, 2, 1};
 
 for (int i = 0; i < 5; i++)
     std::cout << selectionSort(argss)[i] << std::endl;*/
