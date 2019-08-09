#include "LibroCalificaciones.h"

	LibroCalificaciones::LibroCalificaciones(){
		note=0;
		nombreCurso="_";
	}
	void LibroCalificaciones::setnote(int note){
		note=note;
	}
	void LibroCalificaciones::setNombreCurso(string nombreCurso){
		nombreCurso=nombreCurso;
	}
	int LibroCalificaciones::getNot(){
		return (note);
	}
	string LibroCalificaciones::getNombreCurso(){
		return (nombreCurso);
	}
	
	//Metodo
	string LibroCalificaciones:: Note(int note){
		if (note>= 90)
			return "A";
		else
			if (note>= 80)
				return "B";
			else
				if (note>= 70)
					return "C";
				else
					if (note>= 60)
						return "D";
					else
						return "F";
	}
