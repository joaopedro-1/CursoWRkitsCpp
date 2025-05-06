
#include <iostream>

int main()
{
    int val; // numeros inteiros

    std::cout <<"Obtendo um valor do usuario"<< std::endl;
    std::cin >> val;
    std::cout << "Valor digitado: " << val << std::endl;

    //soma de dois numeros

    int num1,num2;

    std::cout << "Sumar dois numeros, escolha os numeros: " << std::endl;
    std::cin >> num1 >> num2;
    std::cout << num1 << " + " << num2<< " = " << num1+num2 << std::endl;

    //subtração de dois numeros


    std::cout << "Subtrair dois numeros: " << std::endl;
    std::cout << num1 << " - " << num2<< " = " << num1-num2 << std::endl;

    //testando operadores

    std::cout << "testando os operadores" << std::endl;
    std::cout << (int)(3<7)  <<std::endl;
    std::cout << (int)(3>7)  <<std::endl;
    std::cout << (int)(3>=7) <<std::endl;
    std::cout << (int)(3<=7) <<std::endl;
    std::cout << (int)(3==7) <<std::endl;
    std::cout << (int)(3!=7) <<std::endl;

    std::cout << "teste condicional"<< std::endl;
    
    //atividade aula 02


    return 0;
} 
