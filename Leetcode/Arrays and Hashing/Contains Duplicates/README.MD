# Contains Duplicates
Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

### Example 1
Input: nums = [1,2,3,1]

Output: true

**Explanation:**

The element 1 occurs at the indices 0 and 3.

### Example 2:

Input: nums = [1,2,3,4]

Output: false

**Explanation:**

All elements are distinct.

### Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]

Output: true

### Constraints
1 <= nums.length <= 105 \
-109 <= nums[i] <= 109
#

### My solution
I originally wanted to loop through the entire array and keep a counter for each number encountered, but then realized this is leetcode. So I opted to use an unordered_set so that it could have O(1) average time complexity. I then also realized that an unordered set in C++ actually returns false if an element already exists in the set. Below is the implementation. 

```cpp
bool containsDuplicate(vector<int>& nums) {
        std::unordered_set<int> theMap{};
        bool theResult = false;

        for(auto theNum : nums){
            auto thePair = theMap.insert(theNum);
            if(!thePair.second){
                theResult = true;
                break;
            }
        }
        
        return theResult;
    }
```

### Optimization
I saw a solution by someone else which didn't create a container but changed the original container. This is an efficient way to minimize storage complexity while only using time. This effectively gives us a time complexity of O(N log n). Below is their implementation.

```cpp
bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1;i<nums.size();i++){
            if(nums[i]==nums[i-1]){
                return true;
            }
        }
        return false;
    }
```

### Thoughts
I know you can use a hash map for this, but a set makes much more sense because it only allows uniqueness and only requires a key. A hash map would contain a key and a value, and the value isn't needed.
