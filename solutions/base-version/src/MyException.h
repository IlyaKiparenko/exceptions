#pragma once

#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H

char* fun[4]={"div","generator","sort","member"};
char* exc[3]={"/Zero","zero ptr","array size<0"};
class MyException {
	int StrNum;
	int FunNum;
	int ErrNum;
 public:
	 MyException(int a=0,int b=0, int c=0):StrNum(a),FunNum(b),ErrNum(c){}
  void WriteLog();

};

class DivZeroException :public MyException
{public:
	DivZeroException(int a=0,int b=0):MyException(a,b,0){}
};

class NullPtrException :public MyException
{public:
	NullPtrException(int a=0,int b=0):MyException(a,b,1){}
};
class NegArrLenException :public MyException
{public:
	NegArrLenException(int a=0,int b=0):MyException(a,b,2){}
};
class ComplexException :public MyException
{
	ComplexException* ancestor;

 public:
	

};


#endif  // EXCEPTIONS_H
