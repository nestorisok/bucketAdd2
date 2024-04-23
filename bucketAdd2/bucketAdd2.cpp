#include <iostream>
#include <string>
#include <unordered_map>


using namespace std;

void twoSum(vector<int>& nums, int target);

int main() {

    vector<int> myNums{ 4,2,7,11 };
    int target = 6;


    //resVec[0]= twoSum(myNums, target);
    cout << myNums[3] << endl;







	return 0;
	
}

void twoSum(vector<int>& nums, int target) {

    unordered_map<int, int> numBuckets;


    for (int i = 0; i < nums.size(); i++) {
        int missingNum = target - nums[i]; // getting number needed for target


        if (numBuckets.count(missingNum)) {   // checking to see if the number needed for our target is in the hashMap
            
            cout << "\nElements: " << numBuckets[missingNum] << ", " << i << "adds up to: " << target << endl;

            //return { numBuckets[missingNum], i }; // returns a number from bucket and our index
        }


        numBuckets[nums[i]] = i; // if missingNum does not exist in the hashmap
        // we add index and number to hashmap
        // so numBuckets[nums[0] = 2] = 0
    }


}