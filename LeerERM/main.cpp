#include <iostream>

#include "../LeerERM/leer.h"
#include "../LeerERM/Mat.h"

using namespace std;

int main()
{
	int i;
	vector<Constantes> vectorbigi = leer();

		for ( i=0; i<vectorbigi.size(); ++i)
		{
		   cout << vectorbigi[i].to_string();

		}
	return 0;
}
