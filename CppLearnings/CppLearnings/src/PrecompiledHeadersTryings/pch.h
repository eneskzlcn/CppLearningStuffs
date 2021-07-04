#pragma once

#include <iostream>
#include <algorithm>
#include <functional>
#include <memory>
#include <thread>
#include <utility>
#include <stack>
#include <string>
#include <deque>
#include <queue>
#include <vector>
#include <set>
#include <map>

//... can be many more of include files.... to needed on project to compile again and again
// for save time on compiling this header which cpp files needs over and over just make this header file precompiled header.
// for do this in visual studio,
//-create a pch.cpp file that includes pcp.h file.
//-right click on pch.cpp file choose properties , under the c/c++ menu  there is precompiled headers button , go there.
//- on the opened panel, select combo box arrow on  Precompiled Header option to Create(\Yc)
// 
//- then right click to the PROJECT and select properties, under the c/c++ menu there is precompiled headers button, go there.
// -on the opened panel, select combo box arrow on Precompiled Header option to Use(\Yu)
// and the same panel just opened above, write the precompiled headers filename which is pch.h here to the option Precompiled Header File

// and thats it, now your header file is precompiled header....