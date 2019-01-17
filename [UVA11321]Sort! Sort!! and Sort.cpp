#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int divider;
bool my_compare(int i, int j) {
    if (i % divider != j % divider)
        return i % divider < j % divider;
    if (i & 1) // i is odd
    {
        if (j & 1) return i > j;
        return true;
    }
    if (j & 1) return false;
    return i < j;
}

int main()
{
    int kase;
    while(cin >> kase >> divider) {
        cout << kase << " " << divider << endl;
        if(kase == 0 && divider == 0) break;
        vector<int> arr;
        int tmp;
        for(int i = 0;i < kase;i++){
            cin >> tmp;
            arr.push_back(tmp);
        }
        sort(arr.begin(), arr.end(),my_compare);
        for(int i = 0;i < kase;i++) cout << arr[i] << endl;
    }

    return 0;
}
