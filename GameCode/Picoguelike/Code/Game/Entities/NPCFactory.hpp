#pragma once
#include "Engine/Input/XMLUtils.hpp"
#include <string>
#include <map>

//FORWARD DECLARATIONS//////////////////////////////////////////////////////////////////////////
class NPC;

//-----------------------------------------------------------------------------------
class NPCFactory
{
public:
	//CONSTRUCTORS//////////////////////////////////////////////////////////////////////////
	NPCFactory(const XMLNode& npcBlueprintNode);

	//STATIC FUNCTIONS//////////////////////////////////////////////////////////////////////////
	static void LoadAllNPCs();
	static NPC* GetNPCAt(int index);

	//FUNCTIONS//////////////////////////////////////////////////////////////////////////
	NPC* Create();

	//STATIC VARIABLES//////////////////////////////////////////////////////////////////////////
	static std::map<std::string, NPCFactory*> s_NPCFactories;

private:
	//HELPER FUNCTIONS//////////////////////////////////////////////////////////////////////////
	void PopulateFromXMLNode(const XMLNode& npcBlueprintNode);

	//MEMBER VARIABLES//////////////////////////////////////////////////////////////////////////
	NPC* m_templateNPC;
	std::string m_factoryName;
};