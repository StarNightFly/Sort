#include <iostream>
const int MaxSize = 100;
template<typename T>
struct RecType
{
	T key;
	char data;
};
template <typename T>
class MSortClass
{
	RecType<T>R[MaxSize];
	int length;
public:
	MSortClass();
	void SetK(T a[], int n);
	void DispR();
	void InsertSort();
	void BinInsertSort();
	void ShellSort();
	void BubbleSort();
	void QuickSort();
	void QuickSort1();
	void SelectSort();
	void HeapSort();
	void MergeSOrt();
};
