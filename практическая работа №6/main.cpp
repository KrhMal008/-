#include<iostream>
#include<string>
#include <vector>


using namespace std;

// int main() {
//
//     int n;
//     cin>>n;
//     int s=1;
//     vector<vector<int>> v(n);
//     for(int i=0;i<n;i++) {
//         int x=0;
//         s++;
//         while (x<=n-s) {
//             v[i].push_back(0);
//             x++;
//         }
//         x=0;
//         v[i].push_back(1);
//         while (v[i].size() < n) {
//             v[i].push_back(2);
//         }
//
//     }
//     for (int i = 0; i < v.size(); i++) {
//         for (int j = 0; j < v[i].size(); j++)
//             cout << v[i][j] << " ";
//         cout << endl;
//     }
// }



//==============================================2======================
// int main() {
//     int n, m, w;
//     cin >> n >> m >> w;
//
//     vector<string> v(n, string(m, '0'));
//     vector<int> v1(w), v2(w);
//
//     for (int i = 0; i < w; i++) {
//         cin >> v1[i] >> v2[i];
//         v1[i]--;
//         v2[i]--;
//         v[v1[i]][v2[i]] = '*';
//     }
//
//     for (int i = 0; i < w; i++) {
//         for (int x = v1[i] - 1; x <= v1[i] + 1; x++) {
//             for (int y = v2[i] - 1; y <= v2[i] + 1; y++) {
//                 if (x >= 0 && x < n && y >= 0 && y < m && v[x][y] != '*') {
//                     v[x][y]++;
//                 }
//             }
//         }
//     }
//
//     for (int i = 0; i < n; i++) {
//         cout << v[i] << endl;
//     }
//
//     return 0;
// }


//===============2 другой способ======================
// int main() {
//     int n, m;
//     cin >> n >> m;
//     vector<vector<int>> v(n + 4, vector<int>(m + 4));
//     int w;
//     cin >> w;
//
//     vector<pair<int, int>> vw(w);
//     for (int i = 0; i < w; i++) {
//         cin >> vw[i].first >> vw[i].second;
//     }
//
//
//     for (int i = 0; i < w; i++) {
//         v[vw[i].first][vw[i].second] = -1;
//     }
//
//
//     for (int i = 0; i < w; i++) {
//         int x = vw[i].first;
//         int y = vw[i].second;
//         for (int dx = -1; dx <= 1; dx++) {
//             for (int dy = -1; dy <= 1; dy++) {
//                 if (v[x + dx][y + dy] != -1) {
//                     v[x + dx][y + dy]++;
//                 }
//             }
//         }
//     }
//
//
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= m; j++) {
//             if (v[i][j] == -1) {
//                 cout << "*";
//             } else {
//                 cout << v[i][j];
//             }
//         }
//         cout << endl;
//     }
//
// }






//=========================3===========

int main() {
    string s;
    int n;
    cin >> s >> n;

    for (int i = 1; i < n; i++) {
        string t = "";
        int cnt = 0;

        for (int j = 0; j < s.size(); j++) {
            cnt++;
            if (s[j] != s[j + 1]) {
                t += to_string(cnt);
                t += s[j];
                cnt = 0;
            }
        }

        s = t;
    }

    cout << s << endl;
    return 0;
}




