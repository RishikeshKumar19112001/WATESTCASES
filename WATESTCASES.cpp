
#include <iostream>
#include <climits>
#include <algorithm>
#include <vector>
using namespace std;

int main(){
    int T = 0;
    cin >> T;
    while(T--) {
        int N = 0;
        cin >> N;
        vector<int> vobj(N);
        for(int i = 0; i < N; i++){
            cin >> vobj[i]; }
        string V_string;
        cin >> V_string;
        int ans = INT_MAX;
        for(int i = 0; i < N; i++){
            if(V_string[i] == '0') {
                if(vobj[i] < ans)
                    ans = vobj[i];}
        }
        cout << ans << endl;}
	return 0;
}