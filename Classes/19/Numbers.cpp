#include <iostream>
#include <cstdlib>
#include "Numbers.h"
using namespace std;

void Numbers::SetNums(vector<int> nums) {
   this->nums = nums;
}

vector<int> Numbers::GetNums() {
   return nums;
}

int Numbers::FindMax() {
   /* Type your code here. */
   int max;
   if(nums.empty())
   {
       max = 0;
   }
   else
   {
       max = nums[nums.size() - 1];
   }

   for(int i = 0; i < nums.size(); i++)
   {
       if(max < nums[i])
       {
           max = nums[i];
       }
   }
    return max;

}

// Fill vector nums with pseudo-random integers (0-999) with a seed value   
void Numbers::FillRandomly(int seed, int size) {
   srand(seed);
   for(int i = 0; i < size; ++i){
      nums.push_back(rand() % 1000);
   }
   
}