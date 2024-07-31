#include <iostream>
using namespace std;

class Empleado
{
	private:
		string nombre;
		int sueldo;
	public:
		Empleado();
		void print();
		~Empleado();
};
Empleado::Empleado()
{
	cout<<"Ingrese el nombre del empleado: ";
	cin>>nombre;
	cout<<"Ingrese el sueldo del empleado: ";
	cin>>sueldo;
}
void Empleado::print()
{
	cout<<endl;
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Sueldo: "<<sueldo<<endl;
}
Empleado::~Empleado()
{
	if(sueldo>3000) cout<<"El empleado debe pagar impuestos";
}

int main()
{
	Empleado a;
	a.print();
	
	
}
