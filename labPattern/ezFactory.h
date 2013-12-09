#include "vTxt.h"
#include "hTxt.h"	

enum TxtType_{TT_V, TT_H};

class txtEzFactory
{
	TxtFile* txtFile;
public:
	txtEzFactory(TxtType_ n);

	void Add(std::string str);
	void Show();
};

