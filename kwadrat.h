#ifndef KWADRAT_H
#define KWADRAT_H
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <iostream>


GLuint VAO;
GLuint VBO;

class Kwadrat
{
private:

	static int wysokoscOkna;
	static int szerokoscOkna;
	int polozenieOknaX;
	int polozenieOknaY;

public:
	Kwadrat(void);
	Kwadrat(int wysokoscOkna, int szerokoscOkna, int polozenieOknaX, int polozenieOknaY);
	//~Punkt(void);
	void stworzenieOkna(int argc, char** argv);
	int inicjalizacjaGlew();
	static void wyswietl();
	void stworzenieVAO();
	void stworzenieVBO();
};

#endif/*KWADRAT_H*/