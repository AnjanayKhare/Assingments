#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool sortcol(const vector<int>& v1, const vector<int>& v2){
    return v1[0]*1.0/v1[1] > v2[0]*1.0/v2[1];
}

float knapsack(vector<vector<int>> vect, int w){
	int m = vect.size();
	int n = vect[0].size();
	sort(vect.begin(), vect.end(), sortcol);
	float ans = 0;
	for(int i=0;i<m;i++){
		if(w>vect[i][1]){
			w-=vect[i][1];
			ans += vect[i][0];
		}else{
			ans += (vect[i][0]*1.0/vect[i][1])*w;
			break;
		}
	}
	return ans;
 }

int main(){
    vector<vector<int> > vect{ { 1, 2 },
                               { 4, 5 },
                               { 7, 8 }};
	cout << knapsack(vect, 4);
}

