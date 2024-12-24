#include <iostream>
#include <vector>
#include <algorithm>

int main(){
        int layers = 1000;
        int res = 0;
        for (int i = 0; i < layers; i++){
                std::vector<int> a;
                while(true){
                        int x;
                        scanf("%d", &x);
                        a.push_back(x);
                        char c;
                        scanf("%c", &c);
                        if(c == '\n'){
                                break;
                        }
                }

                bool checkDifferences = true;
                bool desc = true;
                bool ascen = true;
                int k = (int) a.size();

                for (int j = 0; j < k - 1; j++){
                        int dif = a[j+1] - a[j];
                        if (dif > 0){
                                desc = false;
                        }
                        if (dif < 0){
                                ascen = false;
                        }
                        if (!(1 <= abs(dif) && abs(dif) <= 3)){
                                checkDifferences = false;
                                break;
                        }
                }
                if (checkDifferences && (ascen || desc)){
                        res++;
                }
        }
        std::cout<<res<<std::endl;
        return 0;
}
