#include "LibroCalificaciones.h"
#include "LibroCalificaciones.cpp"
int main() {
	int note;
	string nombreCurso;
	LibroCalificaciones Mon;
	cout<<"Digite el nombre del curso"<<endl;
	cin>>nombreCurso;
	cout<<"Digite la nota"<<endl;
	cin>> note;
	cout<<"El rango del curso "<<nombreCurso<<" es:"<< endl;
	cout<<Mon.Note(note)<<endl;
	return 0;
}
