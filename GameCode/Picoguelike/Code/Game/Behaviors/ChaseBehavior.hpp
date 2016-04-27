#pragma once
#include "Game/Behaviors/Behavior.hpp"

class ChaseBehavior : public Behavior
{
    //CONSTRUCTORS//////////////////////////////////////////////////////////////////////////
    ChaseBehavior();
    virtual ~ChaseBehavior();
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
    Entity* m_targetToChase;
    int m_maxDistanceChased;
    int m_numberOfStepsChased;
    int m_cooldownTurns;
    static BehaviorRegistration s_chaseBehaviorRegistration;
};