#ifndef __leer__
#define __leer__
/*
 * Leer.cpp
 *
 *  Created on: May 20, 2017
 *      Author: jeremiah
 */

#include <iostream>     // std::cout
#include <fstream>      // std::ifstream
#include <string>
#include <sstream>
#include <vector>

#include "../LeerERM/Constantes.cpp"
using namespace std;

vector<Constantes> leer(char * ruta){
	ifstream file(ruta);
	int i;
	vector<Constantes> vectorbigi;
	if (file.is_open()) {
		//string line;
		//getline (file,line); // reads a line
		//istringstream iss(line);
		//getline (file,line); // reads a line
		float ungi[3];
		float unbi;
		string salto;
		int cont = 0;
	  while (!file.eof() ) {
		  Constantes unaPareja;
	    //istringstream iss(line);


	    file >> ungi[0];
	    file >> ungi[1];
	    file >> ungi[2];
	    file >> unbi;
	   // file >> salto;

	    //cout << ++cont << "\n" << " g1 " << ungi[0] << " g2 " <<  ungi[1]
          //   << " g3 " << ungi[2] << " bi "<< unbi << salto<<endl;


	       /*string sub;

	       iss >> sub; // parting the each string in the line
	       cout << sub << endl;

	       ungi[0]=stof(sub);

	       iss >> sub; // parting the each string in the line
	       cout << sub << endl;

	       iss >> sub; // parting the each string in the line
	       cout << sub << endl;

	       iss >> sub; // parting the each string in the line
	       cout << sub << endl;*/

	    unaPareja.setBi(unbi);
	    unaPareja.setG1(ungi[0]);
	    unaPareja.setG2(ungi[1]);
	    unaPareja.setG3(ungi[2]);

	    vectorbigi.push_back(unaPareja);


	    //cout << unaPareja.to_string();


	       //getline (file,line); // reads a line
	  }

	  file.close();
	}else{
		cout << "no se abrio" << endl;
	}
	return vectorbigi;
}

#endif
