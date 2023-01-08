#ifndef ACTION_ADD_TRIANGLE_H
#define ACTION_ADD_TRIANGLE_H
#include "Action.h"

//Add Triangle Action class
class ActionAddTriangle: public Action
{
public:
	// Constructor For Add Triangle Action Class 
	ActionAddTriangle(ApplicationManager *pApp);
	//Add Triangle to the ApplicationManager
	virtual void Execute() ;
};

#endif