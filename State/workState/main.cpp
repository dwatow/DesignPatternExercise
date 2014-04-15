
#include "work.h"


int main()
{
	Work* emergencyProject = new Work();
	emergencyProject->setHour(9);
	emergencyProject->WriteProgram();
	emergencyProject->setHour(10);
	emergencyProject->WriteProgram();
	emergencyProject->setHour(12);
	emergencyProject->WriteProgram();
	emergencyProject->setHour(13);
	emergencyProject->WriteProgram();
	emergencyProject->setHour(14);
	emergencyProject->WriteProgram();
	emergencyProject->setHour(17);
	emergencyProject->WriteProgram();

	emergencyProject->TaskFinished(true);
	emergencyProject->WriteProgram();
	
	emergencyProject->setHour(19);
	emergencyProject->WriteProgram();
	emergencyProject->setHour(22);
	emergencyProject->WriteProgram();


	return 0;
}