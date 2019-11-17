#include "MyForm.h"
#include<cmath>
#include<string>
#include<ctime>
#include<cstdlib>
#include <iostream>
using  std::string;
using std::endl;
using std::cout;
using std::cin;
//using namespace std;
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
string abc()
{
	string c = "";
	for (int i = 32; i != 127; i++)
		c += (char)i;
	return c;
}
string Gen_Password(string a = abc(), int size = 16) {
	//srand(time(NULL));
	string password;
	for (int i = 0; i < size; i++)
		password += a[0 + rand() % (a.length() - 1)];
	cout << password << endl;
	return password;

}
string letters_uppercase()
{
	string x = "";
	for (int i = 65; i <= 90; i++)
		x += (char)i;
	return x;
}
string letters_lowercase()
{
	string x = "";
	for (int i = 97; i <= 122; i++)
		x += (char)i;
	return x;
}
string letters()
{
	return letters_uppercase() + letters_lowercase();
}
string digits()
{
	string x;
	for (int i = 0; i < 10; i++)
		x += i;
	return x;
}
string PinCode(string s = digits(), int size = 4)
{
	string x = "";
	for (int i = 0; i < size; i++)
		x += s[0 + rand() % (s.length() - 1)];
	return x;
}
string Caesar_cipher(string s = "Hello World!", int shift = 1)
{
	for (int i = 0; i < s.length(); i++)
		if ((int)s[i] <= 90 && (int)s[i] >= 65)
		{
			s[i] = (char)((int)(s[i] + shift));
			if ((int)s[i] > 90)
				s[i] = (char)(((int)s[i]) % 90 + 65);
			else
				continue;
		}
		else if ((int)s[i] <= 122 && (int)s[i] >= 97)
		{
			s[i] = (char)((int)(s[i] + shift));
			if ((int)s[i] > 122)
				s[i] = (char)(((int)s[i]) % 122 + 97);
			else
				continue;
		}
		else
			s[i] = s[i];
	return s;
}
//int gcd(int a, int b) {
//	return !b ? a : gcd(b, a % b);
//}
//template<class T, class U>
//T power(T a, U b) {
//	if (a == 0 && b == 0) return 1;
//	else if (a == 0)return 0;
//	else
//		for (int i = 0; i != b; i++) a *= a;
//	return a;
//}
//template<class T>
//T absolute(T a) {
//	if (a < 0) return -a;
//	else return a;
//}
int factorial(int a)
{
	return (a == 1 || a == 0) ? 1 : factorial(a - 1) * a;
}
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	PasswordGenerator::MyForm form;
	Application::Run(% form);
}