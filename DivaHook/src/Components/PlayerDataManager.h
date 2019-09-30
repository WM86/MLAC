#pragma once
#include "EmulatorComponent.h"
#include "PlayerData.h"
#include "CustomPlayerData.h"
#include <string>

namespace DivaHook::Components
{
	class PlayerDataManager : public EmulatorComponent
	{
	public:
		PlayerDataManager();
		~PlayerDataManager();

		virtual const char* GetDisplayName() override;

		virtual void Initialize() override;
		virtual void Update() override;

	private:
		PlayerData* playerData;
		CustomPlayerData* customPlayerData;

		void LoadConfig();
	};
}

