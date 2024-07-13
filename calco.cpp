#include <iostream>
#include <cmath>

double addition(void);
double subtraction(void);
double multiplication(void);
double division(void);
double power(void);
double squareroot(void);

char operation;

int main() {
    std::cout << " **************** CALCULATOR **************** \n";
    std::cout << "Use one of the following operations\n";
    std::cout << "\t Addition: + \n";
    std::cout << "\t Subtraction: - \n";
    std::cout << "\t Multiplication: * \n";
    std::cout << "\t Divison: / \n";
    std::cout << "\t Exponent: ^ \n";
    std::cout << "\t Root: s \n";
    double result;
    std::cout << "Insert operation\n";
    std::cin >> operation;
    switch (operation)                 // Switch to decide operation
        {
        case '+':                          // if operation equal to + run function addition
            std::cout << "Adding\n\n";
            result = addition();
            break;
        case '-':                          // if operation equal to - run function subtraction
            std::cout << "Subtracting\n";
            result = subtraction();
            break;
        case '*':                          // if operation equal to * run function multiplication
            std::cout << "Multiplying\n";
            result = multiplication();
            break;
        case '/':                          // if operation equal to / run function divison
            std::cout << "Dividing\n"; 
            result = division(); 
            break;
        case '^':                          // if operation equal to ^ run function power
            std::cout << "Power\n";
            result = power();
            break;
        case 's':
            std::cout << "Root\n";
            result = squareroot();
            break;
        default:                           // print if a valid operation isn't entered
            std::cout << "Please use a valid operation indicator\n";
            break;    
        }
    
    
    std::cout << "\nResult: " << result << std::endl;                          // Result printing
    std::cout << " ******************************************** \n";
    return 0;
}

double addition() {                    // Addition funtion (activated when plus is inserted in the operation)
    double result, insertnum;
    result = 0;
    while (std::cin >> insertnum)
    {
        result += insertnum;
    }
    return result;
}

double subtraction() {                    // Subtraction funtion (activated when minus is inserted in the operation)
    double result, insertnum;
    std::cin >> result;
    while (std::cin >> insertnum)
    {
        result -= insertnum;
    }
    return result;
}

double multiplication() {                    // Multiplication funtion (activated when asterisk is inserted in the operation)
    double result, insertnum;
    result = 0;
    while (std::cin >> insertnum)
    {
        result *= insertnum;
    }
    return result;
}

double division() {                    // Division funtion (activated when slash is inserted in the operation)
    double result, insertnum;
    result = 0;
    while (std::cin >> insertnum)
    {
        result /= insertnum;
    }
    return result;
}

double power() {                       // Power funtion (activated when ^ is inserted in the operation)
    double result, base, exponent;
    std::cout << "Insert exponent base\n";
    std::cin >> base;
    std::cout << "Insert exponent power\n";
    std::cin >> exponent;
    result = pow(base, exponent);
    return result;
}

double squareroot() {
    double result, base, exponent;
    std::cout << "Insert base number\n";
    std::cin >> base;
    std::cout << "\nInsert root\n";
    std::cin >> exponent;
    result = pow(base, (1/exponent));
    return result;
}