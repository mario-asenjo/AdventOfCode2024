#include <iostream>
#include <vector>
#include <algorithm>

int main(){
        //Vectors for holding both sides of the input.
        std::vector<int> a, b;
        for (int i = 0; i < 1000 ; i++){
                //Loop to insert data into vectors.
                int x, y;
                std::cin>>x>>y;
                a.push_back(x);
                b.push_back(y);
        }
        //We want to pair them from the smallest, so we sort both of the vectors
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        //We create sum which will hold our sum of differences between both values each time.
        unsigned long long sum = 0;
        for (int i = 0; i < 1000; i++){
                //Loop to sum each lap the difference between values.
                sum += abs(a[i] - b [i]);
        }
        //We display the sum.
        std::cout<<sum<<std::endl;
}
