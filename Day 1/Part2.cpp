#include <iostream>
#include <vector>
#include <algorithm>

int main(){
        std::vector<int> a, b;
        for (int i = 0; i < 1000; i++){
                int x, y;
                std::cin >> x >> y;
                a.push_back(x);
                b.push_back(y);
        }
        unsigned long long result = 0;
        for (int i = 0; i < 1000; i++){
                result = result + (a[i] * std::count(b.begin(), b.end(), a[i]));
        }
        std::cout<<result<<std::endl;
        return 0;
}
