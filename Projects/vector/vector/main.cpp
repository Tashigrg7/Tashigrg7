#include <iostream>
#include <vector>
// constants very important
std::vector<int> arr
{ 0, 0, 1,-20, -1, -1, -1, 2,2,3,8,2,3,8,3,4,4,5,6,6,6,
1,2,2,3,8,2,3,8,3,4,4,5,6,6,6,
1,2,2,3,8,2,3,8,3,4,4,5,6,6,6,
1,2,2,3,8,2,3,8,3,4,4,5,
8,9,9 };

object main()
{
    const int MARR = (int)arr.size();
    for (int index = 0; index < MARR; index++)
        std::cout << MARR[index] << ' ';
    std::cout << "Vector World!\n";
}