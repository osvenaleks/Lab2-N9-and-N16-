//��������� ������� ������� ����� ������������� � �� ����������� ����� N
#include <iostream>
#include <cstdint>

void InputNumber(int64_t& N);
int64_t sumOfDivisors(int64_t N);
void FindFriendlyNumbers(int64_t N);

int main() {
    int64_t N{};

    InputNumber(N);

    FindFriendlyNumbers(N);

    return 0;
}

//������� ��� ����� ����� ��� �������� ����� ������ �����������
void InputNumber(int64_t& N) {
    std::cout << "Enter the number N: ";
    std::cin >> N;
}

//������� ������� ������� ����� ��������� ����� N
int64_t sumOfDivisors(int64_t N) {
    int64_t sum{ 1 }; //�������� ������� � ����� ������� ����� � ����������� ���� � ����� �� ���������� ���� ���� ����� N,�� ������� ��� �� ������ �����������
    for (int64_t i{ 2 }; i * i <= N; i++) { //�� �������� ��������� ����� ��� ����� �����������
        if (N % i == 0) {   // ���� �������� ��������� � �����
            sum += i;
            if (i != N / i) { // ���� �������� �� ����� �������� �� ��������� �������
                sum += N / i; 
            }
        }
    }
    return sum;
}

//������� ������� ������� ����� ������������� � �� ���������� N
void FindFriendlyNumbers(int64_t N) {
    bool foundFriendly = false; //������ ����

    for (int64_t i{ 1 }; i < N; ++i) {
        if (sumOfDivisors(i) == N) {
            std::cout << "Friendly number for " << N << ": " << i << "\n";
            foundFriendly = true;
        }
    }
    //���� �� ������� ������������� ����� �� �������� �� ����
    if (!foundFriendly) {
        std::cout << "There are no friendly numbers less than " << N << " for " << N << ".\n";
    }
}
