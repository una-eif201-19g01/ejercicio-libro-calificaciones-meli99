#ifndef LIBROCALIFICACIONES_H
#define LIBROCALIFICACIONES_H

#include <iostream>
#include <string>
#include <sstream>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
using namespace std;
class LibroCalificaciones {
private: 
	int note;
	string nombreCurso;
public:
	LibroCalificaciones();
	
	void setnote(int note);
	
	void setNombreCurso(string nombreCurso);
	
	int getNot();
	
	string getNombreCurso();
	
	string Note(int note);

	
};
#endif
