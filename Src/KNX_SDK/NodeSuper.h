#ifndef KNX_SDK_NODE
#define KNX_SDK_NODE

#include "Defs.h"

/*
Contains important information for 
external libraries

*/
typedef struct baseNode
{
//connections
struct baseNode*parent;
struct baseNode**children;
//counters
unsigned numChildren;

//state
llui handle;//acting id

//bitfield switches
bool prntErr : 1;
bool prntWrn : 1;

//methods
} baseNode;

bool addChild(baseNode*);
bool removeChild(baseNode*);
bool setParent(baseNode*);

#endif