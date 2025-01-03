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


/*std::array<int, 7> arrays= {1, 2, 3, 4, 5, 6, 7};
int searchno;
std::cout << "Enter the number you want to search:\n";
std::cin >> searchno;
if ( binarySearch<7>(arrays, searchno) == -1)
{
    std::cout << "no match found" << std::endl;
}
else
    std::cout << "match found in: " <<  binarySearch<7>(arrays, searchno) << std::endl;*/
