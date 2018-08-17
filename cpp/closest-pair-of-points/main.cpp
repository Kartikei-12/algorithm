//Program to calculate smallest distance,
//between any two pair of points from given list of points
#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
#include"closestPair.h"

int main()
{
    std::vector<my_namespace::Pair> pairList = {
        {2, 3}, {12, 30},
        {40, 50}, {5, 1},
        {12, 10}, {3, 4}
    };
    std::cout<<"\nClosest distance is "<<cloestDist(pairList);
    return 0;
}