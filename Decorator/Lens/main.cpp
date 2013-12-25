#include <iostream>
#include "LGP.h"
#include "ConcaveLens.h"
#include "ConvexLens.h"

using namespace std;

int main()
{
	LGP* BigLGP = new LGP();
	ConvexLens*  convex  = new ConvexLens();
	ConcaveLens* concave = new ConcaveLens();

	convex ->AddMaterial(BigLGP);
	concave->AddMaterial(convex);

	int outLight;
	concave->Lighting(15689, outLight);
	cout << endl;
	cout << "final light: " << outLight << endl;
	cout << "THE END" << endl;
	return 0;
}