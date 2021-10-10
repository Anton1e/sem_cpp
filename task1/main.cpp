#include <iostream>
#include "arithmetics.h"

void panic(int result_sum, int result_mul){
    std::cout << "Unexpected results" << " " << result_sum << " " << result_mul << "\n";
}

void printsuccess(){
    std::cout << "Ok!" << "\n";
}

int main(){
    int a, b;
    std::cin >> a >> b;
    int result_sum = sum(a, b), result_mul = mul(a, b);
    if (result_sum == a + b && result_mul == a * b){
        printsuccess();
    }
    else{
        panic(result_sum, result_mul);
    }
    return 0;
}
