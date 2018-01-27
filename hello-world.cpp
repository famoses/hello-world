//
// hello-world.cpp : Defines the entry point for the console application.
//


// -------- include ------------ 
#include "stdafx.h"
#include <iostream> 
#include <string>
/* ---------------------------- */

// will be set by waiter thread
unsigned isIdle;
// -------- functions ----------

//
// main entry point
//

int main(int argc, char* argv[])
{
	std::cout << "Hello World!\n";
    
    while (!isIdle) 
    {
        //do something
        
        //wait on further user input or time-out
    }
    
	return 0;
}

