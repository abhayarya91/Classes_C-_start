#include <iostream>
using namespace std;

void merge(int arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
        {
        	L[i] = arr[l + i];
		}
    for (int j = 0; j < n2; j++)
       {
       		R[j] = arr[m + 1 + j];
	   }
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2)
	{
        if (L[i] <= R[j])
		{
            arr[k] = L[i];
            i++;
        }
        else
		{
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
	{
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
	{
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r)
{
    if (l < r)
	{
        int m = l + (r - l) / 2;
        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
}

void printArray(int A[], int size)
{
    for (int i = 0; i < size; i++)
        cout << A[i] << " ";
    cout << endl;
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Given array is:\n";
    printArray(arr, n);

    mergeSort(arr, 0, n - 1);

    cout << "\nSorted array is:\n";
    printArray(arr, n);

    return 0;
}






//
//
////
////
////
////
////
////
////
////
////
////
////
////
////
////
//////#include <bits/stdc++.h>
//////using namespace std;
//////
//////void merge(int array[], int const left, int const mid, int const right) {
//////    int const subArrayOne = mid - left + 1;
//////    int const subArrayTwo = right - mid;
//////
//////    auto *leftArray = new int[subArrayOne], *rightArray = new int[subArrayTwo];
//////
//////    for (auto int i = 0; i < subArrayOne; i++)
//////        leftArray[i] = array[left + i];
//////    for (auto int j = 0; j < subArrayTwo; j++)
//////        rightArray[j] = array[mid + 1 + j];
//////
//////    auto int indexOfSubArrayOne = 0, indexOfSubArrayTwo = 0;
//////    int indexOfMergedArray = left;
//////
//////    while (indexOfSubArrayOne < subArrayOne && indexOfSubArrayTwo < subArrayTwo) {
//////        if (leftArray[indexOfSubArrayOne] <= rightArray[indexOfSubArrayTwo]) {
//////            array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
//////            indexOfSubArrayOne++;
//////        } else {
//////            array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
//////            indexOfSubArrayTwo++;
//////        }
//////        indexOfMergedArray++;
//////    }
//////
//////    while (indexOfSubArrayOne < subArrayOne) {
//////        array[indexOfMergedArray] = leftArray[indexOfSubArrayOne];
//////        indexOfSubArrayOne++;
//////        indexOfMergedArray++;
//////    }
//////
//////    while (indexOfSubArrayTwo < subArrayTwo) {
//////        array[indexOfMergedArray] = rightArray[indexOfSubArrayTwo];
//////        indexOfSubArrayTwo++;
//////        indexOfMergedArray++;
//////    }
//////    delete[] leftArray;
//////    delete[] rightArray;
//////}
//////
//////void mergeSort(int array[], int const begin, int const end) {
//////    if (begin >= end)
//////        return;
//////
//////    int mid = begin + (end - begin) / 2;
//////    mergeSort(array, begin, mid);
//////    mergeSort(array, mid + 1, end);
//////    merge(array, begin, mid, end);
//////}
//////
//////void printArray(int A[], int size) {
//////    for (int i = 0; i < size; i++)
//////        cout << A[i] << " ";
//////    cout << endl;
//////}
//////
//////int main() {
//////    int arr[] = { 12, 11, 13, 5, 6, 7 };
//////    int arr_size = sizeof(arr) / sizeof(arr[0]);
//////
//////    cout << "Given array is \n";
//////    printArray(arr, arr_size);
//////
//////    mergeSort(arr, 0, arr_size - 1);
//////
//////    cout << "\nSorted array is \n";
//////    printArray(arr, arr_size);
//////    return 0;
//////}
//
//
//
//
//
//
//
//
//
//#include <bits/stdc++.h>
//#include <iostream>
//using namespace std;
//
//void insertionSort(int arr[], int n)
//{
//    int i, key, j;
//    for (i = 1; i < n; i++)
//	{
//        key = arr[i];
//        j = i - 1;
//
//        while (j >= 0 && arr[j] > key)
//		{
//            arr[j + 1] = arr[j];
//            j = j - 1;
//        }
//        arr[j + 1] = key;
//    }
//}
//
//void printArray(int arr[], int n)
//{
//    for (int i = 0; i < n; i++)
//    {
//    	cout << arr[i] << " ";
//	}
//    cout << endl;
//}
//
//int main() {
//    int N;
//    cout << "Enter the number of elements: ";
//    cin >> N;
//
//    int arr[N];
//    cout << "Enter the elements: ";
//    for (int i = 0; i < N; i++)
//	{
//		cin >> arr[i];
//	}
//	
//        
//
//    insertionSort(arr, N);
//    
//    cout << "Sorted array: ";
//    printArray(arr, N);
//
//    return 0;
//}

