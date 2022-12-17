#include "pch.h"
#include "CppUnitTest.h"
#include "../Laba 11.1/Laba 11.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char fname[100]; 
			
			CreateBIN(fname); 
			PrintBIN(fname); 
			char gname[100];
			char dname[100];
			
			ProcessBIN1(fname, gname, dname);
			PrintBIN(gname); 
			
			ProcessBIN1(fname, gname, dname);
			PrintBIN(dname);
		}
	};
}
