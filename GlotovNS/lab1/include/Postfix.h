#pragma once
#include <iostream>
#include <string>
#include <map>
#include "Stack.h"


using namespace std;

class Postfix {
public:
	static string postfix_notation(string);
	static float postfix_calculation(string);
};