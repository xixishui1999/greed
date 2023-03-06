// #include <algorithm>
// #include <vector>
// #include <iostream>

// using namespace std;

// int main(){
//     // std::vector<int> hungry{3, 1, 0, 5, 4, 2, 9, 7, 8, 6};
//     // std::sort(hungry.begin(), hungry.end());
//     // std::vector<int>::iterator ite = hungry.begin();
// 	// for (; ite != hungry.end(); ite++){
// 	// 	std::cout << *ite;
// 	// }
// 	// std::cout << std::endl;
//     //std::cout << hungry.begin() << std::endl;
//     vector<vector<int>> hungry;
//     vector<int> cook;
//     cook = {1, 2, 3};
//     hungry.push_back(cook);
// }
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
using namespace std;

int main() {
    // vector<string> words = {"apple", "banana", "orange", "apple", "pear", "orange"};
    // map<string, int> m; // 使用map
    // unordered_map<string, int> um; // 使用unordered_map
    // for (auto word : words) {
    //     m[word]++; // map会自动按照键值升序排序
    //     um[word]++; // unordered_map不会排序
    // }
    // cout << "Using map:" << endl;
    // for (auto p : m) {
    //     cout << p.first << ": " << p.second << endl;
    // }
    // cout << "Using unordered_map:" << endl;
    // for (auto p : um) {
    //     cout << p.first << ": " << p.second << endl;
    // }
    /*-----------------pair-----------------*/  
    pair<string, int> a = make_pair("zj", 3);
    cout << a.first << "  "<< a.second << endl;
    pair<string, int> b("lh", 1);
    cout << b.first << "  "<< b.second << endl;
    vector<pair<string, int>> pm;
    pm.push_back(a);
    pm.push_back(b);

}