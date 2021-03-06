#include <iostream>
#include <cmath>
#include "util.h"
#include "pak.h"
#include "mdl.h"

using namespace std;

#define TestClass Pak
#define TestFiles "../raw/monster00.pak"

//#define TestClass Mdl
//#define TestFiles "../tmp/Npc00.mdl"

void work(const char *path)
{
    cout << "[Read]" << path << endl;
	TestClass tt(path);
    tt.save();
}

int main(int argc, char* argv[])
{
    if(argc > 1)
    {
	    for(int i = 1; i < argc; i ++)
	    	work(argv[i]);
    }
    else
    {
	    work(TestFiles);
    }

    return 0;
}


