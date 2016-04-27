#pragma once
#include "Game/Behaviors/Behavior.hpp"

class SplitBehavior : public Behavior
{
    //CONSTRUCTORS//////////////////////////////////////////////////////////////////////////
    SplitBehavior();
    virtual ~SplitBehavior();
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
    float m_percentageToRun;
    static BehaviorRegistration s_splitBehaviorRegistration;
};