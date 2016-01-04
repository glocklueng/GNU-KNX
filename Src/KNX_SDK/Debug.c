#include "Debug.h"

void prntMemory()
{

}

void _prntTree(baseNode*target, unsigned short level)
{
for (unsigned x=0; x<level; ++x)
	printf("\t");
printf("%u %p\n", target->handle, target);
for (unsigned x=0; x<target->numChildren; ++x)
	if (target->children[x]!=NULL)
		_prntTree(target->children[x], level+1);
}

void prntTree(baseNode*target)
{
if (target==NULL)
	return;

_prntTree(target,0);
}

void prntTokens(token*target)
{
if (target==NULL)
	return;
do
{
printf("%d %u \n",target->type, target->raw);
target=target->next;
}while(target!=NULL);
}