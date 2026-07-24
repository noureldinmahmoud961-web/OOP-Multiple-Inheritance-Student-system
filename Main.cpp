#include <iostream>
#include <string>
using namespace std;

class A {
private :
	int age;
	string name;
public:
	A(string n,int a ) {
		name = n;
		age = a;
	}
	void print1() {
		cout << "your name is:" << name << endl;
		cout << "your age is:" << age << endl;
	}

};

class B {
private:
	string email;
public:

	B(string em) {
		email = em;
	}

	void print2() {
		cout << "your email is:" << email << endl;

	}

};
class C :public A,public B{
private:
	int grade_final;
public:
	C(string n, int a, string em, int gf) :A(n,a),B(em) {
		grade_final = gf;
		cout << "hi iam a constructor from C class " << endl;
	}
	void print3() {
		A::print1(), B::print2();
		cout << "your final grade is:" << grade_final << endl;

	}

};


int main() {
	C ob3("nour", 19, "nour@email", 90);
	ob3.print3();

	return 0;
}
