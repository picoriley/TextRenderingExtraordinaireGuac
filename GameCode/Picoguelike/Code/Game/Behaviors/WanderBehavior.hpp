#pragma once
#include "Game/Behaviors/Behavior.hpp"

class WanderBehavior : public Behavior
{
public:
	//CONSTRUCTORS//////////////////////////////////////////////////////////////////////////
	WanderBehavior();
	virtual ~WanderBehavior();
	virtual Behavior* Clone();

	//FUNCTIONS//////////////////////////////////////////////////////////////////////////
	static Behavior* CreationFunction(const std::string& name, const XMLNode& dataNode);
    virtual bool DoesPassChanceToRun(); //Does this behavior run on this frame?
    virtual float CalculateUtility();
    virtual float Run();

	//GETTERS//////////////////////////////////////////////////////////////////////////

	//SETTERS//////////////////////////////////////////////////////////////////////////

	//QUERIES//////////////////////////////////////////////////////////////////////////

	//MEMBER VARIABLES//////////////////////////////////////////////////////////////////////////

	static BehaviorRegistration s_wanderBehaviorRegistration;
};