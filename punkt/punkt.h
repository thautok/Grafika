#ifndef PUNKT_H
#define PUNKT_H

#include <iostream>
#include <GL/glew.h>
#include <GL/freeglut.h>

GLuint VAO;
GLuint VBO;

class Punkt{

private:
	static int wysokoscOkna;
	static int szerokoscOkna;
	int polozenieOknaX;
	int polozenieOknaY;

public:
	Punkt(void);
	Punkt(int wysokoscOkna, int szerokoscOkna, int polozenieOknaX, int polozenieOknaY);

	void stworzenieOkna(int argc, char** argv);
	void inicjalizacjaGlew();
	static void wyswietl();
	void stworzenieVAO();
	void stworzenieVBO();

};

#endif /* PUNKT_H*/