//#include <iostream>
//
//using namespace std;
//
//
//class Car
//{
//public:
//
//	int model;
//	string name;
//
//	//Parametrized + Default
//	Car(int a=0, int b=0)
//	{
//		cout << "Constructor\n" << endl;
//	}
//
//
//	//constant functions
//	void display() const
//	{
//		cout << model << endl;
//	}
//	
//	//copy constructors
//	// obj -> A
//
//	Car(const Car &obj)
//	{
//		cout << "Copy Contructor\n";
//	}
//
//
//};
//
//int Func(const int a, int b=0)
//{
//	return a + b;
//}
//
//
//
//void swap(int &a, int &b)
//{
//	int tmp = a;
//	a = b;
//	b = tmp;
//}
//
//int main()
//{
//	Car A;
//	Car B=A;
//
//	// +, - , =, /,
//
//	Car C(B);
//	
//
//	
//}