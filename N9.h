#ifndef N9_H
#define N9_H

#include <iostream>
#include <stdexcept>
#include <cstdlib>
#include <ctime>
#include <cstdint>

// ����� �������
void InputArrSize(int32_t maxSize, int32_t& arrSize);

// ����� ������ ����������
void ChooseMethod(int64_t* arr, int32_t arrSize);
void ChooseMethod(double* arr, int32_t arrSize);

// ������ � �������� double
void FillArrayWithRandomNumbersD(double* arr, int32_t arrSize);
void InputElementsInArray(double* arr, int32_t arrSize);
void InputP(double& P);
int32_t LastNegative(double* arr, int32_t arrSize);
int32_t CountOfElementsLowerThanP(double* arr, int32_t arrSize, double P);
int32_t SumIntNumAfterLastNegative(int32_t arrSize, double arr[]);
void LessThenPSort(double* arr, int32_t arrSize, double P);

// ������ � �������� int64_t (����������� �����)
void InputElementsInArray(int64_t* arr, int32_t arrSize);
void FillArrayWithRandomNumbers(int64_t* arr, int32_t arrSize);
void InputP(int32_t& P);
void MoreThenPSort(int64_t* arr, int32_t arrSize, int32_t P);
void MaxNumsIndex(int64_t* arr, int32_t arrSize);
void SelectionSort(int64_t* arr, int32_t arrSize);
int32_t MinNaturalNumberNotInArray(int64_t* arr, int32_t arrSize);

#endif
