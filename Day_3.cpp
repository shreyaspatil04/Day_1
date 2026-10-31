#include <iostream>
using namespace std;


//1) using cin and cout, accept name, address, age of a person and print it.

//int main() {
//	char name[20];
//	char address[50];
//	int age;
//	cout << "Enter Name : " << endl;
//	cin.getline(name,20);
//
//	cout << "Enter address : " << endl;
//	 cin.getline(address,50);
//
//	cout << "Enter Age : " << endl;
//	cin >> age;
//
//	cout << name << " " << age << " " << address << endl;
//
//}


//
//2) create following structure
//struct book
//{
//	char bid[5];
//	char name[30];
//	int price;
//};
//ask user how many records he wants to create and accordingly allocate memory.
//accept values from user and display.
//(Hint :-use  "new" operator)
//
//
//struct Book {
//	char bid[15];
//	char name[30];
//	int price;
//};
//
//int main() {
//	int size;
//	cout << "How many recoed do you want to store : " << endl;
//	cin  >> size;
//	Book *arr = new Book[size];
//
//	for (int i = 0; i < size; i++) {
//		cout << "Enter bid : " << endl;
//		cin >> arr[i].bid;
//
//		cout << "Enter name : " << endl;
//		cin >> arr[i].name;
//
//		cout << "Enter price : " << endl;
//		cin >> arr[i].price;
//
//
//		cout << arr[i].bid << " " << arr[i].name << " " << arr[i].price << endl;
//	}
//	delete[] arr;
//}



//
//// first we will create simple object / object of a class/struct
//struct Book {
//	char bid[10];
//	char name[30];
//	int price;
//};
//
//int main() {
//   	// this is valid if we use string 
//	//Book b;
//	//b.bid = "third";
//	//b.name = "shreyas";
//	//b.price = 23;
//
//	Book b;
//	strcpy_s(b.bid, "third");
//	strcpy_s(b.name, "my first book");
//	b.price = 2300;
//
//	cout << b.bid << endl;
//	cout << b.name << endl;
//	cout << b.price << endl;
//
//}

//
//// normal class 
//class Book {
//public :
//	string bid;
//	string name;
//	int price;
//
//	void print_data() {
//		cout << this->bid << endl;
//		cout << this->name << endl;
//		cout << this->price << endl;
//	}
//};
//
//int main() {
//	Book b;
//	b.bid = "first"; 
//	b.name = "my_first_book";
//	b.price = 899;
//	b.print_data();
//}


// array of object 

//class Book {
//public:
//	string bid;
//	string name;
//	int price;
//
//	void print_data() {
//		cout << this->bid << endl;
//		cout << this->name << endl;
//		cout << this->price << endl;
//	}
//};
//
//int main() {
//
//}










//
//5) given
//void disp(int); function.
//
//now create a function pointer and call this function using function pointer.


//void disp(int a) {
//	cout << "Hello from disp..." <<"my value is : "<< a << endl;
//}
//
//int main() {
//	void (*ptr)(int);
//	ptr = disp;
//	ptr(12);
//}





//
//6) swap 2 numbers  with. pointers. .
//
//int main() {
//	int num1;
//	int num2;
//
//	int* ptr = &num1;
//	int* ptr2 = &num2;
//
//	cout << "enter 1st number : " << endl;
//	cin >> num1;
//	cout << "enter 1st number : " << endl;
//	cin >> num2;
//
//
//	cout << "before swap num1: " << num1 << endl;
//	cout << "before swap num2: " << num2 << endl;
//
//
//	int temp = *ptr;
//	*ptr = *ptr2;
//	*ptr2 = temp;
//
//	cout << "after swap num1: " << num1 << endl;
//	cout << "after swap num2: " << num2 << endl;
//
//}





//
////8) write a function which can accept minimum 3 characters and maximum 5 characters and display them. (use "default arguments")
//
//void checking_default_function(int a, int b, int c, int d = 10, int e = 14) {
//  
//	cout << a << b << c << d << e << endl;
//
//	cout << "Bye " << endl;
//}

//int main() {
//	checking_default_function(1, 2, 3, 4);
//
//	checking_default_function(1, 2, 3);
//
//	checking_default_function(1, 2, 3, 4, 5);

//}





//9)write a function which takes 3 arguments
//variable, pointer and a reference.(any datatype)
//invoke this function and show how "call by value", "call by address" and "call by reference" will work.
//
//int main() {
//	void takes_all(int, int*, int);
//	int a = 10;
//	int b = 14;
//	int c = 73;
//	takes_all(a, &b, c);
//}
//
//void takes_all(int n, int* a, int b) {
//	
//	// storing all these values 
//	int num = n;
//
//	int* ptr = a;
//
//	int& ref = b;
//
//	cout << num << " " << *ptr << " " << ref <<" "<< endl;
//}



//
//accept)  from user how many chracters he has in his name, now allocate a memory accordingly and accept his name.[use new operator]
//
//int main() {
//	int size;
//
//	cout << "How many size you want to store your name.." << endl;
//		cin >> size;
//
//	 char* name =  new char[size+1];
//	 cin.ignore();
//
//	 cout << "Enter your name..." << endl;
//	 cin.getline(name, size + 1);
//
//	 cout << "Your name is : " << name << endl;
//
//	 delete[] name;
//
//}





//10)define 3 different structures and initialize their members.
//now write 3 different functions, but with the same name.
//these functions will accept each structure respectively and display their members.
//
//struct X {
//	int n = 10;
//};
//
//struct Y {
//	int m = 45;
//};
//
//struct Z {
//	int p = 53;
//};
//
//void disp(X &ref) {
//	cout << ref.n << endl;
//}
//
//void disp(Y &ref) {
//	cout << ref.m << endl;
//}
//
//void disp(Z &ref) {
//	cout << ref.p << endl;
//}
//
//int main() {
//	X x;
//	Y y;
//	Z z;
//	disp(x);
//	disp(y);
//	disp(z);
//}