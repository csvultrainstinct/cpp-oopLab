#include <iostream>
using namespace std;

#include "Cache.h"

namespace Lab4
{
	int Cache::MAX_CAPACITY = 0;

	int Cache::GetMaxCapacity()
	{
		cout << "Returning MAX_CAPACITY" << endl;
		return MAX_CAPACITY;
	}
}
