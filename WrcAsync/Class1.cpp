#include "pch.h"
#include "Class1.h"

using namespace WrcAsync;
using namespace Platform;

Class1::Class1()
{	// コンストラクタ
}

//Class1::~Class1()
//{	// ディストラクタ
//}

int Class1::add(int a, int b)
{	// Add
	return(a + b);
}

int Class1::sub(int a, int b)
{	// Sub
	return(a - b);
}

int Class1::mul(int a, int b)
{	// Mul
	return(a * b);
}

int Class1::div(int a, int b)
{	// Div
	if (b != 0)
	{
		return(a / b);
	}
	else
	{
		return(0);		// Div by Zero
	}
}
