#pragma once


template<int T>

int binarySearch(std::array<int, T> arr, int key){
    int temp = - 1;
    int left = 0;
    int mid;
    int right = arr.size() - 1;
    
    while(left <= right)
    {
        mid = left + (right - left)/ 2 ;
        
        if (key == arr[mid])
            return mid;
        else if (key < arr[mid])
        {
            right = mid - 1;
        }
        else
            left = mid + 1;
    }
    return temp;
}


