#pragma once

namespace WrcAsync
{
    public ref class Class1 sealed
    {
    public:
		Class1();		// コンストラクタ
//		~Class1();		// ディストラクタ

		int add(int a, int b);		// Add
		int sub(int a, int b);		// Sub
		int mul(int a, int b);		// Mul
		int div(int a, int b);		// Div
    };
}
