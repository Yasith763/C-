int swaps(vector<int>& v) {
    auto sorted = v; 
    sort(begin(sorted),end(sorted));
    auto n = v.size();
    
    map<int, int> m;
    for (auto i=0u; i<n; ++i)
        m[v[i]] = i;
    
    auto swaps = 0;
    for (auto i=0u; i<n; ++i) {
        auto expected = sorted[i];
        if (expected != v[i]) {
            swaps++;
            auto expectedPos = m[expected]; 
            m[v[i]] = expectedPos; 
            swap(v[i], v[expectedPos]); 
        }
    }
    
    return swaps;
}
int Lilys_Homework(vector<int>& v)
{
    vector<int> reversed(rbegin(v), rend(v));
    return min(swaps(v), swaps(reversed));
}