#pragma once


std::array<int, 5> insertionSort(std::array<int, 5> arr)
{
    int min;
    int min_pos;
    int temp;
    for (int i = 1; i < arr.size(); i++)
    {
        int fact = 0;
        min = arr[i];
        min_pos = i;
        for (int j = i-1; j <= 0; j--)
        {
            if (arr[i] < arr[j])
            {
                min = arr[j];
                min_pos = j;
                temp = arr[i];
                fact = 1;
            }
            else
                break;
        }
        if (fact == 1){
            for (int k = min_pos; k < i + 1; k++)
            {
                arr[k + 1] = arr[k];
                arr[min_pos] = temp;
            }
        }

    }
    return arr;
}
