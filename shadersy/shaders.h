#ifndef Shaders_H
#define Shaders_H
#include <GL/glew.h>
#include <GL/freeglut.h>
#include <iostream>


GLuint VAO;
GLuint VBO;

class Shaders
{
private:

	static int wysokoscOkna;
	static int szerokoscOkna;
	int polozenieOknaX;
	int polozenieOknaY;

public:
	Shaders(void);
	Shaders(int wysokoscOkna, int szerokoscOkna, int polozenieOknaX, int polozenieOknaY);
	//~Punkt(void);
	void stworzenieOkna(int argc, char** argv);
	int inicjalizacjaGlew();
	static void wyswietl();
	void stworzenieVAO();
	void stworzenieVBO();
	void stworzenieProgramu();
	void dodanieDoProgramu(GLuint programZShaderami, const char* tekstZShadera, GLenum typShadera);
};

#endif/*Shaders_H*/