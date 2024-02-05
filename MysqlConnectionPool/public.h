#pragma once
#include <mysql.h>
#include <iostream>
#include <string>
using namespace std;

#define LOG(str) \
	cout << __FILE__ << ":" << __LINE__ << " " << \
	__TIMESTAMP__ << ":" << str << endl;