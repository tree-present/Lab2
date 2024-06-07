#include<iostream>
#include<vector>

using namespace std;

int N, M;
vector<int> vec;


void func(int cnt) {
    if(cnt == M){
	for(int i = 1; i <= M; i++){
	    cout << vec[i] << " ";
	}
	cout << endl;
    }
    else{
	if(cnt == 0){
	    vec.push_back(0);
	}
	int temp = M;
	for(int i = vec[cnt] + 1; i <= N - M + cnt; i++){
	    vec.push_back(i);
	   func(cnt + 1);
	    vec.pop_back();
	}
    }
}
int main() {
   cin >> N >> M;
   func(0);
}
