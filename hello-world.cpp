//
// hello-world.cpp : Defines the entry point for the console application.
//


// -------- include ------------ 
#include "stdafx.h"
#include <iostream> 
#include <string>
#include "cfgReader.h"
#include "colorMapper.h"
/* ---------------------------- */

// -------- functions ----------

//
// main entry point
//

int main(int argc, char* argv[])
{
    unsigned bg;
    readConfig(&bg);
    setBackGroundColor(bg);
    
	std::cout << "Hello World!\n";
	return 0;
}

