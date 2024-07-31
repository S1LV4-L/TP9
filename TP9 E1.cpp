#include <iostream>
using namespace std;

class Alumno
{
	private:
	    string nombre;
	    int edad;
	public:
		Alumno();
		void print();
		void mayor();
};

Alumno::Alumno()
{
	cout<<"Ingrese el nombre: ";
	cin>>nombre;
	cout<<"Ingrese la edad: ";
	cin>>edad;
}
void Alumno::print()
{
	cout<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Edad: "<<edad<<endl;
}
void Alumno::mayor()
{
	if(edad>=18) cout<<"El alumno es mayor de edad";
	else cout<<"El alumno es menor de edad";
}

int main()
{
	Alumno a;
	a.print();
	a.mayor();
	
	return 0;
}
