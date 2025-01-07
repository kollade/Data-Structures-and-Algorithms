#pragma once


std::array<int, 50> bubbleSort(std::array<int, 50> arr)
{
 
    int temp;
    bool flag;
    for (int i = 0; i < arr.size(); i++)
    {
        flag = false;
        for(int j = 0; j < arr.size() - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                flag = true;
                temp = arr[j + 1];
                arr[j + 1] = arr[j];
                arr[j] = temp;
            }
        }
        if (flag == false)
        {
            break;
        }
    }
    return arr;
}
