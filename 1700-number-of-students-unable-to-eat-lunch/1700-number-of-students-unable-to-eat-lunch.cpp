class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
      int arr[2]={0};
        for(auto i:students)
        {
            arr[i]++;
        }
        
        for(int i=0;i<sandwiches.size();i++)
        {
            int s=sandwiches[i];
            if(arr[s]==0)
            {
                return sandwiches.size()-i;
            }
            
            arr[s]--;
        }
        return 0;
    }
};