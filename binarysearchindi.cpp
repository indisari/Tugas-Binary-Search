#include <iostream>
using namespace std;

int binarysearch(int arr[], int a, int b, int x) 
{
 // a = kiri b = kanan //
   while (a <= b ) 
   {
      int m = a + (b - a) / 2;
      if (arr[m] == x) return m;
      if (arr[m] < x) a = m + 1;
      else b = m - 1;
   }
   return -1; 
}

int main()
{
	int arr[] = {4, 10, 26, 32, 46, 48, 54}; 
	int n = sizeof(arr) / sizeof (arr[0]);
	int x = 32; 
	int result = binarysearch (arr, 0, n-1, x);
	(result == -1) ? cout << "Tidak Ditemukan"
	: cout << " Ditemukan Indeks ke: " << result;
	
	return 0;
}
