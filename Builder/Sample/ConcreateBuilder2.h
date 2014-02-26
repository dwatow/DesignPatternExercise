#ifndef BUILDER2_H
#define BUILDER2_H
#include "Product.h"
#include "Builder.h"

class ConcreateBuilder2 : public Builder
{
	Product m_prduct;
public:
	//覆寫建造條件，定義「建造細節」(零件的實作)
	void BuildPartA()
	{
		m_prduct.Add("零件X");
	}

	void BuildPartB()
	{
		m_prduct.Add("零件Y");
	}


	Product GetResult()
	{
		return m_prduct;
	}
};
#endif