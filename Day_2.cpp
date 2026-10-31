#include <iostream>
using namespace std;


//8) given
//int arr[] = { 10,20,30,40,50 }
//
//write a function which can accept above array inside the pointer and using for loop traverse it.

//
//void accepting(int *a) {
//	for (int i = 0; i < 5; i++) {
//		cout << *(a + i) << endl;
//	}
//}
//int main() {
//	int arr[5] = { 10,20,30,40,50 };
//	accepting(arr);
//}


//
//9) given
//char name[20] = "Computer"
//
//now declare a pointer to the above string and increment the pointer in such a way that when you display 
// the string using pointer, it should display "puter"

//
//void printing(char* n) {
//   n = n+3;
//	cout << n << endl;
//}
//int main() {
//	char ch[10] = "Computer";
//	printing(ch);
//}


//
//10) accept a name, display it.Now change first and the last characters of the name with their next characters and again print it.
//e.g
//name is "sachin"
//output should be "tachio"

//
//int main() {
//	char name[7] = "Sachin";
//	char* ptr = name;
//	(*ptr)++;
//	(*(ptr + 5))++;
//	cout << ptr << endl;
//}

//
////11) accept a name and print its length without using in built(strlen) function
//
//
//int getlength(char* arr) {
//	int count = 0;
//	for (int i = 0; arr[i] != '\0'; i++) {
//		count++;
//	}
//	return count;
//}
//
//int main() {
//	char name[15];
//	cout << "Enter a name : ";
//	cin >> name;
//	int count = getlength(name);
//	cout << "Length is : " << count << endl;
//}

//
//int main() {
//	int a = 10;
//	cout << a << endl;
//
//	int &ref = a;
//	ref = 39;
//	cout << "ref" << ref << endl;
//	cout <<"a" <<  a << endl;
//}
//




