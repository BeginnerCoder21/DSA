void reverseArray(vector<int>& v,int left,int right) {
    if(left>right) return;
    int temp = v[left];
    v[left] = v[right];
    v[right] = temp;
    reverseArray(v, left+1, right-1);
}

vector<int> reverseArray(int n, vector<int> &nums)
{
    reverseArray(nums,0, n-1);
    return nums;
}