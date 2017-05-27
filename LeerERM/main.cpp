#include <iostream>

#include "../LeerERM/leer.h"
#include "../LeerERM/Mat.h"

using namespace std;

int main()
{
	int i;
	char *ruta = "/home/jeremiah/workspace/MathemaTIC/LeerERM/archivo_a_leer.txt";
	vector<Constantes> vectorbigi = leer(ruta);

		for ( i=0; i<vectorbigi.size(); ++i)
		{
		   cout << vectorbigi[i].to_string();

		}
	return 0;
}
