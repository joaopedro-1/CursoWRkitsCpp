#include <iostream>


int main ()
{
    int num1,num2;

    std::cout << "entre com dois numeros: ";
    std::cin >> num1 >> num2;
    std::cout << num1 <<" + " << num2 << " = " << num1+num2 << std::endl;
    std::cout << num1 <<" - " << num2 << " = " << num1-num2 << std::endl; 
    std::cout << num1 <<" * " << num2 << " = " << num1*num2 << std::endl; 
    std::cout << num1 <<" / " << num2 << " = " << num1/num2 << std::endl;
    
    if(num1>num2){
        std::cout << num1 <<" eh maior que " << num2 << std::endl;
    }else if(num2>num1){
        std::cout << num2 <<" eh maior que " << num1 <<std::endl;
    }else{
        std::cout << num2 <<" eh igual a " << num1 <<std::endl;
    }

    return 0;
}