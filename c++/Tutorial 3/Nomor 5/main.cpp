/* Nama : Muhammad Gilang Ramadhan */
/* NIM  : 13520137 */
/* Nomor 5 */
/* Tutorial 3 */

#include <bits/stdc++.h>
using namespace std;

int main() {
	int N, M;
	string temp;
	map<string, int> N_WORDS;

	// Implementasi
	cin >> N;
	for (int i = 0; i < N; ++i) {	
		cin >> temp;
		N_WORDS[temp]++;
	}

	cin >> M;
    int j = 0;
    while (j < M)
    {
        cin >> temp;
		if (N_WORDS.find(temp) != N_WORDS.end()) { // ditemukan
			N_WORDS[temp]--;
		}
        j++;
    }
    
	// Output
	for (auto item = N_WORDS.begin(); item != N_WORDS.end(); ++item) {
		for (int i = 0; i < item->second; i++) {
			cout << item->first << endl;
		}
	}

	return 0;
}