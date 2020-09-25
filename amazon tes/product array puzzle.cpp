vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {

    vector<long long int> v;

    for (int i = 0; i < n; i++)
    {
        long long int product = 1;
        for (int j = 0; j < n; j++)
        {
            if (j != i) {
                product = product * nums[j];

            }
        }
        v.push_back(product);
    }
    return v;
}