#include <iostream>
#include <cstdint>

// ������� ��� ����� �������� `k`, ������������� �����
void EnterShiftLeftFromWhichElement(int64_t& k);

// �������, ����������� ����� ��������� ������� ����� ������� � `k`-�� ��������
void ArrayAfterShift(int64_t* arr, int64_t k, size_t arraySize);

// ������� ��� ������ ������� ����� ���������� ������
void ChangeArrayOutput(const int64_t* arr, int64_t k, size_t arraySize);

int main() {
    int64_t arr[]{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    int64_t k{}; 
    size_t arraySize{ sizeof(arr) / sizeof(arr[0]) }; 

    // ���� �������� `k`
    EnterShiftLeftFromWhichElement(k);

    // ����� ������� �����
    ArrayAfterShift(arr, k, arraySize);

    // ����� ���������� �������
    ChangeArrayOutput(arr, k, arraySize);

    return 0;
}

// ������� ��� ����� �������� `k` (�������, � �������� ���������� �����)
void EnterShiftLeftFromWhichElement(int64_t& k) {
    std::cout << "Enter the shift value\n";
    std::cin >> k; 
}

// ������� ��� ���������� ������ ������� ����� ������� � `k`-�� ��������
void ArrayAfterShift(int64_t* arr, int64_t k, size_t arraySize) {
    // �������� ����� � �������� `k - 2`, ��� ��� ��������� ���������� � 0
    for (int64_t i{ k - 2 }; i < arraySize; ++i) {
        ++arr[i]; // ����������� ������ ������� �� 1
    }
    arr[arraySize - 1] = 9; // ��������� ������� ������� ������� ��� 9 ��� ������������ ���������� ��� �� �������
}

// ������� ��� ������ ������� ����� ������
void ChangeArrayOutput(const int64_t* arr, int64_t k, size_t arraySize) {
    std::cout << "Array shift left by " << k << "\n";
    for (int64_t j{ }; j < arraySize; ++j) {
        std::cout << arr[j] << " "; // ����� ������� �������� ������� ����� ������
    }
}
