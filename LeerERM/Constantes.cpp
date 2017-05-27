/*
 * Constantes.cpp
 *
 *  Created on: May 20, 2017
 *      Author: jeremiah
 */


#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

class Constantes
{
public:

	Constantes() {

		}

	string to_string()
	{
		stringstream stream;
		string r;
		stream << fixed << setprecision(6) << this->getG1();
		stream << " ";
		stream << fixed << setprecision(6) << this->getG2();
		stream << " ";
		stream << fixed << setprecision(6) << this->getG3();
		stream << " ";
		stream << fixed << setprecision(6) << this->getBi();
		stream << " ";
		r += stream.str()+"\n";

		return r;
	}


	float getBi() const {
		return bi;
	}

	void setBi(float bi) {
		this->bi = bi;
	}

	void setG1(float g1) {
			this->g1 = g1;
		}

	float getG1() {
		return g1;
	}

	void setG2(float g2) {
		this->g2 = g2;
	}

	float getG2() {
			return g2;
		}


	void setG3(float g3) {
		this->g3 = g3;
	}

	float getG3() {
		return g3;
	}


	private: float bi;
			float g1;
			float g2;
			float g3;




	Constantes(float g1, float g2, float g3, float bi)
	{
		this->g1 = g1;
		this->g2 = g2;
		this->g3 = g3;
		this->bi = bi;
	}



};

