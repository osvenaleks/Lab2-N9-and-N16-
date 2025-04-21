// ��������� ��� ���������� ����� ���� �����
#include <iostream>
#include <cstdint>


void InputNumber(int64_t& number);
int64_t SumOfDigits(int64_t number);

int main() {
    int64_t number;

   
    InputNumber(number);
    if (number < 0) {
        number = -number;
    }
    
    std::cout << "Sum of digits: " << SumOfDigits(number) << "\n";

    return 0;
}

// ������� ��� ����� �����
void InputNumber(int64_t& number) {
    std::cout << "Enter a number: ";
    std::cin >> number;
   
}

// ����������� ������� ��� ���������� ����� ���� �����
int64_t SumOfDigits(int64_t number) {
    
    if (number == 0) {
        return 0;
    }

 
    return n % 10 + SumOfDigits(n / 10);
}
