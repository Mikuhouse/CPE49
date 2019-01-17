#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
	int kase, num, num_backup, tmp, mediun, result;
	vector<int> arr;
	cin >> kase;
	while(kase--) {
		cin >> num;
		num_backup = num;
		arr.clear();
		
		while(num--) {
			cin >> tmp;
			arr.push_back(tmp);
		}
		
		num = num_backup;
		sort(arr.begin(), arr.end());
		mediun = arr[num / 2];
		
		result = 0;
		while(num--){
			result += abs(arr[num] - mediun);
		}
		cout << result << endl;
	}
	return 0;
}