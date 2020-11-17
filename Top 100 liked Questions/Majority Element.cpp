class Solution {
public:
  int majorityElement(vector<int>& nums) {
    int count = 0;

    int tech_school = 0;

    for (auto num : nums) {

      if (count == 0)

        tech_school = num;

      if (tech_school == num)

        count++;

      else

        count--;

    }

    return tech_school;
  }
};