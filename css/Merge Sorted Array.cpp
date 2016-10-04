class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    	int end = m + n - 1;
    	int i = m - 1; 
    	int j = n - 1;
    	
    	while(end >= 0){
    	    if(j == -1 || (i >= 0 &&nums1[i] > nums2[j])) 
    	        nums1[end] = nums1[i--];
    		else
    		    nums1[end] = nums2[j--];
    		end--;
    	}
    	
    }
};