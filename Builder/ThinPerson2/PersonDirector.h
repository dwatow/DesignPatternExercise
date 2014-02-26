#ifndef PERSONDIRECTOR_H
#define PERSONDIRECTOR_H
#include "PersonBuilder.h"

class PersonDirector
{
  PersonBuilder* m_pPb;
public:
  PersonDirector(PersonBuilder* Pb):m_pPb(Pb){};
  void createPerson() //用一個類別將暫時內聚力包起來。
  {
    m_pPb->BuildHead();
    m_pPb->BuildBody();
    m_pPb->BuildArmLeft();
    m_pPb->BuildArmRight();
    m_pPb->BuildLegLeft();
    m_pPb->BuildLegRight();
  }  
};
#endif