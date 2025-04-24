#include <iostream>
#include <vector>
using namespace std;

class Solution {
    public:
        vector<int> twoSum(vector<int> &nums, int target) {
            for (int j = 0; j < nums.size() - 1; j++){ //For que Fija un primer valor (Recorre todo el vector)
                for (int i = j + 1; i < nums.size(); i++ ){ //For que Fija un segundo valor (Recorre todo el vector)
                    int suma = 0;
                    suma = nums[j] + nums[i]; 
                    if (suma == target){ //Comparador de la suma de la pareja, si se cumple la condicion, retorna las posiciones de donde se ubican los valores que suman el target
                        vector<int> ind = {j , i};
                        return  ind;
                    }
                }

            }
            return {0,0};
            }
    };

int main(){ //Prueba con distintos valores
    Solution sol;
    int target = 10;
    vector<int> nums ={2,5,5,11}, resul;
    resul = sol.twoSum(nums, target); 
    cout << resul[0] ;
    cout << resul[1];
    return 0;
}