#ifndef BUILDER1_H
#define BUILDER1_H
#include "Product.h"
#include "Builder.h"

class ConcreateBuilder1 : public Builder
{
	Product m_prduct;
public:
	//覆寫建造條件，定義「建造細節」(零件的實作)
	void BuildPartA()
	{
		m_prduct.Add("零件A");
	}

	void BuildPartB()
	{
		m_prduct.Add("零件B");
	}


	Product GetResult()
	{
		return m_prduct;
	}
};
#endif