#include <stdio.h>
#include <iostream>
using namespace std;
//int main() {
//	printf("Hello, World!\n");
//	return 0;
//}

//
//1) store value 20 inside "num" variable.
//create a pointer to this variable.print the value of "num" using pointer.
//increment the pointer by 2 and show with the diagram what happens.
//
//2) accept two numbers from the user and with the help of pointers perform following arithmetic operations :
//+-*/
//[diagram compulsory]
//
//3) accept two numbers and swap them without using third variable.
//
//4) write "Call By Address" program[using pointer]
//
//5) Given
//void disp(int, int*);
//write a program to define above function and invoke it.
//
//6) Given following functions :
//void disp1(int k);
//int disp2(char*);
//void disp3();
//double* disp4(char ch);
//
//declare "pointer to functions" for the above functions.
//

//
//int main() {
//	int num = 20;
//	int *ptr = &num;
//	cout << "Value of Num is : " << num  <<  endl;
//	cout << "Address of Num is : " << ptr << endl;
//	cout << "Value using pointer: " << *ptr << endl;
//
//}

//
//int main() {
//	int num1, num2;
//	cout << "Enter Two Numbers : " << endl;
//		cin >> num1;
//		cout << "Enter second number : " << endl;
//		cin >> num2;
//
//		int  *ptr1 = &num1;
//		int* ptr2 = &num2;
//
//
//
//		cout << "Addition is " << *ptr1 + *ptr2 << endl;
//		cout << "Subtraction is" << *ptr1 - *ptr2 << endl;
//		cout << "Multiplication is " << * ptr1 * *ptr2 << endl;
//		cout << "Division is " << *ptr1 / *ptr2 << endl;
//
//
//
//}

//
//int main() {
//	int num1, num2;
//	cout << "Enter 1st Number : " << endl;
//	cin >> num1;
//
//	cout << "Enter 2nd Number : " << endl;
//	cin >> num2;
//
//	cout << "Numbers Before swap " << "a : " << num1 << " and " << "b : " << num2 << endl;
//
//	num1 = num1 + num2;
//	num2 = num1 - num2;
//	num1 = num1 - num2;
//
//	cout << "Numbers After swap " << "a : " << num1 << " and " << "b : " << num2 << endl;
//
//}


//
//int main() {
//
//	int num1;
//
//	cout << "Enter value for num1 : " << endl;
//	cin >> num1;
//
//	int *ptr1 = &num1;
//
//	cout << ptr1 << endl;
//	cout << *ptr1 << endl;
//
//}


//int main() {
//	void disp(int ,int*);  // function declaration 
//	int num1 = 10;
//	int num2 = 23;
//	int* ptr = &num2;
//	disp(num1,ptr);
//}
//void disp(int n, int* n_add) {
//	cout << "Value which was passed directly...  : " << n << endl;
//	cout << "Value which was passed via pointer : " << *n_add << endl;
//}

//
//int main() {
//	// method declaration
//	void disp1(int);
//	int disp2(char*);
//	void disp3();
//	double* disp4(char);
//
//	// calling the functions
//	disp1(10);
//
//	char ch[] = "TejasNoob";
//	char* ptrch = ch;
//	//char* ptrch1 = &ch[0];
//	int ans = disp2(ptrch);
//	cout << ans << endl;
//
//
//
//	disp3();
//
//
//	double* ptr4 = disp4('h');
//	cout << "return value of disp4 is : " << *ptr4 << endl;
//
//}
//
//void disp1(int k) {
//	cout << " disp1 : Hello value of k is : " << k << endl;
//}
//
//int disp2(char* a) {
//	cout << " disp2 : value of your character is : " << a << endl;
//	return 99;
//}
//
//void disp3() {
//	cout << " disp3 : I have nothing to accept and nothing to give " << endl;
//}
//
//double* disp4(char ch) {
//	cout << "Value of my character is " << ch << endl;
//	static double my_val = 23.343;
//	double* ptr = &my_val;
//	return ptr;
//
//	return 0;
//}