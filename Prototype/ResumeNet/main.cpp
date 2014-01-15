#include "ResumeA.h"
#include "ResumeB.h"

#include "cstdio"

int main()
{
    Resume r0;
    cout << "Resume:" << endl;
    printf("&r0       : %x\n", &r0);
    printf("&r0.m_name: %x\n", &r0.m_name);

    Resume* pR0 = new Resume();
    printf("&(*pR0)       : %x\n", &(*pR0));
    printf("pR0           : %x\n", pR0);
    printf("&(pR0->m_name): %x\n", &(pR0->m_name));
    
    cout << "-------" << endl;
    cout << "test char address" << endl;
    char test[2];
    printf("&test[0]: %x\n", &test[0]);
    printf("&test[1]: %x\n", &test[1]);

    cout << "-------" << endl;





    Resume *r1 = new ResumeA("A");
    Resume *r2 = new ResumeB("B");

    Resume *r3 = r1->Clone();
    Resume *r4 = r2->Clone();

    r1->Show();
    r2->Show();
    
    //删除r1,r2  
    delete r1;
    delete r2;
    
    r1 = r2 = 0;
    
    //深拷贝所以对r3,r4无影响  
    r3->Show();
    r4->Show();
    
    delete r3;
    delete r4;
    
    r3 = r4 = 0;
	
    return 0;
}
