#include "MyException.h"
#include <stdio.h>

void MyException::WriteLog() {
	  printf("In string %i generate Exception %s in function %s .\n",StrNum,exc[ErrNum],fun[FunNum]);
}
