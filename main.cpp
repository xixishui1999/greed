#include <algorithm>
#include <vector>
#include <iostream>

int main(){
    std::vector<int> hungry{3, 1, 0, 5, 4, 2, 9, 7, 8, 6};
    std::sort(hungry.begin(), hungry.end());
    std::vector<int>::iterator ite = hungry.begin();
	for (; ite != hungry.end(); ite++){
		std::cout << *ite;
	}
	std::cout << std::endl;
    //std::cout << hungry.begin() << std::endl;
}