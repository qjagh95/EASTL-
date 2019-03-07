#include "pch.h"
#include <iostream>
#include <EASTL/vector.h>
#include <EASTL/fixed_vector.h>
#include <EASTL/list.h>
#include <EASTL/unordered_map.h>
#include <functional>

#ifdef _DEBUG
	#pragma comment(lib, "EASTL")
#else
	#pragma comment(lib, "EASTL")
#endif

using namespace std;

void* operator new[](size_t size, const char* pName, int flags, unsigned debugFlags, const char* file, int line)
{
	return operator new[](size);
}
void* operator new[](size_t size, size_t alignment, size_t alignmentOffset, const char* pName, int flags, unsigned debugFlags, const char* file, int line)
{
	return operator new[](size);
}

int main()
{
	eastl::vector<int> a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(4);
	a.push_back(5);
	a.push_back(6);

	for (size_t i = 0; i < a.size(); i++)
	{
		int aaa = a[i];
		int bbbb = 0;
	}

	eastl::list<int> b;
	b.push_back(1);
	b.push_back(2);
	b.push_back(3);
	b.push_back(4);
	b.push_back(5);
	b.push_back(6);

	eastl::list<int>::iterator StartIter = b.begin();
	eastl::list<int>::iterator EndIter = b.end();

	for (; StartIter != EndIter; StartIter++)
	{
		int aaa = (*StartIter);
		int bbbb = 0;
	}

	eastl::unordered_map<unsigned long long, std::string> aa;
	aa.insert(eastl::make_pair(hash<string>{}("hello"), "hello"));

	cout << aa.find(hash<string>{}("hello"))->second.c_str() << endl;
}