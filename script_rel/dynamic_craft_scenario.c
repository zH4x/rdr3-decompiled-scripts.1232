#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	int iLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = 0;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	var uLocal_16 = 0;
	var uLocal_17 = 0;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	var uLocal_21 = 0;
	var uLocal_22 = 0;
	var uLocal_23 = 0;
	var uLocal_24 = 0;
	var uLocal_25 = 0;
	var uLocal_26 = 0;
	var uLocal_27 = 0;
	var uLocal_28 = 0;
	var uLocal_29 = 0;
	var uLocal_30 = 0;
	var uLocal_31 = 0;
	var uLocal_32 = 0;
	var uLocal_33 = 0;
	var uLocal_34 = 0;
	var uLocal_35 = 1;
	var uLocal_36 = 0;
	var uLocal_37 = 0;
	var uLocal_38 = 0;
	var uLocal_39 = 0;
	var uLocal_40 = 0;
	var uLocal_41 = 0;
	var uLocal_42 = 0;
	var uLocal_43 = 0;
	var uLocal_44 = 0;
	var uLocal_45 = 0;
	var uLocal_46 = 0;
	var uLocal_47 = 0;
	var uLocal_48 = 0;
	var uLocal_49 = 0;
	var uLocal_50 = 0;
	var uLocal_51 = 0;
	var uLocal_52 = 0;
	var uLocal_53 = 0;
	var uLocal_54 = 0;
	var uLocal_55 = 0;
	var uLocal_56 = 0;
	float fLocal_57 = 0f;
	float fLocal_58 = 0f;
	int iLocal_59 = 0;
	int iLocal_60 = 0;
	int iLocal_61 = 0;
	int iLocal_62 = 0;
	int iLocal_63 = 0;
	var uLocal_64 = 0;
	var uLocal_65 = 0;
	var uLocal_66 = 0;
	bool bLocal_67 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
#endregion

void __EntryFunction__()
{
	iLocal_0 = 1;
	fLocal_57 = 1f;
	fLocal_58 = 1f;
	iLocal_2 = vScriptParam_0.x;
	iLocal_3 = vScriptParam_0.y;
	uLocal_4 = vScriptParam_0.z;
	func_1();
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(523))
	{
		func_2();
	}
	while (!SCRIPTS::_0x9E4EF615E307FBBE() && func_3())
	{
		func_4();
		func_5();
		func_6();
		BUILTIN::WAIT(0);
	}
	func_2();
}

void func_1()
{
}

void func_2()
{
	func_7();
	SCRIPTS::_0xE7282390542F570D(iLocal_2);
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_8();
	}
	else
	{
		SCRIPTS::TERMINATE_THIS_THREAD();
	}
}

int func_3()
{
	if (iLocal_1 != 0)
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iLocal_1) == 0)
		{
			return iLocal_0;
		}
		else
		{
			return 1;
		}
	}
	return iLocal_0;
}

void func_4()
{
}

void func_5()
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < SCRIPTS::GET_NUMBER_OF_EVENTS(2))
	{
		switch (SCRIPTS::GET_EVENT_AT_INDEX(2, iVar0))
		{
			case -45008988:
				func_9(iVar0);
				break;
			
			case -456923784:
				func_10(iVar0);
				break;
			
			case -843555838:
				func_11(iVar0);
				break;
		}
		iVar0++;
	}
}

void func_6()
{
	var uVar0;
	bool bVar1;
	
	func_12();
	if (!ENTITY::IS_ENTITY_DEAD(Global_35))
	{
		switch (iLocal_59)
		{
			case 0:
				PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 42, 0, 1);
				func_13(&iLocal_59, 1);
				break;
			
			case 1:
				if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 0) || ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, -1208591336))
				{
					if (!PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar0, 0, 0) && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) == 0)
					{
						HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
						if (!(func_14("simple_crafting") || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-608558181) > 0))
						{
							if (func_15(-1448210800, 1, 0) && (!func_16(0, 0, 1) || func_17()))
							{
								if (!func_18())
								{
									iLocal_60 = func_19("CAMP_CRAFT", -473983589, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
									func_20(iLocal_60, 342152817, 0, 1);
								}
							}
							if ((func_21(0, 0) && (!func_22(Global_1392040->f_1, 1) || func_22(Global_1392040->f_1, 512))) && (func_15(-1838434463, 1, 0) || func_15(2019377485, 1, 0)))
							{
								iLocal_61 = func_19("SET_CAMP", -719620017, 1, 0, 0, 0, 570, 4000, 10, 1073741824, 1704213876, 0);
								func_20(iLocal_61, 342152817, 0, 1);
							}
						}
						MISC::SET_BIT(&(Global_1956578->f_1), 2);
						MISC::CLEAR_BIT(&(Global_1956578->f_1), 3);
						iLocal_62 = func_19("LEAVE", 992265328, 1, 0, 0, 5, 500, 4000, 10, 1073741824, -820096546, 0);
						func_23(iLocal_62, 17, 1, 1);
						func_20(iLocal_62, 342152817, 0, 1);
						func_13(&iLocal_59, 2);
					}
				}
				break;
			
			case 2:
				if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::PLAYER_ID(), &uVar0, 0, 0) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
				{
					func_24();
					func_13(&iLocal_59, 1);
					return;
				}
				PAD::DISABLE_CONTROL_ACTION(0, -1046962283, false);
				HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
				bVar1 = PED::IS_PED_IN_COMBAT(Global_35, 0);
				if (func_25(iLocal_60, 1))
				{
					func_26(0);
					func_24();
					AUDIO::PLAY_SOUND_FRONTEND("Craft_Items_Enter", "SSCRFT_Sounds", true, 0);
					MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
					func_13(&iLocal_59, 3);
				}
				else if (func_25(iLocal_61, 1))
				{
					if ((func_15(-1838434463, 1, 0) && func_27(-1838434463, 0, 0, 0, 1, 0, 0)) || (func_15(2019377485, 1, 0) && func_27(2019377485, 0, 0, 0, 1, 0, 0)))
					{
						func_24();
						MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
					}
				}
				else if (func_28(iLocal_62, 1) || bVar1)
				{
					if (!bVar1)
					{
						PED::_0xD65FDC686A031C83(Global_35, 35709907, 2f);
					}
					TASK::CLEAR_PED_TASKS(Global_35, 0, 0);
					func_24();
				}
				if (!func_29(&uLocal_64))
				{
					if (func_30())
					{
						func_31(&uLocal_64);
					}
				}
				else if (!func_30())
				{
					bLocal_67 = false;
					func_32(&uLocal_64);
				}
				else if (!func_33(&uLocal_64, 0.15f))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0, -1879280170))
					{
						bLocal_67 = true;
					}
				}
				else if (!bLocal_67)
				{
					PED::_0xD65FDC686A031C83(Global_35, 35709907, 0.2f);
				}
				if (func_34(130487986) && func_35())
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
					func_13(&iLocal_59, 4);
				}
				else if ((func_14("simple_crafting") || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-608558181) > 0) || Global_1911914->f_1581)
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
					func_13(&iLocal_59, 3);
				}
				else if (func_36())
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
					func_13(&iLocal_59, 5);
				}
				else if (func_37())
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
					func_13(&iLocal_59, 6);
				}
				else if (TASK::_0xEC7E480FF8BD0BED(Global_35))
				{
					func_24();
					MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
					func_13(&iLocal_59, 7);
				}
				break;
			
			case 4:
				if ((!func_34(130487986) && !func_35()) && (MISC::GET_GAME_TIMER() - iLocal_63) > 1000)
				{
					func_13(&iLocal_59, 1);
				}
				break;
			
			case 3:
				if ((!func_14("simple_crafting") && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-608558181) == 0) && !Global_1911914->f_1581)
				{
					func_13(&iLocal_59, 1);
				}
				break;
			
			case 5:
				if (!func_36())
				{
					func_13(&iLocal_59, 1);
				}
				break;
			
			case 6:
				if (!func_37())
				{
					func_13(&iLocal_59, 1);
				}
				break;
			
			case 7:
				if (!TASK::_0xEC7E480FF8BD0BED(Global_35))
				{
					func_13(&iLocal_59, 1);
				}
				break;
		}
		if ((!PED::IS_PED_USING_ANY_SCENARIO(Global_35) || (iLocal_59 > 1 && !TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))) || TASK::_0xDF7993356F52359A(Global_35, 0) != iLocal_3)
		{
			iLocal_0 = 0;
		}
	}
}

void func_7()
{
	HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(Global_35, 1f, 1, 1, 342152817, "REST_UI_GROUP", 0);
	func_24();
	PLAYER::_0x0751D461F06E41CE(PLAYER::PLAYER_ID(), 42, 0, 0);
	MISC::CLEAR_BIT(&(Global_1956578->f_1), 2);
}

void func_8()
{
	SCRIPTS::TERMINATE_THIS_THREAD();
}

void func_9(int iParam0)
{
	int iVar0;
	
	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_38(&iVar0);
	}
}

void func_10(int iParam0)
{
	int iVar0;
	
	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_39(&iVar0);
	}
}

void func_11(int iParam0)
{
	int iVar0;
	
	SCRIPTS::GET_EVENT_DATA(2, iParam0, &iVar0, 2);
	if (iVar0 == iLocal_2)
	{
		SCRIPTS::SET_EVENT_FLAG_FOR_DELETION(2, iParam0, 1);
		func_40(&iVar0);
	}
}

void func_12()
{
	func_41(0);
}

void func_13(int iParam0, int iParam1)
{
	*iParam0 = iParam1;
}

int func_14(char* sParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (MISC::ARE_STRINGS_EQUAL(&(((*Global_1934603)[iVar0 /*16*/])->f_10), sParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_15(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	if (!func_42(bParam0, 0))
	{
		return false;
	}
	iVar0 = func_43(bParam0);
	if (iVar0 == -427144552)
	{
		if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else if (iVar0 == 307971639)
	{
		if (!func_44(bParam0, 1))
		{
			return false;
		}
	}
	return func_45(bParam0, 0, bParam2) >= iParam1;
}

int func_16(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		if ((iParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1898164->f_163;
		}
		if ((iParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1898164->f_164;
		}
		if (func_46())
		{
			return 1;
		}
		if (Global_1058888->f_3 && !Global_1572887->f_8)
		{
			if (((*Global_1055058)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*116*/])->f_114 && NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
			{
				return 1;
			}
		}
	}
	else if (iParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1898164->f_163;
		}
		else
		{
			return Global_1898164->f_164;
		}
	}
	if ((Global_1898164->f_1[0 /*5*/])->f_2 == 8)
	{
		iVar0 = func_47(&(Global_1898164->f_1[0 /*5*/]));
		if (func_48(iVar0) && func_49(((*Global_1347702)[iVar0 /*49*/])->f_12, 131072))
		{
			return 0;
		}
	}
	if (iParam0 == 0 && func_50(&(Global_1898164->f_1[0 /*5*/])))
	{
		return 1;
	}
	if ((Global_1935630 && 40959 & (-1 - iParam0)) != 0)
	{
		return 1;
	}
	if (!bParam1)
	{
		if ((MISC::GET_GAME_TIMER() - 5000) < &Global_1898438)
		{
			return 1;
		}
	}
	switch ((Global_1898164->f_1[0 /*5*/])->f_2)
	{
		case 0:
			return 0;
		
		case 1:
			return iParam0 & 1 == 0;
		
		case 4:
			return iParam0 & 2 == 0;
		
		case 6:
			return iParam0 & 4 == 0;
		
		case 2:
			return iParam0 & 16 == 0;
		
		case 5:
			return iParam0 & 32 == 0;
		
		case 9:
			return iParam0 & 64 == 0;
		
		case 8:
			return iParam0 & 8 == 0;
		
		case 10:
			return iParam0 & 512 == 0;
		
		case 3:
			return iParam0 & 128 == 0;
		
		case 11:
			return iParam0 & 256 == 0;
		
		default:
			break;
	}
	return 0;
}

bool func_17()
{
	return Global_1911914->f_1578;
}

int func_18()
{
	int iVar0;
	
	if (!PED::IS_PED_IN_ANY_TRAIN(Global_35))
	{
		return 0;
	}
	iVar0 = func_51(Global_36, 0);
	if (iVar0 >= 8 && iVar0 <= 12)
	{
		return 1;
	}
	return 0;
}

int func_19(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11)
{
	int iVar0;
	int iVar1;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
	{
		return 0;
	}
	if (!PAD::_0xBC0884BC590951C7(iParam1, 0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 48)
	{
		if (func_52(iVar0, 2))
		{
		}
		else if (iVar1 == 0)
		{
			iVar1 = iVar0;
		}
		iVar0++;
	}
	if (iVar1 != 0)
	{
		func_53(iVar1, iParam1, sParam0, 1, iParam2, iParam3, 0f, 0f, 0f, 0f, 0, 0, 0, iParam4, iParam5, iParam6, iParam7, iParam8, iParam9, 0, 1065353216, 0, 0, 0, iParam10, bParam11);
		return iVar1;
	}
	return 0;
}

void func_20(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 && !func_54(iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_GROUP(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

int func_21(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (func_56() == 0)
	{
		return DATABINDING::_DATABINDING_READ_DATA_BOOL(Global_1935689->f_2439.f_38.f_19);
	}
	if (func_57())
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_HIDEOUT", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_59(Global_35))
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_PICKUP_ITEM", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_HORSE_INTERACTION", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_60())
	{
		if (bParam0)
		{
			if (func_61() != 8 && func_61() != 7)
			{
				func_58("CAMP_UNUSABLE_CARAVAN_CAMP", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_58("CAMP_UNUSABLE_BEECHERS_HOPE", 10000, 0, 0, 0, 1);
			}
		}
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		iVar0 = PED::GET_MOUNT(Global_35);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iVar0))
			{
				if (ENTITY::IS_ENTITY_IN_AIR(iVar0, 1) || PED::IS_PED_SWIMMING(iVar0))
				{
					return 0;
				}
			}
		}
	}
	else if (ENTITY::IS_ENTITY_IN_AIR(Global_35, 1) || PED::IS_PED_SWIMMING(Global_35))
	{
		return 0;
	}
	if (INTERIOR::IS_INTERIOR_SCENE())
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_IN_COMBAT(Global_35, 0))
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_IN_COMBAT", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_62(PLAYER::PLAYER_ID(), 1, 1, 0))
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_WANTED", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (LAW::_0x26934083D3F2579C(PLAYER::PLAYER_ID()))
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_CRIME", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (bParam1)
	{
		if (TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1))
		{
			if (bParam0)
			{
				func_58("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (func_63(Global_1393447, 16))
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_64())
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_34(-608558181) || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-608558181) > 0)
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (MISC::IS_MINIGAME_IN_PROGRESS())
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_ACTIVITY", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((((PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) || (!PED::IS_PED_RAGDOLL(Global_35) && PED::IS_PED_ON_VEHICLE(Global_35, false))) || PED::IS_PED_IN_ANY_BOAT(Global_35)) || PLAYER::IS_PLAYER_RIDING_TRAIN(PLAYER::PLAYER_ID())) || PED::IS_PED_JACKING(Global_35))
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_16(0, 1, 1) && !func_65(1))
	{
		if (bParam0)
		{
			if (func_66(15))
			{
				func_58("CAMP_UNUSABLE_HUNTING", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_58("CAMP_UNUSABLE_MISSIONS", 10000, 0, 0, 0, 1);
			}
		}
		return 0;
	}
	if (func_67() == 8)
	{
		return 0;
	}
	if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(-92416669) > 0)
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_CAMERA", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_68(8388608))
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_ALREADY_SET_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_69(8388608))
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_ALREADY_IN_A_CAMP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_71(func_70()))
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_LOCKDOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (((func_72() || func_73(func_70()) == 9) || func_74(func_70())) && !func_75())
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_76(Global_35))
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_77())
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_IN_TOWN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, Global_1935496->f_131, true) > 2f)
	{
		Global_1935496->f_128 = { VEHICLE::_0x6DE03BCC15E81710(Global_36) };
		Global_1935496->f_131 = { Global_36 };
	}
	if (func_78(Global_35, Global_1935496->f_128, 4f, 1, 1))
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_TRAIN", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_79(Global_36, 5f))
	{
		if (bParam0)
		{
			func_58("CAMP_UNUSABLE_NEAR_MISSION", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (BUILTIN::VDIST2(Global_36, ((*Global_1347702)[74 /*49*/])->f_24) < 144f && SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(1822247127) > 0)
	{
		return 0;
	}
	return 1;
}

bool func_22(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_23(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 && !func_54(iParam0))
	{
		return;
	}
	iVar0 = func_55(iParam0);
	if (!HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return;
	}
	HUD::_UIPROMPT_SET_ATTRIBUTE(((*Global_1945938)[iVar0 /*18*/])->f_3, iParam1, iParam2);
}

void func_24()
{
	if (func_54(iLocal_60))
	{
		func_80(&iLocal_60, 1, 1);
	}
	if (func_54(iLocal_61))
	{
		func_80(&iLocal_61, 1, 1);
	}
	if (func_54(iLocal_62))
	{
		func_80(&iLocal_62, 1, 1);
	}
}

bool func_25(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_54(iParam0))
	{
		return false;
	}
	iVar0 = func_55(iParam0);
	return HUD::_UIPROMPT_IS_JUST_PRESSED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

void func_26(bool bParam0)
{
	if ((func_56() != -1 || !bParam0) || func_81(Global_35))
	{
		func_82();
		return;
	}
	if (func_69(8388608) && !func_22(Global_1392040->f_1, 2048))
	{
		func_83(16777216);
		return;
	}
	func_82();
}

int func_27(bool bParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	struct<10> Var0;
	struct<16> Var10;
	int iVar26;
	int iVar27;
	int iVar28;
	int iVar29;
	int iVar30;
	int iVar31;
	bool bVar32;
	int iVar33;
	bool bVar34;
	bool bVar35;
	bool bVar36;
	
	if (func_84())
	{
		Global_1935689->f_10191 = bParam0;
		func_85(bParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (func_86())
	{
		HUD::_0xBFFF81E12A745A5F();
		func_87(bParam0, 0);
		func_85(func_88(), 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_89(bParam0, iParam4))
	{
		return 0;
	}
	if (func_90(bParam0))
	{
		return 0;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		return 0;
	}
	iVar31 = 0;
	bVar32 = true;
	iVar33 = 1;
	bVar34 = true;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (func_91(bParam0, -2081717885))
	{
		func_92(bParam0, Var10, Var0, iVar29, bVar32, iVar33);
	}
	else if (func_91(bParam0, -1909684001))
	{
		func_93(bParam0, Var10, Var0, bVar32, iVar33);
	}
	else if (func_91(bParam0, 587975446))
	{
		func_94(bParam0, Var10);
	}
	else if (func_91(bParam0, 566155764))
	{
		if (!func_95(bParam0))
		{
			return 0;
		}
	}
	if (func_96(bParam0, bParam5, bParam6))
	{
		Global_1911772 = bParam0;
		Global_1911913 = MISC::GET_GAME_TIMER();
		return 1;
	}
	if (func_91(bParam0, -1227898937))
	{
		Var0.f_2 = bParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_97(Var10, 1);
		iVar33 = 0;
		bVar32 = false;
	}
	else if ((func_91(bParam0, -1472964441) || func_91(bParam0, -228153877)) || func_91(bParam0, 566155764))
	{
	}
	else if (func_91(bParam0, 1919582297))
	{
		if (((func_98() || TASK::IS_PED_ACTIVE_IN_SCENARIO(Global_35, 1)) || TASK::_0x0C3CB2E600C8977D(Global_35, 1)) || !PED::IS_PED_ON_FOOT(Global_35))
		{
			return 0;
		}
		switch (bParam0)
		{
			case 1929383243:
			case 2036955137:
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			
			case -1635450397:
			case 1831763320:
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
		}
		Var0.f_1 = bParam0;
		Var0.f_3 = iParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_97(Var10, 0);
		bVar32 = false;
	}
	else if (func_43(bParam0) == -1650247667)
	{
		Var0.f_3 = 0;
		Var0.f_1 = bParam0;
		Var0.f_2 = 0;
		Var0 = func_99(Global_1058888->f_49121.f_4.f_31);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_97(Var10, 0);
		iVar33 = 1;
	}
	else if (func_43(bParam0) == -1037537535)
	{
		if (func_100(bParam0) == -999503751)
		{
			if (func_56() != -1)
			{
				return iVar33;
			}
			if (!func_101(bParam0))
			{
				func_58("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			bVar35 = func_102(7, bParam0);
			bVar36 = func_102(1, bParam0);
			if (bVar36 && !bVar35)
			{
				func_58("SI_ITEM_USE_OUTFITS_TEMP_HORSE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!func_103(7))
			{
				func_58("SI_ITEM_USE_OUTFITS_NO_SADDLE", 10000, 0, 0, 0, 1);
				return iVar33;
			}
			if (!bVar35)
			{
				if (func_105(Global_35, func_104(7), 0))
				{
					func_58("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_58("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
				}
				return iVar33;
			}
			iVar30 = func_106(bParam0);
			if (iVar30 == -1)
			{
				func_107(20, bParam0, 8, 0, 0);
			}
			else
			{
				func_107(20, bParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (func_100(bParam0))
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_108(bParam0, 0);
					return iVar33;
				
				case -2061583405:
					func_109(bParam0);
					return 1;
				
				case -1719060085:
					if (bParam0 == &Global_1946804->f_1497.f_1[23 /*3*/])
					{
						func_110(Global_35, 260271636, 0, -358215195, 1, 1, 1, 0, 1, 0);
						PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipGlovesFidget", 1, 15);
						func_111(bParam0, 0);
						return 1;
					}
					else
					{
						PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipGlovesFidget", 1, 15);
						func_111(bParam0, 1);
					}
					break;
			}
			func_110(Global_35, bParam0, 0, -358215195, 1, 1, 1, 0, 0, 0);
		}
	}
	else
	{
		switch (bParam0)
		{
			case 1259508039:
				func_112(1);
				break;
			
			case -727924611:
				if (func_56() != -1)
				{
				}
				else if (!func_101(bParam0))
				{
					func_58("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar35 = func_102(7, bParam0);
					bVar36 = func_102(1, bParam0);
					if (bVar36 && !bVar35)
					{
						if (MAP::DOES_BLIP_EXIST(Global_36558))
						{
							MAP::REMOVE_BLIP(&Global_36558);
						}
						Global_36558 = MAP::_0x3E593DF9C2962EC6(-1925605092);
						MAP::_0x662D364ABF16DE2F(Global_36558, 673950256);
						func_58(MISC::_CREATE_VAR_STRING(0, -1680440926, Global_36558), 10000, 0, 0, 0, 1);
					}
					else if (!func_103(7))
					{
						func_58("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar35)
					{
						if (func_105(Global_35, func_104(7), 0))
						{
							func_58("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (MAP::DOES_BLIP_EXIST(Global_36558))
							{
								MAP::REMOVE_BLIP(&Global_36558);
							}
							Global_36558 = MAP::_0x3E593DF9C2962EC6(-1925605092);
							MAP::_0x662D364ABF16DE2F(Global_36558, 673950256);
							func_58(MISC::_CREATE_VAR_STRING(0, -482898802, Global_36558), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
						if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = bParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_97(Var10, 0);
						}
						Jump @2541; //curOff = 1636
						func_113();
						Jump @2541; //curOff = 1643
						if (!func_22(Global_1392040->f_1, 1) || func_22(Global_1392040->f_1, 512))
						{
							if (func_56() == -1)
							{
								if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY("player_camp")) > 3)
								{
								}
								else
								{
									StringCopy(&(Var10.f_10), "player_camp", 32);
									Var10.f_14 = 6096;
									if (func_114(120))
									{
										iVar31 |= 8;
										Var0.f_6 = { -1407.407f, 1508.33f, 239f };
										Var0.f_6.f_3 = 260f;
									}
									else if (func_66(15))
									{
										iVar31 |= 16;
										Var0.f_6 = { 1775.903f, 1255.647f, 189.6069f };
										Var0.f_6.f_3 = 90f;
									}
									else if (!func_101(bParam0) || ((!func_116(Global_35, func_104(7), func_115(7), 1) || func_117() != 0) && !func_116(Global_35, Global_1900383->f_393, 5f, 1)))
									{
										iVar31 |= 128 | 32;
									}
									if ((func_22(iVar31, 128) && Global_1357522->f_10[1]) // PointerArith)
									{
										Global_1357522->f_10[1] = 0;
									}
									else if ((!func_22(iVar31, 128) && Global_1357522->f_10[0]) // PointerArith)
									{
										Global_1357522->f_10[0] = 0;
									}
									Var0 = iVar31;
									Var10 = { Var0 };
									Var10.f_15 = 1;
									func_97(Var10, 2);
								}
							}
							else if (func_101(-1838434463))
							{
								if (func_118(1))
								{
									func_119(2);
								}
								else if (func_120(1))
								{
									func_58("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
								}
								else
								{
									if (_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
									{
										func_58("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
									}
									else
									{
										func_58("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
									}
									func_121(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
								}
							}
							else if (!_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::PLAYER_ID()))
							{
								func_58("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								func_121(_NAMESPACE26::_0x901E0DC25080C8B9(PLAYER::PLAYER_ID()));
							}
							else
							{
								func_58("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
							}
						}
						else
						{
							Global_1392040->f_1 |= 2;
							iVar33 = 1;
						}
						Jump @2541; //curOff = 2207
						if (func_122(Global_35, 1, 0, 0) != -160924582)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, -160924582, true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2248
						if (func_122(Global_35, 1, 0, 0) != -1016714371)
						{
							WEAPON::SET_CURRENT_PED_WEAPON(Global_35, -1016714371, true, 0, false, false);
						}
						return 1;
						Jump @2541; //curOff = 2289
						iVar27 = func_123(func_70());
						iVar28 = func_124();
						if (func_125(iVar27))
						{
							if (iVar27 == iVar28 && !func_126())
							{
								bVar34 = false;
							}
						}
						if (bVar34)
						{
							func_58("PROPERTY_SHAVE_INV", 10000, 0, 0, 0, 1);
						}
						Jump @2541; //curOff = 2359
						func_127(bParam0, 1, 0, 562618531, 0);
						Jump @2541; //curOff = 2377
						func_128(497, 1);
						Jump @2541; //curOff = 2388
						func_26(1);
						Jump @2541; //curOff = 2396
						func_127(bParam0, 1, 0, 562618531, 0);
						func_129(136579449, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						Jump @2541; //curOff = 2437
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar32 = false;
						return 1;
						Jump @2541; //curOff = 2472
						Var0.f_2 = -7337301;
						Var10 = { Var0 };
						StringCopy(&(Var10.f_10), "native_american_journal", 32);
						Var10.f_14 = 512;
						Var10.f_15 = 1;
						func_97(Var10, 0);
						iVar33 = 0;
						bVar32 = false;
						Jump @2541; //curOff = 2532
						iVar33 = 0;
					}
				}
				if (bVar32)
				{
					HUD::_0xBFFF81E12A745A5F();
				}
				return iVar33;
		}
	}

bool func_28(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 && !func_54(iParam0))
	{
		return false;
	}
	iVar0 = func_55(iParam0);
	if (HUD::_0xCD072523791DDC1B(((*Global_1945938)[iVar0 /*18*/])->f_3))
	{
		return HUD::_UIPROMPT_HAS_MASH_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
	}
	return HUD::_UIPROMPT_HAS_HOLD_MODE_COMPLETED(((*Global_1945938)[iVar0 /*18*/])->f_3);
}

bool func_29(var uParam0)
{
	return func_130(*uParam0, 1);
}

int func_30()
{
	float fVar0;
	float fVar1;
	float fVar2;
	
	fVar0 = PAD::GET_DISABLED_CONTROL_NORMAL(0, 1301263553);
	fVar1 = PAD::GET_DISABLED_CONTROL_NORMAL(0, -39308912);
	fVar2 = ((fVar0 * fVar0) + (fVar1 * fVar1));
	if (fVar2 >= (0.1f * 0.1f))
	{
		return 1;
	}
	return 0;
}

void func_31(var uParam0)
{
	func_131(uParam0, 0f);
}

void func_32(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

int func_33(var uParam0, float fParam1)
{
	if (func_132(uParam0, fParam1))
	{
		func_32(uParam0);
		return 1;
	}
	return 0;
}

int func_34(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == MISC::GET_HASH_KEY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_35()
{
	return SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(130487986) > 0;
}

bool func_36()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

bool func_37()
{
	return &Global_1898068;
}

void func_38(int iParam0)
{
}

void func_39(int iParam0)
{
}

void func_40(int iParam0)
{
}

void func_41(bool bParam0)
{
	if (bParam0)
	{
		func_133(4);
	}
	func_133(2);
	MISC::SET_BIT(&(Global_1956578->f_1), 0);
}

int func_42(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	return ITEMDATABASE::_ITEM_DATABASE_IS_KEY_VALID(bParam0, iParam1);
}

int func_43(bool bParam0)
{
	vector3 vVar0;
	
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

int func_44(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<10> Var4;
	
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (Global_1935630->f_12)
	{
		return 0;
	}
	iVar0 = func_134(bParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_135("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_136(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_137(Var4.f_4))
			{
			}
			else if (WEAPON::_0x5C2EA6C44F515F34(Var4.f_4) == iVar0)
			{
				func_138(iVar1);
				return 1;
			}
			iVar3++;
		}
		func_138(iVar1);
	}
	return 0;
}

int func_45(bool bParam0, int iParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_43(bParam0);
	if (iVar0 == 307971639 || (iParam1 && iVar0 == -427144552))
	{
		iVar1 = func_134(bParam0, 1);
		if (iVar1 != 0)
		{
			return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_139(bParam0, 0);
	}
	iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_140(bParam2), bParam0, 0);
	return iVar2;
}

int func_46()
{
	if (&Global_1048576)
	{
		return 1;
	}
	if (Global_1572887->f_4)
	{
		return 1;
	}
	if (&Global_524298)
	{
		return 1;
	}
	if (&Global_1048577)
	{
		return 1;
	}
	if (&Global_1051043 == -1 && Global_1572887->f_6 & 1 != 0)
	{
		return 1;
	}
	return 0;
}

int func_47(int iParam0)
{
	if (!func_50(iParam0))
	{
		return -1;
	}
	return func_142(func_141(iParam0));
}

bool func_48(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_49(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_50(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

int func_51(vector3 vParam0, bool bParam3)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	
	iVar1 = -1;
	fVar2 = 1E+08f;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (!bParam3 || func_143(iVar0))
		{
			fVar3 = func_144(iVar0, vParam0);
			if (fVar3 < fVar2)
			{
				iVar1 = iVar0;
				fVar2 = fVar3;
			}
		}
		iVar0++;
	}
	return iVar1;
}

bool func_52(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return (((*Global_1945938)[iParam0 /*18*/])->f_1 && iParam1) != 0;
}

void func_53(int iParam0, int iParam1, char* sParam2, int iParam3, int iParam4, int iParam5, vector3 vParam6, float fParam9, int iParam10, int iParam11, int iParam12, var uParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, int iParam19, int iParam20, int iParam21, bool bParam22, int iParam23, int iParam24, bool bParam25)
{
	int iVar0;
	
	((*Global_1945938)[iParam0 /*18*/])->f_4 = iParam1;
	(*Global_1945938)[iParam0 /*18*/] = iParam4;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = SCRIPTS::GET_ID_OF_THIS_THREAD();
	((*Global_1945938)[iParam0 /*18*/])->f_2 = iParam5;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { vParam6 };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = fParam9;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = iParam10;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = iParam11;
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_5 = iParam12;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 2;
	((*Global_1945938)[iParam0 /*18*/])->f_17 = -1;
	iVar0 = HUD::_UIPROMPT_REGISTER_BEGIN();
	HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam1);
	if (iParam23 != 0)
	{
		HUD::_UIPROMPT_SET_CONTROL_ACTION(iVar0, iParam23);
	}
	HUD::_UIPROMPT_SET_TEXT(iVar0, sParam2);
	if (iParam3 == 4)
	{
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, vParam6);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	else if (iParam3 == 2)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam10);
	}
	else if (iParam3 == 5)
	{
		HUD::_0x4D107406667423BE(iVar0, iParam11);
		HUD::_UIPROMPT_CONTEXT_SET_POINT(iVar0, 0f, 0f, 0f);
		HUD::_UIPROMPT_CONTEXT_SET_SIZE(iVar0, fParam9);
	}
	HUD::_UIPROMPT_SET_PRIORITY(iVar0, iParam4);
	HUD::_UIPROMPT_SET_TRANSPORT_MODE(iVar0, iParam5);
	HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 18, 1);
	if (bParam22)
	{
		HUD::_0x53CE46C01A089DA1(iVar0, 1);
	}
	switch (iParam14)
	{
		case 0:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 0);
			break;
		
		case 2:
			HUD::_UIPROMPT_SET_STANDARD_MODE(iVar0, 1);
			break;
		
		case 1:
			HUD::_UIPROMPT_SET_PRESSED_TIMED_MODE(iVar0, iParam16);
			break;
		
		case 3:
			HUD::_UIPROMPT_SET_HOLD_INDEFINITELY_MODE(iVar0);
			break;
		
		case 6:
			HUD::_UIPROMPT_SET_HOLD_AUTO_FILL_MODE(iVar0, iParam16, iParam15);
			if (bParam25)
			{
				HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 24, 1);
			}
			break;
		
		case 7:
			HUD::_UIPROMPT_SET_MASH_MODE(iVar0, iParam17);
			break;
		
		case 8:
			HUD::_UIPROMPT_SET_MASH_AUTO_FILL_MODE(iVar0, iParam16, iParam17);
			break;
		
		case 13:
			HUD::_UIPROMPT_SET_MASH_INDEFINITELY_MODE(iVar0);
			break;
		
		case 15:
			HUD::_UIPROMPT_SET_TARGET_MODE(iVar0, 0.5f, 0.1f, 0);
			break;
		
		case 9:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		
		case 4:
		case 5:
			HUD::_UIPROMPT_SET_STANDARDIZED_HOLD_MODE(iVar0, iParam24);
			break;
		
		case 10:
			HUD::_UIPROMPT_SET_MASH_WITH_RESISTANCE_CAN_FAIL_MODE(iVar0, iParam17, iParam18, iParam19);
			break;
		
		case 11:
			HUD::_UIPROMPT_SET_MASH_MANUAL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		
		case 12:
			HUD::_UIPROMPT_SET_MASH_MANUAL_CAN_FAIL_MODE(iVar0, (1f / BUILTIN::TO_FLOAT(iParam17)), iParam18, 0f, iParam19);
			break;
		
		case 14:
			HUD::_UIPROMPT_SET_ROTATE_MODE(iVar0, iParam20, iParam21);
			HUD::_UIPROMPT_SET_ATTRIBUTE(iVar0, 10, 1);
			break;
	}
	HUD::_UIPROMPT_REGISTER_END(iVar0);
	((*Global_1945938)[iParam0 /*18*/])->f_3 = iVar0;
	func_145(iParam0, 1);
	func_146(iParam0, 1);
	func_147(iParam0, 128);
}

bool func_54(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 > 48)
	{
		return false;
	}
	if (((*Global_1945938)[iParam0 /*18*/])->f_1 & 2 == 0)
	{
		return false;
	}
	return HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3);
}

int func_55(int iParam0)
{
	return iParam0;
}

int func_56()
{
	return Global_1572887->f_12;
}

bool func_57()
{
	return Global_1894899 & 4 != 0;
}

var func_58(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<4> Var0;
	struct<2> Var13;
	var uVar15;
	
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar15 = _NAMESPACE71::_0x049D5C615BD38BAD(&Var0, &Var13, iParam5);
	return uVar15;
}

bool func_59(int iParam0)
{
	return (func_148(iParam0, 4) || func_148(iParam0, 5));
}

bool func_60()
{
	return func_149(512);
}

int func_61()
{
	return Global_40.f_4283;
}

int func_62(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	struct<11> Var0;
	int iVar17;
	struct<11> Var18;
	
	if (iParam0 == PLAYER::PLAYER_ID())
	{
		return func_150(bParam1, iParam2, iParam3);
	}
	if (Global_1572887->f_12 != -1)
	{
		if (iParam0 == Global_1225638->f_10)
		{
			if (!Global_1225638->f_11)
			{
				return 0;
			}
		}
		else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
		{
			return 0;
		}
	}
	else if (!ENTITY::DOES_ENTITY_EXIST(PLAYER::GET_PLAYER_PED(iParam0)))
	{
		return 0;
	}
	if (LAW::_0xAD401C63158ACBAA(iParam0))
	{
		LAW::_0xCBFB4951F2E3934C(iParam0, &Var0);
		if ((iParam3 || Var0.f_10 > 0) || PLAYER::GET_PLAYER_WANTED_LEVEL(iParam0) > 0)
		{
			return 1;
		}
	}
	else if (iParam2 && !LAW::_0x148E7AC8141C9E64(iParam0) == 1370593166)
	{
		return 0;
	}
	iVar17 = 0;
	while (iVar17 < 24)
	{
		if (LAW::_0x532C5FDDB986EE5C(iParam0, iVar17, &Var18))
		{
			if (Var18.f_10 && (iParam3 || LAW::_0xDAEFDFDB2AEECE37(Var18, Var18.f_7) > 0))
			{
				return 1;
			}
		}
		iVar17++;
	}
	if (bParam1)
	{
		if (LAW::_0x69E181772886F48B(iParam0) || LAW::_0xF0FBFB9AB15F7734(iParam0, 0, 0))
		{
			if (iParam3 || LAW::_0xE083BEDA81709891(iParam0) > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_63(var uParam0, int iParam1)
{
	return (uParam0->f_2 && iParam1) != 0;
}

bool func_64()
{
	return Global_1310750->f_16077 != 0;
}

bool func_65(int iParam0)
{
	return (Global_1914296->f_22 && iParam0) != 0;
}

int func_66(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_151(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

int func_67()
{
	return Global_1897952->f_41;
}

bool func_68(int iParam0)
{
	return (Global_40.f_9419 && iParam0) != 0;
}

bool func_69(int iParam0)
{
	return (Global_1392040 && iParam0) != 0;
}

int func_70()
{
	return Global_1894899->f_2;
}

int func_71(int iParam0)
{
	if (!func_152(iParam0))
	{
		return 0;
	}
	return func_153(iParam0, 33554432);
}

bool func_72()
{
	return (Global_1894899 & 1 != 0 && func_70() != -1);
}

int func_73(int iParam0)
{
	if (!func_152(iParam0))
	{
		return 0;
	}
	return ((*Global_1888801)[iParam0 /*35*/])->f_20;
}

int func_74(int iParam0)
{
	if (func_73(iParam0) != 5)
	{
		return 0;
	}
	switch (iParam0)
	{
		case 28:
		case 33:
		case 75:
		case 117:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_75()
{
	int iVar0;
	
	iVar0 = func_70();
	switch (iVar0)
	{
		case 3:
			return 1;
		
		case 51:
			return 1;
		
		case 41:
			return 1;
		
		case 108:
			return 1;
		
		case 44:
			return 1;
		
		case 84:
			return 1;
		
		case 103:
			return 1;
		
		case 53:
			return 1;
		
		case 73:
			return 1;
		
		case 18:
			return 1;
		
		case 0:
			return 1;
		
		case 106:
			return 1;
		
		case 47:
			return 1;
		
		case 63:
			return 1;
		
		case 24:
			return 1;
		
		case 46:
			return 1;
		
		case 107:
			return 1;
		
		case 80:
			return 1;
		
		case 85:
			return 1;
		
		case 7:
			return 1;
		
		case 82:
			return 1;
		
		case 110:
			return 1;
		
		case 120:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_76(int iParam0)
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 1) != 0)
	{
		return 1;
	}
	if (PED::_0x758F081DB204DDDE(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_77()
{
	int iVar0;
	int iVar1;
	vector3 vVar2;
	vector3 vVar5;
	vector3 vVar8;
	
	iVar0 = func_70();
	vVar2 = { -3685.423f, -2597.155f, -10f };
	vVar5 = { 0f, 0f, -24.7897f };
	vVar8 = { 116.6365f, 76.68949f, 15f };
	if (iVar0 != 120)
	{
		return 0;
	}
	else
	{
		iVar1 = VOLUME::_CREATE_VOLUME_CYLINDER(vVar2, vVar5, vVar8);
		if (func_154(Global_35, iVar1, 1, 0))
		{
			func_155(iVar1);
			return 1;
		}
		else
		{
			func_155(iVar1);
			return 0;
		}
	}
	return 0;
}

int func_78(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (bParam6)
	{
		if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
		{
			return 1;
		}
	}
	else if (func_156(ENTITY::GET_ENTITY_COORDS(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return 1;
	}
	return 0;
}

int func_79(vector3 vParam0, float fParam3)
{
	if (func_157(vParam0, fParam3))
	{
		return 1;
	}
	if (func_158(vParam0, fParam3))
	{
		return 1;
	}
	return 0;
}

void func_80(int iParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (iParam1 && !func_54(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_55(*iParam0);
	if (((*Global_1945938)[iVar0 /*18*/])->f_16 != SCRIPTS::GET_ID_OF_THIS_THREAD() && iParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_159(iVar0);
	*iParam0 = 0;
}

bool func_81(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return false;
	}
	return PED::IS_PED_ON_MOUNT(iParam0);
}

void func_82()
{
	Global_1911914->f_1583 = MISC::GET_GAME_TIMER();
	Global_1911914->f_1581 = 1;
}

void func_83(int iParam0)
{
	if (!func_69(iParam0))
	{
		Global_1392040 = (Global_1392040 || iParam0);
	}
}

int func_84()
{
	if (Global_1935689->f_17 == 3)
	{
		return 1;
	}
	return 0;
}

int func_85(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	struct<4> Var5;
	
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_160(bParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_161(bParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_162(bParam0, Var0, Var0.f_4, bParam4) };
	return func_163(bParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

int func_86()
{
	if (func_164(Global_35, 0))
	{
		if (PED::_0x34D6AC1157C8226C(Global_35, 1855656219))
		{
			return 1;
		}
	}
	return 0;
}

void func_87(int iParam0, int iParam1)
{
	Global_1357549->f_1672 = iParam0;
	Global_1357549->f_1673 = iParam1;
}

int func_88()
{
	return Global_1357549->f_1672;
}

int func_89(int iParam0, var uParam1)
{
	int iVar0;
	var uVar1;
	
	if (!func_42(iParam0, 0))
	{
		return 0;
	}
	if (Global_1935689->f_8)
	{
		return 0;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && uParam1)
	{
		iVar0 = func_165(iParam0);
		if (func_91(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_166(&uVar1, HUD::_0x0501D52D24EA8934(1), 1, iVar0))
		{
			return 0;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_167())
		{
			return 0;
		}
	}
	if (!func_15(iParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

int func_90(int iParam0)
{
	if (func_43(iParam0) == -1650247667)
	{
		return 0;
	}
	if (!INVENTORY::_0x3D10D7179D7034AF(func_140(0), iParam0, func_168(0)))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -1838434463:
		case 2019377485:
			if (!Global_1392040->f_2)
			{
				func_21(1, 1);
				TELEMETRY::_0x565EAA726B2CE3B7(0);
				return 1;
			}
			else
			{
				return 0;
			}
			break;
		
		case 1807503187:
			func_58(MISC::_CREATE_VAR_STRING(0, 163043886, Global_36558), 10000, 0, 0, 0, 1);
			break;
	}
	return 1;
}

int func_91(bool bParam0, int iParam1)
{
	if (bParam0 == 0)
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_DOES_ITEM_HAVE_TAG(bParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

void func_92(bool bParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, struct<2> Param17, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, int iParam28, int iParam29)
{
	switch (bParam0)
	{
		case 1244838730:
			break;
		
		case -1952196650:
			if (func_169())
			{
				func_170(998229694, 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(998229694))
			{
				func_170(1610852701, 0);
			}
			break;
		
		case -1566711999:
			func_170(-1741315348, 0);
			break;
		
		case -1237758927:
			break;
		
		case -631796932:
			func_171(((*Global_1347702)[80 /*49*/])->f_15, 1);
			if (func_169() == 1)
			{
				func_170(1565950479, 0);
			}
			else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(1565950479))
			{
				if (func_172(77))
				{
					func_170(-553142873, 0);
				}
				else
				{
					func_170(-384883866, 0);
				}
			}
			break;
		
		case 581047644:
			if ((func_173() && !func_174(51)) && !func_175(1048576))
			{
				func_176(2);
				func_177(51, 0, 0, 0, 0, -1, 0);
				func_178(51, 0, 0, -1992824800, 0, 0, 2, 0);
				func_179(1048576);
			}
			break;
		
		case -625427311:
			if ((func_173() && !func_174(51)) && !func_175(16384))
			{
				func_176(1);
				func_177(51, 0, 0, 0, 0, -1, 0);
				func_178(51, 0, 0, 1520110311, 0, 0, 5, 0);
				func_179(16384);
			}
			break;
		
		case -644199619:
			if ((func_173() && !func_174(40)) && !func_180(32))
			{
				func_181(4);
				func_177(39, 0, 0, 0, 0, -1, 0);
				func_178(39, 0, 0, 0, 0, 0, 2, 0);
				func_182(32);
			}
			break;
		
		case 684296857:
			if ((func_173() && !func_174(42)) && !func_183(16))
			{
				func_184(8);
				func_177(41, 0, 0, 0, 0, -1, 0);
				func_178(41, 0, 0, 0, 0, 0, 2, 0);
				func_185(16);
			}
			break;
		
		case 466137807:
			if ((func_173() && !func_174(50)) && !func_186(32))
			{
				func_187(4);
				func_177(49, 0, 0, 0, 0, -1, 0);
				func_178(49, 0, 0, 0, 0, 0, 2, 0);
				func_188(32);
				if (!func_189(((*Global_1347702)[50 /*49*/])->f_15, 1))
				{
					if (func_169() == 1)
					{
						func_170(-629995342, 0);
					}
					else if (HUD::_JOURNAL_CAN_WRITE_ENTRY(-629995342))
					{
						func_170(-1367572831, 0);
					}
				}
			}
			break;
		
		case -686755665:
			iParam27 = -2107709792;
			Param17.f_1 = iParam27;
			StringCopy(&(Param1.f_10), "respond_parcel", 32);
			iParam29 = 0;
			iParam28 = 1;
			break;
	}
}

void func_93(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, int iParam27, int iParam28)
{
	switch (bParam0)
	{
		case 1950809992:
			func_184(16);
			break;
	}
}

void func_94(bool bParam0, struct<11> Param1, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
	switch (bParam0)
	{
		case -1280336729:
		case -691125380:
		case -287018478:
		case 305626647:
			StringCopy(&(Param1.f_10), "gunslinger_notes", 32);
			break;
	}
}

int func_95(bool bParam0)
{
	return 1;
}

int func_96(bool bParam0, bool bParam1, bool bParam2)
{
	if (func_190(bParam0, bParam1, 0, 0, -1082130432))
	{
		Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
		return 1;
	}
	switch (func_191(bParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 1245009814, 1, 0, -1082130432);
				return 1;
			}
			break;
		
		case 1174751405:
			if (!bParam1)
			{
				func_192(bParam0);
				return 1;
			}
			break;
		
		case 845883585:
			if (!bParam1)
			{
				if (!func_193())
				{
					if (func_194(&Global_35))
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 616992297, 1, 0, -1082130432);
					}
					else
					{
						TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -903856906, 1, 0, -1082130432);
					}
					return 1;
				}
				else
				{
					func_58("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		
		case -1239610997:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 1087288635, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		
		case 632545869:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -1401979141, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		
		case -793205628:
			if (!bParam2)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, 136592566, 1, 0, 0f);
				if (CAM::_0xA24C1D341C6E0D53(1, 0, 0))
				{
					GRAPHICS::ANIMPOSTFX_PLAY("CamTransition01");
				}
			}
			Global_1911773 = MISC::GET_GAME_TIMER() + 3000;
			return 1;
		
		case 1451036371:
			if (!bParam1)
			{
				func_195(bParam0);
				return 1;
			}
			break;
		
		case -273840653:
			if (!bParam1)
			{
				func_196(bParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return 1;
			}
			break;
		
		case 999632878:
			if (!bParam1)
			{
				func_197(bParam0, PED::IS_PED_IN_COMBAT(Global_35, 0));
				return 1;
			}
			break;
		
		case 1130235258:
			if (!bParam1)
			{
				if (PED::IS_PED_IN_COMBAT(Global_35, 0))
				{
					func_198(bParam0);
				}
				else
				{
					func_199(bParam0);
				}
				return 1;
			}
			break;
		
		case -1915958659:
			if (!bParam1)
			{
				func_200(bParam0);
				return 1;
			}
			break;
		
		case 1859991422:
			if (!bParam1)
			{
				func_201(bParam0);
				return 1;
			}
			break;
		
		case 1891031775:
			if (!bParam1)
			{
				func_202(bParam0);
				return 1;
			}
			break;
		
		case -809056541:
			if (!bParam1)
			{
				func_203(bParam0);
				return 1;
			}
			break;
		
		case -1337515701:
			if (!bParam1)
			{
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), bParam0, -1893721798, 1, 0, -1082130432);
				return 1;
			}
			break;
		
		case -262371497:
			if (!bParam1)
			{
				func_204(bParam0);
				return 1;
			}
			break;
		
		case 1443104131:
			if (!bParam1)
			{
				func_205(bParam0);
				return 1;
			}
			break;
		
		case -1919515848:
			if (!bParam1)
			{
				func_206(bParam0);
				return 1;
			}
			break;
		
		case 89124942:
			if (!bParam1)
			{
				func_207(bParam0);
				return 1;
			}
			break;
		
		case 238865292:
			if (!bParam1)
			{
				func_208(bParam0);
				return 1;
			}
			break;
		
		case 1177617310:
			if (!bParam1)
			{
				func_209(bParam0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_97(struct<16> Param0, int iParam16)
{
	int iVar0;
	
	if (MISC::IS_STRING_NULL_OR_EMPTY(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_210(iParam16, 2))
	{
		if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(MISC::GET_HASH_KEY(&(Param0.f_10))) > 0 || func_14(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (MISC::IS_STRING_NULL_OR_EMPTY(&(((*Global_1934603)[iVar0 /*16*/])->f_10)))
		{
			*((*Global_1934603)[iVar0 /*16*/]) = { Param0 };
			Global_1934603->f_161++;
			func_211(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_98()
{
	return Global_1894899 & 2 != 0;
}

int func_99(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 0;
		
		case 3:
			return 3;
		
		default:
			break;
	}
	return -1;
}

int func_100(bool bParam0)
{
	struct<2> Var0;
	
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_INFO(bParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_101(bool bParam0)
{
	int iVar0;
	
	if (bParam0 == 0)
	{
		return 0;
	}
	if (func_43(bParam0) == -1037537535)
	{
		if (func_100(bParam0) == -999503751)
		{
			iVar0 = func_106(bParam0);
			if ((iVar0 != -1 && !func_212(iVar0)) || !func_15(bParam0, 1, 0))
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_102(int iParam0, bool bParam1)
{
	int iVar0;
	
	iParam0 = func_213(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_35) || PED::IS_PED_SWIMMING(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		if (PED::_0xB676EFDA03DADA52(iVar0, 0) == Global_35)
		{
			if (bParam1 == -727924611)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_214(iParam0))
	{
		return 1;
	}
	return 0;
}

int func_103(int iParam0)
{
	int iVar0;
	
	iParam0 = func_213(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (iParam0 == func_215())
		{
			return 1;
		}
		return 0;
	}
	if (iVar0 == PLAYER::_0xB48050D326E9A2F3(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	return 0;
}

int func_104(int iParam0)
{
	iParam0 = func_213(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1900383[iParam0 /*45*/];
}

int func_105(int iParam0, int iParam1, bool bParam2)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam1) && !ENTITY::IS_ENTITY_DEAD(iParam1))
		{
			if (bParam2)
			{
				return (PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true) && PED::GET_MOUNT(iParam0) == iParam1);
			}
			else
			{
				return (PED::IS_PED_ON_MOUNT(iParam0) && PED::GET_MOUNT(iParam0) == iParam1);
			}
		}
	}
	return 0;
}

int func_106(bool bParam0)
{
	switch (bParam0)
	{
		case 439606975:
			return 14;
		
		case 1661121390:
			return 6;
		
		case 1164374808:
			return 7;
		
		case 624063935:
			return 9;
		
		case -1476781101:
			return 10;
		
		case 1560492757:
			return 15;
		
		case -769081407:
			return 16;
		
		case 688004210:
			return 20;
		
		case 166243423:
			return 0;
		
		case -1826731591:
			return 24;
		
		case 2119049229:
			return 25;
		
		case 1352942778:
			return 26;
		
		case 1964379549:
			return 27;
		
		case 1201189539:
			return 28;
		
		case 1351927599:
			return 21;
		
		case 2032023096:
			return 22;
		
		case 1784889667:
			return 13;
		
		case 1160643979:
			return 8;
		
		case 1383300684:
			return 1;
		
		case 2051441678:
			return 2;
		
		case 162509669:
			return 3;
		
		case 635948769:
			return 4;
		
		case 274995506:
			return 5;
		
		case 1902428294:
			return 17;
		
		case -2114499732:
			return 18;
		
		case 800827126:
			return 19;
		
		case 294553332:
			return 11;
		
		case 1788874135:
			return 12;
		
		case -1243402388:
			return 66;
		
		case 65931886:
			return 67;
		
		case 1371678229:
			return 68;
		
		case 2102263084:
			return 69;
		
		case -272211555:
			return 61;
		
		case -55563408:
			return 64;
		
		case -1914506115:
			return 71;
		
		case 802495462:
			return 75;
		
		case 842905332:
			return 77;
		
		case 1511551084:
			return 79;
		
		case -1725704631:
			return 81;
		
		case 1257427489:
			return 83;
		
		case -659341240:
			return 85;
		
		case 2038771525:
			return 87;
		
		case -535599244:
			return 89;
		
		case -389591806:
			return 73;
		
		case -1205612021:
			return 70;
		
		case 890706995:
			return 93;
		
		case 1156438275:
			return 90;
		
		case -1611873049:
			return 91;
		
		case 594312243:
			return 92;
		
		case -978578725:
			return 94;
		
		case -361635024:
			return 62;
		
		case -1951220140:
			return 78;
		
		case 1460520700:
			return 76;
		
		case 523337834:
			return 80;
		
		case -19271249:
			return 82;
		
		case 214175524:
			return 84;
		
		case -1303643297:
			return 86;
		
		case 411856831:
			return 88;
		
		case -926815459:
			return 72;
		
		case -1300731953:
			return 74;
		
		case -409616653:
			return 65;
		
		case 509954990:
			return 29;
		
		case -445916744:
			return 30;
		
		case -866249154:
			return 31;
		
		case -2077063704:
			return 32;
		
		case 205207539:
			return 33;
		
		case -1033657275:
			return 34;
		
		case 1806002837:
			return 35;
		
		case 705324896:
			return 36;
		
		case -1541763703:
			return 37;
		
		case 387052410:
			return 38;
		
		case -361288914:
			return 39;
		
		case -911054515:
			return 40;
		
		case 1084200963:
			return 41;
		
		case 1847948074:
			return 42;
		
		case -1212526764:
			return 43;
		
		case 1851440270:
			return 44;
		
		case -2028985700:
			return 45;
		
		case 1074435214:
			return 46;
		
		case -883015675:
			return 47;
		
		case -1047155604:
			return 48;
		
		case 1123231221:
			return 49;
		
		case 1866989210:
			return 50;
		
		case 478183719:
			return 51;
		
		case -1698955868:
			return 52;
		
		case -2029378634:
			return 53;
		
		case 1339864416:
			return 54;
		
		case 890998115:
			return 55;
		
		case -1376288999:
			return 56;
		
		case -1041123771:
			return 57;
		
		case 1389254668:
			return 58;
		
		case -346112633:
			return 59;
		
		case 773309172:
			return 60;
		
		case -291256376:
			return 23;
		
		default:
			break;
	}
	return -1;
}

void func_107(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4)
{
	struct<4> Var0;
	
	if (bParam4)
	{
		func_216(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = bParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_217(Var0);
}

int func_108(bool bParam0, bool bParam1)
{
	int iVar0;
	
	if (!func_218())
	{
		return 0;
	}
	if (!func_219(bParam0))
	{
		return 0;
	}
	if (func_220(bParam0))
	{
		iVar0 = 0;
		if (func_100(bParam0) == 81053684)
		{
			if (bParam1)
			{
				func_221(&iVar0, 2);
			}
		}
		return func_222(bParam0, iVar0);
	}
	return 0;
}

void func_109(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 10;
	bVar1 = &Global_1946804->f_1497.f_1[iVar0 /*3*/];
	if (bVar1 == bParam0)
	{
		PED::_0xCB9401F918CB0F75(Global_35, "PlayUnequipHatFidget", 1, 15);
		func_110(Global_35, -2065815962, 0, -358215195, 1, 1, 1, 0, 1, 0);
		func_111(bParam0, 0);
		return;
	}
	PED::_0xCB9401F918CB0F75(Global_35, "PlayEquipHatFidget", 1, 15);
	func_110(Global_35, bParam0, 0, -358215195, 1, 1, 1, 0, 1, 0);
	if (func_223(32768))
	{
		PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
		func_224();
		func_216(128);
		return;
	}
	if (bVar1 == &Global_1946804->f_57[iVar0 /*11*/])
	{
		func_111(bParam0, 1);
		return;
	}
	if (func_225(-2061583405, 0))
	{
		if (func_226(bVar1))
		{
			func_111(bVar1, 0);
		}
		else
		{
			func_227(bVar1, 1, 1, 0);
		}
		func_111(bParam0, 1);
		return;
	}
	if (func_226(bVar1))
	{
		func_111(bVar1, 0);
		func_111(bParam0, 1);
	}
	else if (func_226(bParam0))
	{
		if (bParam0 != func_228(0))
		{
			func_229(bParam0, bVar1);
			func_111(bParam0, 0);
			func_111(bVar1, 0);
		}
		else
		{
			PED::KNOCK_OFF_PED_PROP(Global_35, false, true, false, true);
			func_216(128);
			func_111(bParam0, 1);
		}
	}
}

int func_110(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, int iParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9)
{
	struct<5> Var0;
	int iVar5;
	
	if (bParam3 == -358215195)
	{
		Var0 = { func_160(bParam1, 1, 0) };
		bParam3 = func_230(Var0.f_4);
		if (bParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_232(bParam1, iParam2, func_231(bParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_233(1, (func_56() == -1 && iParam5), 1);
	switch (bParam3)
	{
		case 1145151482:
		case 1742327865:
			if (iParam8 && bParam1 != &Global_1946804->f_57[func_231(bParam3, 1) /*11*/])
			{
				func_107(31, 0, 0, 0, 0);
			}
			break;
		
		case 1108822547:
			if (func_223(32768) && bParam1 != &Global_1946804->f_57[func_231(bParam3, 1) /*11*/])
			{
				func_224();
				func_107(22, bParam3, 256, 0, 0);
			}
			PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 2, "ALL");
			PED::CLEAR_PED_BLOOD_DAMAGE_BY_ZONE(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_107(22, bParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_234(bParam3);
	if (PED::IS_PED_A_PLAYER(iParam0))
	{
		func_107(19, 0, iVar5, 0, 0);
		if ((bParam3 == 1742327865 || bParam3 == 1108822547) || bParam3 == 1145151482)
		{
			func_235(0);
			func_236(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_107(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_111(bool bParam0, bool bParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	
	Var0 = { func_160(bParam0, 0, 0) };
	Var5 = { func_162(bParam0, Var0, Var0.f_4, 0) };
	if (func_237(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return;
	}
	INVENTORY::_0x65A5F70F4A292EBE(func_140(0), &Var5, bParam1);
}

void func_112(bool bParam0)
{
	if (bParam0)
	{
		Global_1935689 = 1;
	}
	else
	{
		Global_1935689 = 2;
	}
}

void func_113()
{
	if (func_238())
	{
		return;
	}
	if (func_239())
	{
		TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1914319->f_18996.f_1 = 1;
	}
	else if (Global_1914319->f_18996.f_4 != 0)
	{
		func_58(func_240(), 10000, 0, 0, 0, 1);
		Global_1914319->f_18996.f_4 = 0;
	}
}

int func_114(int iParam0)
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_48(iParam0))
	{
		return 0;
	}
	return func_151(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

float func_115(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	int iVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	float fVar9;
	float fVar10;
	float fVar11;
	var uVar12;
	
	iParam0 = func_213(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_241(iParam0);
	if (!STREAMING::IS_MODEL_VALID(iVar0))
	{
		return -1f;
	}
	iVar1 = func_242(iParam0);
	iVar2 = ATTRIBUTE::GET_DEFAULT_MAX_ATTRIBUTE_RANK(iVar0, 7);
	fVar3 = TASK::_0xEB67D4E056C85A81(iVar1);
	fVar4 = TASK::_0x78D8C1D4EB80C588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_242(iParam0) + 1;
	fVar6 = func_243(iParam0);
	fVar7 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar1));
	fVar8 = BUILTIN::TO_FLOAT(ATTRIBUTE::GET_DEFAULT_ATTRIBUTE_POINTS_NEEDED_FOR_RANK(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	uVar12 = func_244(fVar3, fVar4, fVar11);
	return uVar12;
}

int func_116(int iParam0, int iParam1, float fParam2, bool bParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return 0;
	}
	if (BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iParam0, bParam3, false), ENTITY::GET_ENTITY_COORDS(iParam1, bParam3, false)) <= (fParam2 * fParam2))
	{
		return 1;
	}
	return 0;
}

int func_117()
{
	return Global_40.f_1095.f_3054.f_1;
}

int func_118(int iParam0)
{
	if (!func_245(32))
	{
		return 0;
	}
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-75008140))
	{
		return 0;
	}
	if (!func_246())
	{
		return 0;
	}
	if (func_247(16))
	{
		return 0;
	}
	if (!_NAMESPACE26::_0xD6F6ACF4392187FB(Global_1225638->f_14) || !_NAMESPACE26::_0x424B17A7DC5C90BC(PLAYER::INT_TO_PLAYERINDEX(&Global_1225638)))
	{
		return 0;
	}
	if (iParam0 == 1 && func_248(Global_1131432->f_8, 1))
	{
		return 0;
	}
	return 1;
}

int func_119(int iParam0)
{
	if (!func_249())
	{
		return 0;
	}
	func_250(iParam0);
	Global_1898068->f_4 = 1;
	return 1;
}

bool func_120(int iParam0)
{
	return func_248(Global_1131432->f_8, iParam0);
}

void func_121(int iParam0)
{
	struct<16> Var0;
	
	Var0.f_12 = 255;
	Var0.f_13 = 255;
	Var0.f_5 = iParam0;
	Var0.f_3 = 94;
	func_252(Var0, func_251(0, 15), 0, 0);
}

int func_122(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = joaat("weapon_unarmed");
	if (ENTITY::IS_ENTITY_DEAD(iParam0) || !PED::IS_PED_HUMAN(iParam0))
	{
		return iVar0;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam1, iParam2, bParam3))
	{
		return iVar0;
	}
	return iVar0;
}

int func_123(int iParam0)
{
	int iVar0;
	
	if (!func_152(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 17)
	{
		if (&Global_1395601->f_5[iVar0 /*28*/] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_124()
{
	int iVar0;
	
	iVar0 = func_61();
	switch (iVar0)
	{
		case 0:
			return 1;
		
		case 1:
			return 4;
		
		case 2:
			return 2;
		
		case 3:
			return 6;
		
		case 5:
			return 5;
		
		case 6:
			return 0;
		
		case 4:
			return 3;
		
		case 7:
			return 7;
		
		case 8:
			return -1;
	}
	return -1;
}

bool func_125(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 17);
}

bool func_126()
{
	return &Global_1395601;
}

int func_127(bool bParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	bool bVar0;
	bool bVar1;
	bool bVar2;
	int iVar3;
	int iVar4;
	struct<2> Var5;
	
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_134(bParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		WEAPON::_0xB6CFEC32E3742779(Global_35, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_253(bParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_15(bParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_254(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var5))
	{
		if ((func_45(bParam0, 0, 0) - iParam1) >= 0)
		{
			STATS::_0xBD861AE8A5181ED7(&Var5, iParam1);
		}
		else if ((func_45(bParam0, 0, 0) - iParam1) < 0)
		{
			func_127(bParam0, func_45(bParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_43(bParam0) == -427144552)
	{
		if (!func_255(bParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_85(bParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (bParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_256(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && bParam0 != 1309979101)
	{
		func_253(bParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_257(bParam0, iParam1);
	return 1;
}

void func_128(int iParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	func_258(iParam0, &iVar0, &iVar1);
	if (!func_259(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_260(iVar0, iVar1);
}

int func_129(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, char* sParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	bool bVar9;
	bool bVar10;
	struct<13> Var11;
	int iVar34;
	struct<2> Var35;
	bool bVar37;
	
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (!func_261(bParam0, iParam1, bParam2, iParam5))
	{
		return 0;
	}
	if (!func_262(bParam0, &iVar0, iParam1))
	{
		return 0;
	}
	func_263(bParam0, bParam2);
	iVar2 = 0;
	if (func_45(bParam0, 0, 0) == 0)
	{
		if (func_264(bParam0))
		{
			iVar5 = func_265(bParam0);
			iVar6 = func_266(iVar5);
			iVar7 = func_267(iVar6) + 1;
			func_268(iVar5);
			if (func_174(38))
			{
				func_128(483, 0);
			}
			else
			{
				func_128(482, 0);
			}
			if (iVar7 == func_269(iVar6))
			{
				func_129(func_270(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_173() && func_271(4))
				{
					if (func_173() && (func_272(38) || func_174(38)))
					{
						func_178(38, func_270(iVar6), 0, 0, func_273(), 0, -1, 0);
						func_274(2);
					}
					else
					{
						func_178(38, func_270(iVar6), 0, 0, func_273(), 0, -1, 0);
						func_274(1);
					}
				}
			}
			else if (func_173() && func_271(4))
			{
				if (func_173() && (func_272(38) || func_174(38)))
				{
					func_178(38, 0, 0, 0, func_273(), 0, -1, 0);
					func_274(2);
				}
				else
				{
					func_178(38, 0, 0, 0, func_273(), 0, -1, 0);
					func_274(1);
				}
			}
			if (func_173() && func_271(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_173() && (func_272(38) || func_174(38)))
					{
						func_177(38, COLLECTION::_0x13AAECDA43318BFE(-2076669067, iVar6), COLLECTION::_0xD52D20B0C76BB26D(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_177(38, MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_43(bParam0) == -1037537535)
	{
		if ((!func_91(bParam0, 866047851) && !func_91(bParam0, -1979000645)) && !func_91(bParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_275(bParam0, 8388608) && !func_276(28))
	{
		func_277(28);
	}
	if (!bVar3)
	{
		if (func_91(bParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_100(bParam0) == -1447088266)
			{
				bVar1 = func_279(func_278(bParam0, 1), 0);
				if (WEAPON::IS_WEAPON_VALID(bVar1))
				{
					if (func_56() == -1)
					{
						func_280(bVar1);
					}
					if (func_256(0) && func_281(bVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_282(bParam0, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
			else
			{
				bVar1 = WEAPON::_0x5C2EA6C44F515F34(bParam0);
				if (WEAPON::_0x1F7977C9101F807F(bVar1))
				{
					if (func_56() == -1)
					{
						func_280(bParam0);
					}
					if (func_256(0) && func_281(bParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_282(bVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_43(bParam0) == -427144552)
		{
			if (!func_283(bParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_43(bParam0) == 307971639 && func_284(bParam0))
		{
			if (!func_285(bParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_91(bParam0, 866047851))
		{
			func_286(bParam0);
		}
		else if (func_91(bParam0, 2000026003))
		{
			func_287(bParam0);
		}
		else if (func_91(bParam0, -103750053))
		{
			func_289(func_288(-1019857971), iVar0);
		}
		else if (bParam0 == 2093098109)
		{
			func_289(func_290(-717883113, 2091222383), iVar0);
		}
		else if (func_91(bParam0, -121341956) && !func_91(bParam0, 606799272))
		{
			if (bParam0 != 191707516 && bParam0 != 1993672959)
			{
				if (func_189(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_128(498, 0);
				}
			}
			if (func_91(bParam0, -2017733358) || func_91(bParam0, -1369131378))
			{
				func_291(bParam0);
			}
		}
		else if (func_91(bParam0, -136654233))
		{
			if (func_91(bParam0, -1021472396))
			{
			}
		}
		else if (func_91(bParam0, -1466706512) && func_91(bParam0, 1147021565))
		{
			func_128(484, 0);
		}
		else if (func_91(bParam0, 1147021565) && func_91(bParam0, -524514947))
		{
		}
		else if (func_91(bParam0, 554195525))
		{
		}
		else if (func_91(bParam0, 589988438))
		{
			if (func_292())
			{
				func_293(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_91(bParam0, 787083290) && func_91(bParam0, 949916894))
		{
			func_294(bParam0);
		}
		else if (func_91(bParam0, -1718133314))
		{
			func_295(bParam0);
		}
		else if (func_91(bParam0, -1738650224))
		{
			func_296(bParam0);
		}
		else if (func_91(bParam0, -1112814642) && func_91(bParam0, 949916894))
		{
			func_297(bParam0);
		}
		else if (bParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_91(bParam0, 1841149704))
		{
			func_298();
		}
		else if (func_91(bParam0, 606799272))
		{
			func_299(bParam0, iParam1);
			func_300(bParam0);
		}
		else if (func_91(bParam0, -1112814642) && func_91(bParam0, -1697809989))
		{
			func_301(bParam0, 0, 0, 0);
		}
		else if (func_91(bParam0, -2017733358) || func_91(bParam0, -1369131378))
		{
			func_291(bParam0);
		}
		else if (func_91(bParam0, -1921346699))
		{
			if (func_56() != -1)
			{
				return 0;
			}
			func_302(bParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_91(bParam0, 1192444843))
		{
			switch (bParam0)
			{
				case 1815744868:
					if (!func_15(215778062, 1, 0))
					{
						func_129(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1334018438:
					if (!func_15(670273567, 1, 0))
					{
						func_129(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 1055480217:
					if (!func_15(-967317137, 1, 0))
					{
						func_129(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -978159653:
					if (!func_15(526074061, 1, 0))
					{
						func_129(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case 2100131425:
					if (!func_15(-1045488665, 1, 0))
					{
						func_129(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				
				case -2041382104:
					if (!func_15(471514780, 1, 0))
					{
						func_129(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_91(bParam0, -839724752) && func_275(bParam0, 4))
		{
			if (!func_174(42))
			{
				func_303(bParam0);
			}
		}
		else if (func_91(bParam0, 1399091007))
		{
			func_304(bParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_91(bParam0, 1248798204))
		{
			iVar8 = 0;
			switch (bParam0)
			{
				case -593948563:
					iVar8 = -1281487556;
					break;
				
				case -1421669656:
					iVar8 = -59585102;
					break;
				
				case -830181022:
					iVar8 = 1018123892;
					break;
				
				case 917695895:
					iVar8 = -1455768246;
					break;
				
				case -1580595448:
					iVar8 = -921879912;
					break;
				
				case 1309992709:
					iVar8 = 982182330;
					break;
				
				case 1541618973:
					iVar8 = -1406390556;
					break;
			}
			if (iVar8 != 0)
			{
				func_129(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		switch (bParam0)
		{
			case 990323211:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1930309310;
				break;
			
			case 1143540373:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1372580021;
				break;
			
			case -1073808995:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1557306571;
				break;
			
			case 1903483453:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 306085243;
				break;
			
			case 224572565:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case -13395913:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 627131028;
				break;
			
			case 1859340712:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1614861441:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 239008065;
				break;
			
			case -1336735809:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case -1109613870:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -1930727055;
				break;
			
			case 637788839:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case -1161163727:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 2118798877;
				break;
			
			case 648503798:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -1434556002:
				bParam2 = true;
				bVar4 = true;
				iVar2 = -978517238;
				break;
			
			case -843069275:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case 1356680930:
				bParam2 = true;
				bVar4 = true;
				iVar2 = 1367906801;
				break;
			
			case -1185145312:
				func_277(24);
				if (&Global_1946804->f_1497.f_1[27 /*3*/] == &Global_1946804->f_57[27 /*11*/])
				{
					func_110(PLAYER::PLAYER_PED_ID(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_305(&bVar9, 0))
				{
					func_281(bVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			
			case 1171350303:
				if (func_56() == -1 && &Global_1946804->f_1497.f_1[25 /*3*/] == &Global_1946804->f_57[25 /*11*/])
				{
					func_110(PLAYER::PLAYER_PED_ID(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			
			case -160924582:
				break;
			
			case 2131771850:
				func_128(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_306();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_307();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_308();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_309();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_310();
				break;
			
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			
			case -1937935584:
				func_311(499813453, 854119837, 0);
				func_312(499813453, 0);
				func_313(1);
				break;
			
			case 2127812557:
				func_311(499813453, -1292544588, 0);
				func_312(499813453, 0);
				func_313(2);
				break;
			
			case 808991383:
				func_311(499813453, -1003325394, 0);
				func_312(499813453, 0);
				func_313(4);
				break;
			
			case 1134518629:
				func_311(666607663, -335460405, 0);
				func_312(666607663, 0);
				func_314(1);
				break;
			
			case 902940106:
				func_311(666607663, 903797617, 0);
				func_312(666607663, 0);
				func_314(2);
				break;
			
			case -418174898:
				func_311(666607663, 669728650, 0);
				func_312(666607663, 0);
				func_314(4);
				break;
			
			case -648114971:
				func_311(-220219788, 1214120047, 0);
				func_312(-220219788, 0);
				func_315(1);
				break;
			
			case 211153747:
				func_311(-220219788, 655769340, 0);
				func_312(-220219788, 0);
				func_315(2);
				break;
			
			case -32876996:
				func_311(-220219788, 885316185, 0);
				func_312(-220219788, 0);
				func_315(4);
				break;
			
			case 1191437462:
				func_311(218622660, -1491419385, 0);
				func_312(218622660, 0);
				func_316(1);
				break;
			
			case 1119149048:
				func_311(218622660, 1809565830, 0);
				func_312(218622660, 0);
				func_316(2);
				break;
			
			case 506073827:
				func_311(390004462, -628873767, 0);
				func_312(390004462, 0);
				func_317(1);
				break;
			
			case -1876986168:
				func_311(390004462, -405421956, 0);
				func_312(390004462, 0);
				func_317(2);
				break;
			
			case 2142623221:
				func_311(390004462, -1108972386, 0);
				func_312(390004462, 0);
				func_317(4);
				break;
			
			case 1508215381:
				func_311(6410548, 1053716392, 0);
				func_312(6410548, 0);
				func_318(1);
				break;
			
			case -888935280:
				func_311(6410548, 806507056, 0);
				func_312(6410548, 0);
				func_318(2);
				break;
			
			case -1252474566:
				func_311(6410548, 1571925350, 0);
				func_312(6410548, 0);
				func_318(4);
				break;
			
			case -1465702449:
				func_311(6410548, 1330352282, 0);
				func_312(6410548, 0);
				func_318(8);
				break;
			
			case -21093309:
				func_320(242, func_319(-21093309), 0);
				break;
			
			case 204375141:
				func_320(240, func_319(204375141), 0);
				break;
			
			case -417963070:
				func_320(241, func_319(-417963070), 0);
				break;
			
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_321(594, 1934060482, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1067476102:
			case -541584777:
			case 206762213:
			case 1566032147:
			case 1973952589:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_321(594, 1110018439, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -653299524:
			case -486559882:
			case -324053813:
			case -223790555:
			case 998010398:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_321(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1976480343:
			case -953313786:
			case 730856618:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_321(594, -1228016946, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -2034071102:
			case -1939600995:
			case -1760041550:
			case -1708424762:
			case -1598782722:
			case -1505924449:
			case -1403873319:
			case -1335566375:
			case -1192685521:
			case 144810727:
			case 567164682:
			case 1174625611:
			case 1955751248:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_321(595, -103579, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case -1977068039:
			case -399865011:
				if (MISC::GET_GAME_TIMER() >= (Global_1935689->f_10197 + 60000))
				{
					func_321(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = MISC::GET_GAME_TIMER();
				}
				break;
			
			case 80178851:
				func_128(488, 0);
				break;
			
			case 1613651027:
				func_128(491, 0);
				break;
			
			case -885810591:
				func_128(485, 0);
				if ((MISC::GET_RANDOM_INT_IN_RANGE(0, 65536) % 3) == 0)
				{
					func_129(func_322(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_129(func_323(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			
			case -601932535:
				if (func_276(1))
				{
					func_128(487, 0);
				}
				break;
			
			case -898386032:
				func_128(486, 0);
				break;
			
			case -2035110427:
				if (func_56() == -1)
				{
					bParam0 = -1448210800;
				}
				break;
			
			case 1510719693:
				func_128(496, 0);
				break;
			
			default:
				break;
		}
	}
	if (!bVar4)
	{
		if (iVar0 <= 0)
		{
			return 0;
		}
		bVar10 = bParam0;
		func_324(&bVar10);
		if (!func_325(bVar10, iVar0, iParam5))
		{
			return 0;
		}
		else if (!func_256(0))
		{
			return 1;
		}
		if (func_43(bParam0) == -1037537535)
		{
			func_326(bParam0);
		}
		if (func_91(bParam0, -1979000645))
		{
			func_327(bParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_256(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			MISC::_0x48E4D50F87A96AA5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_129(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_328(iVar2, 0);
		}
	}
	Var35 = { func_254(bParam0) };
	if (STATS::_STAT_ID_IS_VALID(&Var35))
	{
		STATS::_0x6A0184E904CDF25E(&Var35, iVar0);
	}
	func_329(bParam0);
	if (sParam6 > 0f)
	{
		if (func_91(bParam0, -839724752))
		{
			func_330(bParam0, sParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_253(bParam0, iVar0, 0, bVar37, 0);
	}
	return 1;
}

bool func_130(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_131(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_331() - fParam1);
	func_332(uParam0, 1);
	func_333(uParam0, 2);
	uParam0->f_2 = 0f;
}

int func_132(var uParam0, float fParam1)
{
	if (!func_29(uParam0))
	{
		return 0;
	}
	if (func_334(uParam0) > fParam1)
	{
		return 1;
	}
	return 0;
}

void func_133(int iParam0)
{
	Global_1900383->f_316 = (Global_1900383->f_316 || iParam0);
}

int func_134(bool bParam0, int iParam1)
{
	int iVar0;
	var uVar1;
	var uVar2;
	
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	iVar0 = func_43(bParam0);
	if (iVar0 == -427144552 && WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return WEAPON::_0x5C2EA6C44F515F34(bParam0);
	}
	else if (iVar0 == 307971639 && WEAPON::_0x1F7977C9101F807F(bParam0))
	{
		return bParam0;
	}
	if (func_91(bParam0, 1399091007))
	{
		func_335(bParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_135(char* sParam0, var uParam1, var uParam2, int iParam3, bool bParam4)
{
	*uParam1 = INVENTORY::_0x80D78BDC9D88EF07(func_140(bParam4), sParam0, iParam3, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_136(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (iParam2 < 0)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return 0;
	}
	if (!INVENTORY::_0x82FA24C3D3FCD9B7(iParam2, iParam1, uParam0))
	{
		return 0;
	}
	return 1;
}

bool func_137(int iParam0)
{
	return (WEAPON::IS_WEAPON_VALID(iParam0) && iParam0 != joaat("weapon_unarmed"));
}

int func_138(int iParam0)
{
	if (iParam0 < 0)
	{
		return 0;
	}
	if (!INVENTORY::_0x42A2F33A1942E865(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_139(bool bParam0, bool bParam1)
{
	struct<14> Var0;
	int iVar14;
	var uVar15;
	
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_336(bParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_338(&Var0, func_337(0));
	}
	if (!func_339(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_138(iVar14);
	return uVar15;
}

int func_140(bool bParam0)
{
	if (func_56() == -1)
	{
		if (!bParam0 && INVENTORY::_0x7C7E4AB748EA3B07())
		{
			return 5;
		}
		return 1;
	}
	if (!bParam0 && INVENTORY::_0x13D234A2A3F66E63(PLAYER::PLAYER_PED_ID()) == 3)
	{
		return 3;
	}
	return 2;
}

int func_141(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_12105[iParam0 /*7*/]);
	}
	if (iParam0 < 0 || iParam0 >= 20001)
	{
		return 0;
	}
	return &(Global_1058888->f_498[iParam0 /*2*/]);
}

int func_142(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 5) & 1023;
}

int func_143(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 1;
	}
	return 0;
}

float func_144(int iParam0, vector3 vParam1)
{
	if (func_340(iParam0))
	{
		return BUILTIN::VDIST(VEHICLE::_0x1E8A921112891651(((*Global_1425371)[iParam0 /*373*/])->f_1), vParam1);
	}
	return 1E+08f;
}

void func_145(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		if (((*Global_1945938)[iParam0 /*18*/])->f_5 == 5 && !func_52(iParam0, 8))
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, 0);
		}
		else
		{
			HUD::_UIPROMPT_SET_VISIBLE(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
		}
	}
}

void func_146(int iParam0, int iParam1)
{
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_SET_ENABLED(((*Global_1945938)[iParam0 /*18*/])->f_3, iParam1);
	}
}

void func_147(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return;
	}
	((*Global_1945938)[iParam0 /*18*/])->f_1 = (((*Global_1945938)[iParam0 /*18*/])->f_1 || iParam1);
}

int func_148(int iParam0, int iParam1)
{
	var uVar0;
	int iVar4;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	iVar4 = PED::_0x4642182A298187D0(iParam0, iParam1, &uVar0, 4, 1);
	if (iVar4 != 0)
	{
		return 1;
	}
	return 0;
}

int func_149(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return 0;
}

int func_150(bool bParam0, var uParam1, var uParam2)
{
	if (Global_1935630->f_18)
	{
		if ((uParam2 || Global_1935630->f_19 > 0) || Global_1935630->f_17 > 0)
		{
			return 1;
		}
	}
	else if (uParam1 && !Global_1935630->f_15 == 1370593166)
	{
		return 0;
	}
	if (Global_1935630->f_20 > 0 || (uParam2 && Global_1935630->f_20 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1935630->f_13)
		{
			if (uParam2 || Global_1935630->f_21 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

bool func_151(int iParam0)
{
	int iVar0;
	
	iVar0 = func_341(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_152(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_153(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23117[iParam0 /*11*/] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0 /*11*/] && iParam1) != 0;
}

bool func_154(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (bParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return false;
	}
	if (!VOLUME::_0x92A78D0BEDB332A3(iParam1))
	{
		return false;
	}
	return ENTITY::IS_ENTITY_IN_VOLUME(iParam0, iParam1, bParam2, iParam3);
}

void func_155(int iParam0)
{
	if (VOLUME::_0x92A78D0BEDB332A3(iParam0))
	{
		VOLUME::_0x43F867EF5C463A53(iParam0);
	}
}

float func_156(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return BUILTIN::VDIST2(vParam0, vParam3);
}

int func_157(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_342(iVar0))
		{
			if (BUILTIN::VDIST(func_343(iVar0), vParam0) < fParam3)
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

int func_158(vector3 vParam0, float fParam3)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < Global_40.f_450)
	{
		if (&Global_40.f_450[iVar0] > -1 && &Global_40.f_450[iVar0] < 200)
		{
			if (BUILTIN::VDIST(func_344(&(Global_40.f_450[iVar0])), vParam0) < fParam3)
			{
				return 1;
			}
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return 0;
}

void func_159(int iParam0)
{
	if (!func_345(iParam0))
	{
		return;
	}
	if (HUD::_UIPROMPT_IS_VALID(((*Global_1945938)[iParam0 /*18*/])->f_3))
	{
		HUD::_UIPROMPT_DELETE(((*Global_1945938)[iParam0 /*18*/])->f_3);
	}
	((*Global_1945938)[iParam0 /*18*/])->f_4 = 0;
	(*Global_1945938)[iParam0 /*18*/] = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_16 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_1 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_6 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_12 = { 0f, 0f, 0f };
	((*Global_1945938)[iParam0 /*18*/])->f_9 = 0f;
	((*Global_1945938)[iParam0 /*18*/])->f_10 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_11 = 0;
	((*Global_1945938)[iParam0 /*18*/])->f_2 = 1;
	((*Global_1945938)[iParam0 /*18*/])->f_15 = -1f;
}

struct<5> func_160(bool bParam0, bool bParam1, int iParam2)
{
	struct<5> Var0;
	struct<10> Var5;
	struct<10> Var27;
	
	Var0 = { func_346(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_43(bParam0))
	{
		case -1037537535:
			if (!INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0 = { func_162(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		
		case -427144552:
			Var0 = { func_337(bParam1) };
			if (iParam2 && func_347(bParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_348(bParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_348(bParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_349(bParam0, &Var5, 1728382685))
				{
					Var0.f_4 = 1728382685;
				}
				else
				{
					Var0.f_4 = -649335959;
				}
			}
			else
			{
				Var0.f_4 = 1728382685;
			}
			break;
		
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		
		case -1650247667:
			Var0.f_4 = -813824107;
			Var0 = { func_350(bParam1) };
			switch (func_100(bParam0))
			{
				case 664784405:
					Var0.f_4 = -1150938404;
					break;
				
				case 2020212423:
					Var0.f_4 = -1756997214;
					break;
				
				case 874188557:
					Var0.f_4 = -241855024;
					break;
				
				case -2101244071:
					Var0.f_4 = -268116367;
					break;
			}
			break;
		
		case -2130996531:
			if (func_351(bParam0, -1823706425))
			{
				Var0 = { func_162(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, -1838434463);
			}
			else if (func_351(bParam0, -1483207246))
			{
				Var0 = { func_162(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 889965687);
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
		
		default:
			if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1084182731))
			{
				Var0.f_4 = 1084182731;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, 1034665895))
			{
				Var0.f_4 = 1034665895;
			}
			else if (INVENTORY::_0x780C5B9AE2819807(bParam0, -833319691))
			{
				Var27.f_9 = -1591664384;
				if (!func_352(Var0, &Var27, bParam1, 0))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var27.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else
			{
				Var0.f_4 = INVENTORY::_0x6452B1D357D81742(bParam0, 1328661203);
				if (Var0.f_4 == 0)
				{
				}
			}
			break;
	}
	return Var0;
}

int func_161(bool bParam0, int iParam1, var uParam2, var uParam3, bool bParam4)
{
	int iVar0;
	
	if (func_353(bParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	if (!func_256(bParam4))
	{
		iVar0 = -1;
		return iVar0 != -1;
	}
	if (!INVENTORY::_0xB4158C8C9A3B5DCE(func_140(bParam4), bParam0, iParam1, uParam2))
	{
		return 0;
	}
	return 1;
}

struct<4> func_162(bool bParam0, var uParam1, var uParam2, var uParam3, var uParam4, int iParam5, bool bParam6)
{
	struct<4> Var0;
	
	if (!func_42(bParam0, 0))
	{
		return Var0;
	}
	INVENTORY::_0x886DFD3E185C8A89(func_140(bParam6), &uParam1, bParam0, iParam5, &Var0);
	return Var0;
}

int func_163(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	struct<12> Var0;
	int iVar14;
	
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (func_353(bParam0))
	{
		return 0;
	}
	Var0.f_9 = -1591664384;
	if (!func_352(*uParam1, &Var0, bParam6, 0))
	{
		return 0;
	}
	if (iParam3 < 0)
	{
		iParam3 = Var0.f_11;
	}
	else if (iParam3 > Var0.f_11)
	{
		iParam3 = Var0.f_11;
	}
	if (!func_256(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!INVENTORY::_0x3E4E811480B3AE79(func_140(bParam6), uParam1, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

int func_164(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 == 0)
	{
		return 1;
	}
	if (func_248(iVar0, 1))
	{
		if (PED::IS_PED_FATALLY_INJURED(iParam0))
		{
			return 0;
		}
	}
	if (func_248(iVar0, 2))
	{
		if (PED::_0x3AA24CCC0D451379(iParam0))
		{
			return 0;
		}
	}
	if (func_248(iVar0, 8))
	{
		if (PED::GET_PED_CONFIG_FLAG(iParam0, 11, false))
		{
			return 0;
		}
	}
	if (func_248(iVar0, 16))
	{
		if (!PED::IS_PED_ON_MOUNT(iParam0) && !PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
		{
			return 0;
		}
	}
	if (func_248(iVar0, 32))
	{
		if (ENTITY::IS_ENTITY_IN_WATER(iParam0))
		{
			return 0;
		}
	}
	if (func_248(iVar0, 64))
	{
		if (PED::_0xB655DB7582AEC805(iParam0))
		{
			return 0;
		}
	}
	if (func_248(iVar0, 128))
	{
		if (PED::IS_PED_RAGDOLL(iParam0))
		{
			return 0;
		}
	}
	if (func_248(iVar0, 256))
	{
		if (!PED::_0xA0BC8FAED8CFEB3C(iParam0))
		{
			return 0;
		}
	}
	return 1;
}

int func_165(int iParam0)
{
	if (func_91(iParam0, 1573112293))
	{
		return func_354(iParam0);
	}
	switch (func_100(iParam0))
	{
		case -77448735:
			if (func_355(iParam0))
			{
				return func_354(iParam0);
			}
			break;
		
		case -1393202694:
		case 2041469314:
			return func_354(iParam0);
		
		case 1802292908:
			return func_356();
		
		case -2061583405:
		case -1719060085:
		case 81053684:
			return func_357();
		
		case -525676072:
			return func_357();
		
		case 1779021115:
			if (func_42(iParam0, 0))
			{
				if (iParam0 == -1016714371)
				{
					return func_358();
				}
			}
			return func_359();
		
		case -1823706425:
			return func_360();
		
		case -854348463:
			return func_361();
		
		default:
			if (func_42(iParam0, 0))
			{
				if (func_91(iParam0, 1192444843) || func_91(iParam0, -1540973036))
				{
					return func_362();
				}
				else if (func_91(iParam0, 1919582297))
				{
					return func_363();
				}
				else if (func_91(iParam0, 1147021565))
				{
					return func_364();
				}
				switch (iParam0)
				{
					case -2035110427:
					case -1448210800:
						return func_365();
					
					case -1516555556:
						return func_366();
				}
			}
			return func_367();
	}
	return func_367();
}

int func_166(var uParam0, int iParam1, bool bParam2, int iParam3)
{
	func_368(iParam1);
	if (!uParam0->f_1)
	{
		*uParam0 = PED::IS_PED_DEAD_OR_DYING(Global_35, true);
		uParam0->f_1 = 1;
	}
	if (Global_1935630->f_12 || *uParam0)
	{
		return 0;
	}
	if (func_56() == 0)
	{
		if (Global_1935496->f_7 & 131072 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 1 == 0)
	{
		if (Global_1935496->f_7 & 1024 != 0)
		{
			return 0;
		}
	}
	if (Global_1935630->f_22)
	{
		return 0;
	}
	if (iParam3 & 2 == 0)
	{
		if (Global_1935496->f_7 & 32 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 4 == 0)
	{
		if (Global_1935496->f_7 & 4096 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 8 == 0)
	{
		if (Global_1935496->f_7 & 512 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 512 == 0)
	{
		if (!uParam0->f_3)
		{
			uParam0->f_2 = func_369(bParam2);
			uParam0->f_3 = 1;
		}
		if (!uParam0->f_2)
		{
			return 0;
		}
	}
	if (iParam3 & 262144 == 0)
	{
		if (!uParam0->f_5)
		{
			uParam0->f_4 = func_370(bParam2);
			uParam0->f_5 = 1;
		}
		if (!uParam0->f_4)
		{
			return 0;
		}
	}
	if (iParam3 & 64 == 0)
	{
		if (!uParam0->f_7)
		{
			uParam0->f_6 = func_371(bParam2, iParam3, 1);
			uParam0->f_7 = 1;
		}
		if (!uParam0->f_6)
		{
			return 0;
		}
	}
	if (iParam3 & 128 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_372(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_373(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40);
			uParam0->f_13 = 1;
		}
		if ((uParam0->f_10 || uParam0->f_12) || uParam0->f_8)
		{
			if (bParam2)
			{
				func_58("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (iParam3 & 8388608 == 0)
	{
		if (!uParam0->f_11)
		{
			uParam0->f_10 = func_372(Global_35, 1868526510);
			uParam0->f_11 = 1;
		}
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_373(Global_35);
			uParam0->f_9 = 1;
		}
		if (uParam0->f_10 || uParam0->f_8)
		{
			if (!uParam0->f_15)
			{
				uParam0->f_14 = PED::IS_PED_SWIMMING(Global_1935630->f_40);
				uParam0->f_15 = 1;
			}
			if (uParam0->f_14)
			{
				return 0;
			}
		}
	}
	if (iParam3 & 16 == 0)
	{
		if (!uParam0->f_9)
		{
			uParam0->f_8 = func_373(Global_35);
			uParam0->f_9 = 1;
		}
		if (!uParam0->f_13)
		{
			uParam0->f_12 = ENTITY::DOES_ENTITY_EXIST(Global_1935630->f_40);
			uParam0->f_13 = 1;
		}
		if (uParam0->f_8)
		{
			if (uParam0->f_12)
			{
				if (!uParam0->f_17)
				{
					uParam0->f_16 = func_374(Global_1935630->f_40, 1);
					uParam0->f_17 = 1;
				}
				if (!uParam0->f_16)
				{
					if (bParam2)
					{
						func_58("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
					}
					return 0;
				}
			}
		}
	}
	if (iParam3 & 256 == 0)
	{
		if (Global_1935496->f_7 & 8192 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 1024 == 0)
	{
		if (Global_1935496->f_7 & 65536 != 0)
		{
			if (bParam2)
			{
				func_58("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (iParam3 & 2048 == 0)
	{
		if (Global_1935496->f_7 & 32768 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 4096 == 0)
	{
		if (Global_1935496->f_7 & 16384 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 8192 == 0)
	{
		if (Global_1935496->f_7 & 16 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 16384 == 0)
	{
		if (Global_1935496->f_7 & 256 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 32768 == 0)
	{
		if (!uParam0->f_19)
		{
			uParam0->f_18 = func_36();
			uParam0->f_19 = 1;
		}
		if (uParam0->f_18)
		{
			if (bParam2)
			{
				func_58("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
	}
	if (iParam3 & 131072 == 0)
	{
		if (Global_1935496->f_7 & 524288 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 65536 == 0)
	{
		if (Global_1935496->f_7 & 262144 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 524288 == 0)
	{
		if (Global_1935496->f_7 & 2097152 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 1048576 == 0)
	{
		if (Global_1935496->f_7 & 8388608 == 0)
		{
			return 0;
		}
	}
	if (iParam3 & 2097152 == 0)
	{
		if (Global_1935496->f_7 & 33554432 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 4194304 == 0)
	{
		if (Global_1935496->f_7 & 67108864 != 0)
		{
			return 0;
		}
	}
	if (iParam3 & 16777216 == 0)
	{
		if (Global_1935496->f_7 & 134217728 == 0)
		{
			return 0;
		}
	}
	if (Global_1935496->f_7 & 17825988 != 0)
	{
		return 0;
	}
	return 1;
}

int func_167()
{
	int iVar0;
	int iVar1;
	
	if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
	{
		iVar0 = TASK::_0x2D0571BB55879DA2(Global_35);
		iVar1 = iVar0;
		if ((((iVar1 != -1241981548 && iVar1 != 1020517461) && iVar1 != 1259174088) && iVar1 != -1075420544) && iVar1 != -1767895052)
		{
			return 1;
		}
	}
	return 0;
}

var func_168(bool bParam0)
{
	if (bParam0)
	{
		return Global_1914319->f_17370;
	}
	return (Global_1914319->f_17370 || Global_1914319->f_18996.f_1);
}

int func_169()
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == joaat("player_zero"))
	{
		return 1;
	}
	return 0;
}

void func_170(int iParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 1)
	{
		func_375(iParam0, 0);
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (&Global_40.f_11922[iVar0] == 0)
			{
				Global_40.f_11922[iVar0] = iParam0;
				return;
			}
			iVar0++;
		}
		func_376(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_171(int iParam0, int iParam1)
{
	if (!func_50(iParam0))
	{
		return;
	}
	func_377(iParam0, iParam1);
}

bool func_172(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_173()
{
	return 1;
	if (Global_1572887->f_12 == 0)
	{
		return 1;
	}
	return Global_40.f_1;
}

int func_174(int iParam0)
{
	if (func_56() != -1)
	{
		return 0;
	}
	return func_189(((*Global_1347702)[iParam0 /*49*/])->f_15, 1);
}

bool func_175(int iParam0)
{
	return (Global_40.f_12004.f_6 && iParam0) != 0;
}

void func_176(int iParam0)
{
	Global_40.f_12018.f_26 = (Global_40.f_12018.f_26 || iParam0);
}

void func_177(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_173() && (func_272(38) || func_174(38)))
			{
				sVar1 = "COL_CC_INTRO";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
			}
			else
			{
				sVar1 = "COL_CC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
			}
			iVar6 = 38816757;
			break;
		
		case 39:
			sVar0 = "COL_DB_TITLE";
			sVar3 = "COL_DB_FOUND";
			iVar7 = -440187297;
			if (func_173() && (func_272(39) || func_174(39)))
			{
				sVar1 = "COL_DB_INTRO";
				iVar4 = 1162303770;
			}
			else
			{
				sVar1 = "COL_DB_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
			}
			iVar6 = -1223580455;
			break;
		
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
			sVar0 = "COL_EX_TITLE";
			sVar3 = "COL_EX_ITEMS_COLLECTED";
			sVar1 = "COL_EX_INTRO";
			iVar7 = -1531394072;
			iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar6 = 911890963;
			break;
		
		case 41:
			sVar0 = "COL_LF_TITLE";
			sVar3 = "COL_LF_CAUGHT";
			sVar1 = "COL_LF_INTRO";
			iVar7 = 1995362678;
			iVar4 = -273196610;
			iVar6 = -1666208710;
			break;
		
		case 49:
			sVar0 = "COL_RC_TITLE";
			sVar3 = "COL_RC_FOUND";
			iVar7 = 2103522376;
			if (func_173() && (func_272(49) || func_174(49)))
			{
				sVar1 = "COL_RC_INTRO";
				iVar4 = -781551276;
			}
			else
			{
				sVar1 = "COL_RC_INTRO_PRE";
				iVar4 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
			}
			iVar6 = -170865073;
			break;
		
		case 51:
			sVar0 = "COL_TX_TITLE";
			sVar3 = "COL_TX_CARCASS_COLLECTED";
			sVar1 = "COL_TX_INTRO";
			iVar7 = 678508515;
			iVar4 = 1986498931;
			iVar6 = -1424865411;
			break;
	}
	if (iParam5 == 2)
	{
		sVar0 = "MISSION_COMPLETE";
		iVar4 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar5 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar5 = MISC::GET_HASH_KEY("toast_log_blips");
		sVar1 = "COL_ALL_LOG_UPDATED";
	}
	sVar2 = "COL_CTX_PLAYER_LOG";
	if (iVar7 == -2076669067)
	{
		if (func_173() && (func_272(38) || func_174(38)))
		{
			iVar6 = 38816757;
		}
		else
		{
			iVar6 = 578982838;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 0)
		{
			iVar5 = iParam1;
			iVar4 = iParam2;
		}
		if (iParam5 == 2)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			iParam3 = 12;
			iParam4 = 12;
			func_378(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_378(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_380(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, func_379(func_270(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_378(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_378(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_173() && (func_272(39) || func_174(39)))
		{
			iVar6 = -1223580455;
		}
		else
		{
			iVar6 = 349797279;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_378(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_378(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_173() && (func_272(49) || func_174(49)))
		{
			iVar6 = -170865073;
		}
		else
		{
			iVar6 = 1974744712;
		}
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_378(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_378(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar6);
		if (iParam5 == 1)
		{
			func_378(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_378(MISC::_CREATE_VAR_STRING(2, sVar0), MISC::_CREATE_VAR_STRING(2, sVar1), iVar5, iVar4, 1433015236, MISC::_CREATE_VAR_STRING(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

void func_178(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	vector3 vVar6;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_173() && (func_272(38) || func_174(38)))
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_02";
				sVar5 = "COL_CC_INTRO";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_PHINEAS");
				iVar13 = 38816757;
			}
			else
			{
				sVar3 = "RCM_BRIEF_DESC_CIG_CARDS_01";
				sVar5 = "COL_CC_INTRO_PRE";
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_CIGCARD");
				iVar13 = 578982838;
			}
			sVar4 = "COL_CC_TITLE";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = 12;
			iVar14 = -2076669067;
			break;
		
		case 39:
			if (func_173() && (func_272(39) || func_174(39)))
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_02";
				sVar5 = "COL_DB_INTRO";
				iVar9 = 3;
				iVar11 = 1162303770;
				iVar13 = -1223580455;
			}
			else
			{
				sVar0 = "MISSION_RCDIN2";
				sVar3 = "RCM_BRIEF_DESC_DINO_BONES_01";
				sVar5 = "COL_DB_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_DINOBONES");
				iVar13 = 349797279;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_DB_TITLE";
			vVar6 = { 122.7758f, -185.4978f, 116.4383f };
			iVar10 = 30;
			iVar14 = -440187297;
			break;
		
		case 43:
			if (iParam3 == -1791518714)
			{
				sVar0 = "MISSION_RCEXO1";
				sVar3 = "RCEXO1_DESC";
				iVar10 = 30;
			}
			else if (iParam3 == -2087881550)
			{
				sVar0 = "MISSION_RCEXO2";
				sVar3 = "RCEXO2_DESC";
				iVar10 = 37;
			}
			else if (iParam3 == 1908068621)
			{
				sVar0 = "MISSION_RCEXO3";
				sVar3 = "RCEXO3_DESC";
				iVar10 = 40;
			}
			else if (iParam3 == 1611247019)
			{
				sVar0 = "MISSION_RCEXO4";
				sVar3 = "RCEXO4_DESC";
				iVar10 = 50;
			}
			else if (iParam3 == 1319635688)
			{
				sVar0 = "MISSION_RCEXO5";
				sVar3 = "RCEXO5_DESC";
				iVar10 = 25;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_EX_TITLE";
			sVar5 = "COL_EX_INTRO";
			vVar6 = { 2585.668f, -1009.616f, 44.97972f };
			iVar9 = func_381(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		
		case 41:
			if (func_173() && (func_272(41) || func_174(41)))
			{
				sVar0 = "MISSION_RCFSH2";
			}
			else
			{
				sVar0 = "MISSION_RCFSH1";
			}
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_RARE_FISH_01";
			sVar4 = "COL_LF_TITLE";
			sVar5 = "COL_LF_INTRO";
			vVar6 = { 337.3075f, -684.5404f, 41.8362f };
			iVar9 = 13;
			iVar14 = 1995362678;
			iVar11 = -273196610;
			iVar13 = -1666208710;
			break;
		
		case 49:
			if (func_173() && (func_272(49) || func_174(49)))
			{
				sVar0 = "MISSION_RCRKF2";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_02";
				sVar5 = "COL_RC_INTRO";
				iVar9 = 3;
				iVar11 = -781551276;
				iVar13 = -170865073;
			}
			else
			{
				sVar0 = "MISSION_RCRKF1";
				sVar3 = "RCM_BRIEF_DESC_ROCK_CARVINGS_01";
				sVar5 = "COL_RC_INTRO_PRE";
				iVar9 = 1;
				iVar11 = MISC::GET_HASH_KEY("BLIP_RC_COLLECTABLE_ROCKFACES");
				iVar13 = 1974744712;
			}
			sVar1 = "SP_MISSIONS_14";
			sVar4 = "COL_RC_TITLE";
			vVar6 = { -2178.646f, -245.6886f, 191.1569f };
			iVar10 = 10;
			iVar14 = 2103522376;
			break;
		
		case 51:
			sVar0 = "MISSION_RCTAX1";
			sVar1 = "SP_MISSIONS_14";
			sVar3 = "RCM_BRIEF_DESC_TAXIDERMY_01";
			sVar4 = "COL_TX_TITLE";
			sVar5 = "COL_TX_INTRO";
			vVar6 = { -1678.832f, -335.5439f, 172.9001f };
			iVar9 = func_381(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_382(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = MISC::GET_HASH_KEY("TOAST_MEDAL_COLLECTABLE");
		iVar12 = MISC::GET_HASH_KEY("hud_toasts");
	}
	else
	{
		iVar12 = MISC::GET_HASH_KEY("toast_log_blips");
	}
	if (func_383(iParam0, iVar13, iVar14))
	{
	}
	if (func_384(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_385(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_386(iParam0, iVar13, iVar14, iParam3, bParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_387(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_388(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_179(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

bool func_180(int iParam0)
{
	return (Global_40.f_12004.f_1 && iParam0) != 0;
}

void func_181(int iParam0)
{
	Global_40.f_12018.f_3 = (Global_40.f_12018.f_3 || iParam0);
}

void func_182(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

bool func_183(int iParam0)
{
	return (Global_40.f_12004.f_3 && iParam0) != 0;
}

void func_184(int iParam0)
{
	Global_40.f_12018.f_4 = (Global_40.f_12018.f_4 || iParam0);
}

void func_185(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

bool func_186(int iParam0)
{
	return (Global_40.f_12004.f_5 && iParam0) != 0;
}

void func_187(int iParam0)
{
	Global_40.f_12018.f_2 = (Global_40.f_12018.f_2 || iParam0);
}

void func_188(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_189(int iParam0, bool bParam1)
{
	switch (func_341(iParam0))
	{
		case 5:
			return 1;
		
		case 6:
			if (bParam1)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_190(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	int iVar0;
	
	switch (func_191(iParam0, -949239683))
	{
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		
		case 871191033:
			if (!bParam1)
			{
				iVar0 = 1290994194;
				if (bParam2)
				{
					iVar0 = -59421711;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		
		case 82200319:
			if (!bParam1)
			{
				iVar0 = -1216929452;
				if (bParam2)
				{
					iVar0 = -1140851507;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
		
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -487508500;
				}
				TASK::_TASK_ITEM_INTERACTION(PLAYER::PLAYER_PED_ID(), iParam0, iVar0, 1, iParam3, iParam4);
				return 1;
			}
			break;
	}
	return 0;
}

int func_191(int iParam0, int iParam1)
{
	struct<2> Var0[20];
	int iVar41;
	int iVar42;
	
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_TAG_DATA(iParam0, &Var0, &iVar41, 20))
	{
		iVar42 = 0;
		while (iVar42 < iVar41)
		{
			if ((Var0[iVar42 /*2*/])->f_1 == iParam1)
			{
				return &(Var0[iVar42 /*2*/]);
			}
			iVar42++;
		}
	}
	return 0;
}

void func_192(bool bParam0)
{
	int iVar0;
	
	iVar0 = 1428936325;
	switch (func_389())
	{
		case 0:
			iVar0 = 1428936325;
			break;
		
		case 3:
			iVar0 = 1791580586;
			break;
		
		case 1:
			iVar0 = 1731192422;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

bool func_193()
{
	return 1 == Global_40.f_7748.f_3;
}

int func_194(var uParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0) || ENTITY::IS_ENTITY_DEAD(*uParam0))
	{
		return 0;
	}
	if (func_392(*uParam0, -1725579161, 0))
	{
		return 1;
	}
	return 0;
}

void func_195(bool bParam0)
{
	int iVar0;
	
	iVar0 = 16939881;
	switch (func_389())
	{
		case 0:
			iVar0 = 16939881;
			break;
		
		case 1:
			iVar0 = -1165614444;
			break;
		
		case 3:
			iVar0 = 968591133;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_196(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = -45077177;
	switch (func_389())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_197(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 1700817728;
	switch (func_389())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_198(bool bParam0)
{
	int iVar0;
	
	iVar0 = -362580870;
	switch (func_389())
	{
		case 0:
			iVar0 = -362580870;
			break;
		
		case 1:
			iVar0 = -1013825131;
			break;
		
		case 3:
			iVar0 = -1433021121;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_199(bool bParam0)
{
	int iVar0;
	
	iVar0 = -680642132;
	switch (func_389())
	{
		case 0:
			iVar0 = -680642132;
			break;
		
		case 1:
			iVar0 = -267849149;
			break;
		
		case 3:
			iVar0 = 1759003815;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_200(bool bParam0)
{
	int iVar0;
	
	iVar0 = 2105609037;
	switch (func_389())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		
		case 3:
			iVar0 = -457187977;
			break;
		
		case 1:
			iVar0 = -1595716047;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_201(bool bParam0)
{
	int iVar0;
	
	iVar0 = 1964324114;
	switch (func_389())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		
		case 3:
			iVar0 = -654111932;
			break;
		
		case 1:
			iVar0 = 1826089606;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_202(bool bParam0)
{
	int iVar0;
	
	iVar0 = -1530144981;
	switch (func_389())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		
		case 3:
			iVar0 = -389189374;
			break;
		
		case 1:
			iVar0 = -312546963;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_203(bool bParam0)
{
	int iVar0;
	
	iVar0 = -1074475556;
	switch (func_389())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		
		case 3:
			iVar0 = 392506445;
			break;
		
		case 1:
			iVar0 = -1846586910;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_204(bool bParam0)
{
	int iVar0;
	
	iVar0 = 1076410848;
	switch (func_389())
	{
		case 0:
			iVar0 = 1076410848;
			break;
		
		case 3:
			iVar0 = 1820106865;
			break;
		
		case 1:
			iVar0 = 1890537641;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_205(bool bParam0)
{
	int iVar0;
	
	iVar0 = 1516413548;
	switch (func_389())
	{
		case 0:
			iVar0 = 1516413548;
			break;
		
		case 1:
			iVar0 = 1648161053;
			break;
		
		case 3:
			iVar0 = -1170654725;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_206(bool bParam0)
{
	int iVar0;
	
	iVar0 = -1454586679;
	switch (func_389())
	{
		case 0:
			iVar0 = -1454586679;
			break;
		
		case 1:
			iVar0 = 1849268701;
			break;
		
		case 3:
			iVar0 = 881673189;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_207(bool bParam0)
{
	int iVar0;
	
	iVar0 = 406178289;
	switch (func_389())
	{
		case 0:
			iVar0 = 406178289;
			break;
		
		case 1:
			iVar0 = 187883304;
			break;
		
		case 3:
			iVar0 = 38531903;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_91(bParam0, 1573112293))
		{
			func_394(func_393(&bParam0), 1, 1);
		}
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_208(bool bParam0)
{
	int iVar0;
	
	iVar0 = 1934039819;
	switch (func_389())
	{
		case 0:
			iVar0 = 1934039819;
			break;
		
		case 1:
			iVar0 = 1656393367;
			break;
		
		case 3:
			iVar0 = 1125253485;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

void func_209(bool bParam0)
{
	int iVar0;
	
	iVar0 = -1054661625;
	switch (func_389())
	{
		case 0:
			iVar0 = -1054661625;
			break;
		
		case 1:
			iVar0 = 1750832898;
			break;
		
		case 3:
			iVar0 = -1750311991;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_390(Global_35, bParam0, iVar0, 1);
	}
	else
	{
		func_391(bParam0, 1);
		func_127(bParam0, 1, 0, -142743235, 0);
	}
}

bool func_210(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_211(var uParam0)
{
	if (func_210(uParam0, 1))
	{
		func_395(1);
	}
}

int func_212(int iParam0)
{
	if (!func_396(iParam0))
	{
		return 0;
	}
	if (func_397(iParam0, 4))
	{
		return 1;
	}
	return 0;
}

int func_213(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

int func_214(int iParam0)
{
	int iVar0;
	
	iParam0 = func_213(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 0;
	}
	if (func_398(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_215()
{
	return Global_40.f_1095.f_3054;
}

void func_216(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_217(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	
	switch (Param0)
	{
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 10:
		case 11:
		case 12:
		case 13:
		case 14:
		case 15:
		case 16:
		case 17:
		case 18:
		case 19:
		case 20:
		case 21:
		case 22:
		case 26:
			if (Global_1946804->f_850 >= 25)
			{
				return;
			}
			if (func_399(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1946804->f_850)
				{
					iVar1 = ((Global_1946804->f_855 + iVar0) % 25);
					if ((&Global_1946804->f_668[iVar1 /*4*/] == Param0 && (Global_1946804->f_668[iVar1 /*4*/])->f_1 == Param0.f_1) && (Global_1946804->f_668[iVar1 /*4*/])->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_400(Param0);
			*(Global_1946804->f_668[Global_1946804->f_856 /*4*/]) = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_216(8);
			break;
		
		case 23:
		case 24:
		case 25:
		case 27:
		case 28:
		case 29:
			if (Global_1946804->f_851 >= 25)
			{
				return;
			}
			if (func_399(Param0))
			{
				return;
			}
			func_400(Param0);
			*(Global_1946804->f_567[Global_1946804->f_851 /*4*/]) = { Param0 };
			Global_1946804->f_851++;
			func_216(8);
			break;
		
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_236(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

bool func_218()
{
	return Global_1946804->f_2792;
}

int func_219(bool bParam0)
{
	if (func_401())
	{
		return 0;
	}
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (!func_15(bParam0, 1, 0))
	{
		HUD::_0xBFFF81E12A745A5F();
		return 0;
	}
	return 1;
}

bool func_220(bool bParam0)
{
	return func_402(bParam0);
}

void func_221(int iParam0, int iParam1)
{
	func_403(iParam0, iParam1);
}

int func_222(bool bParam0, int iParam1)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	bool bVar3;
	
	bVar3 = func_404(bParam0);
	if (func_91(bParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_405(&bVar2))
		{
			if (bVar1)
			{
				iVar0 = func_406();
			}
			else
			{
				iVar0 = func_407();
			}
		}
		else if (func_248(iParam1, 1))
		{
			iVar0 = 0;
		}
		else if (bVar1)
		{
			iVar0 = func_408();
		}
		else
		{
			iVar0 = func_409();
		}
	}
	else if (func_410(&bVar2))
	{
		if (func_91(bVar2, -1303648999))
		{
			iVar0 = func_406();
		}
		else
		{
			iVar0 = func_407();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_408();
	}
	else
	{
		iVar0 = func_409();
	}
	if (iVar0 != 0)
	{
		Global_1946804->f_2791 = MISC::GET_GAME_TIMER();
		TASK::_TASK_ITEM_INTERACTION(Global_35, bParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_223(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_224()
{
	func_411(&(Global_1946804->f_2776));
	func_412(32768);
	func_413(1108822547, 8, 6);
}

bool func_225(int iParam0, bool bParam1)
{
	return func_414(iParam0, 0) < func_415(iParam0, bParam1);
}

bool func_226(bool bParam0)
{
	var uVar0;
	
	return func_416(bParam0, &uVar0);
}

void func_227(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	int iVar0;
	bool bVar1;
	
	if (!func_417(bParam0))
	{
		return;
	}
	iVar0 = func_100(bParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			bVar1 = func_418(bParam0, &(Global_1946804->f_2657.f_21), Global_1946804->f_2657.f_26.f_1, iParam1);
			break;
		
		case 81053684:
			bVar1 = func_418(bParam0, &(Global_1946804->f_2657.f_23), 1, iParam1);
			break;
		
		case -999503751:
			bVar1 = func_418(bParam0, &(Global_1946804->f_2657.f_20), Global_1946804->f_2657.f_26, iParam1);
			break;
		
		case -525676072:
			bVar1 = func_418(bParam0, &(Global_1946804->f_2657.f_22), Global_1946804->f_2657.f_26.f_2, iParam1);
			break;
		
		case -1719060085:
			bVar1 = func_418(bParam0, &(Global_1946804->f_2657.f_24), 1, iParam1);
			break;
		
		case -413129408:
			bVar1 = func_418(bParam0, &(Global_1946804->f_2657.f_24), 1, iParam1);
			break;
	}
	if (!bVar1)
	{
		return;
	}
	if (bParam0 == func_228(0))
	{
		func_419(bParam0, 1);
		if (func_420() == 1160113249)
		{
			func_419(func_228(-2125499975), 0);
		}
		else
		{
			func_419(func_228(1160113249), 0);
		}
	}
	func_421();
	if (func_422(iVar0))
	{
		INVENTORY::_0x766315A564594401(func_140(0), bParam0, 0);
	}
	func_111(bParam0, iParam3);
	if (bParam2)
	{
		func_423(0, 0);
	}
}

int func_228(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_420();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

void func_229(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_100(bParam1);
	if (iVar0 != func_100(bParam0))
	{
		return;
	}
	func_424(bParam0, bParam1, 1);
}

int func_230(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if ((Global_1946804->f_57[iVar0 /*11*/])->f_8 == iParam0)
		{
			return func_425(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_231(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1944638739:
			return 36;
		
		case -1889597427:
			return 0;
		
		case -1884748965:
			return 32;
		
		case -1586649372:
			return 33;
		
		case -1506259487:
			return 5;
		
		case -1505978566:
			return 22;
		
		case -1489346253:
			return 38;
		
		case -1364808185:
			return 19;
		
		case -1292426046:
			return 8;
		
		case -1197751823:
			return 20;
		
		case -1176744536:
			return 24;
		
		case -1130865351:
			return 31;
		
		case -1130352927:
			return 1;
		
		case -893163968:
			return 17;
		
		case -735900586:
			return 28;
		
		case -676503695:
			return 6;
		
		case -450913544:
			return 18;
		
		case -426430150:
			return 29;
		
		case -358215195:
			return 39;
		
		case -338487716:
			return 11;
		
		case -207860920:
			return 26;
		
		case 99217379:
			return 27;
		
		case 304805134:
			return 21;
		
		case 383349088:
			return 7;
		
		case 389988485:
			return 2;
		
		case 673166414:
			return 25;
		
		case 788010710:
			return 34;
		
		case 1108822547:
			return 10;
		
		case 1145151482:
			return 23;
		
		case 1250092473:
			return 16;
		
		case 1367443060:
			return 4;
		
		case 1422688607:
			return 9;
		
		case 1600962399:
			return 13;
		
		case 1672288269:
			return 15;
		
		case 1742327865:
			return 12;
		
		case 1780904876:
			return 3;
		
		case 1788623170:
			return 30;
		
		case 1849504272:
			return 14;
		
		case 1900541263:
			return 37;
		
		case 1958421083:
			return 35;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

int func_232(bool bParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	func_426();
	if (iParam2 == 39)
	{
		Var0 = { func_160(bParam0, 1, 0) };
		iParam2 = func_231(func_230(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return 0;
	}
	if (func_91(bParam0, 866047851) && func_427(&(Global_1946804->f_1378)) >= 2)
	{
		return 0;
	}
	if ((func_223(32768) && iParam2 == 10) && bParam0 != &Global_1946804->f_57[iParam2 /*11*/])
	{
		func_428(func_425(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_429(iParam2);
	func_430(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && (Global_1946804->f_57[iParam2 /*11*/])->f_1 > 1)
	{
		func_431(Global_1946804->f_1378.f_1[iParam2 /*3*/], 4, 6);
		func_431(Global_1946804->f_1497.f_1[iParam2 /*3*/], 4, 6);
	}
	func_432(&(Global_1946804->f_1378), bParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = (Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2 /*3*/] = bParam0;
	(Global_1946804->f_1378.f_1[iParam2 /*3*/])->f_1 = func_433(bParam0, iParam2, iParam1, func_56() != -1);
	if (bParam4)
	{
		func_434(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_434(&(Global_1946804->f_1378), 1, 0);
	}
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1946804->f_2589)
		{
			if (&Global_1946804->f_2589.f_2[iVar6 /*2*/] >= 0 && &Global_1946804->f_2589.f_2[iVar6 /*2*/] < 39)
			{
				Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/] = 0;
				(Global_1946804->f_2456[&Global_1946804->f_2589.f_2[iVar6 /*2*/] /*2*/])->f_1 = 0;
				func_413(func_425(&(Global_1946804->f_2589.f_2[iVar6 /*2*/]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return 1;
}

void func_233(bool bParam0, bool bParam1, bool bParam2)
{
	func_435(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

int func_234(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = func_231(bParam0, 1);
	switch (bParam0)
	{
		case 1108822547:
			if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/] || &Global_1946804->f_1378.f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_235(int iParam0)
{
	struct<4> Var0;
	
	if (func_436(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_437(Var0);
}

void func_236(int iParam0, int iParam1, int iParam2)
{
	struct<4> Var0;
	
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_437(Var0);
}

int func_237(bool bParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	struct<4> Var0;
	var uVar4;
	
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_162(bParam0, Param1, iParam5, bParam6) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(&Var0))
	{
		return 0;
	}
	uVar4 = INVENTORY::_0xC97E0D2302382211(func_140(bParam6), &Var0, 0);
	return uVar4;
}

bool func_238()
{
	return Global_1914319->f_18996.f_1;
}

bool func_239()
{
	return Global_1914319->f_18996;
}

char* func_240()
{
	switch (Global_1914319->f_18996.f_4)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		
		case 2:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		
		case 3:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		
		case 4:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		
		case 5:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		
		case 6:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		
		case 7:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		
		case 8:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		
		case 9:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		
		case 10:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		
		default:
			break;
	}
	return "";
}

int func_241(int iParam0)
{
	iParam0 = func_213(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_9;
}

int func_242(int iParam0)
{
	iParam0 = func_213(iParam0);
	if (iParam0 == -1)
	{
		return -1;
	}
	if (iParam0 >= 7)
	{
		return -1;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372;
}

float func_243(int iParam0)
{
	iParam0 = func_213(iParam0);
	if (iParam0 == -1)
	{
		return 0f;
	}
	if (iParam0 >= 7)
	{
		return 0f;
	}
	return (Global_40.f_1095.f_1[iParam0 /*436*/])->f_372.f_1;
}

float func_244(float fParam0, float fParam1, float fParam2)
{
	return (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
}

bool func_245(int iParam0)
{
	return func_248(((*Global_1129543)[PLAYER::NETWORK_PLAYER_ID_TO_INT() /*59*/])->f_58, iParam0);
}

bool func_246()
{
	return !func_245(2);
}

bool func_247(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return (Global_1147325->f_1 && iParam0) != 0;
}

bool func_248(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

int func_249()
{
	if ((((func_168(0) && !func_438()) || func_439()) || Global_1935689->f_1) || func_440())
	{
		return 0;
	}
	return 1;
}

void func_250(var uParam0)
{
	Global_1898068->f_8 = uParam0;
}

var func_251(int iParam0, int iParam1)
{
	return func_441(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_252(struct<16> Param0, var uParam16, bool bParam17, bool bParam18)
{
	struct<18> Var0;
	
	if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam16))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = PLAYER::PLAYER_ID();
	Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (!bParam17)
	{
		if (Param0.f_15)
		{
			if (bParam18)
			{
				Var0.f_12 = 255;
				Var0.f_13 = 255;
				Var0.f_17 = -1;
				Var0 = { Param0 };
				Var0.f_16 = uParam16;
				Var0.f_17 = Param0.f_2;
				func_442(&(Global_1058888->f_43200), Var0);
				return;
			}
		}
	}
	SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 16, 4, &uParam16);
}

void func_253(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	int iVar1;
	char cVar2[32];
	int iVar6;
	struct<2> Var7;
	int iVar10;
	int iVar11;
	int iVar12;
	char* sVar13;
	int iVar14;
	char* sVar15;
	
	if (bParam0 == 1662813436)
	{
		return;
	}
	if (!func_42(bParam0, 0))
	{
		return;
	}
	if (bParam0 == 1807503187)
	{
		return;
	}
	if (iParam1 == 0)
	{
		return;
	}
	if (!func_443())
	{
		func_444(bParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = MISC::ABSI(iParam1);
	StringCopy(&cVar2, func_445(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_445(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_275(bParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_43(bParam0);
	iVar10 = 0;
	iVar11 = 805880880;
	if ((iVar6 == 307971639 && bParam0 != 424030678) && bParam0 != -1188697038)
	{
		iVar10 = 622449822;
		iVar11 = 622449822;
	}
	if (iVar6 == -1013984273 || iVar6 == 658570475)
	{
		Var7 = "ITEMTYPE_UPGRADES";
		Var7.f_1 = "itemtype_textures";
	}
	else if (!func_446(bParam0, &Var7, iVar11, iVar10, 0, -401018458))
	{
		Var7 = "_PLACEHOLDER";
		Var7.f_1 = "inventory_items";
	}
	if (MISC::GET_HASH_KEY(Var7) == 121560594)
	{
		Var7 = "DOCUMENT_MAP_GENERIC";
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(Var7))
	{
		return;
	}
	iVar12 = 109029619;
	sVar13 = "Transaction_Positive";
	iVar14 = 0;
	if (bVar0)
	{
		iVar12 = 619977481;
		sVar13 = "Transaction_Negative";
		iVar14 = 1;
	}
	if (ITEMDATABASE::_ITEM_DATABASE_IS_OVERPOWERED_ITEM(bParam0))
	{
		if (!bVar0 && !bParam2)
		{
			iVar12 = -856358433;
		}
		else
		{
			iVar12 = -1905433004;
		}
	}
	sVar15 = func_447(MISC::_CREATE_VAR_STRING(10, &cVar2, MISC::_CREATE_VAR_STRING(0, func_319(bParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_91(bParam0, 1443104131)) || bParam0 == -885810591) || bParam0 == -1424823393) || bParam0 == 1463786584) || bParam0 == 1358243310)
	{
		sVar15 = MISC::_CREATE_VAR_STRING(0, func_319(bParam0));
	}
	func_448(sVar15, Var7.f_1, MISC::GET_HASH_KEY(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<2> func_254(bool bParam0)
{
	struct<2> Var0;
	struct<2> Var2;
	
	if (!func_42(bParam0, 0))
	{
		return Var0;
	}
	if (func_91(bParam0, -305066475))
	{
		if (func_56() == -1)
		{
			if (func_91(bParam0, -537818634))
			{
				return func_449(189951448);
			}
			else
			{
				return func_449(1176172851);
			}
		}
	}
	else if (func_91(bParam0, -537818634))
	{
		return func_449(-963660207);
	}
	if (func_91(bParam0, 2084895747))
	{
		return func_449(1694039471);
	}
	return Var2;
}

int func_255(bool bParam0, int iParam1, bool bParam2, int iParam3)
{
	struct<14> Var0;
	int iVar14;
	int iVar15;
	struct<10> Var16;
	struct<4> Var30;
	int iVar35;
	int iVar36;
	
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	Var0 = { func_336(bParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_338(&Var0, func_337(0));
	}
	if (!func_339(&Var0, &iVar14, &iVar15, 0))
	{
		return 0;
	}
	Var16.f_9 = -1591664384;
	iVar35 = 0;
	while (iVar35 < iVar15)
	{
		if (iVar36 >= iParam1)
		{
		}
		else
		{
			if (!func_136(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_163(bParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_138(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return 1;
}

int func_256(bool bParam0)
{
	if (func_56() == -1)
	{
		return 1;
	}
	return INVENTORY::_0x0FBBFFC891A97C81(func_140(bParam0));
}

void func_257(bool bParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_91(bParam0, 606799272))
		{
			func_450(bParam0, iParam1);
		}
		if (func_91(bParam0, -1112814642) && func_91(bParam0, -1697809989))
		{
			func_301(bParam0, iParam1, 1, 0);
		}
	}
}

void func_258(var uParam0, var uParam1, var uParam2)
{
	int iVar0;
	
	iVar0 = uParam0;
	*uParam1 = (iVar0 / 31);
	*uParam2 = (iVar0 % 31);
}

int func_259(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return 0;
	}
	if (func_451(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return 0;
		}
	}
	if (!func_452(iParam0))
	{
		return 0;
	}
	if (func_453(iParam0))
	{
		return 0;
	}
	if ((Global_1898164->f_163 && !func_454(iParam0, 1)) || func_455(32768))
	{
		if (!func_454(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return 0;
		}
	}
	if (!func_456())
	{
		return 0;
	}
	return 1;
}

void func_260(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = Global_1905944[iParam0];
	MISC::SET_BIT(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

int func_261(bool bParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_56() == -1)
	{
		if (func_457(bParam0) && func_458(bParam0))
		{
			func_459(bParam0, iParam1, 1, &iParam2, iParam3);
			return 0;
		}
	}
	else if (bParam0 == 1259508039)
	{
		iParam2 = 1;
	}
	else if (bParam0 == joaat("weapon_unarmed"))
	{
		return 0;
	}
	return 1;
}

int func_262(bool bParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	int iVar6;
	
	*uParam1 = iParam2;
	func_460(bParam0, uParam1);
	Var0 = { func_160(bParam0, 0, 1) };
	iVar5 = func_461(bParam0, &Var0, 0, 0);
	iVar6 = func_462(bParam0, 0);
	if ((iVar5 > 1 && !func_463()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_91(bParam0, -2051813666))
		{
			func_128(583, 1);
		}
		else
		{
			func_128(582, 0);
		}
	}
	if (func_464(bParam0, &Var0, *uParam1, 0, 0))
	{
		if (iVar6 < iVar5)
		{
			*uParam1 = (iVar5 - iVar6);
		}
		else
		{
			return 0;
		}
	}
	return 1;
}

void func_263(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_191(bParam0, -949239683))
	{
		case -1565009253:
		case -1273369295:
		case -1239610997:
		case -1229959999:
		case -1050374492:
		case -873135685:
		case -164980960:
		case 10252101:
		case 24248412:
		case 82200319:
		case 632545869:
		case 733893097:
		case 871191033:
		case 1513351077:
		case 1712126263:
		case 1894156335:
			Global_1935496->f_59.f_6 = 1;
			Global_1935496->f_59.f_7 = 0;
			Global_1935496->f_59.f_1 = bParam0;
			Global_1935496->f_59.f_5 = MISC::GET_GAME_TIMER();
			break;
	}
}

bool func_264(bool bParam0)
{
	if (func_56() != -1)
	{
		return false;
	}
	return func_265(bParam0) != 0;
}

int func_265(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < func_465())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (bParam0 == func_466(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_266(int iParam0)
{
	return COLLECTION::_0x6052B4DE6657684F(iParam0);
}

int func_267(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar1 = 0;
	while (iVar1 < func_465())
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, -2076669067, 0);
		if (iParam0 == func_266(iVar0))
		{
			if (func_15(func_466(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_268(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	func_467(48);
	func_468(0, -1);
}

int func_269(int iParam0)
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, iParam0);
}

bool func_270(int iParam0)
{
	return COLLECTION::_0x93F2E7B5DB85657B(-2076669067, iParam0);
}

int func_271(int iParam0)
{
	if (func_56() != -1)
	{
		return 0;
	}
	return func_189(((*Global_1835011)[iParam0 /*74*/])->f_1, 1);
}

int func_272(int iParam0)
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_48(iParam0))
	{
		return 0;
	}
	return func_151(((*Global_1347702)[iParam0 /*49*/])->f_15);
}

int func_273()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_15(func_469(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_274(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

int func_275(bool bParam0, int iParam1)
{
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	return INVENTORY::_0x245D07651B1D183B(bParam0, iParam1);
}

int func_276(int iParam0)
{
	if (!func_470(iParam0))
	{
		return 0;
	}
	return func_471(iParam0);
}

void func_277(int iParam0)
{
	if (!func_470(iParam0))
	{
		return;
	}
	func_472(iParam0);
	func_473(iParam0);
}

bool func_278(bool bParam0, bool bParam1)
{
	int iVar0;
	
	switch (bParam0)
	{
		case -1639263599:
			iVar0 = -764310200;
			break;
		
		case 1222378998:
			iVar0 = -764310200;
			break;
		
		case 2074469742:
			iVar0 = -764310200;
			break;
		
		case 480079517:
			iVar0 = -1504859554;
			break;
		
		case 840671577:
			iVar0 = -1504859554;
			break;
		
		case joaat("ammo_molotov"):
			iVar0 = 1885857703;
			break;
		
		case -2006166057:
			iVar0 = 1885857703;
			break;
		
		case 1235846615:
			iVar0 = -1511427369;
			break;
		
		case -228768324:
			iVar0 = 2133046983;
			break;
		
		case -1411922943:
			iVar0 = -1511427369;
			break;
		
		case -834103244:
			iVar0 = -1511427369;
			break;
		
		case 424030678:
			iVar0 = 165751297;
			break;
		
		case 446901936:
			iVar0 = 710736342;
			break;
		
		case -1092841802:
			iVar0 = -462374995;
			break;
		
		case -1452241321:
			iVar0 = 567069252;
			break;
		
		case -1188697038:
			iVar0 = -281894307;
			break;
		
		case 1671758975:
			iVar0 = -1127860381;
			break;
		
		case -893514737:
			iVar0 = -1894785522;
			break;
		
		case -2063089161:
			iVar0 = 469927692;
			break;
		
		case -452897925:
			iVar0 = 1960591597;
			break;
		
		default:
			break;
	}
	if (func_42(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_474(iVar0) || func_475(iVar0))
			{
				return iVar0;
			}
		}
		else
		{
			return iVar0;
		}
	}
	return bParam0;
}

int func_279(bool bParam0, bool bParam1)
{
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return bParam0;
	}
	if (!bParam1)
	{
	}
	return 0;
}

void func_280(bool bParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_137(bParam0))
	{
		return;
	}
	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return;
	}
	UNLOCK::_UNLOCK_SET_UNLOCKED(iVar0, true);
}

int func_281(bool bParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
{
	struct<4> Var0;
	int iVar5;
	struct<10> Var6;
	int iVar28;
	struct<4> Var29;
	
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return 0;
	}
	if (WEAPON::_0x959383DCD42040DA(bParam0) && iParam1 > 0)
	{
		iParam1 = 0;
	}
	if (WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
	{
		Var0 = { func_160(bParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_476((375 + iVar28), 1);
			if (func_348(bParam0, &Var0, iVar5, 0))
			{
				if (func_349(bParam0, &Var6, iVar5))
				{
					Var29 = { func_162(bParam0, Var0, iVar5, 0) };
					func_163(bParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_256(0))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
					{
						return 0;
					}
					func_282(WEAPON::_0x5C2EA6C44F515F34(bParam0), iParam1, iParam6);
					func_477(bParam0, iParam1);
					return 1;
				}
				if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, bParam0, 0, 0))
				{
					return 0;
				}
				if (iParam1 > 0)
				{
				}
				WEAPON::_GIVE_WEAPON_TO_PED_2(Global_35, bParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
				return 1;
			}
		}
	}

int func_282(bool bParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return 1;
	}
	if (!func_284(bParam0))
	{
		return 0;
	}
	if (!func_256(0))
	{
		return 0;
	}
	WEAPON::_0x106A811C6D3035F3(Global_35, bParam0, iParam1, iParam2);
	return 1;
}

int func_283(bool bParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	bool bVar0;
	var uVar1;
	int iVar6;
	int iVar7;
	
	bVar0 = func_279(bParam0, 0);
	if (WEAPON::IS_WEAPON_VALID(bVar0))
	{
		if (func_56() == -1)
		{
			func_280(bVar0);
			if (iParam1 == 1248274121)
			{
				func_478(bVar0);
			}
		}
		if (!func_464(bParam0, &uVar1, 1, 0, 0))
		{
			func_459(bParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_479(bVar0);
			if (WEAPON::_0x6AD66548840472E5(bVar0))
			{
				func_281(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == -1415022764 || bVar0 == -160924582)
			{
				func_281(bVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (bVar0 == 2055893578)
			{
				func_281(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (WEAPON::_0x959383DCD42040DA(bVar0))
			{
				if (bVar0 == 494733111 && !func_480())
				{
					return 0;
				}
				if (WEAPON::_0x2C83212A7AA51D3D(bParam0))
				{
				}
				else if (!func_481(bVar0))
				{
					func_281(bVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_281(bVar0, WEAPON::_0xD3750CCC00635FC2(bVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (WEAPON::_0xD955FEE4B87AFA07(bVar0))
			{
				iVar7 = func_482(Global_35, 2, 0, 1);
				if ((((func_137(iVar7) && !Global_43890) && iVar7 != bVar0) && !func_15(-1185145312, 1, 0)) && bParam4)
				{
					WEAPON::_0xE9BD19F8121ADE3E(Global_35, iVar7);
				}
				if (func_137(iVar7) && func_15(-1185145312, 1, 0))
				{
					if (!func_281(bVar0, iVar6, bParam3, bParam4, 3, 1, iParam1, 0))
					{
						return 0;
					}
				}
				else if (!func_281(bVar0, iVar6, bParam3, bParam4, 0, 1, iParam1, 0))
				{
					return 0;
				}
			}
			else if (!func_281(bVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
			{
				return 0;
			}
		}
	}
	else
	{
		return 0;
	}
	if (WEAPON::_0x9F0E1892C7F228A8(1) != 0 && iParam1 == 1248274121)
	{
		func_128(480, 1);
	}
	return 1;
}

bool func_284(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(bParam0);
}

int func_285(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	if (!func_284(bParam0))
	{
		return 0;
	}
	iVar4 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	iVar3 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	if (func_137(iVar4))
	{
		WEAPON::GET_MAX_AMMO(Global_35, &iVar2, iVar4);
	}
	iVar5 = (iVar2 - iVar3);
	if (iVar4 == -2002235300)
	{
		iVar1 = 5;
	}
	else
	{
		iVar1 = WEAPON::_0xD3750CCC00635FC2(iVar4);
	}
	if (*iParam1 > 0)
	{
		iVar6 = *iParam1;
	}
	else if (*iParam1 < 0)
	{
		iVar6 = (iVar1 * MISC::ABSI(*iParam1));
	}
	if (func_15(611073244, 1, 0) && iParam2 == -897553835)
	{
		iVar6 = BUILTIN::CEIL((IntToFloat(iVar6) * 1.1f));
	}
	if (iVar5 >= iVar6)
	{
		iVar0 = iVar6;
	}
	else if (iVar5 < iVar6 && iVar5 >= 1)
	{
		iVar0 = iVar5;
	}
	else
	{
		func_320(func_483(bParam0), func_319(bParam0), 1);
		return 0;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_56() == -1)
		{
			if (func_189(((*Global_1835011)[14 /*74*/])->f_1, 1))
			{
				func_128(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return 0;
	}
	if (func_256(0))
	{
		if (func_282(bParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return 1;
		}
	}
	else
	{
		return func_325(bParam0, *iParam1, iParam2);
	}
	return 0;
}

void func_286(bool bParam0)
{
	var uVar0;
	
	if ((bParam0 == -615217896 && !func_484()) || bParam0 != -615217896)
	{
		if (func_485(Global_35, bParam0, &uVar0))
		{
			func_110(PLAYER::PLAYER_PED_ID(), bParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (bParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_310();
			break;
		
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_310();
			break;
		
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_310();
			break;
		
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_308();
			break;
		
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_306();
			break;
	}
}

void func_287(bool bParam0)
{
	switch (bParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_306();
			break;
		
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_307();
			break;
		
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_308();
			break;
		
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_309();
			break;
		
		case 1299744282:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		
		case 1631240196:
			Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
			break;
		
		case 1768869276:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.15f);
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.15f);
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.15f);
			func_310();
			break;
		
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_486();
			break;
		
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_487();
			break;
		
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_288(int iParam0)
{
	struct<2> Var0;
	
	Var0.f_1 = iParam0;
	return Var0;
}

void func_289(var uParam0, var uParam1, int iParam2)
{
	STATS::_0x6A0184E904CDF25E(&uParam0, iParam2);
}

struct<2> func_290(int iParam0, int iParam1)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_291(bool bParam0)
{
	bool bVar0;
	
	bVar0 = func_91(bParam0, -2017733358);
	if (func_488() < 3)
	{
		if (bVar0)
		{
			if (func_490(func_489(bParam0), bParam0))
			{
				func_320(79, func_319(func_489(bParam0)), 1);
			}
			else
			{
				func_320(78, func_319(func_489(bParam0)), 1);
			}
		}
		else
		{
			func_320(80, func_319(func_491(bParam0)), 1);
		}
	}
}

int func_292()
{
	if (((((func_492(839908568, 400) || func_492(-1134030454, 400)) || func_492(623353496, 400)) || func_492(-344413337, 400)) || func_492(-1664948962, 400)) || func_492(1795228059, 400))
	{
		return 1;
	}
	return 0;
}

int func_293(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_493(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_494(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_495(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_294(bool bParam0)
{
	switch (bParam0)
	{
		case -625427311:
			func_178(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_177(51, 0, 0, 0, 0, -1, 0);
			func_179(8192);
			break;
		
		case 581047644:
			func_178(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_177(51, 0, 0, 0, 0, -1, 0);
			func_179(524288);
			break;
		
		case -644199619:
			func_178(39, 0, 0, 0, 0, 0, 1, 0);
			func_177(39, 0, 0, 0, 0, -1, 0);
			func_182(16);
			break;
		
		case 684296857:
			func_178(41, 0, 0, 0, 0, 0, 1, 0);
			func_177(41, 0, 0, 0, 0, -1, 0);
			func_185(8);
			break;
		
		case 466137807:
			func_178(49, 0, 0, 0, 0, 0, 1, 0);
			func_177(49, 0, 0, 0, 0, -1, 0);
			func_188(16);
			break;
		
		case -1087522507:
			func_178(43, 0, 0, -1791518714, func_496(1), 0, -1, 0);
			func_497(1);
			break;
		
		case -405829000:
			func_178(43, 0, 0, -2087881550, func_496(2), 0, -1, 0);
			func_497(2);
			break;
		
		case 378660860:
			func_178(43, 0, 0, 1908068621, func_496(4), 0, -1, 0);
			func_497(4);
			break;
		
		case 1566111097:
			func_178(43, 0, 0, 1611247019, func_496(8), 0, -1, 0);
			func_497(8);
			break;
		
		case 1276007140:
			func_178(43, 0, 0, 1319635688, func_496(16), 0, -1, 0);
			func_497(16);
			break;
	}
}

void func_295(bool bParam0)
{
	if (func_498() == 1)
	{
		if (func_174(39))
		{
			func_128(342, 0);
		}
		else
		{
			func_128(343, 0);
			func_182(1);
		}
	}
	if (func_498() >= 30)
	{
		func_128(344, 0);
	}
	func_178(39, 0, 0, 0, 0, 0, -1, 0);
	func_177(39, 0, 0, func_498(), 30, 1, 0);
}

void func_296(bool bParam0)
{
	if (func_499() == 1)
	{
		if (func_174(49))
		{
			func_128(409, 0);
		}
		else
		{
			func_128(410, 0);
			func_188(1);
		}
	}
	if (func_499() >= 10)
	{
		func_128(411, 0);
	}
	func_178(49, 0, 0, 0, 0, 0, -1, 0);
	func_177(49, 0, 0, func_499(), 10, 1, 0);
}

void func_297(bool bParam0)
{
	int iVar0;
	
	switch (bParam0)
	{
		case 1369162587:
			COLLECTION::_0x3EA62E56F386C997(-949689219, 1);
			func_128(437, 0);
			func_128(440, 0);
			func_500(-949689219, 444160793, &iVar0, 1, 0, 0);
			func_178(51, 0, 0, -949689219, iVar0, 0, -1, 0);
			func_177(51, 0, 0, iVar0, func_381(-949689219, 20), 1, 0);
			func_179(1);
			func_501(-748969569, 0, 0);
			break;
		
		case 1610047510:
			COLLECTION::_0x3EA62E56F386C997(-1248968496, 1);
			func_500(-1248968496, -1969404854, &iVar0, 1, 0, 0);
			func_178(51, 0, 0, -1248968496, iVar0, 0, -1, 0);
			func_177(51, 0, 0, iVar0, func_381(-1248968496, 20), 1, 0);
			func_179(8);
			break;
		
		case 1317879106:
			COLLECTION::_0x3EA62E56F386C997(1706369307, 1);
			func_500(1706369307, -832850511, &iVar0, 1, 0, 0);
			func_178(51, 0, 0, 1706369307, iVar0, 0, -1, 0);
			func_177(51, 0, 0, iVar0, func_381(1706369307, 20), 1, 0);
			func_179(64);
			break;
		
		case 1062444751:
			COLLECTION::_0x3EA62E56F386C997(1520110311, 1);
			func_500(1520110311, -100913452, &iVar0, 1, 0, 0);
			func_178(51, 0, 0, 1520110311, iVar0, 0, -1, 0);
			func_177(51, 0, 0, iVar0, func_381(1520110311, 20), 1, 0);
			func_179(512);
			break;
		
		case 754186760:
			COLLECTION::_0x3EA62E56F386C997(-1992824800, 1);
			func_128(438, 0);
			func_500(-1992824800, 905173572, &iVar0, 1, 0, 0);
			func_178(51, 0, 0, -1992824800, iVar0, 0, -1, 0);
			func_177(51, 0, 0, iVar0, func_381(-1992824800, 20), 1, 0);
			func_179(32768);
			break;
		
		default:
			func_128(439, 0);
			break;
	}
}

void func_298()
{
	if (STATS::CHAL_GET_NUM_RANKS_COMPLETED(-1278339625) < 2)
	{
		STATS::CHAL_ADD_GOAL_PROGRESS_INT(-1278339625, -1316535105, 1);
	}
}

void func_299(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (func_56() == -1)
	{
		if (!func_174(43))
		{
			if (bParam0 == 281887510)
			{
				func_128(348, 0);
			}
			else if (bParam0 == -164081697)
			{
				func_128(350, 0);
			}
			else if (bParam0 == -1161319399)
			{
				func_128(352, 0);
			}
			else if (bParam0 == 728781265)
			{
				func_128(400, 0);
			}
		}
		else if (func_91(bParam0, 412399755))
		{
			func_502(-1791518714);
			if (func_503() == 0)
			{
				func_468(0, 10);
				iVar1 = func_504(bParam0, iParam1, 1);
				if (((bParam0 == 281887510 || bParam0 == -164081697) || bParam0 == -1161319399) || bParam0 == 728781265)
				{
					if (func_505(bParam0) < func_506(bParam0))
					{
						func_178(43, bParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_177(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_174(44))
		{
			if (bParam0 == -222563712)
			{
				func_128(354, 0);
			}
			else if (bParam0 == 1794857344)
			{
				func_128(399, 0);
			}
			else if (bParam0 == 1952409553)
			{
				func_128(401, 0);
			}
		}
		else if (func_91(bParam0, 709057512))
		{
			func_502(-2087881550);
			if (func_503() == 1)
			{
				func_468(0, 10);
				iVar1 = func_504(bParam0, iParam1, 2);
				if ((bParam0 == -222563712 || bParam0 == 1794857344) || bParam0 == 1952409553)
				{
					if (func_505(bParam0) < func_506(bParam0))
					{
						func_178(43, bParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_177(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_174(45))
		{
			if (bParam0 == 2116770557)
			{
				func_128(359, 0);
			}
			else if (bParam0 == -651064726)
			{
				func_128(394, 0);
			}
			else if (bParam0 == -404270094)
			{
				func_128(395, 0);
			}
			else if (bParam0 == 2093126853)
			{
				func_128(398, 0);
			}
		}
		else if (func_91(bParam0, -1478961327))
		{
			func_502(1908068621);
			if (func_503() == 2)
			{
				func_468(0, 10);
				iVar1 = func_504(bParam0, iParam1, 4);
				if (bParam0 == 2116770557)
				{
					if (!func_507(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
					{
						func_508(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
						func_467(48);
					}
					if (func_505(bParam0) < func_506(bParam0))
					{
						func_178(43, bParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_177(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((bParam0 == -651064726 || bParam0 == -404270094) || bParam0 == 2093126853)
				{
					if (func_505(bParam0) < func_506(bParam0))
					{
						func_178(43, bParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_177(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_174(46))
		{
			if (bParam0 == 2085530337)
			{
				func_128(356, 0);
			}
			else if (bParam0 == -150591160)
			{
				func_128(402, 0);
			}
			else if (bParam0 == -323969289)
			{
				func_128(404, 0);
			}
			else if (bParam0 == 1504361882)
			{
				func_128(406, 0);
			}
		}
		else if (func_91(bParam0, -1238404098))
		{
			func_502(1611247019);
			if (func_503() == 3)
			{
				func_468(0, 10);
				iVar1 = func_504(bParam0, iParam1, 8);
				if (((bParam0 == 2085530337 || bParam0 == -150591160) || bParam0 == -323969289) || bParam0 == 1504361882)
				{
					if (func_505(bParam0) < func_506(bParam0))
					{
						func_178(43, bParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_177(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_174(47))
		{
			if (bParam0 == -1521783510)
			{
				func_128(396, 0);
			}
			else if (bParam0 == 1714875242)
			{
				func_128(397, 0);
			}
			else if (bParam0 == 927763737)
			{
				func_128(405, 0);
			}
			else if (bParam0 == 1019229063)
			{
				func_128(403, 0);
			}
		}
		else if (func_91(bParam0, 1160548794))
		{
			func_502(1319635688);
			if (func_503() == 4)
			{
				func_468(0, 10);
				iVar1 = func_504(bParam0, iParam1, 16);
				if (((bParam0 == -1521783510 || bParam0 == 1714875242) || bParam0 == 927763737) || bParam0 == 1019229063)
				{
					if (func_505(bParam0) < func_506(bParam0))
					{
						func_178(43, bParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_177(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_300(bool bParam0)
{
	int iVar0;
	
	if (bParam0 == 2116770557)
	{
		if (!func_507(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0)) >= 25)
		{
			func_508(COLLECTION::_0x126CBEBBA46693CF(iVar0, 2114735110, 0), 1);
			func_467(48);
		}
	}
}

void func_301(bool bParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	char* sVar2;
	
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = COLLECTION::_0x126CBEBBA46693CF(iVar1, 678508515, -1160144609);
		if (func_15(func_509(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_510(bParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_511(bParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_302(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	
	if (func_56() == -1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iParam2))
		{
			iVar0 = MISC::_0x6F02B5E50511721E(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_293(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (bParam0)
	{
		case 489075255:
			func_293(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1394529493:
			func_293(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1262623627:
			func_293(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1124867377:
			func_293(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1790920086:
			func_293(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -2001202686:
			func_293(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1111063991:
			func_293(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1576210101:
			func_293(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 675090918:
			func_293(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 355838765:
			func_293(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -343824903:
			func_293(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1142684684:
			func_293(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1243851340:
			if (!func_512())
			{
				func_293(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		
		case -525490740:
			func_293(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case -1736635264:
			func_293(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		
		case 1302860970:
			func_293(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1027115192:
			func_293(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1064332555:
			func_293(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1954478446:
			func_293(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -518592739:
			func_293(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -2010073778:
			func_293(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -700133011:
			func_293(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case -1415414735:
			func_293(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 2045548742:
			func_293(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		
		case 830381058:
			func_293(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_303(bool bParam0)
{
	if (func_174(41))
	{
		func_128(363, 0);
	}
	else
	{
		func_128(362, 0);
	}
	switch (bParam0)
	{
		case 323124696:
			func_513(-1865241121);
			func_514(-642026005);
			func_515(-642026005);
			func_468(0, 10);
			break;
		
		case -2108314374:
			func_513(2117142684);
			func_514(-940584364);
			func_515(-940584364);
			func_468(0, 10);
			break;
		
		case -1193798153:
			func_513(-1409326024);
			func_514(1972645282);
			func_515(1972645282);
			func_468(0, 10);
			break;
		
		case -787702678:
			func_513(-641744968);
			func_514(1667205433);
			func_515(1667205433);
			func_468(0, 10);
			break;
		
		case -804542901:
			func_513(-946988203);
			func_514(1362715885);
			func_515(1362715885);
			func_468(0, 10);
			break;
		
		case -1696275132:
			func_513(-646136018);
			func_514(1053540370);
			func_515(1053540370);
			func_468(0, 10);
			break;
		
		case -161595323:
			func_513(-955835837);
			func_514(-1100103852);
			func_515(-1100103852);
			func_468(0, 10);
			break;
		
		case -1114363619:
			func_513(-179276075);
			func_514(-1409869209);
			func_515(-1409869209);
			func_468(0, 10);
			break;
		
		case -368407134:
			func_513(-492711560);
			func_514(-1760235357);
			func_515(-1760235357);
			func_468(0, 10);
			break;
		
		case 1997759228:
			func_513(1764383959);
			func_514(-138366827);
			func_515(-138366827);
			func_468(0, 10);
			break;
		
		case 1265573293:
			func_513(317501533);
			func_514(-1261163843);
			func_515(-1261163843);
			func_468(0, 10);
			break;
		
		case -1030441283:
			func_513(817753087);
			func_514(-963523016);
			func_515(-963523016);
			func_468(0, 10);
			break;
		
		case -1490884871:
			func_513(576606016);
			func_514(560825326);
			func_515(560825326);
			func_468(0, 10);
			break;
		
		case -395458616:
			func_513(814934957);
			func_514(858269539);
			func_515(858269539);
			break;
	}
}

void func_304(bool bParam0, int iParam1)
{
	var uVar0;
	
	func_335(bParam0, iParam1, &uVar0);
}

int func_305(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<10> Var3;
	bool bVar17;
	int iVar18;
	int iVar19;
	
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*uParam0 = 0;
	iVar18 = func_482(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 2, 1, 0);
	iVar19 = func_482(PLAYER::GET_PLAYER_PED(PLAYER::GET_PLAYER_INDEX()), 3, 1, 0);
	if (func_135("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_136(&Var3, iVar2, iVar0, iVar1))
			{
				if (WEAPON::_0xD955FEE4B87AFA07(Var3.f_4))
				{
					if (!bParam1)
					{
						if (Var3.f_4 == iVar18 || Var3.f_4 == iVar19)
						{
						}
						else
						{
							if (!bVar17)
							{
								*uParam0 = Var3.f_4;
								bVar17 = true;
							}
						}
						iVar2++;
						func_138(iVar0);
						if (*uParam0 != 0)
						{
							return 1;
						}
						return 0;
					}
				}
			}
		}
	}

void func_306()
{
	PLAYER::_0x11A7FF918EF6BC66(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_60));
}

void func_307()
{
	float fVar0;
	float fVar1;
	
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	PLAYER::_0x497A6539BB0E8787(PLAYER::PLAYER_ID(), (1f - fVar0), (1f - fVar1));
}

void func_308()
{
	PLAYER::_0xE0D6C2A146A5C993(PLAYER::PLAYER_ID(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_309()
{
	PLAYER::_0xB427911EA6DFFEF3(PLAYER::PLAYER_ID(), (1f - Global_40.f_11095.f_63));
}

void func_310()
{
	func_516();
	func_517();
	func_518();
}

void func_311(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	vector3 vVar4;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_JACK_HALL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_HIGH_STAKES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_OBJ";
			sVar3 = "COL_TH_SUB_POISONOUS_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar3 = "COL_TH_SUB_TRESOR_DES_MORTS";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar3 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar3 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			vVar4 = { -1678.832f, -335.5439f, 172.9001f };
			iVar0 = -208135085;
			break;
	}
	switch (iParam1)
	{
		case 854119837:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_01";
			break;
		
		case -1292544588:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_02";
			break;
		
		case -1003325394:
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_03";
			break;
		
		case -696705861:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_JACK_04";
			break;
		
		case -335460405:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_01";
			break;
		
		case 903797617:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_02";
			break;
		
		case 669728650:
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_03";
			break;
		
		case 1595354593:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_HIGH_04";
			break;
		
		case 1214120047:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_01";
			break;
		
		case 655769340:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_02";
			break;
		
		case 885316185:
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_03";
			break;
		
		case -2016706455:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_POISON_04";
			break;
		
		case -1491419385:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_01";
			break;
		
		case 1809565830:
			sVar1 = "COL_TH_OBJ_RDL";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_02";
			break;
		
		case 2056119786:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_TRESOR_03";
			break;
		
		case -628873767:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_01";
			break;
		
		case -405421956:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_02";
			break;
		
		case -1108972386:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_03";
			break;
		
		case -878376933:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_ELEMENTAL_04";
			break;
		
		case 1053716392:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_01";
			break;
		
		case 806507056:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_02";
			break;
		
		case 1571925350:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_03";
			break;
		
		case 1330352282:
			sVar1 = "COL_TH_OBJ";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_04";
			break;
		
		case 975496781:
			sVar1 = "COL_TH_OBJ_FOUND";
			sVar2 = "RCM_BRIEF_DESC_TH_LANDMARKS_05";
			break;
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iVar0);
	}
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iVar0))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iVar0, vVar4, MISC::GET_HASH_KEY("COL_TH_TITLE"), MISC::GET_HASH_KEY(sVar2), 0);
	}
	if (bParam2)
	{
		switch (iParam0)
		{
			case 499813453:
				sVar1 = "COL_TH_JACK_HALL_COMPLETE";
				break;
			
			case 666607663:
				sVar1 = "COL_TH_HIGH_STAKES_COMPLETE";
				break;
			
			case -220219788:
				sVar1 = "COL_TH_POISONOUS_TRAIL_COMPLETE";
				break;
			
			case 218622660:
				sVar1 = "COL_TH_TRESOR_DES_MORTS_COMPLETE";
				break;
			
			case 390004462:
				sVar1 = "COL_TH_ELEMENTAL_TRAIL_COMPLETE";
				break;
			
			case 6410548:
				sVar1 = "COL_TH_LANDMARKS_OF_RICHES_COMPLETE";
				break;
		}
	}
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iVar0, MISC::GET_HASH_KEY(sVar1), sVar1, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iVar0, 1);
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), MISC::GET_HASH_KEY("toast_log_blips"));
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iVar0, MISC::GET_HASH_KEY("MISSION_RETH"), MISC::GET_HASH_KEY("SP_MISSIONS_19"));
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iVar0, MISC::_CREATE_VAR_STRING(2, sVar3));
}

void func_312(int iParam0, bool bParam1)
{
	int iVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	
	switch (iParam0)
	{
		case 499813453:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_JACK_HALL";
			iVar0 = -293111728;
			break;
		
		case 666607663:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_HIGH_STAKES";
			iVar0 = 1406403390;
			break;
		
		case -220219788:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_POISONOUS_TRAIL";
			iVar0 = 917780075;
			break;
		
		case 218622660:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_TRESOR_DES_MORTS";
			iVar0 = -857004026;
			break;
		
		case 390004462:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_ELEMENTAL_TRAIL";
			iVar0 = -1108821735;
			break;
		
		case 6410548:
			sVar1 = "COL_TH_TITLE";
			sVar2 = "COL_TH_SUB_LANDMARKS_OF_RICHES";
			iVar0 = -208135085;
			break;
	}
	sVar3 = "COL_CTX_PLAYER_LOG";
	if (bParam1)
	{
		sVar1 = "MISSION_COMPLETE";
	}
	UILOG::_UILOG_SET_PENDING_DETAILS_ID(1, iVar0);
	func_378(MISC::_CREATE_VAR_STRING(2, sVar1), MISC::_CREATE_VAR_STRING(2, sVar2), MISC::GET_HASH_KEY("toast_log_blips"), MISC::GET_HASH_KEY("BLIP_RC_TREASURE_HUNTER"), 1433015236, MISC::_CREATE_VAR_STRING(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_313(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_314(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_315(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_316(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_317(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_318(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

bool func_319(bool bParam0)
{
	if (!func_42(bParam0, 0))
	{
		return false;
	}
	return bParam0;
}

void func_320(int iParam0, var uParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	func_258(iParam0, &iVar0, &iVar1);
	if (!func_259(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_454(iParam0, 1024))
	{
		return;
	}
	func_260(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = uParam1;
	((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 2;
}

void func_321(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	int iVar1;
	
	func_258(iParam0, &iVar0, &iVar1);
	if (!func_259(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_454(iParam0, 1024))
	{
		return;
	}
	func_260(iVar0, iVar1);
	(Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/] = iParam1;
	if (!bParam3)
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 1;
	}
	else
	{
		((Global_1905944->f_22[iParam0 /*9*/])->f_3[0 /*2*/])->f_1 = 5;
	}
}

int func_322()
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = COLLECTION::_0x5461C821D00FE15A(-2076669067, 0);
	if (iVar0 == func_465())
	{
		return func_323();
	}
	iVar4 = (func_465() - iVar0);
	iVar5 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_465())
	{
		iVar1 = COLLECTION::_0x126CBEBBA46693CF(iVar2, -2076669067, 0);
		if (!func_519(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_466(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

bool func_323()
{
	int iVar0;
	
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, func_465());
	return func_466(COLLECTION::_0x126CBEBBA46693CF(iVar0, -2076669067, 0));
}

void func_324(bool bParam0)
{
	switch (*bParam0)
	{
		case -1424823393:
			*bParam0 = -885810591;
			break;
		
		case 998010398:
			*bParam0 = -324053813;
			break;
		
		case 1358243310:
			*bParam0 = 1463786584;
			break;
		
		case -541584777:
			*bParam0 = 206762213;
			break;
	}
}

int func_325(bool bParam0, int iParam1, int iParam2)
{
	struct<5> Var0;
	struct<4> Var5;
	
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (iParam1 < 1)
	{
		return 0;
	}
	Var0 = { func_160(bParam0, 0, 1) };
	Var5 = { func_162(bParam0, Var0, Var0.f_4, 0) };
	return func_520(bParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_326(bool bParam0)
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	
	if (func_56() != -1)
	{
		return;
	}
	switch (func_100(bParam0))
	{
		case 81053684:
			if (bParam0 == -1623728698 && func_414(81053684, 0) <= 0)
			{
				func_107(32, bParam0, 0, 0, 0);
			}
			break;
		
		case -2061583405:
			if (bParam0 == -1535516064 || bParam0 == -763730846)
			{
				func_107(32, bParam0, 0, 0, 0);
			}
			break;
		
		case -999503751:
			iVar0 = func_106(bParam0);
			if (func_396(iVar0))
			{
				func_521(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_107(30, bParam0, 0, 0, 0);
			}
			if (func_420() == -2125499975 || func_420() == -449205311)
			{
				switch (bParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_107(32, bParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_420() == 1160113249)
			{
				switch (bParam0)
				{
					case -361635024:
						func_107(32, bParam0, 0, 0, 0);
						break;
				}
			}
			break;
		
		case -525676072:
			if (!func_225(-525676072, 0))
			{
				if (func_522(-525676072, &bVar1))
				{
					func_107(33, bVar1, 0, 0, 0);
				}
			}
			func_107(32, bParam0, 0, 0, 0);
			break;
	}
	if ((bParam0 == 899611344 || bParam0 == -1515874150) || bParam0 == -1185145312)
	{
		if (!func_523(99217379))
		{
			func_110(Global_35, bParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_277(24);
		if (func_305(&bVar2, 0))
		{
			func_281(bVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_327(bool bParam0)
{
	if (func_91(bParam0, 943695443))
	{
		func_524(0, bParam0);
	}
	else if (func_91(bParam0, -2096528786))
	{
		func_524(1, bParam0);
	}
	else if (func_91(bParam0, -1094167013))
	{
		func_524(2, bParam0);
	}
	else if (func_91(bParam0, 1936654645))
	{
		func_524(3, bParam0);
	}
	else if (func_91(bParam0, 1306489306))
	{
		func_524(4, bParam0);
	}
	else if (func_91(bParam0, 435762317))
	{
		func_524(5, bParam0);
	}
	else if (func_91(bParam0, 1259363210))
	{
		func_524(6, bParam0);
	}
	else if (func_91(bParam0, 881398259))
	{
		func_524(7, bParam0);
	}
	else if (func_91(bParam0, -541549214))
	{
		func_524(8, bParam0);
	}
	else if (func_91(bParam0, 130796156))
	{
		func_524(-1, bParam0);
	}
}

int func_328(int iParam0, int iParam1)
{
	var uVar0;
	struct<2> Var4;
	
	Var4.f_1 = 10;
	func_525(&Var4, 1356624740);
	return func_526(iParam0, &Var4, &uVar0, iParam1);
}

void func_329(bool bParam0)
{
	switch (bParam0)
	{
		case 236757114:
			if (func_56() == -1)
			{
				if (func_189(((*Global_1835011)[4 /*74*/])->f_1, 1))
				{
					func_128(109, 1);
				}
			}
			break;
	}
}

void func_330(bool bParam0, char* sParam1)
{
	char* sVar0;
	
	sVar0 = func_528(func_527(0));
	func_448(MISC::_CREATE_VAR_STRING(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_529(bParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

float func_331()
{
	int iVar0;
	
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		iVar0 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		return (BUILTIN::TO_FLOAT(iVar0) / 1000f);
	}
	return (BUILTIN::TO_FLOAT(MISC::GET_GAME_TIMER()) / 1000f);
}

void func_332(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_333(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

float func_334(var uParam0)
{
	if (!func_29(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_530(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_331() - uParam0->f_1);
}

void func_335(bool bParam0, var uParam1, var uParam2)
{
	*uParam1 = 0;
	*uParam2 = 0;
	switch (bParam0)
	{
		case 1234009870:
			*uParam1 = 1802325493;
			*uParam2 = 1681219929;
			break;
		
		case -1202134084:
			*uParam1 = -864693164;
			*uParam2 = 1681219929;
			break;
		
		case 1297050066:
			*uParam1 = -603289736;
			*uParam2 = 1232099469;
			break;
		
		case -1780177928:
			*uParam1 = -1803237008;
			*uParam2 = -2084181920;
			break;
		
		case -1467836497:
			*uParam1 = -1175521284;
			*uParam2 = joaat("ammo_pistol");
			break;
		
		case 1723805622:
			*uParam1 = -1559549888;
			*uParam2 = joaat("ammo_pistol");
			break;
		
		case -153287664:
			*uParam1 = -1650796693;
			*uParam2 = 836939099;
			Jump @525; //curOff = 275
			*uParam1 = -1521597660;
			*uParam2 = -1411815376;
			Jump @525; //curOff = 294
			*uParam1 = -1288829256;
			*uParam2 = joaat("ammo_rifle");
			Jump @525; //curOff = 313
			*uParam1 = 1393841762;
			*uParam2 = joaat("ammo_rifle");
			Jump @525; //curOff = 332
			*uParam1 = -851229814;
			*uParam2 = 1654725195;
			Jump @525; //curOff = 351
			*uParam1 = 914704115;
			*uParam2 = 1858824185;
			Jump @525; //curOff = 370
			*uParam1 = -219896679;
			*uParam2 = -1330115686;
			Jump @525; //curOff = 389
			*uParam1 = 516838334;
			*uParam2 = -1330115686;
			Jump @525; //curOff = 408
			*uParam1 = -385817936;
			*uParam2 = -578347576;
			Jump @525; //curOff = 427
			*uParam1 = 1192843172;
			*uParam2 = 231465488;
			Jump @525; //curOff = 446
			*uParam1 = 954871696;
			*uParam2 = joaat("ammo_shotgun");
			Jump @525; //curOff = 465
			*uParam1 = -1217273132;
			*uParam2 = joaat("ammo_shotgun");
			Jump @525; //curOff = 484
			*uParam1 = -2087227528;
			*uParam2 = 314966081;
			Jump @525; //curOff = 503
			*uParam1 = -618066518;
			*uParam2 = 2113196069;
		}

struct<14> func_336(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	struct<14> Var0;
	
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_7 = -1;
	Var0.f_8 = -1;
	Var0.f_13 = -1;
	if (iParam0 != 0)
	{
		Var0 = iParam0;
	}
	if (iParam1 != 0 && iParam1 != -1591664384)
	{
		Var0.f_1 = iParam1;
	}
	if (iParam2 != 0 && iParam2 != -1591664384)
	{
		Var0.f_2 = iParam2;
	}
	if (iParam3 != 0 && iParam3 != -1591664384)
	{
		Var0.f_3 = iParam3;
	}
	if (iParam4 != 0)
	{
		Var0.f_4 = iParam4;
	}
	if (iParam5 != 0)
	{
		Var0.f_5 = iParam5;
	}
	return Var0;
}

struct<4> func_337(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_140(bParam0);
	if (iVar0 == 2)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224214))
		{
			*Global_1224214 = { func_162(923904168, func_346(bParam0), -740156546, bParam0) };
		}
		return *Global_1224214;
	}
	else if (iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224222))
		{
			*Global_1224222 = { func_162(923904168, func_346(bParam0), -740156546, 0) };
		}
		return *Global_1224222;
	}
	return func_162(923904168, func_346(bParam0), -740156546, 0);
}

void func_338(var uParam0, struct<4> Param1)
{
	if (INVENTORY::_0xB881CA836CC4B6D4(&Param1))
	{
		uParam0->f_9 = { Param1 };
	}
}

int func_339(var uParam0, var uParam1, var uParam2, bool bParam3)
{
	*uParam1 = INVENTORY::_0x640F890C3E5A3FFD(func_140(bParam3), uParam0, uParam2);
	if (*uParam1 >= 0)
	{
		return 1;
	}
	return 0;
}

int func_340(int iParam0)
{
	if (func_531(iParam0))
	{
		return VEHICLE::_0xC29996A337BDD099(((*Global_1425371)[iParam0 /*373*/])->f_1);
	}
	return 0;
}

int func_341(int iParam0)
{
	if (!func_50(iParam0))
	{
		return -1;
	}
	return func_532(iParam0);
}

int func_342(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return 0;
	}
	return func_533(((*Global_1835011)[iParam0 /*74*/])->f_1);
}

Vector3 func_343(int iParam0)
{
	return func_534(iParam0);
}

Vector3 func_344(int iParam0)
{
	vector3 vVar0;
	
	if (!func_48(iParam0))
	{
		return 0f, 0f, 0f;
	}
	vVar0 = { 0f, 0f, 0f };
	if (func_535(iParam0, &vVar0))
	{
		((*Global_1347702)[iParam0 /*49*/])->f_24 = { vVar0 };
	}
	return ((*Global_1347702)[iParam0 /*49*/])->f_24;
}

bool func_345(int iParam0)
{
	return func_52(iParam0, 2);
}

struct<4> func_346(bool bParam0)
{
	return func_162(1328661203, func_536(), -1591664384, bParam0);
}

int func_347(bool bParam0, bool bParam1)
{
	if (func_100(bParam0) == 1779021115)
	{
		return 0;
	}
	if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
	{
		if (bParam1)
		{
			return func_462(-1185145312, 0) > 0;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

bool func_348(bool bParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_237(bParam0, *uParam1, iParam2, bParam3) > 0;
}

int func_349(bool bParam0, var uParam1, int iParam2)
{
	var uVar0;
	
	if (func_537(bParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return 0;
}

struct<4> func_350(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_140(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!INVENTORY::_0xB881CA836CC4B6D4(Global_1224218))
		{
			*Global_1224218 = { func_162(271701509, func_346(bParam0), 12999093, 0) };
		}
		return *Global_1224218;
	}
	return func_162(271701509, func_346(bParam0), 12999093, 0);
}

int func_351(bool bParam0, int iParam1)
{
	var uVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	if (bParam0 == 0 || iParam1 == 0)
	{
		return 0;
	}
	iVar1 = func_100(bParam0);
	iVar3 = ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_COUNT(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iVar1, iVar2, &uVar0))
		{
			if (ITEMDATABASE::_ITEM_DATABASE_CAN_EQUIP_ITEM_ON_CATEGORY(bParam0, iParam1, uVar0))
			{
				return 1;
			}
		}
		iVar2++;
	}
	return 0;
}

int func_352(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!INVENTORY::_0xB881CA836CC4B6D4(&uParam0))
	{
		return 0;
	}
	if (!INVENTORY::_0x9700E8EFC4AB9089(func_140(bParam5), &uParam0, uParam4, !bParam6))
	{
		return 0;
	}
	return 1;
}

int func_353(var uParam0)
{
	if (ITEMDATABASE::_ITEM_DATABASE_IS_INTRINSIC_ITEM(uParam0))
	{
		return 1;
	}
	return 0;
}

int func_354(bool bParam0)
{
	if (func_42(bParam0, 0))
	{
		if (func_91(bParam0, -1242251796))
		{
			if (func_91(bParam0, 2060589226))
			{
				return func_538();
			}
			return func_539();
		}
		else if (func_91(bParam0, 1919582297))
		{
			return func_363();
		}
		else if (func_91(bParam0, 1147021565))
		{
			return func_364();
		}
	}
	if (Global_1935496->f_12)
	{
		return func_539();
	}
	else
	{
		return func_364();
	}
	return func_364();
}

int func_355(bool bParam0)
{
	if ((((((((((func_91(bParam0, 1147021565) || func_91(bParam0, -136654233)) || func_91(bParam0, -524514947)) || func_91(bParam0, -1238310989)) || func_91(bParam0, 1765172170)) || func_91(bParam0, 1490540191)) || func_91(bParam0, 1573112293)) || func_91(bParam0, -1242251796)) || func_91(bParam0, 1919582297)) || func_91(bParam0, -2085281117)) || bParam0 == -1994237933)
	{
		return 1;
	}
	return 0;
}

int func_356()
{
	return 33284224;
}

int func_357()
{
	return 33537269;
}

int func_358()
{
	return 18589696;
}

int func_359()
{
	return 26978448;
}

int func_360()
{
	return 33529847;
}

int func_361()
{
	return 26978304;
}

int func_362()
{
	return 32505855;
}

int func_363()
{
	return 26983431;
}

int func_364()
{
	return 33537239;
}

int func_365()
{
	return 32713860;
}

int func_366()
{
	return 16400295;
}

int func_367()
{
	return 33284224;
}

void func_368(int iParam0)
{
	if (func_540(32))
	{
		return;
	}
	func_541(32);
	if (func_59(Global_35))
	{
		Global_1935496->f_7 |= 1;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1);
	}
	if (func_76(Global_35))
	{
		Global_1935496->f_7 |= 2;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2);
	}
	if (func_542(Global_35, 713668775))
	{
		Global_1935496->f_7 |= 4;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4);
	}
	if (func_543(Global_35))
	{
		Global_1935496->f_7 |= 8;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8);
	}
	if (func_21(0, 1))
	{
		Global_1935496->f_7 |= 16;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16);
	}
	if (!func_544(0))
	{
		Global_1935496->f_7 |= 32;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 32);
	}
	if (!func_545(0))
	{
		Global_1935496->f_7 |= 512;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 512);
	}
	if (!func_546(0))
	{
		Global_1935496->f_7 |= 8192;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8192);
	}
	if (PED::IS_PED_IN_COVER(Global_35, 0, 1))
	{
		Global_1935496->f_7 |= 16384;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16384);
	}
	if (PED::_0xD5FE956C70FF370B(Global_35))
	{
		Global_1935496->f_7 |= 32768;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 32768);
	}
	if (func_56() == 0 && PED::_0xB655DB7582AEC805(Global_35))
	{
		Global_1935496->f_7 |= 131072;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 131072);
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35) && !ENTITY::HAS_ANIM_EVENT_FIRED(Global_35, 108107462))
	{
		Global_1935496->f_7 |= 256;
	}
	else if (PED::_0x7FC84E85D98F063D(Global_35))
	{
		Global_1935496->f_7 |= 256;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 256);
	}
	if (Global_1935630->f_24 || TASK::_0xC8B29D18022EA2B7(Global_35))
	{
		Global_1935496->f_7 |= 1024;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1024);
	}
	if (TASK::IS_PED_RUNNING(Global_35))
	{
		Global_1935496->f_7 |= 4096;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4096);
	}
	if (ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Global_35, -1) || func_542(Global_35, 1369124074))
	{
		Global_1935496->f_7 |= 128;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 128);
	}
	if (PED::IS_PED_USING_ANY_SCENARIO(Global_35))
	{
		Global_1935496->f_7 |= 33554432;
		if (TASK::_0x2D0571BB55879DA2(Global_35) == -1241981548)
		{
			Global_1935496->f_7 |= 67108864;
		}
		else
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 67108864);
		}
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 67108864);
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 33554432);
	}
	if (CAM::IS_CINEMATIC_CAM_RENDERING())
	{
		Global_1935496->f_7 |= 65536;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 65536);
	}
	if (CAM::_0x1204EB53A5FBC63D())
	{
		Global_1935496->f_7 |= 64;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 64);
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		Global_1935496->f_7 |= 1048576;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 1048576);
	}
	if (func_547(iParam0, 0))
	{
		Global_1935496->f_7 |= 524288;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 524288);
	}
	if (func_548(iParam0, 0))
	{
		Global_1935496->f_7 |= 262144;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 262144);
	}
	if (func_549(Global_35))
	{
		Global_1935496->f_7 |= 4194304;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 4194304);
	}
	if (func_550())
	{
		Global_1935496->f_7 |= 16777216;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 16777216);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (func_551(iParam0))
		{
			switch (ENTITY::GET_ENTITY_MODEL(iParam0))
			{
				case -1230516683:
				case 594040097:
				case 1772321403:
					Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
					break;
				
				default:
					Global_1935496->f_7 |= 134217728;
					break;
			}
		}
		if (PED::_0xFB4891BD7578CDC1(iParam0, 149557334))
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
		}
		if (PED::IS_PED_ON_VEHICLE(iParam0, false))
		{
			Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
		}
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 134217728);
	}
	if (((((func_56() == -1 && func_552(32768)) || func_167()) || func_18()) || (func_553() && !func_17())) || ENTITY::GET_ENTITY_SUBMERGED_LEVEL(Global_35) > 0.2f)
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 2097152);
	}
	else
	{
		Global_1935496->f_7 |= 2097152;
	}
	if (Global_1900073->f_17 && func_122(Global_35, 1, 0, 0) == -1415022764)
	{
		Global_1935496->f_7 |= 8388608;
	}
	else
	{
		Global_1935496->f_7 = (Global_1935496->f_7 - Global_1935496->f_7 & 8388608);
	}
}

int func_369(bool bParam0)
{
	int iVar0;
	
	if (func_554(1) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if ((func_554(2) && !Global_1392040->f_2) && MISC::GET_GAME_TIMER() >= Global_36614)
	{
		if (bParam0)
		{
			iVar0 = func_555(Global_35);
			if (iVar0 != 0)
			{
				if (ENTITY::_0x9A100F1CF4546629(iVar0))
				{
					func_58("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return 0;
				}
			}
			func_58("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_554(4194304))
	{
		return 0;
	}
	return 1;
}

int func_370(bool bParam0)
{
	if (PED::_0xA911EE21EDF69DAF(Global_35) && !Global_1392040->f_2)
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_371(bool bParam0, var uParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	if (PED::_0x1D46B417F926D34D(Global_35))
	{
		return 0;
	}
	else if (PED::IS_PED_IN_ANY_VEHICLE(Global_35, true))
	{
		if (!PED::IS_PED_IN_ANY_VEHICLE(Global_35, false))
		{
			return 0;
		}
		iVar0 = PED::GET_VEHICLE_PED_IS_USING(Global_35);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
		switch (iVar1)
		{
			case -1613317544:
			case 1493442814:
				if (bParam0)
				{
					func_58("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return 0;
			
			case -1988548788:
			case 518773733:
			case 742064790:
			case 749266870:
				if (bParam0)
				{
					func_58("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return 0;
		}
		if (!func_22(uParam1, 32) && !PED::IS_PED_ON_MOUNT(Global_35))
		{
			if (VEHICLE::_0x2963B5C1637E8A27(iVar0) == Global_35 || iParam2)
			{
				return 0;
			}
		}
	}
	else if (PED::IS_PED_GETTING_INTO_A_VEHICLE(Global_35))
	{
		return 0;
	}
	return 1;
}

int func_372(int iParam0, int iParam1)
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		if (!PED::IS_PED_INJURED(iParam0))
		{
			if (iParam1 == 2104565373 && TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iParam0))
			{
				return 1;
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 1 || TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1) == 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_373(int iParam0)
{
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(iParam0, true);
	}
	return 0;
}

int func_374(int iParam0, bool bParam1)
{
	float fVar0;
	float fVar1;
	
	if (bParam1)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return 0;
		}
		if (ENTITY::IS_ENTITY_DEAD(iParam0) || PED::IS_PED_INJURED(iParam0))
		{
			return 0;
		}
	}
	fVar0 = ENTITY::GET_ENTITY_SPEED(iParam0);
	fVar1 = PED::_0xCA95924C893A0C91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return 1;
	}
	return 0;
}

void func_375(int iParam0, int iParam1)
{
	HUD::_JOURNAL_WRITE_ENTRY(iParam0);
	if (iParam1 == 1)
	{
		func_556(1);
	}
}

void func_376(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	if (iParam0 == 0 && Global_43890 == 1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (&Global_40.f_11922[iVar0] == 0)
		{
			Jump @96; //curOff = 52
		}
		else
		{
			func_375(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_556(1);
	}
}

void func_377(int iParam0, var uParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	(Global_12105[iParam0 /*7*/])->f_3 = uParam1;
}

var func_378(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
{
	struct<5> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam7;
	Var0.f_1 = sParam8;
	Var0.f_2 = sParam9;
	Var0.f_3 = iParam11;
	Var0.f_4 = iParam4;
	Var0.f_4.f_1 = iParam6;
	Var0.f_4.f_2 = sParam5;
	Var13.f_7 = 1;
	Var13 = iParam10;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam12, iParam13);
	return uVar21;
}

char* func_379(bool bParam0)
{
	switch (bParam0)
	{
		case 554799588:
			return "COL_CC_GUN_SET";
		
		case -1021394391:
			return "COL_CC_ART_SET";
		
		case -987306668:
			return "COL_CC_LND_SET";
		
		case -1028735103:
			return "COL_CC_GRL_SET";
		
		case 515229791:
			return "COL_CC_PLT_SET";
		
		case -1230863414:
			return "COL_CC_ACT_SET";
		
		case 232875659:
			return "COL_CC_AML_SET";
		
		case 1423129537:
			return "COL_CC_VEH_SET";
		
		case -435742319:
			return "COL_CC_SPT_SET";
		
		case -1854702679:
			return "COL_CC_INV_SET";
		
		case 1265323898:
			return "COL_CC_HOR_SET";
		
		case -479775696:
			return "COL_CC_PAM_SET";
		
		default:
			break;
	}
	return "";
}

var func_380(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	struct<4> Var0;
	struct<8> Var13;
	var uVar21;
	
	Var0 = -2;
	Var0 = iParam4;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam8;
	Var13.f_7 = 1;
	Var13 = iParam7;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = 0;
	Var13.f_4 = iParam2;
	Var13.f_5 = iParam3;
	uVar21 = _NAMESPACE71::_0x26E87218390E6729(&Var0, &Var13, iParam9, iParam10);
	return uVar21;
}

int func_381(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_557(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_INT(&uVar5, &Var0);
	return uVar5;
}

char* func_382(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
{
	switch (iParam1)
	{
		case -2076669067:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_CC_COMPLETE";
			}
			else if (func_273() >= 12)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_POSTED_OBJ", func_558(), 12);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_CC_CARD_FOUND_OBJ", func_559(), 12);
			}
			break;
		
		case -440187297:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_DB_COMPLETE";
			}
			else if (func_498() >= 30)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_POSTED_OBJ", func_560(), 30);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_DB_FOUND_OBJ", func_498(), 30);
			}
			break;
		
		case -1531394072:
			if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_EX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_EX_ITEMS_COLLECTED_OBJ", sParam4, sParam5);
			}
			break;
		
		case 1995362678:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_LF_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_LF_CAUGHT_OBJ", func_561(), 13);
			}
			break;
		
		case 2103522376:
			if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_CHECK_BACK";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_RC_COMPLETE";
			}
			else if (func_499() >= 10)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_POSTED_OBJ", func_562(), 10);
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_RC_FOUND_OBJ", func_499(), 10);
			}
			break;
		
		case 678508515:
			if (iParam2 == 3)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 4)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_VACATION");
			}
			else if (iParam2 == 5)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_ON_VACATION");
			}
			else if (iParam2 == 0)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_RETURN_POST_OFFICE");
			}
			else if (iParam2 == 1)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_READ_INVITATION");
			}
			else if (iParam2 == 2)
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_VISIT");
			}
			else if (iParam2 == 7)
			{
				sParam3 = "COL_TX_RETURN_POST_OFFICE";
			}
			else if (iParam2 == 8)
			{
				sParam3 = "COL_TX_COMPLETE";
			}
			else
			{
				sParam3 = MISC::_CREATE_VAR_STRING(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_381(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

int func_383(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -2076669067)
	{
		if (iParam1 == 38816757)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 578982838))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 578982838);
			}
		}
	}
	else if (iParam2 == -440187297)
	{
		if (iParam1 == -1223580455)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 349797279))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 349797279);
			}
		}
	}
	else if (iParam2 == 2103522376)
	{
		if (iParam1 == -170865073)
		{
			if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, 1974744712))
			{
				UILOG::_UILOG_REMOVE_ENTRY(3, 1974744712);
			}
		}
	}
	if (UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_REMOVE_ENTRY(3, iParam1);
	}
	return 1;
}

int func_384(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!UILOG::_UILOG_IS_ENTRY_REGISTERED(3, iParam1))
	{
		UILOG::_UILOG_ADD_ENTRY_HASH(3, iParam1, vParam2, MISC::GET_HASH_KEY(sParam5), MISC::GET_HASH_KEY(sParam6), 0);
	}
	return 1;
}

int func_385(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(sParam2), sParam2, 0, 0, 0);
	UILOG::_UILOG_SET_ENTRY_PINNED(3, iParam1, 1);
	UILOG::_UILOG_SET_ENTRY_BRIEF_TEXTURE(3, iParam1, MISC::GET_HASH_KEY(sParam4), MISC::GET_HASH_KEY(sParam5));
	UILOG::_UILOG_SET_ENTRY_ICON_TEXTURE(3, iParam1, iParam6, iParam7);
	UILOG::_UILOG_UPDATE_ENTRY_SUBHEADER(3, iParam1, MISC::_CREATE_VAR_STRING(2, sParam3));
	return 1;
}

int func_386(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_563(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_15(iVar2, 1, 0) || func_565(func_564(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_379(func_563(iVar0))), func_379(func_563(iVar0)), bVar1, 1, 0);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_498() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_566(iVar0)), func_566(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_560() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_566(iVar0)), func_566(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_566(iVar0)), func_566(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_509(iParam3, func_567(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_505(iVar2) - iParam7) >= func_381(iParam3, func_568(iVar0));
				}
				else
				{
					bVar1 = func_505(iVar2) >= func_381(iParam3, func_568(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_505(iVar2) + iParam7) >= func_381(iParam3, func_568(iVar0));
			}
			else
			{
				bVar1 = func_505(iVar2) >= func_381(iParam3, func_568(iVar0));
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_569(iVar2)), func_569(iVar2), bVar1, 1, 0);
		}
		if (iParam2 == 1995362678)
		{
			if (func_570(COLLECTION::_0x126CBEBBA46693CF(iVar0, 1995362678, 0)))
			{
				bVar1 = true;
			}
			else if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = false;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_571(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0))), func_571(COLLECTION::_0x126CBEBBA46693CF(iVar0, iParam2, 0)), bVar1, 1, 0);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_499() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_572(iVar0)), func_572(iVar0), bVar1, 1, 0);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_562() >= iParam8;
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_572(iVar0)), func_572(iVar0), bVar1, 1, 0);
			}
			else
			{
				if (iParam5 == 8)
				{
					bVar1 = true;
				}
				else
				{
					bVar1 = false;
				}
				UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_572(iVar0)), func_572(iVar0), bVar1, 1, 0);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_509(iParam3, func_567(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_505(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_573(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_573(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY(func_574(iVar2)), func_574(iVar2), bVar1, 1, 0);
		}
		iVar0++;
	}
	return 1;
}

int func_387(int iParam0, int iParam1, int iParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == -2076669067)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_CC_ITEMS_DELIVERED"), "COL_CC_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == -1531394072)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_EX_ITEMS_DELIVERED"), "COL_EX_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (iParam2 == 1995362678)
	{
		if (func_561() >= 13)
		{
			iVar0 = 1;
		}
		else
		{
			iVar0 = 0;
		}
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_LF_ITEMS_DELIVERED"), "COL_LF_ITEMS_DELIVERED", iVar0, 1, 0);
	}
	if (((((((iParam3 == 7 || iParam3 == 3) || iParam3 == 4) || iParam3 == 5) || iParam3 == 0) || iParam3 == 1) || iParam3 == 2) || iParam3 == 8)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = 0;
	}
	if (iParam2 == 678508515)
	{
		UILOG::_UILOG_ADD_OR_UPDATE_OBJECTIVE(3, iParam1, MISC::GET_HASH_KEY("COL_TX_CARCASSES_MAILED"), "COL_TX_CARCASSES_MAILED", iVar0, 1, 0);
	}
	return 1;
}

int func_388(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_50(func_575(0)) && ((func_576(0) == 1 || func_576(0) == 8) || func_576(0) == 6))
	{
		iParam3 = 7;
	}
	if ((iParam2 == -440187297 || iParam2 == 1995362678) || iParam2 == 2103522376)
	{
		if (iParam3 == 7)
		{
			UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
		}
	}
	else if (iParam2 == 678508515)
	{
		if (iParam3 == 7)
		{
			if (bParam4)
			{
			}
			else
			{
				UILOG::_UILOG_MARK_ENTRY_AVAILABILITY(3, iParam1, 1, "");
			}
		}
	}
	return 1;
}

int func_389()
{
	int iVar0;
	int iVar1;
	
	if (PED::_0xA911EE21EDF69DAF(Global_35))
	{
		return 1;
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, true, 0, false))
	{
	}
	if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == joaat("weapon_unarmed"))
	{
		if (iVar0 == joaat("weapon_unarmed"))
		{
			return 1;
		}
		else if ((((WEAPON::IS_WEAPON_VALID(iVar0) && WEAPON::_0x0556E9D2ECF39D01(iVar0)) && !func_577(iVar0)) && !PED::_IS_PED_GETTING_INTO_A_MOUNT_SEAT(Global_35, true)) && !(PED::IS_PED_IN_ANY_VEHICLE(Global_35, false) && !CAM::_0xA24C1D341C6E0D53(1, 0, 0)))
		{
			return 3;
		}
		else if (iVar0 == -160924582)
		{
			return 1;
		}
		else if ((WEAPON::IS_WEAPON_VALID(iVar0) && func_577(iVar0)) || iVar0 == 2055893578)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == joaat("weapon_unarmed"))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_390(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!TASK::_0x2D19BC4DF626CBE7(iParam0, bParam1, iParam2, iParam3))
	{
		ATTRIBUTE::_0xD962F8579D702DB5();
	}
	else
	{
		TASK::_TASK_ITEM_INTERACTION(iParam0, bParam1, iParam2, iParam3, 0, -1082130432);
		Global_1935496->f_26 = 1;
	}
}

void func_391(bool bParam0, bool bParam1)
{
	struct<2> Var0;
	struct<6> Var22;
	int iVar29;
	float fVar30;
	var uVar31;
	var uVar32;
	float fVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	bool bVar37;
	var uVar38;
	var uVar39;
	bool bVar40;
	bool bVar41;
	int iVar42;
	
	Var0.f_1 = 20;
	if ((func_91(bParam0, 1573112293) || func_91(bParam0, 672467738)) || func_91(bParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_43(bParam0) == 2085633299)
	{
		ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_IDS(bParam0, &Var0);
		ATTRIBUTE::_0xD962F8579D702DB5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ITEM_EFFECTS_ID_INFO(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_578(0, Var22.f_2);
				func_579(Var22.f_2, 1);
				func_580(0, 7000);
				bVar41 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				uVar31 = func_578(2, Var22.f_2);
				func_581(Var22.f_2);
				func_580(2, 7000);
				bVar40 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				uVar32 = func_578(1, Var22.f_2);
				func_582(Var22.f_2);
				func_580(1, 7000);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_583(Var22.f_2, Var22.f_5);
				if (func_584(&uVar38, &uVar39, fVar33))
				{
					func_585(fVar33, 1, bVar37, bParam1);
					func_580(0, 7000);
				}
				bVar41 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_583(Var22.f_2, Var22.f_5);
				if (func_584(&uVar38, &uVar39, fVar34))
				{
					func_586(fVar34, 1, bVar37, bParam1);
					func_580(2, 7000);
				}
				bVar40 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_583(Var22.f_2, Var22.f_5);
				if (func_584(&uVar38, &uVar39, fVar35))
				{
					func_587(fVar35, 1, bVar37, bParam1);
					func_580(1, 7000);
				}
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_588(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_589(19, fVar36);
				bVar41 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_588(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_589(20, fVar36);
				bVar40 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_588(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_589(18, fVar36);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_588(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_589(0, fVar36);
				bVar41 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_588(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_589(2, fVar36);
				bVar40 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_588(BUILTIN::TO_FLOAT(Var22.f_3), Var22.f_4);
				func_589(1, fVar36);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_590(BUILTIN::TO_FLOAT(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar41)
		{
			if (fVar33 > 0f || fVar30 > 0f)
			{
				iVar42 = 1;
			}
		}
		if (iVar42 || func_91(bParam0, -537818634))
		{
			func_289(func_449(-704089207), 1);
		}
		if (func_91(bParam0, -1457797660))
		{
			func_289(func_449(-1909697259), 1);
		}
		if (bVar40)
		{
			func_289(func_449(704570463), 1);
		}
		PLAYER::_0x0E1DB1F8F5B561DC(fVar30, uVar32, uVar31, BUILTIN::ROUND((fVar33 / 2f)), BUILTIN::ROUND((fVar35 / 2f)), BUILTIN::ROUND((fVar34 / 2f)));
	}
}

bool func_392(int iParam0, int iParam1, bool bParam2)
{
	if (!bParam2)
	{
		if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
		{
			return false;
		}
	}
	return PED::_0xFB4891BD7578CDC1(iParam0, iParam1);
}

int func_393(bool bParam0)
{
	switch (*bParam0)
	{
		case 1433048902:
			return 2;
		
		case -1602657245:
			return 4;
		
		case -1991037110:
			return 5;
		
		case 1047281747:
			return 6;
		
		case -398744080:
			return 7;
		
		case -1066874997:
			return 8;
		
		case -2085219828:
			return 11;
		
		case 2064962445:
			return 12;
		
		case -1620920647:
			return 15;
		
		case -1664530975:
			return 16;
		
		case -597058368:
			return 20;
		
		case 128702355:
			return 23;
		
		case -2051332199:
			return 26;
		
		case 546981776:
			return 27;
		
		case -2013384490:
			return 28;
		
		case 228922461:
			return 29;
		
		case -746674788:
			return 31;
		
		case 599861917:
			return 33;
		
		case -1781387050:
			return 34;
		
		case 2006811763:
			return 37;
		
		case -90546043:
			return 38;
		
		case 1216456215:
			return 39;
		
		case 746300881:
			return 40;
		
		case -435006002:
			return 41;
		
		case -624139784:
			return 42;
		
		case -529638012:
			return 43;
		
		case -651064726:
			return 1;
		
		case -404270094:
			return 9;
		
		case -1521783510:
			return 10;
		
		case 1714875242:
			return 14;
		
		case 2093126853:
			return 17;
		
		case 728781265:
			return 21;
		
		case 1794857344:
			return 22;
		
		case 1952409553:
			return 24;
		
		case -150591160:
			return 25;
		
		case 1019229063:
			return 30;
		
		case -323969289:
			return 32;
		
		case 927763737:
			return 35;
		
		case 1504361882:
			return 36;
	}
	return 0;
}

void func_394(int iParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_591(iParam0);
	iVar1 = func_393(&iVar0);
	if (iVar1 != iParam0)
	{
		func_592(iVar1, 4);
	}
	if (!func_593(iParam0))
	{
		return;
	}
	if (func_594(iParam0))
	{
		return;
	}
	func_592(iParam0, 4);
	func_595(iParam0, bParam1);
	if (!func_596(iParam0))
	{
		func_597(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_16(0, 0, 1))
		{
			func_468(1, 6);
		}
	}
}

void func_395(int iParam0)
{
	if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
	{
		if (iParam0 == 1)
		{
			DECORATOR::DECOR_SET_BOOL(PLAYER::PLAYER_PED_ID(), "Inspecting_Item", true);
		}
		else if (DECORATOR::DECOR_EXIST_ON(PLAYER::PLAYER_PED_ID(), "Inspecting_Item"))
		{
			DECORATOR::DECOR_REMOVE(PLAYER::PLAYER_PED_ID(), "Inspecting_Item");
		}
	}
}

int func_396(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return 0;
	}
	return 1;
}

bool func_397(int iParam0, int iParam1)
{
	if (!func_396(iParam0))
	{
		return false;
	}
	return (Global_40.f_7157[iParam0 /*3*/] && iParam1) != 0;
}

int func_398(int iParam0)
{
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (func_598(Global_35, iParam0, 0, 1) < 2f && PED::_0xD543D3A8FDE4F185(Global_35, iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_399(int iParam0)
{
	return &Global_1946804->f_529[iParam0] > 0;
}

void func_400(int iParam0)
{
	Global_1946804->f_529[iParam0] = &Global_1946804->f_529[iParam0] + 1;
}

int func_401()
{
	if (Global_1946804->f_2793)
	{
		return 1;
	}
	if (MISC::ABSI((MISC::GET_GAME_TIMER() - Global_1946804->f_2791)) < 1250)
	{
		return 1;
	}
	if (func_599())
	{
		return 1;
	}
	if (TASK::_0xEC7E480FF8BD0BED(Global_35))
	{
		return 1;
	}
	return 0;
}

int func_402(bool bParam0)
{
	int iVar0;
	
	iVar0 = func_100(bParam0);
	if (iVar0 == 81053684 || iVar0 == -525676072)
	{
		return 1;
	}
	return 0;
}

void func_403(var uParam0, var uParam1)
{
	*uParam0 = (*uParam0 || uParam1);
}

int func_404(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_410(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

int func_405(int iParam0)
{
	if (-1829635046 == func_600(81053684))
	{
		if (func_410(iParam0))
		{
			return 1;
		}
	}
	else if (func_601(-525676072, iParam0))
	{
		if (func_410(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_406()
{
	int iVar0;
	
	iVar0 = 1549701178;
	switch (func_389())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		
		case 3:
			iVar0 = 949387044;
			break;
		
		case 1:
			iVar0 = -22529868;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_407()
{
	int iVar0;
	
	iVar0 = 614608656;
	switch (func_389())
	{
		case 0:
			iVar0 = 614608656;
			break;
		
		case 3:
			iVar0 = -1290316291;
			break;
		
		case 1:
			iVar0 = 1918034163;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_408()
{
	int iVar0;
	
	iVar0 = -1832677570;
	switch (func_389())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		
		case 3:
			iVar0 = -362314920;
			break;
		
		case 1:
			iVar0 = -1336137422;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_409()
{
	int iVar0;
	
	iVar0 = 1623252156;
	switch (func_389())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		
		case 3:
			iVar0 = -1469902924;
			break;
		
		case 1:
			iVar0 = 170763280;
			break;
		
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_410(int iParam0)
{
	if (func_601(81053684, iParam0))
	{
		return 1;
	}
	if (func_601(-525676072, iParam0))
	{
		return 1;
	}
	return 0;
}

void func_411(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_8 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3[0] = 0;
	uParam0->f_3[1] = 0;
	uParam0->f_3[2] = 0;
	uParam0->f_3[3] = 0;
	uParam0->f_9 = 0;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	if (uParam0->f_12)
	{
		PED::_0x13E7320C762F0477(uParam0->f_13);
	}
	uParam0->f_12 = 0;
}

void func_412(int iParam0)
{
	Global_1946804 = (&Global_1946804 - (Global_1946804 && iParam0));
}

void func_413(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_231(iParam0, 1) /*11*/])->f_10 = ((Global_1946804->f_57[func_231(iParam0, 1) /*11*/])->f_10 - ((Global_1946804->f_57[func_231(iParam0, 1) /*11*/])->f_10 && iParam1));
}

int func_414(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1946804->f_2657.f_21;
		
		case 81053684:
			return Global_1946804->f_2657.f_23;
		
		case -525676072:
			return Global_1946804->f_2657.f_22;
		
		case -1719060085:
			return Global_1946804->f_2657.f_24;
		
		case -413129408:
			return Global_1946804->f_2657.f_25;
		
		case -999503751:
			if (bParam1)
			{
				return Global_1946804->f_2657.f_20;
			}
			else
			{
				return func_602();
			}
			break;
	}
	return 0;
}

int func_415(int iParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1946804->f_2657.f_26.f_1;
			break;
		
		case 81053684:
			iVar0 = 1;
			break;
		
		case -525676072:
			iVar0 = Global_1946804->f_2657.f_26.f_2;
			break;
		
		case -1719060085:
			iVar0 = 1;
			break;
		
		case -999503751:
			iVar0 = Global_1946804->f_2657.f_26;
			break;
		
		case -413129408:
			iVar0 = 1;
			break;
		
		default:
			return 0;
	}
	switch (iParam0)
	{
		case -999503751:
			if (iVar0 > 0 && !bParam1)
			{
				iVar0 = (iVar0 - 1);
			}
			break;
	}
	return iVar0;
}

int func_416(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (iParam0 == &Global_1946804->f_2657[*uParam1])
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

int func_417(int iParam0)
{
	if (func_56() == -1)
	{
		if (Global_40.f_4283 != 0)
		{
			if (iParam0 == 1164374808)
			{
				return 0;
			}
		}
	}
	return 1;
}

int func_418(bool bParam0, var uParam1, int iParam2, var uParam3)
{
	var uVar0;
	int iVar1;
	
	iVar1 = bParam0;
	if (Global_1946804->f_2657.f_19 >= 18)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_416(iVar1, &uVar0))
	{
		return 0;
	}
	if (uParam3 && !func_603(bParam0, 0))
	{
		return 0;
	}
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = iVar1;
	if (func_100(bParam0) != -999503751)
	{
		func_604(&(Global_1946804->f_2657.f_26.f_26), bParam0, Global_1946804->f_2657.f_19);
	}
	Global_1946804->f_2657.f_19++;
	*uParam1++;
	return 1;
}

int func_419(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	
	Var0 = { func_160(bParam0, 0, 0) };
	Var5 = { func_162(bParam0, Var0, Var0.f_4, 0) };
	if (func_237(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x0349404A22736740(iParam1, func_140(0), &Var5);
	return 1;
}

int func_420()
{
	return Global_1946804->f_1;
}

void func_421()
{
	int iVar0;
	
	if (func_56() == -1)
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_2657.f_19)
		{
			Global_26795[iVar0] = &Global_1946804->f_2657[iVar0];
			iVar0++;
		}
		Global_26795.f_20 = Global_1946804->f_2657.f_20;
		Global_26795.f_21 = Global_1946804->f_2657.f_21;
		Global_26795.f_22 = Global_1946804->f_2657.f_22;
		Global_26795.f_23 = Global_1946804->f_2657.f_23;
		Global_26795.f_24 = Global_1946804->f_2657.f_24;
		Global_26795.f_19 = Global_1946804->f_2657.f_19;
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		Global_36637.f_45.f_350[iVar0] = &Global_1946804->f_2657[iVar0];
		iVar0++;
	}
	Global_36637.f_45.f_350.f_20 = Global_1946804->f_2657.f_20;
	Global_36637.f_45.f_350.f_21 = Global_1946804->f_2657.f_21;
	Global_36637.f_45.f_350.f_22 = Global_1946804->f_2657.f_22;
	Global_36637.f_45.f_350.f_23 = Global_1946804->f_2657.f_23;
	Global_36637.f_45.f_350.f_24 = Global_1946804->f_2657.f_24;
	Global_36637.f_45.f_350.f_19 = Global_1946804->f_2657.f_19;
}

bool func_422(int iParam0)
{
	return func_606(func_605(iParam0));
}

void func_423(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_607(0);
	}
	if (bParam0)
	{
		func_216(8);
		func_216(512);
	}
	else
	{
		func_216(8);
		func_216(16);
	}
}

void func_424(bool bParam0, bool bParam1, bool bParam2)
{
	func_608(bParam0, 0, 0);
	func_227(bParam1, 1, bParam2, 0);
}

int func_425(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -1889597427;
		
		case 1:
			return -1130352927;
		
		case 2:
			return 389988485;
		
		case 3:
			return 1780904876;
		
		case 4:
			return 1367443060;
		
		case 5:
			return -1506259487;
		
		case 6:
			return -676503695;
		
		case 7:
			return 383349088;
		
		case 8:
			return -1292426046;
		
		case 9:
			return 1422688607;
		
		case 10:
			return 1108822547;
		
		case 11:
			return -338487716;
		
		case 12:
			return 1742327865;
		
		case 13:
			return 1600962399;
		
		case 14:
			return 1849504272;
		
		case 15:
			return 1672288269;
		
		case 16:
			return 1250092473;
		
		case 17:
			return -893163968;
		
		case 18:
			return -450913544;
		
		case 19:
			return -1364808185;
		
		case 20:
			return -1197751823;
		
		case 21:
			return 304805134;
		
		case 22:
			return -1505978566;
		
		case 23:
			return 1145151482;
		
		case 24:
			return -1176744536;
		
		case 25:
			return 673166414;
		
		case 26:
			return -207860920;
		
		case 27:
			return 99217379;
		
		case 28:
			return -735900586;
		
		case 29:
			return -426430150;
		
		case 30:
			return 1788623170;
		
		case 31:
			return -1130865351;
		
		case 32:
			return -1884748965;
		
		case 33:
			return -1586649372;
		
		case 34:
			return 788010710;
		
		case 35:
			return 1958421083;
		
		case 36:
			return -1944638739;
		
		case 37:
			return 1900541263;
		
		case 38:
			return -1489346253;
		
		case 39:
			return -358215195;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_426()
{
	int iVar0;
	
	Global_1946804->f_1378 = Global_1946804->f_1497;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*(Global_1946804->f_1378.f_1[iVar0 /*3*/]) = { *(Global_1946804->f_1497.f_1[iVar0 /*3*/]) };
		iVar0++;
	}
}

int func_427(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 22;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_91(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 37;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_91(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 12;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_91(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 29;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_91(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 30;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_91(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	iVar1 = 31;
	if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/] && func_91(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
	{
		iVar0++;
	}
	return iVar0;
}

void func_428(int iParam0)
{
	func_413(iParam0, 8, 6);
}

void func_429(int iParam0)
{
	func_609(&(Global_1946804->f_2589), iParam0);
}

void func_430(int iParam0, int iParam1)
{
	func_610(&(Global_1946804->f_2589), iParam0, iParam1);
}

void func_431(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_432(var uParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = 12;
	iVar2 = func_100(&(uParam0->f_1[iParam2 /*3*/]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_611(iParam2, 65536) && &uParam0->f_1[iVar1 /*3*/] == -452402570)
	{
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_430(iVar1, iVar3);
		}
	}
	if (func_523(-1586649372) && func_611(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
		(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
		if (bParam4)
		{
			func_430(iVar1, iVar3);
		}
	}
	switch (iVar2)
	{
		case 698653232:
			if (bParam1 == &Global_1946804->f_57[iParam2 /*11*/])
			{
				iVar1 = 12;
				if (&uParam0->f_1[iVar1 /*3*/] == 1516947474)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_430(iVar1, iVar3);
					}
				}
			}
			func_612(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		
		case 688587926:
			func_612(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
			iVar1 = 22;
			if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
			{
			}
			else
			{
				iVar0 = 16;
				if ((uParam0->f_1[iVar0 /*3*/])->f_1 == 1155669136 || (uParam0->f_1[iVar0 /*3*/])->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_430(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 525
				func_612(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1155669136)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = -1539589426;
					if (bParam4)
					{
						func_430(iVar1, iVar3);
					}
				}
				if ((uParam0->f_1[iVar1 /*3*/])->f_1 == 1530758430)
				{
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 1334603721;
					if (bParam4)
					{
						func_430(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 656
				func_612(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1170; //curOff = 691
				func_612(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
					(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
					if (bParam4)
					{
						func_430(iVar1, iVar3);
					}
				}
				Jump @1170; //curOff = 786
				func_612(uParam0, (1 && bParam4), 0, 1, bParam3);
				Jump @1170; //curOff = 807
				if (bParam1 == &Global_1946804->f_57[iParam2 /*11*/])
				{
					iVar1 = 37;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_430(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_430(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_100(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_430(iVar1, iVar3);
						}
					}
				}
				Jump @1170; //curOff = 1025
				iVar1 = 36;
				if (&uParam0->f_1[iParam2 /*3*/] != &Global_1946804->f_57[iParam2 /*11*/] && func_91(&(Global_1946804->f_1497.f_1[iVar1 /*3*/]), -1638171711))
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
				Jump @1170; //curOff = 1110
				iVar1 = 36;
				if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
				{
					uParam0->f_1[iParam2 /*3*/] = &Global_1946804->f_57[iParam2 /*11*/];
					(uParam0->f_1[iParam2 /*3*/])->f_1 = 0;
				}
			}
			switch (func_100(bParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_100(&(uParam0->f_1[iVar1 /*3*/])))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_430(iVar1, iVar3);
						}
					}
					break;
				
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_100(&(uParam0->f_1[iVar1 /*3*/])) || func_91(&(uParam0->f_1[iVar1 /*3*/]), 866047851))
					{
						uParam0->f_1[iVar1 /*3*/] = &Global_1946804->f_57[iVar1 /*11*/];
						(uParam0->f_1[iVar1 /*3*/])->f_1 = 0;
						if (bParam4)
						{
							func_430(iVar1, iVar3);
						}
					}
					break;
			}
		}

int func_433(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	var uVar0;
	
	uVar0 = func_613(0);
	if (iParam2 != 0 && func_614(bParam0, uVar0, iParam2, bParam3) != -1)
	{
		return iParam2;
	}
	if (func_615(bParam0, func_425(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_434(var uParam0, bool bParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	int iVar7;
	int iVar8;
	
	bVar6 = func_56() != -1;
	iVar7 = func_613(0);
	if (func_223(32768))
	{
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 39)
	{
		iVar0 = &Global_1946804->f_57.f_430[iVar2];
		if (iVar0 <= -1 || iVar0 >= 39)
		{
		}
		else
		{
			iVar5 = func_425(iVar0, 1);
			if (func_616(iVar5, 8))
			{
			}
			else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
			{
			}
			else if (func_616(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
			{
			}
			else
			{
				iVar4 = func_617(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
				if ((iVar1 + iVar4) > 31)
				{
					iVar3 = iVar2;
				}
				else
				{
					iVar1 = (iVar1 + iVar4);
					iVar2++;
				}
				iVar8 = func_618(uParam0);
				if (iVar3 > 0)
				{
					if (!func_223(524288))
					{
						func_216(524288);
						iVar1 = (iVar1 - iVar8);
					}
					iVar2 = iVar3;
					while (iVar2 <= 38)
					{
						iVar0 = &Global_1946804->f_57.f_430[iVar2];
						if (iVar0 <= -1 || iVar0 >= 39)
						{
						}
						else
						{
							iVar5 = func_425(iVar0, 1);
							if (func_616(iVar5, 8))
							{
							}
							else if (&(Global_1946804->f_57[iVar0 /*11*/])->f_2[0] == -1802376732 || &uParam0->f_1[iVar0 /*3*/] == 0)
							{
							}
							else if (func_616(iVar5, 6) || &uParam0->f_1[iVar0 /*3*/] == &Global_1946804->f_57[iVar0 /*11*/])
							{
							}
							else
							{
								iVar4 = func_617(&(uParam0->f_1[iVar0 /*3*/]), iVar5, iVar7, bVar6);
								if ((iVar1 + iVar4) > 31)
								{
									uParam0->f_1[iVar0 /*3*/] = &Global_1946804->f_57[iVar0 /*11*/];
									(uParam0->f_1[iVar0 /*3*/])->f_1 = 0;
									if (bParam1)
									{
										func_430(iVar0, iParam2);
									}
								}
								iVar1 = (iVar1 + iVar4);
							}
						}
						iVar2++;
					}
				}
				if ((iVar1 + iVar8) < 31)
				{
					func_412(524288);
				}
			}
		}
	}

void func_435(var uParam0, bool bParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	if (*uParam0 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_619(&(uParam0->f_2[iVar0 /*2*/]), bParam1, bParam2);
		iVar0++;
	}
	if (func_56() == -1)
	{
		if ((Global_40.f_7729 != 0 || !func_620(2, Global_26795.f_776)) || Global_1946804->f_1497 != func_621(0))
		{
			if (Global_40.f_7157[Global_40.f_7729 /*3*/] & 512 != 0)
			{
				Global_40.f_7157[Global_40.f_7729 /*3*/] = (&Global_40.f_7157[Global_40.f_7729 /*3*/] - Global_40.f_7157[Global_40.f_7729 /*3*/] & 4096);
				Global_40.f_7729 = 0;
				Global_1905941 = Global_40.f_7729;
				Global_40.f_7157[Global_40.f_7729 /*3*/] |= 4096;
				Global_1946804->f_1497 = func_621(Global_40.f_7729);
				Global_1946804->f_1378 = func_621(Global_40.f_7729);
				Global_26795.f_776 = 0;
				func_622(-1, 0, 6);
			}
		}
	}
	if (bParam3)
	{
		func_423(0, 1);
	}
}

bool func_436(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_437(struct<4> Param0)
{
	int iVar0;
	int iVar1;
	
	if (Global_1946804->f_852 >= 20)
	{
		return;
	}
	if (func_399(Param0))
	{
		iVar0 = 0;
		while (iVar0 < Global_1946804->f_852)
		{
			iVar1 = ((Global_1946804->f_853 + iVar0) % 20);
			if (((&Global_1946804->f_769[iVar1 /*4*/] == Param0 && (Global_1946804->f_769[iVar1 /*4*/])->f_2 == Param0.f_2) && (Global_1946804->f_769[iVar1 /*4*/])->f_3 == Param0.f_3) && (Global_1946804->f_769[iVar1 /*4*/])->f_1 == Param0.f_1)
			{
				return;
			}
			if (&Global_1946804->f_769[iVar1 /*4*/] == 34 && func_399(20))
			{
				return;
			}
			iVar0++;
		}
	}
	func_400(Param0);
	*(Global_1946804->f_769[Global_1946804->f_854 /*4*/]) = { Param0 };
	Global_1946804->f_852++;
	Global_1946804->f_854 = (Global_1946804->f_854 + 1 % 20);
	func_216(8);
}

bool func_438()
{
	return Global_1914319->f_17375;
}

int func_439()
{
	int iVar0;
	
	if (func_623())
	{
		iVar0 = TASK::_0xD04241BBF6D03A5E(PLAYER::PLAYER_PED_ID());
		return iVar0 != 0;
	}
	return 0;
}

var func_440()
{
	return &Global_1898068;
}

var func_441(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, var uParam10, var uParam11)
{
	var uVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	SCRIPTS::_0xDE544B7EC0C187CC(&uVar0);
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return uVar0;
	}
	if (func_624() != 0)
	{
		iVar1 = PLAYER::PLAYER_ID();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1225638->f_10;
	iVar6 = Global_1225638->f_14;
	bVar7 = true;
	iVar9 = uParam10;
	if (BUILTIN::VMAG2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_625());
				break;
			
			case -432403087:
				iVar8 = VOLUME::_0x10157BC3247FF3BA(vParam0, vParam3, vParam6, func_625());
				break;
			
			case -1612834106:
				iVar8 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(vParam0, vParam3, vParam6, func_625());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_626(PLAYER::GET_PLAYER_TEAM(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (&Global_1225638->f_21[iVar2])
		{
			iVar10 = &Global_1225638->f_120[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_627(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = PLAYER::GET_PLAYER_PED(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1225638->f_54[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_628(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && PED::_0xB655DB7582AEC805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (PLAYER::GET_PLAYER_TEAM(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_NAMESPACE26::_0x901E0DC25080C8B9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_629(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!VOLUME::_0xF256A75210C5C0EB(iVar8, ENTITY::GET_ENTITY_COORDS(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				SCRIPTS::_0x31010318BA9897AC(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		VOLUME::_0x43F867EF5C463A53(iVar8);
	}
	return uVar0;
}

int func_442(var uParam0, struct<18> Param1)
{
	if (!func_630(uParam0))
	{
		return 0;
	}
	*(uParam0->f_2[*uParam0 /*18*/]) = { Param1 };
	*uParam0++;
	return 1;
}

bool func_443()
{
	return !&Global_1911774;
}

void func_444(bool bParam0, int iParam1, var uParam2, var uParam3)
{
	Global_1911774->f_4[Global_1911774->f_3 /*4*/] = bParam0;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_1 = iParam1;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_2 = uParam2;
	(Global_1911774->f_4[Global_1911774->f_3 /*4*/])->f_3 = uParam3;
	if (Global_1911774->f_3 < 20)
	{
		Global_1911774->f_3++;
	}
}

char* func_445(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_446(bool bParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;
	
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(bParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @227; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @227; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @227; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @227; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = { *(Var3.f_2[iVar0 /*3*/]) };
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

char* func_447(char* sParam0, int iParam1)
{
	return MISC::_CREATE_VAR_STRING(42, "COLOR_STRING", MISC::_CREATE_COLOR_STRING(iParam1), sParam0);
}

var func_448(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, char* sParam6, int iParam7, int iParam8)
{
	struct<4> Var0;
	struct<7> Var13;
	var uVar20;
	
	Var0 = -2;
	Var0.f_1 = sParam5;
	Var0.f_2 = sParam6;
	Var0.f_3 = iParam7;
	Var0 = 450;
	Var13.f_1 = sParam0;
	Var13.f_2 = sParam1;
	Var13.f_3 = iParam2;
	Var13.f_4 = iParam3;
	Var13.f_5 = iParam4;
	Var13.f_6 = 0;
	uVar20 = _NAMESPACE71::_0xB249EBCB30DD88E0(&Var0, &Var13, iParam8);
	func_631(sParam0, sParam1, iParam2);
	return uVar20;
}

struct<2> func_449(int iParam0)
{
	struct<2> Var0;
	
	Var0 = iParam0;
	return Var0;
}

void func_450(bool bParam0, int iParam1)
{
	char* sVar0;
	
	sVar0 = 0;
	if (func_56() == -1)
	{
		if (func_174(43))
		{
			if (func_91(bParam0, 412399755))
			{
				func_502(-1791518714);
				if (func_503() == 0)
				{
					func_468(0, 10);
					sVar0 = func_632(bParam0, iParam1, 1);
					if (((bParam0 == 281887510 || bParam0 == -164081697) || bParam0 == -1161319399) || bParam0 == 728781265)
					{
						if (func_505(bParam0) < func_506(bParam0))
						{
							func_178(43, bParam0, iParam1, -1791518714, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (func_174(44))
		{
			if (func_91(bParam0, 709057512))
			{
				func_502(-2087881550);
				if (func_503() == 1)
				{
					func_468(0, 10);
					sVar0 = func_632(bParam0, iParam1, 2);
					if ((bParam0 == -222563712 || bParam0 == 1794857344) || bParam0 == 1952409553)
					{
						if (func_505(bParam0) < func_506(bParam0))
						{
							func_178(43, bParam0, iParam1, -2087881550, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_174(45))
		{
			if (func_91(bParam0, -1478961327))
			{
				func_502(1908068621);
				if (func_503() == 2)
				{
					func_468(0, 10);
					sVar0 = func_632(bParam0, iParam1, 4);
					if (((bParam0 == 2116770557 || bParam0 == -651064726) || bParam0 == -404270094) || bParam0 == 2093126853)
					{
						if (func_505(bParam0) < func_506(bParam0))
						{
							func_178(43, bParam0, iParam1, 1908068621, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_174(46))
		{
			if (func_91(bParam0, -1238404098))
			{
				func_502(1611247019);
				if (func_503() == 3)
				{
					func_468(0, 10);
					sVar0 = func_632(bParam0, iParam1, 8);
					if (((bParam0 == 2085530337 || bParam0 == -150591160) || bParam0 == -323969289) || bParam0 == 1504361882)
					{
						if (func_505(bParam0) < func_506(bParam0))
						{
							func_178(43, bParam0, iParam1, 1611247019, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
		if (!func_174(47))
		{
			if (func_91(bParam0, 1160548794))
			{
				func_502(1319635688);
				if (func_503() == 4)
				{
					func_468(0, 10);
					sVar0 = func_632(bParam0, iParam1, 16);
					if (((bParam0 == -1521783510 || bParam0 == 1714875242) || bParam0 == 927763737) || bParam0 == 1019229063)
					{
						if (func_505(bParam0) < func_506(bParam0))
						{
							func_178(43, bParam0, iParam1, 1319635688, sVar0, 1, -1, 0);
						}
					}
				}
			}
		}
	}
}

bool func_451(int iParam0, int iParam1)
{
	if (func_56() != -1)
	{
		return MISC::IS_BIT_SET(&(Global_36637.f_1444[iParam0]), iParam1);
	}
	return MISC::IS_BIT_SET(&(Global_40.f_7832[iParam0]), iParam1);
}

int func_452(int iParam0)
{
	if (func_56() != -1)
	{
		if (func_454(iParam0, 4))
		{
			return 0;
		}
	}
	else if (func_454(iParam0, 2))
	{
		return 0;
	}
	return 1;
}

int func_453(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar1 = NETWORK::GET_CLOUD_TIME_AS_INT();
	if (!func_454(iParam0, 65536) && !func_454(iParam0, 32768))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if ((Global_40.f_7756[iVar0 /*3*/])->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_454(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0 /*3*/] - iVar1);
			if ((Global_40.f_7756[iVar0 /*3*/])->f_1 >= iVar3)
			{
				return 1;
			}
			if (iVar2 < 1800 && func_454(iParam0, 32768))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

bool func_454(int iParam0, int iParam1)
{
	return ((Global_1905944->f_22[iParam0 /*9*/])->f_2 && iParam1) != 0;
}

bool func_455(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_456()
{
	return Global_1905944->f_5694;
}

bool func_457(bool bParam0)
{
	return func_43(bParam0) == -427144552;
}

int func_458(bool bParam0)
{
	var uVar0;
	
	if (func_56() != -1)
	{
		return 0;
	}
	if (func_275(bParam0, 1048576))
	{
		return 0;
	}
	if (WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return func_464(bParam0, &uVar0, 1, 0, 0);
	}
	return func_15(bParam0, 1, 0);
}

void func_459(bool bParam0, int iParam1, int iParam2, var uParam3, int iParam4)
{
	int iVar0;
	
	if (func_43(bParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_279(bParam0, 0);
	if (!WEAPON::IS_WEAPON_VALID(iVar0))
	{
		return;
	}
	if (iParam2 || !func_475(iVar0))
	{
		if (func_56() == -1)
		{
			func_280(iVar0);
		}
		if (iParam2 || (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iVar0, 0, 0) && func_45(bParam0, 0, 0) == 0))
		{
			if (!*uParam3 && !iParam4 == 1248274121)
			{
				func_253(bParam0, iParam1, 0, 0, 0);
				AUDIO::PLAY_SOUND_FRONTEND("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*uParam3 = 1;
			}
		}
	}
}

void func_460(bool bParam0, var uParam1)
{
	int iVar0;
	
	if (func_91(bParam0, 58855631))
	{
		func_633(bParam0, -915411861, &iVar0, 1);
		*uParam1 = (*uParam1 * iVar0);
	}
}

int func_461(bool bParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (!func_256(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return INVENTORY::_0xE80E50BEE276A54A(bParam0, uParam1->f_4);
	}
	return INVENTORY::_0xADDD1E7C0ECF7D95(func_140(bParam3), bParam0);
}

int func_462(bool bParam0, bool bParam1)
{
	if (func_284(bParam0))
	{
		return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, bParam0);
	}
	return INVENTORY::_0xE787F05DFC977BDE(func_140(bParam1), bParam0, 0);
}

int func_463()
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (!func_173())
	{
		return 0;
	}
	if (!func_189(((*Global_1835011)[1 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_189(((*Global_1835011)[2 /*74*/])->f_1, 1) && func_189(((*Global_1347702)[120 /*49*/])->f_15, 1)) && !func_189(((*Global_1835011)[4 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_189(((*Global_1835011)[37 /*74*/])->f_1, 1) && !func_189(((*Global_1835011)[39 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_189(((*Global_1835011)[57 /*74*/])->f_1, 1) && !func_189(((*Global_1835011)[60 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_189(((*Global_1835011)[26 /*74*/])->f_1, 1) && !func_189(((*Global_1347702)[67 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if ((func_189(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_189(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_189(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if (func_189(((*Global_1835011)[75 /*74*/])->f_1, 1) && !func_189(((*Global_1347702)[1 /*49*/])->f_15, 1))
	{
		return 1;
	}
	if (func_189(((*Global_1835011)[76 /*74*/])->f_1, 1) && !func_189(((*Global_1835011)[77 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_189(((*Global_1835011)[40 /*74*/])->f_1, 1) && func_189(((*Global_1835011)[41 /*74*/])->f_1, 1)) && !func_189(((*Global_1835011)[44 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_189(((*Global_1835011)[62 /*74*/])->f_1, 1) && func_189(((*Global_1835011)[63 /*74*/])->f_1, 1)) && !func_189(((*Global_1835011)[64 /*74*/])->f_1, 1))
	{
		return 1;
	}
	if ((func_189(((*Global_1835011)[65 /*74*/])->f_1, 1) && func_189(((*Global_1835011)[66 /*74*/])->f_1, 1)) && !func_189(((*Global_1835011)[67 /*74*/])->f_1, 1))
	{
		return 1;
	}
	return 0;
}

int func_464(bool bParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	struct<4> Var0;
	struct<10> Var4;
	var uVar26;
	int iVar27;
	int iVar28;
	
	func_634(&bParam0);
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (!func_256(0))
	{
		bParam3 = true;
	}
	if (func_457(bParam0) && WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_0xD955FEE4B87AFA07(bParam0))
		{
			Var0 = { func_337(0) };
			Var4.f_9 = -1591664384;
			if (!func_348(bParam0, &Var0, 1728382685, 0))
			{
				return 0;
			}
			else if (func_349(bParam0, &Var4, 1728382685))
			{
				return 0;
			}
			if (func_347(bParam0, 1))
			{
				if (!func_348(bParam0, &Var0, -649335959, 0))
				{
					return 0;
				}
				else if (func_349(bParam0, &Var4, -649335959))
				{
					return 0;
				}
			}
		}
		else if (!func_635(bParam0, &uVar26, 0))
		{
			return 0;
		}
		return 1;
	}
	iVar27 = func_461(bParam0, uParam1, bParam3, bParam4);
	if (iVar27 < 0)
	{
		return 0;
	}
	else if (iVar27 == 0)
	{
		return 1;
	}
	if (bParam3)
	{
		iVar28 = func_237(bParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = INVENTORY::_0xE787F05DFC977BDE(func_140(bParam4), bParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return 1;
	}
	return 0;
}

int func_465()
{
	return COLLECTION::_0x62CAB7DB62EAD434(-2076669067, 0);
}

bool func_466(int iParam0)
{
	return COLLECTION::_0xEC3959E9950BF56B(iParam0);
}

void func_467(int iParam0)
{
	int iVar0;
	float fVar1;
	
	if (func_56() != -1)
	{
		return;
	}
	iVar0 = func_636(iParam0);
	fVar1 = func_637(iParam0);
	if ((Global_1347477->f_117 || !func_276(31)) || !func_638(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_639(iVar0) >= 7)
	{
		return;
	}
	if (iVar0 == 1)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_57));
	}
	else if (iVar0 == 0)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_55));
	}
	else if (iVar0 == 2)
	{
		fVar1 = (fVar1 * (1f + Global_40.f_11095.f_56));
	}
	fVar1 = (fVar1 * IntToFloat(Global_1347477->f_182));
	fVar1 = BUILTIN::TO_FLOAT(BUILTIN::ROUND(fVar1));
	func_640(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_448(MISC::_CREATE_VAR_STRING(6, func_641(iParam0), fVar1), "itemtype_textures", func_642(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_468(bool bParam0, int iParam1)
{
	if (MISC::_0x5FC9357C26DAEFCE())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_643(&Global_0, 8);
	}
	if (!func_173() || func_56() != -1)
	{
		return;
	}
	func_643(&Global_0, 1);
}

int func_469(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		
		case 1:
			return -1021394391;
		
		case 2:
			return -987306668;
		
		case 3:
			return -1028735103;
		
		case 4:
			return 515229791;
		
		case 5:
			return -1230863414;
		
		case 6:
			return 232875659;
		
		case 7:
			return 1423129537;
		
		case 8:
			return -435742319;
		
		case 9:
			return -1854702679;
		
		case 10:
			return 1265323898;
		
		case 11:
			return -479775696;
		
		default:
			break;
	}
	return 0;
}

int func_470(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_471(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return MISC::IS_BIT_SET(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_472(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	var uVar3;
	
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	MISC::SET_BIT(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_473(int iParam0)
{
	bool bVar0;
	
	switch (iParam0)
	{
		case 6:
			break;
		
		case 7:
			break;
		
		case 8:
			break;
		
		case 9:
			break;
		
		case 11:
			func_644(1);
			break;
		
		case 14:
			break;
		
		case 15:
			break;
		
		case 16:
			break;
		
		case 17:
			break;
		
		case 18:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(5, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(4, 0);
			func_645(1);
			break;
		
		case 19:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(1, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(0, 0);
			func_645(2);
			break;
		
		case 20:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(3, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(2, 0);
			func_645(3);
			break;
		
		case 21:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(7, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(6, 0);
			break;
		
		case 22:
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(9, 0);
			UITUTORIAL::_UITUTORIAL_SET_RPG_ICON_VISIBILITY(8, 0);
			break;
		
		case 31:
			break;
		
		case 10:
			break;
		
		case 12:
			break;
		
		case 13:
			break;
		
		case 32:
			break;
		
		case 33:
			func_646(1);
			break;
		
		case 34:
			func_647(1);
			break;
		
		case 35:
			func_648(1);
			break;
		
		case 36:
			break;
		
		case 37:
			func_649(0);
			break;
		
		case 38:
			func_650(0);
			break;
		
		case 39:
			func_651(0);
			break;
		
		case 40:
			break;
		
		case 41:
			break;
		
		case 42:
			break;
		
		case 43:
			break;
		
		case 1:
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		
		case 2:
			if ((!&Global_1879534 && func_173()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 2))
			{
				func_380("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 2);
			func_128(586, 0);
			break;
		
		case 3:
			if ((!&Global_1879534 && func_173()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 3))
			{
				func_380("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 3);
			func_128(587, 0);
			break;
		
		case 4:
			if ((!&Global_1879534 && func_173()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 4))
			{
				func_380("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 4);
			func_128(588, 0);
			break;
		
		case 5:
			if ((!&Global_1879534 && func_173()) && PLAYER::_0x8A0643B0B4CA276B(PLAYER::GET_PLAYER_INDEX(), 5))
			{
				func_380("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 1, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 2, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 3, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 4, 0);
			PLAYER::_0x2797B8D66DD0EBB8(PLAYER::GET_PLAYER_INDEX(), 5, 0);
			PLAYER::_0xF0FE8E790BFEB5BB(PLAYER::GET_PLAYER_INDEX(), 5);
			func_128(589, 0);
			break;
		
		case 24:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-200143754, true);
			UNLOCK::_UNLOCK_SET_VISIBLE(-200143754, true);
			WEAPON::_0x83B8D50EB9446BBA(PLAYER::PLAYER_PED_ID(), 1);
			if (func_56() == -1)
			{
				if (!func_523(99217379) || func_652(99217379) == 2110595215)
				{
					if (func_480())
					{
						bVar0 = -1515874150;
					}
					else
					{
						bVar0 = 899611344;
					}
					if (!func_15(bVar0, 1, 0))
					{
						func_325(bVar0, 1, 752097756);
					}
					func_110(Global_35, bVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		
		case 48:
			if (func_56() == -1)
			{
				if (!func_15(1013902307, 1, 0))
				{
					func_325(1013902307, 1, 752097756);
				}
			}
			break;
		
		case 50:
			if (func_56() == -1)
			{
				if (!func_15(1013902307, 1, 0))
				{
					func_325(1013902307, 1, 752097756);
				}
				if (!func_15(142640135, 1, 0))
				{
					func_325(142640135, 1, 752097756);
				}
			}
			break;
		
		case 49:
			if (func_56() == -1)
			{
				if (!func_15(786809402, 1, 0))
				{
					func_325(786809402, 1, 752097756);
				}
			}
			break;
		
		case 51:
			if (func_56() == -1)
			{
				if (!func_15(786809402, 1, 0))
				{
					func_325(786809402, 1, 752097756);
				}
				if (!func_15(-518019409, 1, 0))
				{
					func_325(-518019409, 1, 752097756);
				}
			}
			break;
		
		case 23:
			PLAYER::_0x5B9813ECF7633FE8(0);
			break;
		
		case 25:
			break;
		
		case 26:
			break;
		
		case 27:
			break;
		
		case 28:
			break;
		
		case 29:
			break;
		
		case 30:
			break;
		
		case 44:
			break;
		
		case 45:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-843169622, true);
			Global_1935630->f_47 = 1;
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Enable", true, true);
			AUDIO::SET_AMBIENT_ZONE_LIST_STATE_PERSISTENT("AZL_Endlesss_Summer_Disable", false, true);
			break;
		
		case 46:
			func_653();
			break;
		
		case 47:
			PLAYER::_0xA63FCAD3A6FEC6D2(PLAYER::GET_PLAYER_INDEX(), 1);
			break;
		
		case 52:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-78935213, true);
			break;
		
		case 53:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-384786155, true);
			break;
		
		case 54:
			UNLOCK::_UNLOCK_SET_UNLOCKED(296662302, true);
			break;
		
		case 55:
			UNLOCK::_UNLOCK_SET_UNLOCKED(-1871453000, true);
			break;
		
		case 56:
			UNLOCK::_UNLOCK_SET_UNLOCKED(1397349651, true);
			break;
	}
}

int func_474(bool bParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_VISIBLE(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_475(bool bParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x865F36299079FB75(bParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
	{
		return 1;
	}
	return 0;
}

int func_476(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 1782082944;
		
		case 1:
			return 1704602624;
		
		case 2:
			return 1214181762;
		
		case 3:
			return -430578371;
		
		case 4:
			return -730381952;
		
		case 5:
			return -253503777;
		
		case 6:
			return 1352275534;
		
		case 7:
			return 1666399168;
		
		case 8:
			return -1911121386;
		
		case 9:
			return 1756656691;
		
		case 10:
			return -1774867076;
		
		case 11:
			return -421952220;
		
		case 12:
			return -1087003323;
		
		case 13:
			return 1231618917;
		
		case 14:
			return -1183777174;
		
		case 15:
			return -841767082;
		
		case 16:
			return 1043717005;
		
		case 17:
			return 142663787;
		
		case 18:
			return 1718143051;
		
		case 19:
			return -6605744;
		
		case 20:
			return 953047564;
		
		case 21:
			return 769706682;
		
		case 22:
			return 1635590003;
		
		case 23:
			return -2047978619;
		
		case 24:
			return -586319254;
		
		case 25:
			return 249896112;
		
		case 26:
			return -1060513333;
		
		case 27:
			return 1317351007;
		
		case 28:
			return -500478573;
		
		case 29:
			return -806573802;
		
		case 30:
			return -1109949204;
		
		case 31:
			return -740156546;
		
		case 32:
			return -684532710;
		
		case 33:
			return 1158805436;
		
		case 34:
			return -559473670;
		
		case 35:
			return -797147251;
		
		case 36:
			return -382216265;
		
		case 37:
			return 1419177114;
		
		case 38:
			return 1704297235;
		
		case 39:
			return -1139016418;
		
		case 40:
			return 897705377;
		
		case 41:
			return 17961769;
		
		case 42:
			return 205582207;
		
		case 43:
			return 900740963;
		
		case 44:
			return -1369589344;
		
		case 45:
			return -1695823795;
		
		case 46:
			return -41453074;
		
		case 47:
			return 539767227;
		
		case 48:
			return 1210490314;
		
		case 49:
			return -399684751;
		
		case 50:
			return 2138893455;
		
		case 51:
			return -1617010487;
		
		case 52:
			return -832377028;
		
		case 53:
			return -428040245;
		
		case 54:
			return 1279288897;
		
		case 55:
			return -594897905;
		
		case 56:
			return -1360459240;
		
		case 57:
			return 1838428396;
		
		case 58:
			return -1467846997;
		
		case 59:
			return -490610263;
		
		case 60:
			return -1885413079;
		
		case 61:
			return 708884155;
		
		case 62:
			return -134459952;
		
		case 63:
			return -1912136700;
		
		case 64:
			return -1268031552;
		
		case 65:
			return 1177953227;
		
		case 66:
			return 2130805296;
		
		case 67:
			return 38093490;
		
		case 68:
			return -269153218;
		
		case 69:
			return -1995068011;
		
		case 70:
			return -164284834;
		
		case 71:
			return 1446463345;
		
		case 72:
			return 1501315823;
		
		case 73:
			return -750379482;
		
		case 74:
			return -929560937;
		
		case 75:
			return 608323241;
		
		case 76:
			return 1030796013;
		
		case 77:
			return 1915057434;
		
		case 78:
			return -1582276476;
		
		case 79:
			return 692059311;
		
		case 80:
			return 2062839241;
		
		case 81:
			return -1884531872;
		
		case 82:
			return -866434534;
		
		case 83:
			return -1252192421;
		
		case 84:
			return 1243288963;
		
		case 85:
			return -1953772189;
		
		case 86:
			return 754411745;
		
		case 87:
			return 545309006;
		
		case 88:
			return -1089810811;
		
		case 89:
			return 1957869400;
		
		case 90:
			return -241412332;
		
		case 91:
			return -1548010959;
		
		case 92:
			return 550150488;
		
		case 93:
			return 946565453;
		
		case 94:
			return 434443248;
		
		case 95:
			return -1709914938;
		
		case 96:
			return 366686112;
		
		case 97:
			return -1370063350;
		
		case 98:
			return 2126829550;
		
		case 99:
			return 226552910;
		
		case 100:
			return 721193431;
		
		case 101:
			return -315672460;
		
		case 102:
			return 623544501;
		
		case 103:
			return 259556714;
		
		case 104:
			return -2125361825;
		
		case 105:
			return 1078230356;
		
		case 106:
			return 1885364811;
		
		case 107:
			return 1630382737;
		
		case 108:
			return 1738245512;
		
		case 109:
			return 1540262216;
		
		case 110:
			return 1016871472;
		
		case 111:
			return 13829069;
		
		case 112:
			return 737051352;
		
		case 113:
			return 1734614610;
		
		case 114:
			return -208715295;
		
		case 115:
			return 1435062936;
		
		case 116:
			return 1483055553;
		
		case 117:
			return 380335002;
		
		case 118:
			return -1079385677;
		
		case 119:
			return 676610411;
		
		case 120:
			return 2145419552;
		
		case 121:
			return 657238733;
		
		case 122:
			return 1850579281;
		
		case 123:
			return -1923957384;
		
		case 124:
			return -1142828108;
		
		case 125:
			return -1400618531;
		
		case 126:
			return -1433857135;
		
		case 127:
			return 209987206;
		
		case 128:
			return 1686943047;
		
		case 129:
			return -59178517;
		
		case 130:
			return 2134884601;
		
		case 131:
			return 651707517;
		
		case 132:
			return -633788535;
		
		case 133:
			return 116394463;
		
		case 134:
			return -1196973875;
		
		case 135:
			return 801752086;
		
		case 136:
			return 184475332;
		
		case 137:
			return -1880922659;
		
		case 138:
			return -898138634;
		
		case 139:
			return -2107418444;
		
		case 140:
			return -679970099;
		
		case 141:
			return -1531392549;
		
		case 142:
			return 1612483376;
		
		case 143:
			return 463930900;
		
		case 144:
			return -632148238;
		
		case 145:
			return 55303249;
		
		case 146:
			return 2108322089;
		
		case 147:
			return -1358896714;
		
		case 148:
			return 74475632;
		
		case 149:
			return -28710953;
		
		case 150:
			return -1791599168;
		
		case 151:
			return 1605938169;
		
		case 152:
			return 1255242276;
		
		case 153:
			return 636467727;
		
		case 154:
			return -1567688525;
		
		case 155:
			return -77886679;
		
		case 156:
			return -1057900679;
		
		case 157:
			return -1960888134;
		
		case 158:
			return -1719717295;
		
		case 159:
			return -1779244911;
		
		case 160:
			return -670540863;
		
		case 161:
			return 223362311;
		
		case 162:
			return 1150824567;
		
		case 163:
			return 974471191;
		
		case 164:
			return 1989683968;
		
		case 165:
			return 254804477;
		
		case 166:
			return 192057609;
		
		case 167:
			return 1553957817;
		
		case 168:
			return 2099829015;
		
		case 169:
			return -840300007;
		
		case 170:
			return -1948423372;
		
		case 171:
			return 981083654;
		
		case 172:
			return 1283289876;
		
		case 173:
			return -606884489;
		
		case 174:
			return -100418572;
		
		case 175:
			return 663645231;
		
		case 176:
			return 1442217033;
		
		case 177:
			return 1410986244;
		
		case 178:
			return 847409839;
		
		case 179:
			return 923926911;
		
		case 180:
			return 109995826;
		
		case 181:
			return -747412737;
		
		case 182:
			return 1114341727;
		
		case 183:
			return -539456939;
		
		case 184:
			return 45887121;
		
		case 185:
			return 913271624;
		
		case 186:
			return -1652812715;
		
		case 187:
			return -1791365775;
		
		case 188:
			return -979299941;
		
		case 189:
			return 713062001;
		
		case 190:
			return -575045963;
		
		case 191:
			return 1852965262;
		
		case 192:
			return -1398836354;
		
		case 193:
			return -1829885298;
		
		case 194:
			return -1773850357;
		
		case 195:
			return -564258009;
		
		case 196:
			return 2016532685;
		
		case 197:
			return -1070563798;
		
		case 198:
			return -1619221343;
		
		case 199:
			return -345571691;
		
		case 200:
			return 544288390;
		
		case 201:
			return 159578294;
		
		case 202:
			return -76852849;
		
		case 203:
			return 1110295244;
		
		case 204:
			return 2104563477;
		
		case 205:
			return 1947827651;
		
		case 206:
			return -933072766;
		
		case 207:
			return 2104388648;
		
		case 208:
			return -1677140601;
		
		case 209:
			return -2133097881;
		
		case 210:
			return -826678792;
		
		case 211:
			return -513522325;
		
		case 212:
			return 1970588249;
		
		case 213:
			return -2080032591;
		
		case 214:
			return 1758847745;
		
		case 215:
			return 895010282;
		
		case 216:
			return 1786352060;
		
		case 217:
			return -833319691;
		
		case 218:
			return 1591329969;
		
		case 219:
			return 2123222014;
		
		case 220:
			return -1578397674;
		
		case 221:
			return 1473261684;
		
		case 222:
			return -241855024;
		
		case 223:
			return 12999093;
		
		case 224:
			return -6796437;
		
		case 225:
			return -268116367;
		
		case 226:
			return -636470867;
		
		case 227:
			return 1737668280;
		
		case 228:
			return 892807236;
		
		case 229:
			return -733247890;
		
		case 230:
			return 24047176;
		
		case 231:
			return -1561999014;
		
		case 232:
			return -2052774042;
		
		case 233:
			return -997150586;
		
		case 234:
			return -1189569496;
		
		case 235:
			return 46488141;
		
		case 236:
			return 1046566686;
		
		case 237:
			return 325139909;
		
		case 238:
			return -1585141069;
		
		case 239:
			return 802754820;
		
		case 240:
			return 1415981582;
		
		case 241:
			return -1886147520;
		
		case 242:
			return 654877947;
		
		case 243:
			return -415648720;
		
		case 244:
			return 1221327846;
		
		case 245:
			return 923162715;
		
		case 246:
			return 625423581;
		
		case 247:
			return 326668608;
		
		case 248:
			return 669530755;
		
		case 249:
			return 429759982;
		
		case 250:
			return -2111934838;
		
		case 251:
			return 1886178087;
		
		case 252:
			return 1587783573;
		
		case 253:
			return -279722001;
		
		case 254:
			return 1310070322;
		
		case 255:
			return 724026534;
		
		case 256:
			return 137387616;
		
		case 257:
			return -653439684;
		
		case 258:
			return 1376835592;
		
		case 259:
			return -1824203570;
		
		case 260:
			return -1654197998;
		
		case 261:
			return 798987653;
		
		case 262:
			return 976923323;
		
		case 263:
			return 1167442289;
		
		case 264:
			return 986998820;
		
		case 265:
			return -2119169513;
		
		case 266:
			return -2015960939;
		
		case 267:
			return -1287636759;
		
		case 268:
			return -706917073;
		
		case 269:
			return -2166805;
		
		case 270:
			return -1391602433;
		
		case 271:
			return 1782075221;
		
		case 272:
			return 1282544585;
		
		case 273:
			return 1732594027;
		
		case 274:
			return -1058817012;
		
		case 275:
			return 1090546265;
		
		case 276:
			return -1783120823;
		
		case 277:
			return -1535745896;
		
		case 278:
			return -2086922122;
		
		case 279:
			return -1675198649;
		
		case 280:
			return 1189497682;
		
		case 281:
			return -1565675519;
		
		case 282:
			return -268973591;
		
		case 283:
			return 1039159916;
		
		case 284:
			return 1111816631;
		
		case 285:
			return 405591388;
		
		case 286:
			return 897456793;
		
		case 287:
			return 104187473;
		
		case 288:
			return 773808542;
		
		case 289:
			return -1120669954;
		
		case 290:
			return -1389278274;
		
		case 291:
			return 552979403;
		
		case 292:
			return -1571578784;
		
		case 293:
			return -708312114;
		
		case 294:
			return 688823508;
		
		case 295:
			return -1622147240;
		
		case 296:
			return 830292162;
		
		case 297:
			return 226276782;
		
		case 298:
			return -678416628;
		
		case 299:
			return -1098528034;
		
		case 300:
			return 316207340;
		
		case 301:
			return -1909200748;
		
		case 302:
			return -939652363;
		
		case 303:
			return -1990194462;
		
		case 304:
			return -375447933;
		
		case 305:
			return 537014919;
		
		case 306:
			return 1784584921;
		
		case 307:
			return 1084182731;
		
		case 308:
			return -1045471300;
		
		case 309:
			return 1617414719;
		
		case 310:
			return -787761753;
		
		case 311:
			return -490616606;
		
		case 312:
			return 1491346514;
		
		case 313:
			return -1311702610;
		
		case 314:
			return -904250715;
		
		case 315:
			return 1034665895;
		
		case 316:
			return -101524555;
		
		case 317:
			return 1419152594;
		
		case 318:
			return -451359317;
		
		case 319:
			return -1915385310;
		
		case 320:
			return 1315162488;
		
		case 321:
			return -361152079;
		
		case 322:
			return -2041626192;
		
		case 323:
			return -2077812539;
		
		case 324:
			return -1371514637;
		
		case 325:
			return 1730017037;
		
		case 326:
			return 892816668;
		
		case 327:
			return -1994943603;
		
		case 328:
			return 603133554;
		
		case 329:
			return -30160144;
		
		case 330:
			return -1248299493;
		
		case 331:
			return 727393558;
		
		case 332:
			return 755611221;
		
		case 333:
			return -170255458;
		
		case 334:
			return 1011151573;
		
		case 335:
			return 1122339631;
		
		case 336:
			return 454815308;
		
		case 337:
			return 990701735;
		
		case 338:
			return -246340825;
		
		case 339:
			return -1410671073;
		
		case 340:
			return 1547608292;
		
		case 341:
			return -714132970;
		
		case 342:
			return 732290690;
		
		case 343:
			return 971340545;
		
		case 344:
			return -234132662;
		
		case 345:
			return -2143057988;
		
		case 346:
			return -993947465;
		
		case 347:
			return -486552269;
		
		case 348:
			return -1156317860;
		
		case 349:
			return 1229625803;
		
		case 350:
			return -388596167;
		
		case 351:
			return -1204639465;
		
		case 352:
			return -1384685096;
		
		case 353:
			return -2026728113;
		
		case 354:
			return -1228057307;
		
		case 355:
			return 1835126290;
		
		case 356:
			return 1890833594;
		
		case 357:
			return -751549960;
		
		case 358:
			return -1682270750;
		
		case 359:
			return -1839865333;
		
		case 360:
			return -1990383629;
		
		case 361:
			return 1712094016;
		
		case 362:
			return 1532953697;
		
		case 363:
			return 1620318083;
		
		case 364:
			return -307230331;
		
		case 365:
			return -1034549620;
		
		case 366:
			return -1293064293;
		
		case 367:
			return -1540142553;
		
		case 368:
			return -1769886012;
		
		case 369:
			return -1983081126;
		
		case 370:
			return -1106117124;
		
		case 371:
			return -1873108338;
		
		case 372:
			return -2097543219;
		
		case 373:
			return 155413195;
		
		case 374:
			return -1162387149;
		
		case 375:
			return 1728382685;
		
		case 376:
			return -649335959;
		
		case 377:
			return -1876502240;
		
		case 378:
			return -2107032155;
		
		case 379:
			return 619103418;
		
		case 380:
			return 1355448197;
		
		case 381:
			return 1681762005;
		
		case 382:
			return 1026887814;
		
		case 383:
			return 354352628;
		
		case 384:
			return 1519366642;
		
		case 385:
			return -82757515;
		
		case 386:
			return 386306655;
		
		case 387:
			return 1243962119;
		
		case 388:
			return 756214903;
		
		case 389:
			return -718417579;
		
		case 390:
			return -1445516411;
		
		case 391:
			return -672392892;
		
		case 392:
			return 1465341584;
		
		case 393:
			return -427758369;
		
		case 394:
			return -735647142;
		
		case 395:
			return 1535838048;
		
		case 396:
			return -602272282;
		
		case 397:
			return 2051264661;
		
		case 398:
			return 487172188;
		
		case 399:
			return 282270687;
		
		case 400:
			return 1607708943;
		
		case 401:
			return 1686264939;
		
		case 402:
			return 314786149;
		
		case 403:
			return 1402841185;
		
		case 404:
			return 1099170772;
		
		case 405:
			return 2125676786;
		
		case 406:
			return -363896735;
		
		case 407:
			return -468790222;
		
		case 408:
			return -1779133048;
		
		case 409:
			return 1732537631;
		
		case 410:
			return 1755095401;
		
		case 411:
			return 835771095;
		
		case 412:
			return 1963317232;
		
		case 413:
			return 259627919;
		
		case 414:
			return 1299075397;
		
		case 415:
			return -1509094230;
		
		case 416:
			return 61132362;
		
		case 417:
			return 1549741908;
		
		case 418:
			return 288484254;
		
		case 419:
			return -1877032947;
		
		case 420:
			return -1395676456;
		
		case 421:
			return 1136146715;
		
		case 422:
			return 468034421;
		
		case 423:
			return 1079459546;
		
		case 424:
			return -140369351;
		
		case 425:
			return 1822341990;
		
		case 426:
			return 1219701681;
		
		case 427:
			return 1601295268;
		
		case 428:
			return -1692460667;
		
		case 429:
			return 1471419228;
		
		case 430:
			return 907446160;
		
		case 431:
			return -1126482585;
		
		case 432:
			return 1911050315;
		
		case 433:
			return -1343525599;
		
		case 434:
			return 1261891225;
		
		case 435:
			return 763162704;
		
		case 436:
			return 1335861197;
		
		case 437:
			return 526744654;
		
		case 438:
			return -1177461517;
		
		case 439:
			return -241638635;
		
		case 440:
			return 1024262875;
		
		case 441:
			return 853355463;
		
		case 442:
			return -337288221;
		
		case 443:
			return 361381308;
		
		case 444:
			return -1264898804;
		
		case 445:
			return -585289073;
		
		case 446:
			return 1423542233;
		
		case 447:
			return -948489286;
		
		case 448:
			return 2063859257;
		
		case 449:
			return -1652627327;
		
		case 450:
			return -1959697839;
		
		case 451:
			return -1532267859;
		
		case 452:
			return -1410062763;
		
		case 453:
			return -901428716;
		
		case 454:
			return -1628873469;
		
		case 455:
			return 144855571;
		
		case 456:
			return -617589883;
		
		case 457:
			return -1306457086;
		
		case 458:
			return 1713542477;
		
		case 459:
			return -305542365;
		
		case 460:
			return 1985390213;
		
		case 461:
			return -2145069367;
		
		case 462:
			return -1674390752;
		
		case 463:
			return -2117214398;
		
		case 464:
			return 1880805647;
		
		case 465:
			return -62390436;
		
		case 466:
			return 1815288415;
		
		case 467:
			return 196214097;
		
		case 468:
			return -201958220;
		
		case 469:
			return 1400281261;
		
		case 470:
			return 1601515402;
		
		case 471:
			return -940704970;
		
		case 472:
			return -548371721;
		
		case 473:
			return -1022384613;
		
		case 474:
			return -357406394;
		
		case 475:
			return 1077068189;
		
		case 476:
			return -782241404;
		
		case 477:
			return 1669853467;
		
		case 478:
			return 1592019450;
		
		case 479:
			return 635273153;
		
		case 480:
			return -1559225678;
		
		case 481:
			return -266425508;
		
		case 482:
			return 1117400455;
		
		case 483:
			return 454332195;
		
		case 484:
			return -1328061889;
		
		case 485:
			return 561650932;
		
		case 486:
			return 256105670;
		
		case 487:
			return 1976779618;
		
		case 488:
			return -269095126;
		
		case 489:
			return 2145617267;
		
		case 490:
			return 1150213537;
		
		case 491:
			return 1598825281;
		
		case 492:
			return -712527121;
		
		case 493:
			return 1308553072;
		
		case 494:
			return 852866398;
		
		case 495:
			return -1794417972;
		
		case 496:
			return 293062146;
		
		case 497:
			return 95360094;
		
		case 498:
			return 807631773;
		
		case 499:
			return 1603958275;
		
		case 500:
			return 860052020;
		
		case 501:
			return -1885979781;
		
		case 502:
			return 746147970;
		
		case 503:
			return 666663006;
		
		case 504:
			return -2096186453;
		
		case 505:
			return 859409444;
		
		case 506:
			return -671427187;
		
		case 507:
			return 100192478;
		
		case 508:
			return 307812616;
		
		case 509:
			return 1670843243;
		
		case 510:
			return 899615863;
		
		case 511:
			return -298901850;
		
		case 512:
			return 1379186917;
		
		case 513:
			return -817206030;
		
		case 514:
			return -1150323212;
		
		case 515:
			return -247466821;
		
		case 516:
			return 427124242;
		
		case 517:
			return 855418120;
		
		case 518:
			return -777015093;
		
		case 519:
			return -722462870;
		
		case 520:
			return -937454324;
		
		case 521:
			return -339438116;
		
		case 522:
			return 2135639035;
		
		case 523:
			return 1254273765;
		
		case 524:
			return -792172668;
		
		case 525:
			return 1905987493;
		
		case 526:
			return 495693044;
		
		case 527:
			return -1693422950;
		
		case 528:
			return -205873076;
		
		case 529:
			return -2143114654;
		
		case 530:
			return -1420574021;
		
		case 531:
			return -1959250381;
		
		case 532:
			return -1088328663;
		
		case 533:
			return 513602003;
		
		case 534:
			return 359221401;
		
		case 535:
			return 1005272;
		
		case 536:
			return 1583044470;
		
		case 537:
			return 348853959;
		
		case 538:
			return 1045621973;
		
		case 539:
			return 1084576580;
		
		case 540:
			return 1651573695;
		
		case 541:
			return 1463321587;
		
		case 542:
			return -997505963;
		
		case 543:
			return -1649851713;
		
		case 544:
			return -386012962;
		
		case 545:
			return 1386101789;
		
		case 546:
			return 1227915917;
		
		case 547:
			return -218846335;
		
		case 548:
			return -352578118;
		
		case 549:
			return 1426626782;
		
		case 550:
			return -714081520;
		
		case 551:
			return 74547781;
		
		case 552:
			return 1271463052;
		
		case 553:
			return 1983140194;
		
		case 554:
			return 677262775;
		
		case 555:
			return -832337898;
		
		case 556:
			return -319249747;
		
		case 557:
			return -16955722;
		
		case 558:
			return -1360128126;
		
		case 559:
			return -1535425646;
		
		case 560:
			return -1063641743;
		
		case 561:
			return -1041133401;
		
		case 562:
			return 1380479304;
		
		case 563:
			return 600890828;
		
		case 564:
			return 733333190;
		
		case 565:
			return 1843035435;
		
		case 566:
			return -304127320;
		
		case 567:
			return 122470371;
		
		case 568:
			return 0;
		
		case 569:
			return -1591664384;
		
		case 570:
			return -673000374;
		
		case 571:
			return -1150938404;
		
		case 572:
			return -1756997214;
		
		case 573:
			return -813824107;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return StackVal;
	if (iParam1 >= 1)
	{
	}
	return StackVal;
}

void func_477(bool bParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, bParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_0xD3750CCC00635FC2(bParam0))
	{
		iVar1 = func_654(WEAPON::_0xD3750CCC00635FC2(bParam0), iParam1);
		WEAPON::SET_AMMO_IN_CLIP(Global_35, bParam0, iVar1);
	}
}

void func_478(bool bParam0)
{
	char* sVar0;
	char* sVar1;
	int iVar2;
	
	if (!WEAPON::IS_WEAPON_VALID(bParam0))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35) || Global_1935630->f_12)
	{
		return;
	}
	if (WEAPON::_0xC4DEC3CA8C365A5D(bParam0))
	{
		return;
	}
	sVar0 = "player_newWeaponType";
	sVar1 = "player_newWeaponTime";
	if (WEAPON::_0xDDC64F5E31EEDAB6(bParam0))
	{
		sVar0 = "player_newPistolWeaponType";
		sVar1 = "player_newPistolWeaponTime";
	}
	else if (WEAPON::_0xC212F1D05A8232BB(bParam0))
	{
		sVar0 = "player_newRevolverWeaponType";
		sVar1 = "player_newRevolverWeaponTime";
	}
	else if (WEAPON::_0x0A82317B7EBFC420(bParam0))
	{
		sVar0 = "player_newRifleWeaponType";
		sVar1 = "player_newRifleWeaponTime";
	}
	else if (WEAPON::_0xC75386174ECE95D5(bParam0))
	{
		sVar0 = "player_newShotgunWeaponType";
		sVar1 = "player_newShotgunWeaponTime";
	}
	DECORATOR::DECOR_SET_INT(Global_35, sVar0, bParam0);
	iVar2 = func_655();
	func_656(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	DECORATOR::DECOR_SET_INT(Global_35, sVar1, iVar2);
}

int func_479(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	if (func_577(bParam0))
	{
		if (WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, 954660191) <= 0)
		{
			iVar0 = 10;
		}
		else
		{
			iVar0 = 0;
		}
	}
	else if (WEAPON::_0x705BE297EEBDB95D(bParam0))
	{
		if (WEAPON::_0x6AD66548840472E5(bParam0))
		{
			iVar0 = 12;
		}
		else
		{
			iVar0 = WEAPON::_0xD3750CCC00635FC2(bParam0) * 4;
		}
		iVar1 = WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, WEAPON::_0x5C2EA6C44F515F34(bParam0));
		if (iVar1 >= iVar0)
		{
			iVar0 = 0;
		}
		else if (iVar1 > 0)
		{
			iVar0 = (iVar0 - iVar1);
		}
	}
	return iVar0;
}

int func_480()
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (Global_40.f_39 == 11966224)
	{
		return 1;
	}
	return 0;
}

bool func_481(bool bParam0)
{
	return WEAPON::_0x1F7977C9101F807F(WEAPON::_0x5C2EA6C44F515F34(bParam0));
}

int func_482(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	int iVar0;
	
	iVar0 = 0;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		WEAPON::GET_CURRENT_PED_WEAPON(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_483(bool bParam0)
{
	int iVar0;
	
	iVar0 = WEAPON::_0x7AA043F6C41D151E(bParam0);
	if (WEAPON::_0x705BE297EEBDB95D(iVar0))
	{
		if (WEAPON::_0x0556E9D2ECF39D01(iVar0))
		{
			if (!func_276(50))
			{
				if (!func_276(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (WEAPON::_0xD955FEE4B87AFA07(iVar0))
		{
			if (!func_276(51))
			{
				if (!func_276(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_484()
{
	return UNLOCK::_UNLOCK_IS_UNLOCKED(-121456797);
}

int func_485(int iParam0, bool bParam1, var uParam2)
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	bool bVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	
	if (!func_42(bParam1, 0))
	{
		return 0;
	}
	if (func_43(bParam1) != -1037537535)
	{
		return 0;
	}
	bVar1 = func_56() != -1;
	iVar2 = PED::_GET_METAPED_TYPE(iParam0);
	if (func_100(bParam1) == -999503751)
	{
		return 1;
	}
	iVar4 = func_657(bParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return 0;
	}
	bVar7 = false;
	bVar8 = bParam1;
	if (func_91(bParam1, 866047851))
	{
		iVar5 = func_231(iVar4, 1);
		if (func_427(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5 /*3*/] != bVar8)
		{
			*uParam2 = -265166256;
			return 0;
		}
		bVar7 = true;
	}
	switch (iVar4)
	{
		case 1742327865:
			if (PED::_0x5FF9A878C3D115B8(bVar8, iVar2, bVar1) == 2056714954 && PED::_0xFB4891BD7578CDC1(iParam0, -1455751347))
			{
				*uParam2 = 111371848;
				return 0;
			}
			iVar5 = 10;
			iVar3 = func_100(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return 0;
			}
			break;
		
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] != &Global_1946804->f_57[iVar5 /*11*/] && func_91(bParam1, -1638171711))
			{
				*uParam2 = 187275271;
				return 0;
			}
			break;
		
		case 1900541263:
			iVar5 = 36;
			if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
			{
				*uParam2 = 2143522536;
				return 0;
			}
			if (PED::_0xFB4891BD7578CDC1(iParam0, -1968556728))
			{
				*uParam2 = -849690042;
				return 0;
			}
			break;
		
		case -1505978566:
			if (func_601(1868067663, &iVar0))
			{
				*uParam2 = 939463734;
				return 0;
			}
		
		case -1130865351:
		case -426430150:
		case 1788623170:
			if (!bVar7)
			{
			}
			else
			{
				iVar11 = PED::_0x90403E8107B60E81(iParam0);
				iVar10 = func_617(bVar8, iVar4, iVar2, bVar1);
				iVar9 = func_617(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return 0;
				}
				Jump @726; //curOff = 583
				iVar3 = func_100(bParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (bParam1 != &Global_1946804->f_57[iVar6 /*11*/] && func_91(&(Global_1946804->f_1497.f_1[iVar5 /*3*/]), -1638171711))
				{
					*uParam2 = -357399012;
					return 0;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (&Global_1946804->f_1497.f_1[iVar5 /*3*/] == &Global_1946804->f_57[iVar5 /*11*/])
					{
						*uParam2 = 2143522536;
						return 0;
					}
				}
			}
			*uParam2 = 0;
			return 1;
		}

void func_486()
{
	PLAYER::_0xFE7C9CF376D23342(PLAYER::PLAYER_ID(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_487()
{
	float fVar0;
	float fVar1;
	
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	PLAYER::_0x08E22898A6AF4905(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xFECA17CF3343694B(PLAYER::PLAYER_ID(), (1f - fVar0));
	PLAYER::_0xBBADFB5E5E5766FB(PLAYER::PLAYER_ID(), (1f - fVar1));
}

int func_488()
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_15(func_658(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_489(bool bParam0)
{
	switch (bParam0)
	{
		case -1217729597:
		case 363594903:
		case 425319238:
			return -62615415;
		
		case -1540119664:
		case 446659922:
		case 2100194981:
			return -832719552;
		
		case -1018798851:
		case -757567246:
		case -390982951:
			return -184823984;
		
		case -2054602073:
		case -585121677:
		case -378441099:
			return -1941112926;
		
		case 1566949660:
			return -121629511;
	}
	return 0;
}

int func_490(bool bParam0, bool bParam1)
{
	bool bVar0;
	bool bVar1;
	
	switch (bParam0)
	{
		case -62615415:
			if (bParam1 == 425319238)
			{
				bVar0 = 363594903;
				bVar1 = -1217729597;
			}
			else if (bParam1 == 363594903)
			{
				bVar0 = 425319238;
				bVar1 = -1217729597;
			}
			else
			{
				bVar0 = 425319238;
				bVar1 = 363594903;
			}
			break;
		
		case -832719552:
			if (bParam1 == -1540119664)
			{
				bVar0 = 2100194981;
				bVar1 = 446659922;
			}
			else if (bParam1 == 2100194981)
			{
				bVar0 = -1540119664;
				bVar1 = 446659922;
			}
			else
			{
				bVar0 = -1540119664;
				bVar1 = 2100194981;
			}
			break;
		
		case -184823984:
			if (bParam1 == -390982951)
			{
				bVar0 = -1018798851;
				bVar1 = -757567246;
			}
			else if (bParam1 == -1018798851)
			{
				bVar0 = -390982951;
				bVar1 = -757567246;
			}
			else
			{
				bVar0 = -390982951;
				bVar1 = -1018798851;
			}
			break;
		
		case -1941112926:
			if (bParam1 == -2054602073)
			{
				bVar0 = -378441099;
				bVar1 = -585121677;
			}
			else if (bParam1 == -378441099)
			{
				bVar0 = -2054602073;
				bVar1 = -585121677;
			}
			else
			{
				bVar0 = -2054602073;
				bVar1 = -378441099;
			}
			break;
	}
	if (func_15(bVar0, 1, 0) && func_15(bVar1, 1, 0))
	{
		return 1;
	}
	return 0;
}

int func_491(bool bParam0)
{
	switch (bParam0)
	{
		case 968830139:
			return -224110471;
		
		case -649219937:
			return 1289585739;
		
		case -858567048:
			return -269048282;
		
		case -718162726:
			return 1441506783;
		
		case -1284282080:
			return 780305678;
		
		case -725003445:
			return 1811977508;
		
		case -1445630104:
			return -935153695;
		
		case 580970876:
			return 1299744282;
		
		case 967601061:
			return 1631240196;
		
		case 1946030891:
			return 517396587;
		
		case -1511404982:
			return 1620353486;
		
		case -944465290:
			return 1816443627;
		
		case -1701098855:
			return -127011478;
		
		default:
			break;
	}
	return 0;
}

int func_492(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = func_659(iParam0);
	if (iVar0 != -15)
	{
		func_656(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_660(iVar0, 1);
	}
	return 0;
}

int func_493(int iParam0, var uParam1, int iParam2)
{
	float fVar0;
	struct<13> Var1;
	int iVar24;
	bool bVar25;
	
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (uParam1 && func_15(1811977508, 1, 0))
	{
		fVar0 = (fVar0 + 0.1f);
	}
	Var1.f_1 = 10;
	Var1.f_12 = 10;
	MISC::_0x48E4D50F87A96AA5(Global_35, 1, 1, iParam0, &Var1, 0);
	iVar24 = 0;
	while (iVar24 < Var1)
	{
		if (&Var1.f_1[iVar24] == 2084597891)
		{
			return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
		}
		else
		{
			bVar25 = &Var1.f_1[iVar24];
			if (func_42(bVar25, 0) && func_91(bVar25, -1921346699))
			{
				return BUILTIN::CEIL((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_494(int iParam0, char* sParam1, var uParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_448(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_495(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = BUILTIN::ROUND((BUILTIN::TO_FLOAT(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_661())
		{
			iVar2 = BUILTIN::FLOOR((BUILTIN::TO_FLOAT(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_448(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_662(iVar0);
			func_663(iVar0, 0, 0);
		}
		func_448(MISC::_CREATE_VAR_STRING(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		MONEY::_MONEY_INCREMENT_CASH_BALANCE(iVar1, iParam4);
		func_289(func_449(1644987397), iVar1);
	}
}

int func_496(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_505(iVar9);
	iVar2 = func_505(iVar10);
	iVar3 = func_505(iVar11);
	iVar5 = func_506(iVar9);
	iVar6 = func_506(iVar10);
	iVar7 = func_506(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_505(iVar12);
		iVar8 = func_506(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam0 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

void func_497(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_498()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_664(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_499()
{
	return COLLECTION::_0x5461C821D00FE15A(2103522376, 0);
}

int func_500(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4, bool bParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	switch (iParam0)
	{
		case -949689219:
			if (iParam1 == -1866642239)
			{
				iVar0 = 444160793;
			}
			else if (iParam1 == 444160793)
			{
				iVar0 = -1866642239;
			}
			break;
		
		case -1248968496:
			if (iParam1 == -1969404854)
			{
				iVar0 = 1761263432;
				iVar1 = -843795569;
			}
			else if (iParam1 == 1761263432)
			{
				iVar0 = -1969404854;
				iVar1 = -843795569;
			}
			else if (iParam1 == -843795569)
			{
				iVar0 = -1969404854;
				iVar1 = 1761263432;
			}
			break;
		
		case 1706369307:
			if (iParam1 == -832850511)
			{
				iVar0 = -935543049;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -935543049)
			{
				iVar0 = -832850511;
				iVar1 = -1464585113;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1464585113)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1290897778;
			}
			else if (iParam1 == -1290897778)
			{
				iVar0 = -832850511;
				iVar1 = -935543049;
				iVar2 = -1464585113;
			}
			break;
		
		case 1520110311:
			if (iParam1 == -100913452)
			{
				iVar0 = 313332607;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 313332607)
			{
				iVar0 = -100913452;
				iVar1 = -124539232;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -124539232)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = 102446365;
				iVar3 = -1882344824;
			}
			else if (iParam1 == 102446365)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = -1882344824;
			}
			else if (iParam1 == -1882344824)
			{
				iVar0 = -100913452;
				iVar1 = 313332607;
				iVar2 = -124539232;
				iVar3 = 102446365;
			}
			break;
		
		case -1992824800:
			if (iParam1 == 905173572)
			{
				iVar0 = 1432949803;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 1432949803)
			{
				iVar0 = 905173572;
				iVar1 = -983831788;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == -983831788)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = 59384454;
				iVar3 = 924882045;
			}
			else if (iParam1 == 59384454)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 924882045;
			}
			else if (iParam1 == 924882045)
			{
				iVar0 = 905173572;
				iVar1 = 1432949803;
				iVar2 = -983831788;
				iVar3 = 59384454;
			}
			break;
	}
	if (iParam0 == -949689219)
	{
		if (bParam3)
		{
			if (func_573(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_573(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_573(iVar0))
		{
			*iParam2++;
		}
		if (func_573(iVar0))
		{
			return 1;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_573(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_573(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_573(iVar0))
		{
			*iParam2++;
		}
		if (func_573(iVar1))
		{
			*iParam2++;
		}
		if (func_573(iVar0) && func_573(iVar1))
		{
			return 1;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_573(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_573(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_573(iVar0))
		{
			*iParam2++;
		}
		if (func_573(iVar1))
		{
			*iParam2++;
		}
		if (func_573(iVar2))
		{
			*iParam2++;
		}
		if ((func_573(iVar0) && func_573(iVar1)) && func_573(iVar2))
		{
			return 1;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_573(iParam1))
			{
				*iParam2++;
			}
		}
		if (bParam5)
		{
			if (func_573(iParam1))
			{
				*iParam2 = (*iParam2 - iParam4);
			}
		}
		if (func_573(iVar0))
		{
			*iParam2++;
		}
		if (func_573(iVar1))
		{
			*iParam2++;
		}
		if (func_573(iVar2))
		{
			*iParam2++;
		}
		if (func_573(iVar3))
		{
			*iParam2++;
		}
		if (((func_573(iVar0) && func_573(iVar1)) && func_573(iVar2)) && func_573(iVar3))
		{
			return 1;
		}
	}
	return 0;
}

void func_501(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_665(1497516462);
			func_666(2016141805);
			func_666(1010885152);
			func_666(-502324015);
			break;
		
		case 2016141805:
			func_666(1497516462);
			func_665(2016141805);
			func_666(1010885152);
			func_666(-502324015);
			break;
		
		case 1010885152:
			func_666(1497516462);
			func_666(2016141805);
			func_665(1010885152);
			func_666(-502324015);
			break;
		
		case -502324015:
			func_666(1497516462);
			func_666(2016141805);
			func_666(1010885152);
			func_665(-502324015);
			break;
		
		case -1056767524:
		case -538889627:
		case -538880323:
			func_666(-538889627);
			func_666(-538880323);
			func_666(-1056767524);
			func_665(iParam0);
			break;
		
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_667();
			func_665(iParam0);
			break;
		
		case -639037538:
		case -618620429:
		case -491981251:
		case 168171957:
		case 227918160:
		case 588987611:
		case 704802028:
		case 1193080109:
		case 1649996811:
		case 2008888900:
			func_668();
			func_665(iParam0);
			break;
		
		case 2019386373:
			func_666(-664252410);
			func_666(2109952320);
			func_665(2019386373);
			break;
		
		case -664252410:
			func_666(2019386373);
			func_666(2109952320);
			func_665(-664252410);
			break;
		
		case 2109952320:
			func_666(2019386373);
			func_666(-664252410);
			func_665(2109952320);
			break;
		
		case -1674179981:
			func_666(-1835851517);
			func_666(-1838352012);
			func_665(-1674179981);
			break;
		
		case -1835851517:
			func_666(-1674179981);
			func_666(-1838352012);
			func_665(-1835851517);
			break;
		
		case -1838352012:
			func_666(-1674179981);
			func_666(-1835851517);
			func_665(-1838352012);
			break;
		
		case -1717960576:
			func_666(210001842);
			func_665(-1717960576);
			break;
		
		case 210001842:
			func_666(-1717960576);
			func_665(210001842);
			break;
		
		case -150493654:
			func_666(-1271608261);
			func_666(1846061697);
			func_666(-1145519186);
			func_665(-150493654);
			break;
		
		case -1271608261:
			func_666(-150493654);
			func_666(1846061697);
			func_666(-1145519186);
			func_665(-1271608261);
			break;
		
		case 1846061697:
			func_666(-150493654);
			func_666(-1271608261);
			func_666(-1145519186);
			func_665(1846061697);
			break;
		
		case -1145519186:
			func_666(-150493654);
			func_666(-1271608261);
			func_666(1846061697);
			func_665(-1145519186);
			break;
		
		case 1766284049:
			func_666(280705402);
			func_666(1926308480);
			func_665(1766284049);
			break;
		
		case 280705402:
			func_666(1766284049);
			func_666(1926308480);
			func_665(280705402);
			break;
		
		case 1926308480:
			func_666(1766284049);
			func_666(280705402);
			func_665(1926308480);
			break;
		
		case 1609506757:
			if (bParam1)
			{
				func_666(439465264);
				func_665(1609506757);
			}
			else
			{
				func_666(1609506757);
				func_666(439465264);
			}
			break;
		
		case 439465264:
			if (func_669(1609506757))
			{
				if (bParam1)
				{
					func_665(439465264);
				}
				else
				{
					func_666(439465264);
				}
			}
			break;
		
		case 1822001510:
			func_666(-1612662716);
			func_665(1822001510);
			break;
		
		case -1612662716:
			func_666(1822001510);
			func_665(-1612662716);
			break;
		
		case 1306158345:
			func_666(1952610440);
			func_666(-223469678);
			func_666(-404698347);
			func_666(1517904467);
			func_665(1306158345);
			break;
		
		case 1952610440:
			func_666(1306158345);
			func_666(-223469678);
			func_666(-404698347);
			func_666(1517904467);
			func_665(1952610440);
			break;
		
		case -223469678:
			func_666(1306158345);
			func_666(1952610440);
			func_666(-404698347);
			func_666(1517904467);
			func_665(-223469678);
			break;
		
		case -404698347:
			func_666(1306158345);
			func_666(1952610440);
			func_666(-223469678);
			func_666(1517904467);
			func_665(-404698347);
			break;
		
		case 1517904467:
			func_666(1306158345);
			func_666(1952610440);
			func_666(-223469678);
			func_666(-404698347);
			func_665(1517904467);
			break;
		
		case 1376646519:
			func_666(931649776);
			func_666(-434590080);
			func_666(1743048395);
			func_666(449774763);
			func_665(1376646519);
			break;
		
		case 931649776:
			func_666(1376646519);
			func_666(-434590080);
			func_666(1743048395);
			func_666(449774763);
			func_665(931649776);
			break;
		
		case -434590080:
			func_666(1376646519);
			func_666(931649776);
			func_666(1743048395);
			func_666(449774763);
			func_665(-434590080);
			break;
		
		case 1743048395:
			func_666(1376646519);
			func_666(931649776);
			func_666(-434590080);
			func_666(449774763);
			func_665(1743048395);
			break;
		
		case 449774763:
			func_666(1376646519);
			func_666(931649776);
			func_666(-434590080);
			func_666(1743048395);
			func_665(449774763);
			break;
		
		case -1414537028:
			func_666(38162571);
			func_666(1350391819);
			func_666(54073871);
			func_665(-1414537028);
			break;
		
		case 38162571:
			func_666(-1414537028);
			func_666(1350391819);
			func_666(54073871);
			func_665(38162571);
			break;
		
		case 1350391819:
			func_666(-1414537028);
			func_666(38162571);
			func_666(54073871);
			func_665(1350391819);
			break;
		
		case 54073871:
			func_666(-1414537028);
			func_666(38162571);
			func_666(1350391819);
			func_665(54073871);
			break;
		
		case 198200492:
			func_665(198200492);
			func_666(-1124061431);
			func_666(52706132);
			func_666(-259123672);
			break;
		
		case -1124061431:
			func_666(198200492);
			func_665(-1124061431);
			func_666(52706132);
			func_666(-259123672);
			break;
		
		case 52706132:
			func_666(198200492);
			func_666(-1124061431);
			func_665(52706132);
			func_666(-259123672);
			break;
		
		case -259123672:
			func_666(198200492);
			func_666(-1124061431);
			func_666(52706132);
			func_665(-259123672);
			break;
		
		case -919512195:
			func_665(-919512195);
			func_666(-1925798111);
			func_666(420709909);
			func_666(1703426636);
			break;
		
		case -1925798111:
			func_665(-1925798111);
			func_666(-919512195);
			func_666(420709909);
			func_666(1703426636);
			break;
		
		case 420709909:
			func_665(420709909);
			func_666(-919512195);
			func_666(-1925798111);
			func_666(1703426636);
			break;
		
		case 1703426636:
			func_665(1703426636);
			func_666(-919512195);
			func_666(-1925798111);
			func_666(420709909);
			break;
		
		case -1223121209:
			func_665(-1223121209);
			func_666(630808005);
			break;
		
		case 630808005:
			func_665(630808005);
			func_666(-1223121209);
			break;
		
		case 1453909576:
			func_665(1453909576);
			func_666(1643531967);
			break;
		
		case 1643531967:
			func_665(1643531967);
			func_666(1453909576);
			break;
		
		case 0:
			func_665(0);
			func_666(473295046);
			func_666(-1738165526);
			break;
		
		case 473295046:
			func_665(473295046);
			func_666(0);
			func_666(-1738165526);
			break;
		
		case -1738165526:
			func_665(-1738165526);
			func_666(0);
			func_666(473295046);
			break;
		
		case 932909855:
			func_665(932909855);
			func_666(2051822093);
			break;
		
		case 2051822093:
			func_665(2051822093);
			func_666(932909855);
			break;
		
		case 405586984:
			func_665(405586984);
			func_666(1509509592);
			func_666(-959357075);
			func_666(-1311865656);
			break;
		
		case 1509509592:
			func_665(1509509592);
			func_666(405586984);
			func_666(-959357075);
			func_666(-1311865656);
			break;
		
		case -959357075:
			func_665(-959357075);
			func_666(1509509592);
			func_666(405586984);
			func_666(-1311865656);
			break;
		
		case -1311865656:
			func_665(-1311865656);
			func_666(1509509592);
			func_666(-959357075);
			func_666(405586984);
			break;
		
		case -524145696:
			if (bParam1)
			{
				func_665(-524145696);
			}
			else
			{
				func_666(-524145696);
			}
			func_666(1626481264);
			func_666(282809459);
			break;
		
		case 282809459:
			func_665(282809459);
			func_666(1626481264);
			func_666(-524145696);
			break;
		
		case 1626481264:
			func_665(1626481264);
			func_666(-524145696);
			func_666(282809459);
			break;
		
		case 885203519:
			if (bParam1)
			{
				func_665(885203519);
			}
			else
			{
				func_666(885203519);
			}
			break;
		
		case -1080627546:
			if (bParam1)
			{
				func_665(-1080627546);
			}
			else
			{
				func_666(-1080627546);
			}
			break;
		
		default:
			if (bParam1)
			{
				if (!func_669(iParam0))
				{
					func_665(iParam0);
				}
			}
			else if (func_669(iParam0))
			{
				func_666(iParam0);
			}
			break;
	}
}

void func_502(int iParam0)
{
	if (!func_670(iParam0))
	{
		func_672(func_671(iParam0));
	}
}

int func_503()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_670(COLLECTION::_0x126CBEBBA46693CF(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_504(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_505(iVar9);
	iVar2 = func_505(iVar10);
	iVar3 = func_505(iVar11);
	iVar5 = func_506(iVar9);
	iVar6 = func_506(iVar10);
	iVar7 = func_506(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_505(iVar12);
		iVar8 = func_506(iVar12);
	}
	if (bParam0 == iVar9)
	{
		if ((iVar1 + iParam1) >= iVar5)
		{
			iVar0 = (iVar0 + iVar5);
		}
		else
		{
			iVar0 = (iVar0 + (iVar1 + iParam1));
		}
	}
	else if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (bParam0 == iVar10)
	{
		if ((iVar2 + iParam1) >= iVar6)
		{
			iVar0 = (iVar0 + iVar6);
		}
		else
		{
			iVar0 = (iVar0 + (iVar2 + iParam1));
		}
	}
	else if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (bParam0 == iVar11)
	{
		if ((iVar3 + iParam1) >= iVar7)
		{
			iVar0 = (iVar0 + iVar7);
		}
		else
		{
			iVar0 = (iVar0 + (iVar3 + iParam1));
		}
	}
	else if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (bParam0 == iVar12)
		{
			if ((iVar4 + iParam1) >= iVar8)
			{
				iVar0 = (iVar0 + iVar8);
			}
			else
			{
				iVar0 = (iVar0 + (iVar4 + iParam1));
			}
		}
		else if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_505(bool bParam0)
{
	int iVar0;
	
	if (func_15(bParam0, 1, 0))
	{
		iVar0 = func_45(bParam0, 0, 0);
	}
	return iVar0;
}

int func_506(bool bParam0)
{
	switch (bParam0)
	{
		case 281887510:
			return 5;
		
		case -164081697:
			return 5;
		
		case -1161319399:
			return 5;
		
		case 728781265:
			return 15;
		
		case -222563712:
			return 20;
		
		case 1794857344:
			return 7;
		
		case 1952409553:
			return 10;
		
		case 2116770557:
			return 25;
		
		case -651064726:
			return 3;
		
		case -404270094:
			return 7;
		
		case 2093126853:
			return 5;
		
		case 2085530337:
			return 30;
		
		case -150591160:
			return 5;
		
		case -323969289:
			return 10;
		
		case 1504361882:
			return 5;
		
		case -1521783510:
			return 5;
		
		case 1714875242:
			return 5;
		
		case 1019229063:
			return 5;
		
		case 927763737:
			return 10;
		
		default:
			break;
	}
	return 0;
}

int func_507(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0);
}

void func_508(int iParam0, int iParam1)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, iParam1);
}

int func_509(int iParam0, int iParam1)
{
	struct<4> Var0;
	var uVar5;
	
	if (!func_557(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	DATAFILE::_DATAFILE_GET_HASH(&uVar5, &Var0);
	return uVar5;
}

void func_510(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_509(iParam1, 5) || iParam0 == func_509(iParam1, 6)) || iParam0 == func_509(iParam1, 7)) || iParam0 == func_509(iParam1, 8)) || iParam0 == func_509(iParam1, 9))
	{
		func_500(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_178(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_177(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_511(int iParam0, int iParam1, bool bParam2)
{
	int iVar0;
	
	iVar0 = 1;
	if ((((iParam0 == func_509(iParam1, 5) || iParam0 == func_509(iParam1, 6)) || iParam0 == func_509(iParam1, 7)) || iParam0 == func_509(iParam1, 8)) || iParam0 == func_509(iParam1, 9))
	{
		if (func_500(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_178(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_177(51, 0, 0, iVar0, func_381(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_178(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_177(51, 0, 0, iVar0, func_381(iParam1, 20), 1, 0);
			}
		}
	}
}

int func_512()
{
	if (func_151(((*Global_1347702)[37 /*49*/])->f_15) && Global_1392388->f_7)
	{
		return 1;
	}
	return 0;
}

void func_513(int iParam0)
{
	COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
}

void func_514(int iParam0)
{
	if (!func_673(iParam0))
	{
		COLLECTION::_0x3EA62E56F386C997(iParam0, 1);
	}
}

void func_515(int iParam0)
{
	COLLECTION::_0x398FAB9C96A81924(iParam0, 1);
}

float func_516()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_674())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_675(2);
	}
	if (Global_1347477->f_119)
	{
		return func_675(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_676();
	fVar2 = func_677();
	fVar3 = func_678();
	fVar4 = func_679();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_680()));
	fVar7 = (func_675(2) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_681(3, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_682(3, fVar9, fVar9 > 100f);
	return func_683(fVar7, -100f, 100f);
}

float func_517()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_674())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_675(1);
	}
	if (Global_1347477->f_119)
	{
		return func_675(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_676();
	fVar2 = func_677();
	fVar3 = func_678();
	fVar4 = func_679();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_680()));
	fVar7 = (func_675(1) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_681(2, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_682(2, fVar9, fVar9 > 100f);
	return func_683(fVar7, -100f, 100f);
}

float func_518()
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	float fVar9;
	float fVar10;
	
	if (func_674())
	{
		return 0f;
	}
	if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_675(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_684())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_685())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_675(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / BUILTIN::TO_FLOAT(7));
	fVar1 = func_676();
	fVar2 = func_677();
	fVar3 = func_678();
	fVar4 = func_679();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_680()));
	fVar7 = (func_675(0) - fVar6);
	iVar8 = BUILTIN::ROUND(((fVar0 / 60f) * BUILTIN::TO_FLOAT(7)));
	fVar9 = (100f * (BUILTIN::TO_FLOAT(90) / BUILTIN::TO_FLOAT(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_681(1, BUILTIN::ROUND((BUILTIN::TO_FLOAT(iVar8) * fVar10)), 0);
	func_682(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && PLAYER::_0x0317C947D062854E(PLAYER::PLAYER_ID()) < 1f)
	{
		return func_675(0);
	}
	return func_683(fVar7, -100f, 100f);
}

bool func_519(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_520(bool bParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_42(bParam0, 0))
	{
	}
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam2))
	{
		return 0;
	}
	if (func_464(bParam0, uParam2, iParam3, bParam5, 0))
	{
		return 0;
	}
	if (!func_256(0))
	{
		return 0;
	}
	if (!INVENTORY::_0xCB5D11F9508A928D(func_140(0), uParam1, uParam2, bParam0, uParam2->f_4, iParam3, iParam4))
	{
		return 0;
	}
	return 1;
}

void func_521(int iParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	if (!func_396(iParam0))
	{
		return;
	}
	if (func_212(iParam0))
	{
		return;
	}
	if (!func_686(iParam0))
	{
		func_687(iParam0, 1, 0);
	}
	bVar0 = func_621(iParam0);
	if (bVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_397(iParam0, 512))
		{
			func_107(30, bVar0, 0, 0, 0);
		}
	}
	if ((!func_688() && !bParam1) && !func_16(0, 0, 1))
	{
		func_58(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_DONE", MISC::_CREATE_VAR_STRING(0, bVar0)), 10000, 0, 0, 0, 1);
	}
	func_689(iParam0, 6);
	if (bParam2)
	{
		if (!func_16(0, 0, 1))
		{
			func_468(1, 4);
		}
	}
}

int func_522(int iParam0, var uParam1)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_100(bVar1) == iParam0)
		{
			*uParam1 = bVar1;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_523(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_231(iParam0, 1) /*3*/] != &Global_1946804->f_57[func_231(iParam0, 1) /*11*/];
}

void func_524(int iParam0, bool bParam1)
{
	if (func_91(bParam1, 130796156))
	{
		func_690(bParam1, 0);
	}
	else if (func_91(bParam1, 930141731))
	{
		func_690(bParam1, 1);
		func_691(iParam0);
	}
}

void func_525(var uParam0, int iParam1)
{
	int iVar0;
	
	if (iParam1 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (&uParam0->f_1[iVar0] == iParam1)
		{
			return;
		}
		if ((((iParam1 == 617531372 && &uParam0->f_1[iVar0] == 291123060) || (iParam1 == 291123060 && &uParam0->f_1[iVar0] == 617531372)) || (iParam1 == 1356624740 && &uParam0->f_1[iVar0] == 1884295263)) || (iParam1 == 1884295263 && &uParam0->f_1[iVar0] == 1356624740))
		{
			uParam0->f_1[iVar0] = iParam1;
			return;
		}
		iVar0++;
	}
	if (*uParam0 >= 10)
	{
		return;
	}
	uParam0->f_1[*uParam0] = iParam1;
	*uParam0++;
}

int func_526(int iParam0, var uParam1, var uParam2, var uParam3)
{
	var uVar0;
	struct<14> Var1;
	
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!NETSHOPPING::_CASHINVENTORY_IS_SESSION_READY())
	{
		return 0;
	}
	func_692(uParam1);
	if (!NETWORK::_0x77B299E8799B1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = uParam3;
	Var1.f_2 = { *uParam1 };
	func_693(uParam2, iParam0, Var1);
	return 1;
}

int func_527(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_528(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PROVISION_FISH_BLUEGILL";
		
		case 1:
			return "PROVISION_FISH_BULLHEAD_CATFISH";
		
		case 2:
			return "PROVISION_FISH_CHAIN_PICKEREL";
		
		case 3:
			return "PROVISION_FISH_CHANNEL_CATFISH";
		
		case 4:
			return "PROVISION_FISH_LAKE_STURGEON";
		
		case 5:
			return "PROVISION_FISH_LARGEMOUTH_BASS";
		
		case 6:
			return "PROVISION_FISH_LONGNOSE_GAR";
		
		case 7:
			return "PROVISION_FISH_MUSKIE";
		
		case 8:
			return "PROVISION_FISH_NORTHERN_PIKE";
		
		case 9:
			return "PROVISION_FISH_PERCH";
		
		case 10:
			return "PROVISION_FISH_REDFIN_PICKEREL";
		
		case 11:
			return "PROVISION_FISH_ROCK_BASS";
		
		case 12:
			return "PROVISION_FISH_SMALLMOUTH_BASS";
		
		case 13:
			return "PROVISION_FISH_SOCKEYE_SALMON";
		
		case 14:
			return "PROVISION_FISH_STEELHEAD_TROUT";
		
		default:
			break;
	}
	return "FISHTYPE_UNKNOWN";
}

int func_529(int iParam0)
{
	var uVar0;
	
	if (!func_694(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_530(var uParam0)
{
	return func_130(*uParam0, 2);
}

int func_531(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return 0;
	}
	return 1;
}

int func_532(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_1;
	}
	iVar0 = func_695(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return (Global_1058888->f_40501.f_1[iVar0 /*2*/])->f_1;
}

int func_533(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_12 == -1)
	{
		if (!(iParam0 > 0 && iParam0 < 771))
		{
			return 0;
		}
		iVar0 = (Global_12105[iParam0 /*7*/])->f_1;
	}
	else
	{
		if (!(iParam0 > 0 && iParam0 < 20001))
		{
			return 0;
		}
		iVar0 = func_532(iParam0);
	}
	if (iVar0 == 1)
	{
		return 1;
	}
	if (iVar0 == 2)
	{
		return 1;
	}
	return 0;
}

Vector3 func_534(int iParam0)
{
	if (func_696(iParam0))
	{
		return func_697(iParam0);
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_535(int iParam0, var uParam1)
{
	if (iParam0 == 90)
	{
		if (func_698(((*Global_1347702)[iParam0 /*49*/])->f_15) != 0)
		{
			((*Global_1347702)[iParam0 /*49*/])->f_18 = 80f;
			*uParam1 = { 1015.113f, 159.7295f, 103.0175f };
			return 1;
		}
	}
	else if (iParam0 == 96)
	{
		if (((*Global_1347702)[iParam0 /*49*/])->f_13 & 65536 != 0)
		{
			*uParam1 = { -1646.77f, -1362.89f, 83.4f };
			return 1;
		}
		else
		{
			*uParam1 = { -1629.71f, -1338.377f, 82.0174f };
			return 1;
		}
	}
	return 0;
}

struct<4> func_536()
{
	struct<4> Var0;
	
	return Var0;
}

int func_537(int iParam0, var uParam1, var uParam2, int iParam3)
{
	int iVar0;
	
	iVar0 = func_140(0);
	*uParam1 = { func_162(iParam0, func_337(0), iParam3, 0) };
	if (!INVENTORY::_0xB881CA836CC4B6D4(uParam1))
	{
		return 0;
	}
	if (!INVENTORY::_0x025A1B1FB03FBF61(iVar0, uParam1, uParam2, 22, 1))
	{
		return 0;
	}
	return 1;
}

int func_538()
{
	return 16596983;
}

int func_539()
{
	return 16662519;
}

bool func_540(int iParam0)
{
	return (Global_22 && iParam0) != 0;
}

void func_541(int iParam0)
{
	Global_22 = (Global_22 || iParam0);
}

int func_542(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = TASK::GET_SCRIPT_TASK_STATUS(iParam0, iParam1, 1);
	if (iVar0 == 1 || iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_543(int iParam0)
{
	int iVar0;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return 0;
	}
	if (!PED::IS_PED_USING_ANY_SCENARIO(iParam0))
	{
		return 0;
	}
	iVar0 = TASK::_0x2D0571BB55879DA2(iParam0);
	if (iVar0 == 0)
	{
		return 0;
	}
	if ((((((((iVar0 == -1689755873 || iVar0 == 1690225020) || iVar0 == 1774730608) || iVar0 == 309374745) || iVar0 == -363194080) || iVar0 == 640190094) || iVar0 == -1085971095) || iVar0 == 49488831) || iVar0 == 343112864)
	{
		return 1;
	}
	if (iVar0 == -2016812721 || iVar0 == 1097070152)
	{
		iVar0 = PED::_0xC22AA08A8ADB87D4(iParam0);
		if (iVar0 == 970972795)
		{
			return 1;
		}
		return 0;
	}
	return 0;
}

int func_544(bool bParam0)
{
	if (PED::_0x3AA24CCC0D451379(Global_35))
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_HOGTIED", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x42429C674B61238B(Global_35))
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_HOGTYING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x9682F850056C9ADE(Global_35))
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_LASSOED", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0xEF3A8772F085B4AA(Global_35))
	{
		return 0;
	}
	if (!PED::_0xB65A4DAB460A19BD(Global_35) == 0)
	{
		return 0;
	}
	if (PED::_0x226CF9B159E38F42(Global_35))
	{
		return 0;
	}
	if (PED::_0x3BDFCF25B58B0415(Global_35))
	{
		return 0;
	}
	if (PED::_0x0E99E3BF11BB6367(Global_35) || PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 4096, 0))
	{
		return 0;
	}
	if (PED::IS_PED_PERFORMING_MELEE_ACTION(Global_35, 32768, 0))
	{
		return 0;
	}
	return 1;
}

int func_545(bool bParam0)
{
	if (PED::_IS_PED_SLIDING(Global_35))
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_SLIDING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_SWIMMING(Global_35))
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_SWIMMING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_CLIMBING(Global_35))
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_CLIMBING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (func_543(Global_35))
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_SLEEPING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_FALLING(Global_35))
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::_0x3E592D0486DEC0F6(Global_35))
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_RAGDOLL(Global_35))
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (PED::IS_PED_VAULTING(Global_35))
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_JUMPING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (TASK::IS_PED_GETTING_UP(Global_35))
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_FALLING", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_546(bool bParam0)
{
	if (PED::IS_PED_HANGING_ON_TO_VEHICLE(Global_35))
	{
		if (bParam0)
		{
			func_58("ITEM_UNUSABLE_HANGING_ON_VEHICLE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_547(var uParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_699();
	if (TASK::_0x756C7B4C43DF0422(1))
	{
		iVar0 = TASK::_0x351F74ED6177EBE7();
	}
	else
	{
		iVar0 = uParam0;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		if (bParam1)
		{
			func_58("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!func_551(iVar0))
	{
		if (bParam1)
		{
			func_58("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!TASK::IS_PED_IN_WRITHE(iVar0))
	{
		if (bParam1)
		{
			func_58("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar0))
	{
		if (bParam1)
		{
			func_58("ITEM_UNUSABLE_NOT_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

int func_548(var uParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 1;
	}
	else if (PLAYER::_0x3EE1F7A8C32F24E1(PLAYER::GET_PLAYER_INDEX(), &iVar0, 0, 0))
	{
		if (!func_551(iVar0))
		{
			if (bParam1)
			{
				func_58("ITEM_UNUSABLE_NOT_ILO_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		if (TASK::IS_PED_IN_WRITHE(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				func_58("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		if (func_700(iVar0, 1, 1) > 2f)
		{
			if (bParam1)
			{
				func_58("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		if (!PED::_0xD543D3A8FDE4F185(Global_35, ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0)))
		{
			if (bParam1)
			{
				func_58("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return 0;
		}
		return 1;
	}
	iVar1 = uParam0;
	if (!func_551(iVar1))
	{
		if (bParam1)
		{
			func_58("ITEM_UNUSABLE_NOT_A_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (TASK::IS_PED_IN_WRITHE(iVar1))
	{
		if (bParam1)
		{
			func_58("ITEM_UNUSABLE_DYING_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	if (!PED::_0xD543D3A8FDE4F185(Global_35, iVar1))
	{
		if (bParam1)
		{
			func_58("ITEM_UNUSABLE_NOT_NEAR_HORSE", 10000, 0, 0, 0, 1);
		}
		return 0;
	}
	return 1;
}

bool func_549(int iParam0)
{
	return func_148(iParam0, 7);
}

int func_550()
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar0, true))
	{
		return 0;
	}
	if (!TASK::_0xEFC4303DDC6E60D3(iVar0))
	{
		return 0;
	}
	iVar1 = TASK::_0xED1F514AF4732258(iVar0);
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return 0;
	}
	if (PED::IS_PED_DEAD_OR_DYING(iVar1, true))
	{
		return 0;
	}
	if (!PED::_0x2D64376CF437363E(iVar1))
	{
		return 0;
	}
	return 1;
}

bool func_551(int iParam0)
{
	int iVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return false;
	}
	if (!ENTITY::IS_ENTITY_A_PED(iParam0))
	{
		return false;
	}
	iVar0 = ENTITY::GET_ENTITY_MODEL(iParam0);
	return PED::_0x772A1969F649E902(iVar0);
}

int func_552(int iParam0)
{
	switch (func_56())
	{
		case -1:
			return (Global_1357549->f_1494 && iParam0) != 0;
	}
	return 0;
}

var func_553()
{
	return Global_1898164->f_163;
}

bool func_554(int iParam0)
{
	return func_248(Global_1935496->f_7, iParam0);
}

int func_555(int iParam0)
{
	var uVar0;
	
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
		return 0;
	}
	if (PED::IS_PED_INJURED(iParam0))
	{
		return 0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 0, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 2, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	if (PED::_0x5463C962BC7777C3(iParam0, 1, &uVar0, 1, 0) != 0)
	{
		return uVar0;
	}
	return 0;
}

void func_556(bool bParam0)
{
	if (bParam0)
	{
		func_701(&(Global_40.f_12018.f_42), 1);
	}
	else
	{
		func_702(&(Global_40.f_12018.f_42), 1);
	}
}

int func_557(int iParam0, var uParam1)
{
	if (!func_703(iParam0))
	{
		return 0;
	}
	*uParam1 = Global_1914270[iParam0];
	if (*uParam1 == 0)
	{
		return 0;
	}
	return 1;
}

int func_558()
{
	return func_704(Global_40.f_12018);
}

int func_559()
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		iVar2 = func_469(iVar1);
		if (func_15(iVar2, 1, 0) || func_565(func_564(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_560()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_705(COLLECTION::_0x126CBEBBA46693CF(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_561()
{
	int iVar0;
	int iVar1;
	
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 14)
	{
		if (func_570(COLLECTION::_0x126CBEBBA46693CF(iVar1, 1995362678, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_562()
{
	return COLLECTION::_0x3A65F4844913A047(2103522376, 0);
}

int func_563(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 554799588;
		
		case 1:
			return -1021394391;
		
		case 2:
			return -987306668;
		
		case 3:
			return -1028735103;
		
		case 4:
			return 515229791;
		
		case 5:
			return -1230863414;
		
		case 6:
			return 232875659;
		
		case 7:
			return 1423129537;
		
		case 8:
			return -435742319;
		
		case 9:
			return -1854702679;
		
		case 10:
			return 1265323898;
		
		case 11:
			return -479775696;
		
		default:
			break;
	}
	return 0;
}

int func_564(bool bParam0)
{
	switch (bParam0)
	{
		case -1230863414:
			return 1;
		
		case -1021394391:
			return 8;
		
		case 232875659:
			return 4;
		
		case -1028735103:
			return 16;
		
		case 554799588:
			return 32;
		
		case 1265323898:
			return 64;
		
		case -1854702679:
			return 128;
		
		case -987306668:
			return 256;
		
		case -479775696:
			return 2;
		
		case 515229791:
			return 512;
		
		case -435742319:
			return 1024;
		
		case 1423129537:
			return 2048;
		
		default:
			break;
	}
	return 0;
}

bool func_565(var uParam0)
{
	return (Global_40.f_12018 && uParam0) != 0;
}

char* func_566(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_DB_DINO_BONES_FOUND";
		
		case 1:
			return "COL_DB_SEND";
		
		case 2:
			return "COL_DB_COLLECT";
		
		default:
			break;
	}
	return "";
}

int func_567(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 5;
		
		case 1:
			return 6;
		
		case 2:
			return 7;
		
		case 3:
			return 8;
		
		case 4:
			return 9;
		
		default:
			break;
	}
	return 5;
}

int func_568(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 15;
		
		case 1:
			return 16;
		
		case 2:
			return 17;
		
		case 3:
			return 18;
		
		case 4:
			return 19;
		
		default:
			break;
	}
	return 15;
}

char* func_569(bool bParam0)
{
	switch (bParam0)
	{
		case 281887510:
			return "COL_EP_LITTLE_FOUND";
		
		case -164081697:
			return "COL_EP_REDDISH_FOUND";
		
		case -1161319399:
			return "COL_EP_SNOWY_FOUND";
		
		case 728781265:
			return "COL_RO_LADY_OF_NIGHT_FOUND";
		
		case -222563712:
			return "COL_HF_FOUND";
		
		case 1794857344:
			return "COL_RO_LADY_SLIPPER_FOUND";
		
		case 1952409553:
			return "COL_RO_MOCCASIN_FOUND";
		
		case 2116770557:
			return "COL_GF_FOUND";
		
		case -651064726:
			return "COL_RO_ACUNAS_STAR_FOUND";
		
		case -404270094:
			return "COL_RO_CIGAR_FOUND";
		
		case 2093126853:
			return "COL_RO_GHOST_FOUND";
		
		case 2085530337:
			return "COL_SF_FOUND";
		
		case -150591160:
			return "COL_RO_NIGHT_SCENTED_FOUND";
		
		case -323969289:
			return "COL_RO_RAT_TAIL_FOUND";
		
		case 1504361882:
			return "COL_RO_SPIDER_FOUND";
		
		case -1521783510:
			return "COL_RO_CLAMSHELL_FOUND";
		
		case 1714875242:
			return "COL_RO_DRAGONS_FOUND";
		
		case 1019229063:
			return "COL_RO_QUEENS_FOUND";
		
		case 927763737:
			return "COL_RO_SPARROWS_FOUND";
		
		default:
			break;
	}
	return "";
}

bool func_570(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

char* func_571(int iParam0)
{
	switch (iParam0)
	{
		case -1865241121:
			return "PROVISION_FISH_BULLHEAD_CATFISH_LEGENDARY";
		
		case 2117142684:
			return "PROVISION_FISH_CHAIN_PICKEREL_LEGENDARY";
		
		case -1409326024:
			return "PROVISION_FISH_LAKE_STURGEON_LEGENDARY";
		
		case -641744968:
			return "PROVISION_FISH_LARGEMOUTH_BASS_LEGENDARY";
		
		case -946988203:
			return "PROVISION_FISH_LONGNOSE_GAR_LEGENDARY";
		
		case -646136018:
			return "PROVISION_FISH_MUSKIE_LEGENDARY";
		
		case -955835837:
			return "PROVISION_FISH_PERCH_LEGENDARY";
		
		case -179276075:
			return "PROVISION_FISH_REDFIN_PICKEREL_LEGENDARY";
		
		case -492711560:
			return "PROVISION_FISH_ROCK_BASS_LEGENDARY";
		
		case 1764383959:
			return "PROVISION_FISH_SMALLMOUTH_BASS_LEGENDARY";
		
		case 317501533:
			return "PROVISION_FISH_SOCKEYE_SALMON_LEGENDARY";
		
		case 817753087:
			return "PROVISION_FISH_STEELHEAD_TROUT_LEGENDARY";
		
		case 576606016:
			return "PROVISION_FISH_BLUEGILL_LEGENDARY";
		
		default:
			break;
	}
	return "";
}

char* func_572(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "COL_RC_ROCK_FACES_FOUND";
		
		case 1:
			return "COL_RC_SEND";
		
		case 2:
			return "COL_RC_COLLECT";
		
		default:
			break;
	}
	return "";
}

int func_573(bool bParam0)
{
	if (func_706(bParam0) && func_15(bParam0, 1, 0))
	{
		return 1;
	}
	else if (func_707(bParam0) && func_708(bParam0))
	{
		return 1;
	}
	return 0;
}

char* func_574(bool bParam0)
{
	if (!func_42(bParam0, 0))
	{
		return "";
	}
	return HUD::_GET_LABEL_TEXT_BY_HASH(func_319(bParam0));
}

int func_575(int iParam0)
{
	return &(Global_1898164->f_1[iParam0 /*5*/]);
}

int func_576(int iParam0)
{
	return (Global_1898164->f_1[iParam0 /*5*/])->f_2;
}

bool func_577(int iParam0)
{
	return WEAPON::_0xC4DEC3CA8C365A5D(iParam0);
}

float func_578(int iParam0, int iParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	
	if (iParam1 == -1)
	{
		fVar3 = (fVar2 - fVar1);
		return (fVar3 / 2f);
	}
	switch (iParam0)
	{
		case 0:
			fVar1 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_HEALTH(Global_35));
			fVar2 = BUILTIN::TO_FLOAT(ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0));
			iVar0 = 50;
			break;
		
		case 1:
			fVar1 = PED::_0x775A1CA7893AA8B5(Global_35);
			fVar2 = PED::_0xCB42AFE2B613EE55(Global_35);
			iVar0 = 8;
			break;
		
		case 2:
			fVar1 = PLAYER::_0xA81D24AE0AF99A5E(PLAYER::GET_PLAYER_INDEX());
			fVar2 = PLAYER::_0x592F58BC4D2A2CF3(PLAYER::GET_PLAYER_INDEX(), 0);
			iVar0 = 14;
			break;
	}
	fVar4 = (IntToFloat((iVar0 * iParam1)) + fVar1);
	if (fVar4 > fVar2)
	{
		fVar3 = (fVar2 - fVar1);
	}
	else
	{
		fVar3 = (fVar4 - fVar1);
	}
	return (fVar3 / 2f);
}

void func_579(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = (50 * iParam0);
	iVar1 = (iVar0 + ENTITY::GET_ENTITY_HEALTH(Global_35));
	if (iParam1 && iVar0 < 0)
	{
		ENTITY::_0x835F131E7DC8F97A(Global_35, BUILTIN::TO_FLOAT(iVar0), 0, 0);
	}
	else if (iParam0 <= 0 || iVar1 > ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0))
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, ENTITY::GET_ENTITY_MAX_HEALTH(Global_35, 0), 0);
	}
	else
	{
		ENTITY::_SET_ENTITY_HEALTH(Global_35, iVar1, 0);
	}
}

void func_580(int iParam0, int iParam1)
{
	Global_1347477->f_9[iParam0 /*2*/] = (MISC::GET_GAME_TIMER() + iParam1);
}

void func_581(int iParam0)
{
	PLAYER::_0x51345AE20F22C261(PLAYER::PLAYER_ID(), BUILTIN::TO_FLOAT(iParam0 * 14), 0, 0, 0);
}

void func_582(int iParam0)
{
	int iVar0;
	
	if (func_56() != -1)
	{
		return;
	}
	if (iParam0 == -1)
	{
		PED::_0x675680D089BFA21F(Global_35, 100f);
	}
	else
	{
		iVar0 = 8;
		PED::_0xC3D4B754C0E86B9E(Global_35, BUILTIN::TO_FLOAT((iParam0 * iVar0)));
	}
}

float func_583(int iParam0, float fParam1)
{
	return func_709(BUILTIN::TO_FLOAT(iParam0), fParam1);
}

int func_584(var uParam0, var uParam1, float fParam2)
{
	if (func_56() != -1)
	{
		return 1;
	}
	if (!func_710(0))
	{
		return 1;
	}
	if (fParam2 <= 0f)
	{
		return 1;
	}
	if (*uParam0)
	{
		return !*uParam1;
	}
	*uParam0 = 1;
	if (!Global_1347477->f_191.f_3)
	{
		func_711(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		Global_1347477->f_191.f_3 = 1;
	}
	if (Global_1347477->f_191 < MISC::GET_GAME_TIMER())
	{
		Global_1347477->f_191.f_1 = 0;
	}
	Global_1347477->f_191.f_1++;
	if (Global_1347477->f_191.f_1 > 3)
	{
		if (Global_1347477->f_191.f_2 < MISC::GET_GAME_TIMER())
		{
			func_128(0, 1);
			Global_1347477->f_191.f_2 = (MISC::GET_GAME_TIMER() + 480000);
		}
		func_711(Global_35, "Player_Sick_Over_Eating_Cough", 0, 0, 1, 0, 0, 1);
		*uParam1 = 1;
		return 0;
	}
	Global_1347477->f_191 = (MISC::GET_GAME_TIMER() + 480000);
	*uParam1 = 0;
	return 1;
}

void func_585(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	
	if (func_56() == 0)
	{
		func_712(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_675(0);
	if (bParam1)
	{
		func_713(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_714();
	}
	if (bParam2)
	{
		fParam0 = func_715(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_716(0, func_683(fParam0, -100f, 100f), bParam1);
}

void func_586(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	
	if (func_56() == 0)
	{
		func_712(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_675(2);
	if (bParam1)
	{
		func_713(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_715(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_716(2, func_683(fParam0, -100f, 100f), bParam1);
}

void func_587(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	float fVar0;
	
	if (func_56() == 0)
	{
		func_712(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_675(1);
	if (bParam1)
	{
		func_713(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_715(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_716(1, func_683(fParam0, -100f, 100f), bParam1);
}

float func_588(float fParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return (fParam0 * 0.033f);
		
		case 1:
			return (fParam0 * 2f);
		
		case 2:
			return (fParam0 * 120f);
		
		case 3:
			return (fParam0 * 2880f);
		
		default:
			break;
	}
	return fParam0;
}

void func_589(int iParam0, float fParam1)
{
	int iVar0;
	char* sVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (fParam1 == -1f)
	{
		if (func_717(iParam0))
		{
			fParam1 = 30f;
		}
		else
		{
			fParam1 = 30f;
		}
	}
	else if (fParam1 <= 0f)
	{
		return;
	}
	fParam1 = (fParam1 * (1f + Global_40.f_11095.f_70));
	switch (iParam0)
	{
		case 0:
			sVar1 = func_718(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_719(-1);
			func_720(0);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[0 /*2*/] = fParam1;
			break;
		
		case 1:
			sVar1 = func_718(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_721(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[1 /*2*/] = fParam1;
			break;
		
		case 2:
			sVar1 = func_718(iParam0);
			if (!GRAPHICS::ANIMPOSTFX_IS_RUNNING(sVar1))
			{
				GRAPHICS::ANIMPOSTFX_PLAY(sVar1);
			}
			func_722(-1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			Global_40.f_11095.f_4[2 /*2*/] = fParam1;
			break;
		
		case 19:
			func_723(0, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[0 /*2*/])->f_1 = fParam1;
			break;
		
		case 18:
			func_723(1, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[1 /*2*/])->f_1 = fParam1;
			break;
		
		case 20:
			func_723(2, 1, 1);
			ATTRIBUTE::_0xF6A7C08DF2E28B28(iVar0, iParam0, fParam1, 1);
			(Global_40.f_11095.f_4[2 /*2*/])->f_1 = fParam1;
			break;
		
		default:
			break;
	}
}

void func_590(float fParam0, bool bParam1)
{
	float fVar0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	
	fVar0 = func_724(13);
	if (fParam0 > 10f)
	{
		fParam0 = 10f;
	}
	if (!func_276(17))
	{
		return;
	}
	if (func_725())
	{
		iVar1 = func_726(fVar0);
		fVar0 = (fVar0 + fParam0);
		iVar2 = func_726(fVar0);
		if (iVar1 != iVar2)
		{
			Global_1347477->f_195 = func_655();
			func_656(&(Global_1347477->f_195), 0, 0, 1, 0, 0, 0, 0);
		}
		func_727(&fVar3, &fVar4);
		func_728(13, func_683(fVar0, fVar3, fVar4));
	}
	if (bParam1)
	{
		Global_40.f_11095.f_66++;
		if (5 == Global_40.f_11095.f_66)
		{
			func_128(94, 0);
		}
	}
}

int func_591(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1433048902;
		
		case 3:
			return 1433048902;
		
		case 4:
			return -1602657245;
		
		case 5:
			return -1991037110;
		
		case 6:
			return 1047281747;
		
		case 7:
			return -398744080;
		
		case 8:
			return -1066874997;
		
		case 11:
			return -2085219828;
		
		case 12:
			return 2064962445;
		
		case 13:
			return -1781387050;
		
		case 15:
			return -1620920647;
		
		case 16:
			return -1664530975;
		
		case 18:
			return 1047281747;
		
		case 19:
			return -1781387050;
		
		case 20:
			return -597058368;
		
		case 23:
			return 128702355;
		
		case 26:
			return -2051332199;
		
		case 27:
			return 546981776;
		
		case 28:
			return -2013384490;
		
		case 29:
			return 228922461;
		
		case 31:
			return -746674788;
		
		case 33:
			return 599861917;
		
		case 34:
			return -1781387050;
		
		case 37:
			return 2006811763;
		
		case 38:
			return -90546043;
		
		case 39:
			return 1216456215;
		
		case 40:
			return 746300881;
		
		case 41:
			return -435006002;
		
		case 42:
			return -624139784;
		
		case 43:
			return -529638012;
		
		case 1:
			return -651064726;
		
		case 9:
			return -404270094;
		
		case 10:
			return -1521783510;
		
		case 14:
			return 1714875242;
		
		case 17:
			return 2093126853;
		
		case 21:
			return 728781265;
		
		case 22:
			return 1794857344;
		
		case 24:
			return 1952409553;
		
		case 25:
			return -150591160;
		
		case 30:
			return 1019229063;
		
		case 32:
			return -323969289;
		
		case 35:
			return 927763737;
		
		case 36:
			return 1504361882;
		
		default:
			break;
	}
	return 0;
}

void func_592(int iParam0, int iParam1)
{
	if (!func_593(iParam0))
	{
		return;
	}
	if (func_56() != -1)
	{
		Global_36637[iParam0] = (Global_36637[iParam0] || iParam1);
		return;
	}
	Global_40.f_9274[iParam0] = (Global_40.f_9274[iParam0] || iParam1);
}

bool func_593(int iParam0)
{
	return !iParam0 <= 0;
}

int func_594(int iParam0)
{
	if (!func_593(iParam0))
	{
		return 0;
	}
	return func_729(iParam0, 4, 1);
}

void func_595(int iParam0, bool bParam1)
{
	if (!func_593(iParam0))
	{
		return;
	}
	if (func_730(iParam0))
	{
		return;
	}
	func_592(iParam0, 2);
	if (bParam1)
	{
		if (!func_16(0, 0, 1))
		{
			func_468(1, 6);
		}
	}
}

int func_596(int iParam0)
{
	if (!func_593(iParam0))
	{
		return 0;
	}
	return func_729(iParam0, 1, 1);
}

void func_597(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_593(iParam0))
	{
		return;
	}
	if (func_596(iParam0))
	{
		return;
	}
	if (!bParam1)
	{
		bParam1 = func_731(iParam0);
	}
	if (!bParam1)
	{
		if (func_56() != -1)
		{
		}
		else
		{
			func_732(iParam0);
		}
	}
	func_592(iParam0, 1);
	if (func_56() == -1)
	{
		func_733(iParam0, func_169());
	}
	func_595(iParam0, 1);
	if (bParam2)
	{
		if (!func_16(0, 0, 1))
		{
			func_468(1, 6);
		}
	}
}

float func_598(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!ENTITY::DOES_ENTITY_EXIST(iParam0) && iParam3)
	{
		return 0f;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1) && iParam3)
	{
		return 0f;
	}
	return MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iParam0, false, false), ENTITY::GET_ENTITY_COORDS(iParam1, false, false), bParam2);
}

bool func_599()
{
	int iVar0;
	
	iVar0 = &Global_1946804->f_529[9];
	iVar0 = (&Global_1946804->f_529[4] + iVar0);
	iVar0 = (&Global_1946804->f_529[10] + iVar0);
	iVar0 = (&Global_1946804->f_529[1] + iVar0);
	iVar0 = (&Global_1946804->f_529[2] + iVar0);
	iVar0 = (&Global_1946804->f_529[6] + iVar0);
	iVar0 = (&Global_1946804->f_529[29] + iVar0);
	iVar0 = (&Global_1946804->f_529[26] + iVar0);
	iVar0 = (&Global_1946804->f_529[18] + iVar0);
	iVar0 = (&Global_1946804->f_529[19] + iVar0);
	return iVar0 > 0;
}

int func_600(int iParam0)
{
	int iVar0;
	
	iVar0 = func_231(func_734(iParam0), 1);
	if (iVar0 != 39)
	{
		return (Global_1946804->f_1497.f_1[iVar0 /*3*/])->f_1;
	}
	return 0;
}

int func_601(int iParam0, int iParam1)
{
	bool bVar0;
	int iVar1;
	
	iVar1 = func_231(func_734(iParam0), 1);
	if (iVar1 >= 39)
	{
		return 0;
	}
	if (&Global_1946804->f_1497.f_1[iVar1 /*3*/] != 0 && &Global_1946804->f_1497.f_1[iVar1 /*3*/] != &Global_1946804->f_57[iVar1 /*11*/])
	{
		bVar0 = &Global_1946804->f_1497.f_1[iVar1 /*3*/];
		if (func_100(bVar0) == iParam0)
		{
			*iParam1 = bVar0;
			return 1;
		}
	}
	*iParam1 = 0;
	return 0;
}

int func_602()
{
	int iVar0;
	bool bVar1;
	int iVar2;
	
	iVar2 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_100(bVar1) == -999503751)
		{
			if (func_735() != bVar1)
			{
				iVar2++;
			}
		}
		iVar0++;
	}
	return iVar2;
}

int func_603(bool bParam0, int iParam1)
{
	struct<5> Var0;
	struct<4> Var5;
	
	Var0 = { func_160(bParam0, 0, 0) };
	Var5 = { func_162(bParam0, Var0, Var0.f_4, 0) };
	if (func_237(bParam0, Var0, Var0.f_4, 0) <= 0)
	{
		return 0;
	}
	INVENTORY::_0x9A113C660AEA3832(func_140(0), &Var5, iParam1);
	return 1;
}

void func_604(var uParam0, bool bParam1, int iParam2)
{
	if (*uParam0 >= 13)
	{
		return;
	}
	func_736(iParam2, *uParam0);
	func_737(uParam0->f_1[*uParam0 /*5*/], bParam1, -1, 1, 0);
	*uParam0++;
}

int func_605(int iParam0)
{
	switch (iParam0)
	{
		case -2061583405:
			return 2;
		
		case -1719060085:
			return 16;
		
		case -999503751:
			return 1;
		
		case -525676072:
			return 4;
		
		case 81053684:
			return 8;
		
		case -413129408:
			return 32;
		
		default:
			break;
	}
	return 0;
}

bool func_606(var uParam0)
{
	return (Global_1946804->f_2657.f_26.f_6 && uParam0) != 0;
}

void func_607(int iParam0)
{
	Global_1946804->f_978 = iParam0;
}

void func_608(bool bParam0, bool bParam1, bool bParam2)
{
	bool bVar0;
	
	switch (func_100(bParam0))
	{
		case -2061583405:
			bVar0 = func_738(bParam0, &(Global_1946804->f_2657.f_21));
			break;
		
		case 81053684:
			bVar0 = func_738(bParam0, &(Global_1946804->f_2657.f_23));
			break;
		
		case -999503751:
			bVar0 = func_738(bParam0, &(Global_1946804->f_2657.f_20));
			break;
		
		case -525676072:
			bVar0 = func_738(bParam0, &(Global_1946804->f_2657.f_22));
			break;
		
		case -1719060085:
			bVar0 = func_738(bParam0, &(Global_1946804->f_2657.f_24));
			break;
		
		case -413129408:
			bVar0 = func_738(bParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_421();
	}
	if (bParam1)
	{
		func_423(0, 0);
	}
}

void func_609(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var4;
	
	Var2 = 39;
	Var4 = 10;
	Var4.f_1 = 39;
	Var4.f_1.f_2 = 39;
	Var4.f_1.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	Var4.f_1.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2.f_2 = 39;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (iVar0 < *uParam0)
		{
			if ((func_739(uParam0->f_2[iVar0 /*2*/], 2) || &uParam0->f_2[iVar0 /*2*/] == iParam1) || &uParam0->f_2[iVar0 /*2*/] == 39)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			else
			{
				if (func_739(uParam0->f_2[iVar0 /*2*/], 1))
				{
					func_740(uParam0->f_2[iVar0 /*2*/], 2, 6);
				}
				*(Var4[iVar1 /*2*/]) = { *(uParam0->f_2[iVar0 /*2*/]) };
				iVar1++;
				*(uParam0->f_2[iVar0 /*2*/]) = { Var2 };
			}
			iVar0++;
			iVar0 = 0;
			while (iVar0 < iVar1)
			{
				*(uParam0->f_2[iVar0 /*2*/]) = { *(Var4[iVar0 /*2*/]) };
				iVar0++;
			}
			*uParam0 = iVar1;
		}
	}

void func_610(var uParam0, var uParam1, var uParam2)
{
	if (*uParam0 + 1 >= 10)
	{
		return;
	}
	if (!func_741(uParam0, 1))
	{
		func_742(uParam0, 1);
	}
	(uParam0->f_2[*uParam0 /*2*/])->f_1 = uParam2;
	uParam0->f_2[*uParam0 /*2*/] = uParam1;
	*uParam0++;
}

bool func_611(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[iParam0 /*11*/])->f_9 && iParam1) != 0;
}

void func_612(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = 0;
	if (bParam4)
	{
		iVar0 = 3;
	}
	iVar1 = 12;
	iVar2 = 20;
	iVar3 = 16;
	if ((uParam0->f_1[iVar3 /*3*/])->f_1 == 1216705912 || (uParam0->f_1[iVar3 /*3*/])->f_1 == 654181853)
	{
		if (&uParam0->f_1[iVar1 /*3*/] == &Global_1946804->f_57[iVar1 /*11*/])
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = 1334603721;
		}
		else
		{
			(uParam0->f_1[iVar3 /*3*/])->f_1 = -1539589426;
			(uParam0->f_1[iVar1 /*3*/])->f_1 = 1155669136;
		}
		if (bParam2)
		{
			func_430(iVar1, iVar0);
		}
		if (bParam1)
		{
			func_430(iVar3, iVar0);
		}
	}
	if ((uParam0->f_1[iVar2 /*3*/])->f_1 == -1333118809 || (uParam0->f_1[iVar2 /*3*/])->f_1 == -1158926300)
	{
		(uParam0->f_1[iVar2 /*3*/])->f_1 = 1155669136;
		if (bParam3)
		{
			func_430(iVar2, iVar0);
		}
	}
}

int func_613(int iParam0)
{
	int iVar0;
	
	if (iParam0 == 0)
	{
		iParam0 = func_420();
	}
	iVar0 = 0;
	if (iParam0 == 24043185)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_614(var uParam0, var uParam1, int iParam2, var uParam3)
{
	int iVar0;
	
	if (iParam2 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < PED::_0xFFCC2DB2D9953401(uParam0, uParam1, uParam3))
	{
		if (PED::_0x6243635AF2F1B826(uParam0, iVar0, uParam1, uParam3) == iParam2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_615(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return 1;
}

bool func_616(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_231(iParam0, 1) /*11*/])->f_10 && iParam1) != 0;
}

int func_617(bool bParam0, int iParam1, int iParam2, bool bParam3)
{
	int iVar0;
	
	if (bParam0 == &Global_1946804->f_57[func_231(iParam1, 1) /*11*/])
	{
		return 0;
	}
	iVar0 = 0;
	if (!func_223(524288))
	{
		switch (iParam1)
		{
			case 673166414:
				iVar0++;
				break;
			
			case -207860920:
				iVar0++;
				break;
		}
	}
	iVar0 = (iVar0 + PED::_0x31B2E7F2E3C58B89(bParam0, 1155669136, iParam2, bParam3));
	return iVar0;
}

int func_618(var uParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 25;
	iVar1 = 0;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	iVar0 = 26;
	if (&uParam0->f_1[iVar0 /*3*/] != &Global_1946804->f_57[iVar0 /*11*/])
	{
		iVar1++;
	}
	return iVar1;
}

void func_619(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		*(Global_1946804->f_1497.f_1[iParam0 /*3*/]) = { *(Global_1946804->f_1378.f_1[iParam0 /*3*/]) };
	}
	if (!bParam2)
	{
		return;
	}
	if (func_56() == -1)
	{
		func_743(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_26795.f_776);
	}
	else
	{
		func_744(Global_1946804->f_1497.f_1[iParam0 /*3*/], iParam0, Global_36637.f_45.f_350.f_1011);
	}
}

int func_620(int iParam0, int iParam1)
{
	if (func_56() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			return (Global_26795.f_26[iParam1 /*120*/] && iParam0) != 0;
		}
		return 0;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		return (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] && iParam0) != 0;
	}
	return 0;
}

int func_621(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return 439606975;
			return 1661121390;
			return 1164374808;
			return 1160643979;
			return 624063935;
			return -1476781101;
			return 294553332;
			return 1788874135;
			return 1560492757;
			return -769081407;
			return 1902428294;
			return -2114499732;
			return 800827126;
			return 688004210;
			return 166243423;
			return 1383300684;
			return 2051441678;
			return 162509669;
			return 635948769;
			return 274995506;
			return -1826731591;
			return 2119049229;
			return 1352942778;
			return 1964379549;
			return 1201189539;
			return 1351927599;
			return 2032023096;
			return -291256376;
			return -1243402388;
			return 65931886;
			return 1371678229;
			return 2102263084;
			return -272211555;
			return -55563408;
			return -1914506115;
			return 802495462;
			return 842905332;
			return -1951220140;
			return 1511551084;
			return -1725704631;
			return 1257427489;
			return -659341240;
			return 2038771525;
			return -535599244;
			return -389591806;
			return -1205612021;
			return 890706995;
			return 1156438275;
			return -1611873049;
			return 594312243;
			return -978578725;
			return 1784889667;
			return -361635024;
			return 1460520700;
			return 523337834;
			return -19271249;
			return 214175524;
			return -1303643297;
			return 411856831;
			return -926815459;
			return -1300731953;
			return -409616653;
			return 509954990;
			return -445916744;
			return -866249154;
			return -2077063704;
			return 205207539;
			return -1033657275;
			return 1806002837;
			return 705324896;
			return -1541763703;
			return 387052410;
			return -361288914;
			return -911054515;
			return 1084200963;
			return 1847948074;
			return -1212526764;
			return 1851440270;
			return -2028985700;
			return 1074435214;
			return -883015675;
			return -1047155604;
			return 1123231221;
			return 1866989210;
			return 478183719;
			return -1698955868;
			return -2029378634;
			return 1339864416;
			return 890998115;
			return -1376288999;
			return -1041123771;
			return 1389254668;
			return -346112633;
			return 773309172;
			return 0;
		}

void func_622(int iParam0, bool bParam1, int iParam2)
{
	func_745(&(Global_1946804->f_1378), iParam0);
	func_746(2, iParam0, 6);
	if (bParam1)
	{
		func_423(0, 1);
	}
}

bool func_623()
{
	return (Global_1914319->f_17369 || Global_1914319->f_18996.f_1);
}

int func_624()
{
	return Global_1051081->f_11;
}

char* func_625()
{
	return "unnamed";
}

int func_626(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		
		case 0:
			iVar0 = 32;
			break;
		
		case 1:
			iVar0 = 64;
			break;
		
		case 2:
			iVar0 = 128;
			break;
		
		case 3:
			iVar0 = 256;
			break;
		
		case 4:
			iVar0 = 512;
			break;
		
		case 5:
			iVar0 = 1024;
			break;
		
		case 6:
			iVar0 = 2048;
			break;
		
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

int func_627(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return 0;
	}
	return func_747(32, iParam0);
}

int func_628(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1109400->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 25;
	}
	if (&Global_1225638->f_21[iParam0])
	{
		return ((*Global_1108178)[iParam0 /*37*/])->f_1;
	}
	return 25;
}

bool func_629(int iParam0)
{
	if (func_748(iParam0))
	{
		if (NETWORK::_0xFE53B1F8D43F19BF(Global_1225638->f_10, iParam0) != 1)
		{
			func_749(iParam0);
		}
		return true;
	}
	return NETWORK::_0xFE53B1F8D43F19BF(Global_1225638->f_10, iParam0) == 1;
}

int func_630(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return 0;
	}
	return 1;
}

void func_631(char* sParam0, char* sParam1, int iParam2)
{
	_NAMESPACE84::_0x74BCCEB233AD95B2(-466562563, MISC::GET_HASH_KEY(sParam0));
	_NAMESPACE84::_0x74BCCEB233AD95B2(1885309238, MISC::GET_HASH_KEY(sParam1));
	_NAMESPACE84::_0x74BCCEB233AD95B2(-826961056, iParam2);
}

int func_632(bool bParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	
	iVar0 = 0;
	switch (iParam2)
	{
		case 1:
			iVar9 = 281887510;
			iVar10 = -164081697;
			iVar11 = -1161319399;
			iVar12 = 728781265;
			break;
		
		case 2:
			iVar9 = -222563712;
			iVar10 = 1794857344;
			iVar11 = 1952409553;
			break;
		
		case 4:
			iVar9 = 2116770557;
			iVar10 = -651064726;
			iVar11 = -404270094;
			iVar12 = 2093126853;
			break;
		
		case 8:
			iVar9 = 2085530337;
			iVar10 = -150591160;
			iVar11 = -323969289;
			iVar12 = 1504361882;
			break;
		
		case 16:
			iVar9 = -1521783510;
			iVar10 = 1714875242;
			iVar11 = 1019229063;
			iVar12 = 927763737;
			break;
	}
	iVar1 = func_505(iVar9);
	iVar2 = func_505(iVar10);
	iVar3 = func_505(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_505(iVar12);
	}
	iVar5 = func_506(iVar9);
	iVar6 = func_506(iVar10);
	iVar7 = func_506(iVar11);
	if (iParam2 != 2)
	{
		iVar8 = func_506(iVar12);
	}
	if (iVar1 >= iVar5)
	{
		iVar0 = (iVar0 + iVar5);
	}
	else
	{
		iVar0 = (iVar0 + iVar1);
	}
	if (iVar2 >= iVar6)
	{
		iVar0 = (iVar0 + iVar6);
	}
	else
	{
		iVar0 = (iVar0 + iVar2);
	}
	if (iVar3 >= iVar7)
	{
		iVar0 = (iVar0 + iVar7);
	}
	else
	{
		iVar0 = (iVar0 + iVar3);
	}
	if (iParam2 != 2)
	{
		if (iVar4 >= iVar8)
		{
			iVar0 = (iVar0 + iVar8);
		}
		else
		{
			iVar0 = (iVar0 + iVar4);
		}
	}
	return iVar0;
}

int func_633(bool bParam0, int iParam1, var uParam2, bool bParam3)
{
	struct<37> Var0;
	
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!ITEMDATABASE::_ITEM_DATABASE_FILLOUT_ACQUIRE_COST(bParam0, iParam1, &Var0))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	if (!bParam3)
	{
	}
	*uParam2 = Var0.f_1;
	return 1;
}

int func_634(var uParam0)
{
	if (!func_42(*uParam0, 0))
	{
		return 0;
	}
	switch (*uParam0)
	{
		case -1073808995:
			*uParam0 = -1753819339;
			return 1;
		
		case 1903483453:
			*uParam0 = -1527293029;
			return 1;
		
		case -541584777:
			*uParam0 = 206762213;
			return 1;
		
		case 998010398:
			*uParam0 = -324053813;
			return 1;
		
		case -1424823393:
			*uParam0 = -885810591;
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_635(bool bParam0, var uParam1, int iParam2)
{
	struct<5> Var0;
	int iVar5;
	struct<10> Var6;
	bool bVar28;
	int iVar29;
	
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	Var0 = { func_160(bParam0, 0, 1) };
	iVar5 = 1728382685;
	Var6.f_9 = -1591664384;
	bVar28 = false;
	iVar29 = 0;
	while (iVar29 < 4)
	{
		iVar5 = func_476((375 + iVar29), 1);
		if (func_348(bParam0, &Var0, iVar5, 0))
		{
			bVar28 = func_349(bParam0, &Var6, iVar5);
			if ((iParam2 && bVar28) || !bVar28)
			{
				*uParam1 = iVar5;
				return 1;
			}
		}
		iVar29++;
	}
	return 0;
}

int func_636(var uParam0)
{
	int iVar0;
	
	iVar0 = uParam0;
	if (iVar0 >= 1 && iVar0 <= 23)
	{
		return 0;
	}
	else if (iVar0 >= 24 && iVar0 <= 34)
	{
		return 1;
	}
	else if (iVar0 >= 35 && iVar0 <= 55)
	{
		return 2;
	}
	return 0;
}

float func_637(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 5f;
		
		case 2:
			return 20f;
		
		case 3:
			return 10f;
		
		case 4:
			return 10f;
		
		case 5:
			return 20f;
		
		case 6:
			return 10f;
		
		case 7:
			return 15f;
		
		case 8:
			return 15f;
		
		case 9:
			return 20f;
		
		case 10:
			return 5f;
		
		case 11:
			return 5f;
		
		case 12:
			return 10f;
		
		case 13:
			return 20f;
		
		case 14:
			return 30f;
		
		case 15:
			return 5f;
		
		case 16:
			return 5f;
		
		case 17:
			return 3f;
		
		case 18:
			return 20f;
		
		case 19:
			return func_750(iParam0);
		
		case 20:
			return 25f;
		
		case 21:
			return 50f;
		
		case 22:
			return 100f;
		
		case 23:
			return 150f;
		
		case 24:
			return 20f;
		
		case 25:
			return 10f;
		
		case 26:
			return 20f;
		
		case 27:
			return 20f;
		
		case 28:
			return 20f;
		
		case 29:
			return 20f;
		
		case 30:
			return func_750(iParam0);
		
		case 31:
			return 25f;
		
		case 32:
			return 50f;
		
		case 33:
			return 100f;
		
		case 34:
			return 150f;
		
		case 35:
			return 1f;
		
		case 36:
			return 5f;
		
		case 37:
			return 1f;
		
		case 38:
			return 3f;
		
		case 39:
			return 1f;
		
		case 40:
			return 1f;
		
		case 41:
			return 1f;
		
		case 42:
			return 5f;
		
		case 43:
			return 10f;
		
		case 49:
			return 20f;
		
		case 44:
			return 5f;
		
		case 45:
			return 5f;
		
		case 46:
			return 10f;
		
		case 47:
			return 10f;
		
		case 48:
			return 5f;
		
		case 50:
			return func_750(iParam0);
		
		case 51:
			return 25f;
		
		case 52:
			return 50f;
		
		case 53:
			return 100f;
		
		case 54:
			return 150f;
		
		case 55:
			return 5f;
		
		default:
			break;
	}
	return 0f;
}

int func_638(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_276(18);
		
		case 2:
			return func_276(20);
		
		case 1:
			return func_276(19);
		
		default:
			break;
	}
	return 1;
}

int func_639(int iParam0)
{
	return func_751(&(Global_40.f_11095.f_11[iParam0]));
}

void func_640(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	float fVar1;
	int iVar2;
	int iVar3;
	
	if (func_56() != -1)
	{
		return;
	}
	if (Global_1347477->f_117 || !func_276(31))
	{
		return;
	}
	iVar0 = func_639(iParam0);
	fVar1 = &Global_40.f_11095.f_11[iParam0];
	if (iVar0 >= 7)
	{
		return;
	}
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, BUILTIN::FLOOR(fParam1));
	Global_40.f_11095.f_11[iParam0] = fParam1;
	iVar2 = func_639(iParam0);
	if (func_752(iParam0) && func_753(iParam0))
	{
		if (!bParam2)
		{
			iVar3 = func_754(fVar1, fParam1);
			if (fParam1 > IntToFloat(func_755(iParam0)) && (iVar2 > iVar0 || iVar3 != 0))
			{
				if (!HUD::IS_RADAR_HIDDEN() && !Global_16)
				{
					if (iVar2 > iVar0)
					{
						func_128(func_756(iParam0), 0);
					}
					func_757(iParam0, iVar2, iVar3);
					func_580(iParam0, 7000);
				}
				Global_1347477->f_8 = 1;
			}
		}
	}
	Global_1347477->f_1 = iParam0;
	Global_1347477 = MISC::GET_GAME_TIMER();
}

char* func_641(int iParam0)
{
	return "PLAYER_RPG_XP_GAIN";
}

int func_642(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 837097462;
		
		case 0:
			return 2001720289;
		
		case 2:
			return 234329797;
		
		default:
			break;
	}
	return 0;
}

void func_643(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_644(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (bParam0)
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 1);
	}
	else
	{
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 15, 0);
		PLAYER::_0xA0C683284DF027C7(PLAYER::PLAYER_ID(), 1, 1);
	}
}

void func_645(int iParam0)
{
	int iVar0;
	
	if (!DATABINDING::_DATABINDING_IS_DATA_ID_VALID(Global_1955569->f_5.f_1))
	{
		return;
	}
	if (DATABINDING::_DATABDING_GET_ARRAY_COUNT(Global_1955569->f_5.f_1) > iParam0)
	{
		iVar0 = DATABINDING::_DATABINDING_GET_ITEM_CONTEXT_BY_INDEX(Global_1955569->f_5.f_1, iParam0);
		if (iVar0 == &Global_1955569->f_5.f_2[iParam0 /*36*/])
		{
			return;
		}
	}
	DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569->f_5.f_1, iParam0, "pause_info_panel_list", &(Global_1955569->f_5.f_2[iParam0 /*36*/]));
}

void func_646(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 440, !bParam0);
}

void func_647(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 439, !bParam0);
}

void func_648(bool bParam0)
{
	if (!ENTITY::DOES_ENTITY_EXIST(Global_35))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(Global_35) || PED::IS_PED_INJURED(Global_35))
	{
	}
	PED::SET_PED_CONFIG_FLAG(Global_35, 438, !bParam0);
}

void func_649(bool bParam0)
{
	int iVar0;
	
	iVar0 = 398076311;
	if (bParam0)
	{
		HUD::_0x4CC5F2FC1332577F(iVar0);
	}
	else
	{
		HUD::_0x8BC7C1F929D07BF3(iVar0);
	}
}

void func_650(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 50;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

void func_651(bool bParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = 49;
	iVar1 = PLAYER::PLAYER_ID();
	if (bParam0)
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 1);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 1);
	}
	else
	{
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 0, 0);
		PLAYER::_0x0751D461F06E41CE(iVar1, iVar0, 1, 0);
	}
}

int func_652(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return 0;
	}
	return &(Global_1946804->f_1497.f_1[func_231(iParam0, 1) /*3*/]);
}

void func_653()
{
	if (!UNLOCK::_UNLOCK_IS_UNLOCKED(-1526891582))
	{
		func_758();
		UNLOCK::_UNLOCK_SET_UNLOCKED(-1526891582, true);
		func_280(-916314281);
		func_325(-916314281, 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, -916314281, true, 2, false, false);
		func_280(494733111);
		func_325(494733111, 1, 752097756);
		WEAPON::SET_CURRENT_PED_WEAPON(Global_35, 494733111, true, 4, false, false);
	}
}

int func_654(int iParam0, int iParam1)
{
	if (iParam0 > iParam1)
	{
		return iParam1;
	}
	return iParam0;
}

int func_655()
{
	return &Global_1899515;
}

void func_656(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar0 = func_759(*iParam0);
	iVar1 = func_760(*iParam0);
	iVar2 = func_761(*iParam0);
	iVar3 = func_762(*iParam0);
	iVar4 = func_763(*iParam0);
	iVar5 = func_764(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 + iParam1);
	while (iVar5 >= 60)
	{
		iParam2++;
		iVar5 = (iVar5 - 60);
	}
	iVar4 = (iVar4 + iParam2);
	while (iVar4 >= 60)
	{
		iParam3++;
		iVar4 = (iVar4 - 60);
	}
	iVar3 = (iVar3 + iParam3);
	while (iVar3 >= 24)
	{
		iParam4++;
		iVar3 = (iVar3 - 24);
	}
	iVar2 = (iVar2 + iParam4);
	iVar6 = func_765(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_765(iVar1, iVar0);
	}
	iVar1 = (iVar1 + iParam5);
	while (iVar1 > 11)
	{
		iParam6++;
		iVar1 = (iVar1 - 12);
	}
	if (!bParam7)
	{
		iVar0 = (iVar0 + iParam6);
	}
	func_766(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_657(bool bParam0)
{
	struct<5> Var0;
	
	Var0 = { func_160(bParam0, 1, 0) };
	return func_230(Var0.f_4);
}

int func_658(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 968830139;
		
		case 1:
			return -649219937;
		
		case 2:
			return -858567048;
		
		case 3:
			return -718162726;
		
		case 4:
			return -1284282080;
		
		case 5:
			return -725003445;
		
		case 6:
			return -1445630104;
		
		case 7:
			return 580970876;
		
		case 8:
			return 967601061;
		
		case 9:
			return 1946030891;
		
		case 10:
			return -1511404982;
		
		case 11:
			return -944465290;
		
		case 12:
			return -1701098855;
		
		case 13:
			return 425319238;
		
		case 14:
			return 363594903;
		
		case 15:
			return -1217729597;
		
		case 16:
			return -1540119664;
		
		case 17:
			return 2100194981;
		
		case 18:
			return 446659922;
		
		case 19:
			return -390982951;
		
		case 20:
			return -1018798851;
		
		case 21:
			return -757567246;
		
		case 22:
			return -2054602073;
		
		case 23:
			return -378441099;
		
		case 24:
			return -585121677;
		
		case 25:
			return 1566949660;
		
		default:
			break;
	}
	return 0;
}

int func_659(var uParam0)
{
	return func_767(uParam0, -1);
}

bool func_660(int iParam0, bool bParam1)
{
	return func_768(func_655(), iParam0, bParam1);
}

int func_661()
{
	if (func_484())
	{
		return DLC::_0x1DB9D61E505AE3FC();
	}
	return 0;
}

void func_662(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_769((Global_40.f_4283.f_325 + iParam0));
}

void func_663(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_661())
	{
		func_448(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_448(MISC::_CREATE_VAR_STRING(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

bool func_664(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

void func_665(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_770(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::SET_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::SET_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::SET_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
		MISC::SET_BIT(Global_1058888->f_40567[iVar1], iVar2);
	}
	Global_1934765 = 0;
}

void func_666(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	
	iVar0 = func_770(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		MISC::CLEAR_BIT(Global_40.f_283[iVar1], iVar2);
	}
	else
	{
		iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
		if (iVar3 == 255)
		{
			Global_1058888->f_40567.f_46 = 1;
			MISC::CLEAR_BIT(Global_1058888->f_40567.f_14[iVar1], iVar2);
		}
		else
		{
			MISC::CLEAR_BIT(((*Global_1055058)[iVar3 /*116*/])->f_72[iVar1], iVar2);
		}
	}
	Global_1934765 = 0;
}

void func_667()
{
	func_666(-939420910);
	func_666(-1187950766);
	func_666(356365161);
	func_666(753127042);
	func_666(-2038424081);
	func_666(1884271742);
	func_666(459290420);
}

void func_668()
{
	func_666(704802028);
	func_666(588987611);
	func_666(2008888900);
	func_666(1649996811);
	func_666(227918160);
	func_666(168171957);
	func_666(1193080109);
	func_666(-491981251);
	func_666(-639037538);
	func_666(-618620429);
}

bool func_669(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	iVar0 = func_770(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return MISC::IS_BIT_SET(&(Global_40.f_283[iVar1]), iVar2);
	}
	return MISC::IS_BIT_SET(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_670(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_671(int iParam0)
{
	switch (iParam0)
	{
		case -1791518714:
			return 1;
		
		case -2087881550:
			return 2;
		
		case 1908068621:
			return 4;
		
		case 1611247019:
			return 8;
		
		case 1319635688:
			return 16;
		
		default:
			break;
	}
	return 0;
}

void func_672(var uParam0)
{
	Global_40.f_12018.f_43 = (Global_40.f_12018.f_43 || uParam0);
}

bool func_673(int iParam0)
{
	return COLLECTION::_0xF83D3DDA4D3C8169(iParam0) > 0;
}

int func_674()
{
	if (Global_1572887->f_12 != -1)
	{
		return 0;
	}
	return Global_1347477->f_203;
}

float func_675(int iParam0)
{
	return &(Global_40.f_11095[iParam0]);
}

float func_676()
{
	float fVar0;
	int iVar1;
	
	fVar0 = func_724(13);
	iVar1 = func_726(fVar0);
	if (iVar1 == 0)
	{
		return 0.15f;
	}
	if (iVar1 == 10 || iVar1 == -10)
	{
		return -0.25f;
	}
	return 0f;
}

float func_677()
{
	if (PED::IS_PED_ON_MOUNT(Global_35))
	{
		return 0.25f;
	}
	return 0f;
}

float func_678()
{
	if (func_484())
	{
		if (DLC::_0xA16B4FBA7887D7BA())
		{
			return 0.2f;
		}
	}
	return 0f;
}

float func_679()
{
	if (Global_40.f_39 == 11966224)
	{
		return 0f;
	}
	if (Global_40.f_11095.f_67 >= 9)
	{
		return -0.2f;
	}
	if (Global_40.f_11095.f_67 >= 7)
	{
		return -0.05f;
	}
	return 0f;
}

float func_680()
{
	return Global_1955565->f_3;
}

void func_681(int iParam0, char* sParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = func_771(iParam0, 1, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, sParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[1]), iParam2);
}

void func_682(int iParam0, float fParam1, bool bParam2)
{
	char* sVar0;
	
	sVar0 = func_771(iParam0, 2, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[2]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[2]), bParam2);
	if (fParam1 > 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_DOWN");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 859817522);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else if (fParam1 < 100f)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_20[2]), "RPG_ARROW_UP");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_24[2]), "pausemenu_player_update");
		DATABINDING::_DATABINDING_WRITE_DATA_HASH_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_28[2]), 1105014447);
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_32[2]), 0);
	}
}

float func_683(float fParam0, float fParam1, float fParam2)
{
	if (fParam0 > fParam2)
	{
		return fParam2;
	}
	else if (fParam0 < fParam1)
	{
		return fParam1;
	}
	return fParam0;
}

bool func_684()
{
	return func_724(12) <= -99f;
}

bool func_685()
{
	return func_724(12) >= 99f;
}

int func_686(int iParam0)
{
	if (!func_396(iParam0))
	{
		return 0;
	}
	if (func_397(iParam0, 2))
	{
		return 1;
	}
	return 0;
}

void func_687(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_396(iParam0))
	{
		return;
	}
	if (!func_686(iParam0))
	{
		func_689(iParam0, 2);
		if (bParam2)
		{
			if (!func_16(0, 0, 1))
			{
				func_468(1, 4);
			}
		}
		if ((!func_688() && !bParam1) && !func_16(0, 0, 1))
		{
			func_58(MISC::_CREATE_VAR_STRING(10, "OUT_JOURN_ADD", func_772(iParam0)), 10000, 0, 0, 0, 1);
		}
	}
}

bool func_688()
{
	int iVar0;
	
	iVar0 = _NAMESPACE71::_0xC17F69E1418CD11F(1);
	return (iVar0 != 0 && _NAMESPACE71::_0x59FA676177DBE4C9(iVar0) == 4);
}

void func_689(int iParam0, int iParam1)
{
	if (!func_396(iParam0))
	{
		return;
	}
	Global_40.f_7157[iParam0 /*3*/] = (Global_40.f_7157[iParam0 /*3*/] || iParam1);
}

void func_690(bool bParam0, bool bParam1)
{
	int iVar0;
	
	iVar0 = func_773(bParam0);
	switch (iVar0)
	{
		case 0:
			if (bParam1)
			{
				func_277(50);
			}
			else
			{
				func_277(48);
			}
			break;
		
		case 1:
			if (bParam1)
			{
				func_277(51);
			}
			else
			{
				func_277(49);
			}
			break;
		
		case 2:
			if (bParam1)
			{
				if (!func_774(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_306();
				}
			}
			else
			{
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_306();
			}
			break;
		
		case 3:
			func_277(24);
			if (bParam1)
			{
				if (!func_774(iVar0))
				{
					Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
					func_306();
				}
			}
			break;
	}
}

void func_691(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
			if (func_775(0))
			{
				iVar0++;
			}
			if (func_775(2))
			{
				iVar0++;
			}
			if (func_775(4))
			{
				iVar0++;
			}
			if (!func_776(16))
			{
				if (iVar0 == 1)
				{
					func_777();
					func_128(456, 1);
					func_778(16);
				}
			}
			if (!func_776(32))
			{
				if (iVar0 >= 3)
				{
					func_777();
					func_128(456, 1);
					func_778(32);
				}
			}
			break;
		
		case 1:
		case 3:
		case 7:
			if (func_775(1))
			{
				iVar0++;
			}
			if (func_775(3))
			{
				iVar0++;
			}
			if (func_775(7))
			{
				iVar0++;
			}
			if (!func_776(1))
			{
				if (iVar0 == 1)
				{
					func_779();
					func_128(457, 1);
					func_778(1);
				}
			}
			if (!func_776(2))
			{
				if (iVar0 >= 3)
				{
					func_779();
					func_128(457, 1);
					func_778(2);
				}
			}
			break;
		
		case 5:
		case 6:
		case 8:
			if (func_775(5))
			{
				iVar0++;
			}
			if (func_775(6))
			{
				iVar0++;
			}
			if (func_775(8))
			{
				iVar0++;
			}
			if (!func_776(4))
			{
				if (iVar0 == 1)
				{
					func_780();
					func_128(455, 1);
					func_778(4);
				}
			}
			if (!func_776(8))
			{
				if (iVar0 >= 3)
				{
					func_780();
					func_128(455, 1);
					func_778(8);
				}
			}
			break;
	}
}

void func_692(var uParam0)
{
	func_525(uParam0, 143479330);
	if (Global_1946804->f_1 == 2026485318)
	{
		func_525(uParam0, 617531372);
	}
	else
	{
		func_525(uParam0, 291123060);
	}
}

void func_693(var uParam0, int iParam1, struct<14> Param2)
{
	int iVar0;
	struct<21> Var1;
	
	if (!func_781(uParam0))
	{
		return;
	}
	if (&Global_1224865 < 20)
	{
		Global_1224865 = &Global_1224865 + 1;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 19)
		{
			*(Global_1224865->f_1[iVar0 /*21*/]) = { *(Global_1224865->f_1[iVar0 + 1 /*21*/]) };
			iVar0++;
		}
	}
	Var1.f_7.f_2.f_1 = 10;
	Var1 = { *uParam0 };
	Var1.f_4 = iParam1;
	Var1.f_6 = 1;
	Var1.f_7 = { Param2 };
	*(Global_1224865->f_1[(&Global_1224865 - 1) /*21*/]) = { Var1 };
}

int func_694(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<19> Var3;
	
	Var3.f_2 = 5;
	Var3.f_18 = 8;
	if (ITEMDATABASE::_ITEM_DATABASE_FILLOUT_UI_DATA(iParam0, &Var3))
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if (MISC::IS_STRING_NULL_OR_EMPTY(&(Var3.f_2[iVar0 /*3*/])))
			{
				Jump @230; //curOff = 56
			}
			else if (MISC::IS_STRING_NULL_OR_EMPTY((Var3.f_2[iVar0 /*3*/])->f_1))
			{
			}
			else
			{
				iVar1 = MISC::GET_HASH_KEY(&(Var3.f_2[iVar0 /*3*/]));
				iVar2 = MISC::GET_HASH_KEY((Var3.f_2[iVar0 /*3*/])->f_1);
				if (iParam2 != 0 && (Var3.f_2[iVar0 /*3*/])->f_2 != iParam2)
				{
					Jump @230; //curOff = 137
				}
				else if (iParam3 != 0 && iVar2 != iParam3)
				{
					Jump @230; //curOff = 160
				}
				else if (iParam4 != 0 && iVar1 != iParam4)
				{
					Jump @230; //curOff = 183
				}
				else if (iParam5 != 0 && iVar2 == iParam5)
				{
				}
				else
				{
					*uParam1 = iVar1;
					uParam1->f_1 = iVar2;
					uParam1->f_2 = iParam2;
					return 1;
				}
			}
			iVar0++;
		}
	}
	return 0;
}

int func_695(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	
	if (Global_1058888->f_40501 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar1 = (Global_1058888->f_40501 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (&Global_1058888->f_40501.f_1[iVar2 /*2*/] < iParam0)
		{
			iVar0 = iVar2 + 1;
		}
		else
		{
			return iVar2;
		}
	}
	return -1;
}

int func_696(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_782((*Global_1835011)[iParam0 /*74*/]);
	}
	return 0;
}

Vector3 func_697(int iParam0)
{
	switch (iParam0)
	{
		case 14:
			return -240.576f, 769.614f, 117.085f;
		
		case 34:
			return 2544.982f, -1187.344f, 52.3104f;
	}
	return ((*Global_1835011)[iParam0 /*74*/])->f_18;
}

int func_698(int iParam0)
{
	if (!func_50(iParam0))
	{
		return -1;
	}
	return func_783(iParam0);
}

int func_699()
{
	return -1;
}

float func_700(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 && ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return -1f;
	}
	return func_598(Global_35, iParam0, bParam1, iParam2);
}

void func_701(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_702(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_703(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 25);
}

int func_704(int iParam0)
{
	int iVar0;
	
	iVar0 = 0;
	while (iParam0 != 0)
	{
		iParam0 = (iParam0 && (iParam0 - 1));
		iVar0++;
	}
	return iVar0;
}

bool func_705(int iParam0)
{
	return COLLECTION::_0x9A03F22AD446EEAC(iParam0) > 0;
}

int func_706(int iParam0)
{
	switch (iParam0)
	{
		case 444160793:
			return 1;
		
		case -1969404854:
			return 1;
		
		case 1761263432:
			return 1;
		
		case -843795569:
			return 1;
		
		case -832850511:
			return 1;
		
		case -1464585113:
			return 1;
		
		case -1290897778:
			return 1;
		
		case -100913452:
			return 1;
		
		case 313332607:
			return 1;
		
		case -124539232:
			return 1;
		
		case 59384454:
			return 1;
		
		case 905173572:
			return 1;
		
		case 1432949803:
			return 1;
		
		case -983831788:
			return 1;
		
		case -1882344824:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_707(bool bParam0)
{
	switch (bParam0)
	{
		case -1866642239:
			return 1;
		
		case -935543049:
			return 1;
		
		case 102446365:
			return 1;
		
		case 924882045:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_708(bool bParam0)
{
	int iVar0;
	struct<11> Var1;
	int iVar95;
	
	Var1.f_10 = 10;
	iVar95 = 0;
	while (iVar95 < 3)
	{
		if (!func_784(&iVar0, 0, iVar95, &Var1) && !func_784(&iVar0, 1, iVar95, &Var1))
		{
		}
		else if (STREAMING::IS_MODEL_A_PED(Var1))
		{
			func_785(iVar0, &Var1);
			if (func_42(Var1.f_1, 0))
			{
				return 1;
			}
		}
		iVar95++;
	}
	return 0;
}

float func_709(float fParam0, float fParam1)
{
	if (fParam1 != 0f)
	{
		return ((fParam1 / 100f) * 200f);
	}
	return ((fParam0 / 8f) * 200f);
}

int func_710(int iParam0)
{
	if (func_480())
	{
		return 0;
	}
	return func_189(((*Global_1347702)[58 /*49*/])->f_15, 1);
}

var func_711(var uParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	struct<7> Var0;
	
	Var0.f_5 = 1;
	Var0.f_6 = 1;
	Var0 = sParam1;
	Var0.f_1 = iParam5;
	Var0.f_2 = iParam6;
	Var0.f_3 = iParam2;
	Var0.f_4 = iParam3;
	Var0.f_5 = iParam4;
	Var0.f_6 = iParam7;
	return func_786(uParam0, &Var0);
}

void func_712(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (bParam4)
	{
		fParam1 = func_715(iParam0, fParam1, 1);
	}
	func_788(iParam0, (func_787(iParam0, 2) + fParam1), bParam2, bParam3, 1, 2);
}

void func_713(float fParam0)
{
	if (fParam0 >= (100f - 1f))
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
	}
}

void func_714()
{
	Global_40.f_11095.f_11[14] = 100f;
	ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, 14, 100);
	Global_40.f_11095.f_42 = 60;
}

float func_715(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_655();
	func_789(&iVar0, 0, 0, 0, 1, 0, 0);
	iVar1 = func_790(iParam0, 2);
	if (func_768(iVar0, func_791(iParam0, 2), 1))
	{
		func_792(iParam0, 0, 2);
		iVar1 = 0;
	}
	if (iVar1 >= 2)
	{
		func_128(88, bParam2);
		return 0f;
	}
	func_793(iParam0, func_655(), 2);
	func_792(iParam0, iVar1 + 1, 2);
	return fParam1;
}

void func_716(int iParam0, float fParam1, bool bParam2)
{
	int iVar0;
	char* sVar1;
	
	if (func_56() != -1)
	{
		return;
	}
	if (!func_276(15))
	{
		return;
	}
	Global_40.f_11095[iParam0] = fParam1;
	iVar0 = func_794(BUILTIN::CEIL(&(Global_40.f_11095[iParam0])));
	ATTRIBUTE::_0xC6258F41D86676E0(Global_35, func_795(iParam0), iVar0);
	func_797(func_796(iParam0), (100f * (BUILTIN::TO_FLOAT(iVar0) / 100f)), 0);
	if (((fParam1 <= func_798(15) && iParam0 == 1) && PED::IS_PED_ON_FOOT(Global_35)) && !PED::IS_PED_SWIMMING(Global_35))
	{
		func_128(84, 1);
	}
	if (fParam1 <= -99.999f)
	{
		func_128(func_799(iParam0), 1);
	}
	sVar1 = func_800(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
	{
		PED::_0x437C08DB4FEBE2BD(Global_35, sVar1, BUILTIN::TO_FLOAT(iVar0), -1);
	}
}

int func_717(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 0:
			return 1;
		
		case 2:
			return 1;
		
		default:
			break;
	}
	return 0;
}

char* func_718(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PlayerOverpower";
		
		case 1:
			return "PlayerOverpower";
		
		case 2:
			return "PlayerOverpower";
		
		default:
			break;
	}
	return "";
}

void func_719(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0x16F2C8C084AB2092(iVar0);
	}
	iVar1 = func_801(2);
	func_802(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_720(bool bParam0)
{
	if (func_56() != -1)
	{
		return;
	}
	if (bParam0 && ATTRIBUTE::_0x200373A8DF081F22(Global_35, 0))
	{
		return;
	}
	if (Global_40.f_11095.f_43 == bParam0)
	{
		return;
	}
	if (bParam0)
	{
		func_128(89, 1);
		ATTRIBUTE::_0xFB6E111908502871(5);
	}
	else
	{
		func_128(90, 1);
		ATTRIBUTE::_0x3FC4C027FD0936F4(5);
	}
	func_803(1, bParam0, 1);
	func_310();
	Global_40.f_11095.f_43 = bParam0;
}

void func_721(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PED::_0xFC3B580C4380B5B7(iVar0);
	}
	iVar1 = func_804(2);
	func_805(BUILTIN::TO_FLOAT((iParam0 * iVar1)));
}

void func_722(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar0 = PLAYER::PLAYER_ID();
	if (iParam0 == 0)
	{
		return;
	}
	else if (iParam0 == -1)
	{
		iParam0 = PLAYER::_0x57D9991DC1334151(iVar0);
	}
	iVar1 = func_806(2);
	func_807(BUILTIN::TO_FLOAT((iParam0 * iVar1)), 0);
}

void func_723(int iParam0, bool bParam1, bool bParam2)
{
	func_788(iParam0, 100f, bParam1, bParam2, 1, 2);
}

float func_724(int iParam0)
{
	return &(Global_40.f_11095.f_11[iParam0]);
}

int func_725()
{
	if (func_56() != -1)
	{
		return 0;
	}
	if (Global_1347477->f_200)
	{
		return 0;
	}
	if (Global_1347477->f_195 == -15)
	{
		return 1;
	}
	return func_660(Global_1347477->f_195, 0);
}

int func_726(float fParam0)
{
	return BUILTIN::ROUND(((fParam0 / 100f) * BUILTIN::TO_FLOAT(10)));
}

void func_727(var uParam0, var uParam1)
{
	if (!func_173())
	{
		*uParam0 = -100f;
		*uParam1 = 100f;
		return;
	}
	*uParam0 = Global_40.f_11095.f_40;
	*uParam1 = Global_40.f_11095.f_41;
}

void func_728(int iParam0, float fParam1)
{
	int iVar0;
	bool bVar1;
	char* sVar2;
	
	Global_40.f_11095.f_11[iParam0] = fParam1;
	if (iParam0 == 12)
	{
		bVar1 = fParam1 != 0f;
		sVar2 = func_445(fParam1 < 0f, "rpg_cold", "rpg_hot");
		func_808(1, bVar1, 1, sVar2);
		func_809(!bVar1, fParam1 < 0f, bVar1);
		iVar0 = func_794(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
		func_310();
	}
	else if (iParam0 == 10)
	{
		iVar0 = func_794(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0);
	}
	else if (iParam0 == 16)
	{
		iVar0 = func_794(BUILTIN::CEIL(&(Global_40.f_11095.f_11[iParam0])));
		ATTRIBUTE::SET_ATTRIBUTE_POINTS(Global_35, iParam0, iVar0 * 100);
	}
	else if (iParam0 == 13)
	{
	}
}

bool func_729(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_593(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_12 != -1)
	{
		return (Global_36637[iParam0] && iParam1) != 0;
	}
	return (Global_40.f_9274[iParam0] && iParam1) != 0;
}

int func_730(int iParam0)
{
	if (!func_593(iParam0))
	{
		return 0;
	}
	return func_729(iParam0, 2, 1);
}

int func_731(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 21:
		case 22:
		case 24:
		case 25:
		case 30:
		case 32:
		case 35:
		case 36:
			return 1;
		
		default:
			return 0;
	}
	return 0;
}

void func_732(int iParam0)
{
	switch (iParam0)
	{
		case 5:
			func_128(210, 0);
			break;
		
		case 16:
			func_128(211, 0);
			break;
		
		case 33:
			func_128(212, 0);
			break;
		
		case 42:
			func_128(213, 0);
			break;
		
		case 2:
			func_128(214, 0);
			break;
		
		case 3:
			func_128(215, 0);
			break;
		
		case 43:
			func_128(216, 0);
			break;
		
		case 15:
			func_128(217, 0);
			break;
		
		case 23:
			func_128(218, 0);
			break;
		
		case 37:
			func_128(219, 0);
			break;
		
		case 26:
			func_128(220, 0);
			break;
		
		case 13:
			func_128(221, 0);
			break;
		
		case 19:
			func_128(222, 0);
			break;
		
		case 34:
			func_128(223, 0);
			break;
		
		case 38:
			func_128(224, 0);
			break;
		
		case 40:
			func_128(225, 0);
			break;
		
		case 7:
			func_128(226, 0);
			break;
		
		case 20:
			func_128(227, 0);
			break;
		
		case 18:
			func_128(228, 0);
			break;
		
		case 6:
			func_128(229, 0);
			break;
		
		case 29:
			func_128(230, 0);
			break;
		
		case 39:
			func_128(231, 0);
			break;
		
		case 11:
			break;
		
		case 4:
			func_128(233, 0);
			break;
		
		case 8:
			func_128(234, 0);
			break;
		
		case 28:
			func_128(235, 0);
			break;
		
		case 31:
			func_128(236, 0);
			break;
		
		case 12:
			func_128(237, 0);
			break;
		
		case 27:
			func_128(238, 0);
			break;
		
		case 41:
			func_128(239, 0);
			break;
	}
}

void func_733(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 1:
			if (bParam1 == 1)
			{
				func_170(1849379570, 0);
			}
			else
			{
				func_170(961286348, 0);
			}
			break;
		
		case 2:
			if (bParam1 == 1)
			{
				func_170(-837750081, 0);
			}
			else
			{
				func_170(340939753, 0);
			}
			break;
		
		case 3:
			if (bParam1 == 1)
			{
				func_170(-342875345, 0);
			}
			else
			{
				func_170(-1349311606, 0);
			}
			break;
		
		case 4:
			if (bParam1 == 1)
			{
				func_170(-1083564345, 0);
			}
			else
			{
				func_170(833225684, 0);
			}
			break;
		
		case 5:
			if (bParam1 == 1)
			{
				func_170(-363984637, 0);
			}
			else
			{
				func_170(1254542371, 0);
			}
			break;
		
		case 6:
			if (bParam1 == 1)
			{
				func_170(205335377, 0);
			}
			else
			{
				func_170(637367741, 0);
			}
			break;
		
		case 11:
			if (bParam1 == 1)
			{
				func_170(-1389317844, 0);
			}
			else
			{
				func_170(-556895345, 0);
			}
			break;
		
		case 7:
			if (bParam1 == 1)
			{
				func_170(-1907629529, 0);
			}
			else
			{
				func_170(1599606732, 0);
			}
			break;
		
		case 39:
			if (bParam1 == 1)
			{
				func_170(240007023, 0);
			}
			else
			{
				func_170(-1520210138, 0);
			}
			break;
		
		case 8:
			if (bParam1 == 1)
			{
				func_170(1312152388, 0);
			}
			else
			{
				func_170(-9418953, 0);
			}
			break;
		
		case 9:
			if (bParam1 == 1)
			{
				func_170(545314598, 0);
			}
			else
			{
				func_170(1529839790, 0);
			}
			break;
		
		case 10:
			if (bParam1 == 1)
			{
				func_170(1230485961, 0);
			}
			else
			{
				func_170(-1579920715, 0);
			}
			break;
		
		case 12:
			if (bParam1 == 1)
			{
				func_170(-201902289, 0);
			}
			else
			{
				func_170(1415616009, 0);
			}
			break;
		
		case 13:
			if (bParam1 == 1)
			{
				func_170(-564622057, 0);
			}
			else
			{
				func_170(-1442109431, 0);
			}
			break;
		
		case 14:
			if (bParam1 == 1)
			{
				func_170(-1303190422, 0);
			}
			else
			{
				func_170(-1299326860, 0);
			}
			break;
		
		case 15:
			if (bParam1 == 1)
			{
				func_170(-88060354, 0);
			}
			else
			{
				func_170(-366222423, 0);
			}
			break;
		
		case 40:
			if (bParam1 == 1)
			{
				func_170(1312248008, 0);
			}
			else
			{
				func_170(621868532, 0);
			}
			break;
		
		case 17:
			if (bParam1 == 1)
			{
				func_170(428446588, 0);
			}
			else
			{
				func_170(-1730302202, 0);
			}
			break;
		
		case 18:
			if (bParam1 == 1)
			{
				func_170(37692363, 0);
			}
			else
			{
				func_170(629404512, 0);
			}
			break;
		
		case 16:
			if (bParam1 == 1)
			{
				func_170(877023893, 0);
			}
			else
			{
				func_170(122486811, 0);
			}
			break;
		
		case 19:
			if (bParam1 == 1)
			{
				func_170(-706642783, 0);
			}
			else
			{
				func_170(621155065, 0);
			}
			break;
		
		case 20:
			if (bParam1 == 1)
			{
				func_170(-918250703, 0);
			}
			else
			{
				func_170(1945953943, 0);
			}
			break;
		
		case 21:
			if (bParam1 == 1)
			{
				func_170(722815515, 0);
			}
			else
			{
				func_170(-80758135, 0);
			}
			break;
		
		case 22:
			if (bParam1 == 1)
			{
				func_170(1053305061, 0);
			}
			else
			{
				func_170(1789349782, 0);
			}
			break;
		
		case 23:
			if (bParam1 == 1)
			{
				func_170(1024520106, 0);
			}
			else
			{
				func_170(1105521253, 0);
			}
			break;
		
		case 41:
			if (bParam1 == 1)
			{
				func_170(1140872184, 0);
			}
			else
			{
				func_170(-237709193, 0);
			}
			break;
		
		case 24:
			if (bParam1 == 1)
			{
				func_170(-1590595690, 0);
			}
			else
			{
				func_170(1836601784, 0);
			}
			break;
		
		case 25:
			if (bParam1 == 1)
			{
				func_170(1164380735, 0);
			}
			else
			{
				func_170(-1984992129, 0);
			}
			break;
		
		case 26:
			if (bParam1 == 1)
			{
				func_170(301696279, 0);
			}
			else
			{
				func_170(152181092, 0);
			}
			break;
		
		case 27:
			if (bParam1 == 1)
			{
				func_170(-415970359, 0);
			}
			else
			{
				func_170(839837681, 0);
			}
			break;
		
		case 28:
			if (bParam1 == 1)
			{
				func_170(1669531798, 0);
			}
			else
			{
				func_170(1602454819, 0);
			}
			break;
		
		case 29:
			if (bParam1 == 1)
			{
				func_170(-977383775, 0);
			}
			else
			{
				func_170(-1875435665, 0);
			}
			break;
		
		case 30:
			if (bParam1 == 1)
			{
				func_170(1183317680, 0);
			}
			else
			{
				func_170(-247145433, 0);
			}
			break;
		
		case 31:
			if (bParam1 == 1)
			{
				func_170(667332266, 0);
			}
			else
			{
				func_170(-368365640, 0);
			}
			break;
		
		case 33:
			if (bParam1 == 1)
			{
				func_170(-1578905205, 0);
			}
			else
			{
				func_170(946087658, 0);
			}
			break;
		
		case 32:
			if (bParam1 == 1)
			{
				func_170(-448931053, 0);
			}
			else
			{
				func_170(-421010414, 0);
			}
			break;
		
		case 34:
			if (bParam1 == 1)
			{
				func_170(-1162930163, 0);
			}
			else
			{
				func_170(-1228311530, 0);
			}
			break;
		
		case 35:
			if (bParam1 == 1)
			{
				func_170(1004123602, 0);
			}
			else
			{
				func_170(1321329534, 0);
			}
			break;
		
		case 36:
			if (bParam1 == 1)
			{
				func_170(281748406, 0);
			}
			else
			{
				func_170(-173822042, 0);
			}
			break;
		
		case 37:
			if (bParam1 == 1)
			{
				func_170(-1351305881, 0);
			}
			else
			{
				func_170(-1650817073, 0);
			}
			break;
		
		case 38:
			if (bParam1 == 1)
			{
				func_170(-1644190131, 0);
			}
			else
			{
				func_170(844678349, 0);
			}
			break;
		
		case 42:
			if (bParam1 == 1)
			{
				func_170(-926127573, 0);
			}
			else
			{
				func_170(-1260559150, 0);
			}
			break;
		
		case 43:
			if (bParam1 == 1)
			{
				func_170(758690400, 0);
			}
			else
			{
				func_170(1430679359, 0);
			}
			break;
		
		default:
			break;
	}
}

int func_734(int iParam0)
{
	int iVar0;
	
	if (!ITEMDATABASE::_ITEM_DATABASE_GET_FITS_SLOT_INFO(iParam0, 0, &iVar0))
	{
		return -358215195;
	}
	return func_230(iVar0);
}

int func_735()
{
	return Global_1946804->f_1497;
}

void func_736(int iParam0, var uParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = uParam1;
}

void func_737(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (PED::_0x93FFD92F05EC32FD(uParam0->f_3.f_1))
	{
		func_810(uParam0);
	}
	if (iParam2 == -1)
	{
		uParam0->f_1 = func_231(func_657(iParam1), 1);
		if (uParam0->f_1 == -1)
		{
		}
	}
	else
	{
		uParam0->f_1 = iParam2;
	}
	uParam0->f_2 = iParam4;
	*uParam0 = iParam1;
	uParam0->f_3 = 0;
	if (bParam3)
	{
		func_811(uParam0);
	}
}

int func_738(bool bParam0, var uParam1)
{
	int iVar0;
	int iVar1;
	
	iVar1 = bParam0;
	if (!func_416(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_100(bParam0) != -999503751)
		{
			func_812(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_100(bParam0) != -999503751)
	{
		func_812(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_603(bParam0, 1);
	return 1;
}

bool func_739(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_740(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_741(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_742(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_743(var uParam0, int iParam1, int iParam2)
{
	*((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_744(var uParam0, int iParam1, int iParam2)
{
	*((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/]) = { *uParam0 };
	((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 = (((Global_36637.f_45.f_350.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 - ((Global_26795.f_26[iParam2 /*120*/])->f_1.f_1[iParam1 /*3*/])->f_2 & 1);
}

void func_745(var uParam0, int iParam1)
{
	int iVar0;
	
	if (func_56() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		(Global_26795.f_26[iParam1 /*120*/])->f_1 = *uParam0;
		iVar0 = 0;
		while (iVar0 < 39)
		{
			func_743(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
			iVar0++;
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	(Global_36637.f_45.f_350.f_26[iParam1 /*120*/])->f_1 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		func_744(uParam0->f_1[iVar0 /*3*/], iVar0, iParam1);
		iVar0++;
	}
}

void func_746(int iParam0, int iParam1, int iParam2)
{
	if (func_56() == -1)
	{
		if (iParam1 == -1)
		{
			iParam1 = Global_26795.f_776;
		}
		if (iParam1 > -1 && iParam1 < 5)
		{
			Global_26795.f_26[iParam1 /*120*/] = (Global_26795.f_26[iParam1 /*120*/] || iParam0);
		}
		return;
	}
	if (iParam1 == -1)
	{
		iParam1 = Global_36637.f_45.f_350.f_1011;
	}
	if (iParam1 > -1 && iParam1 < 5)
	{
		Global_36637.f_45.f_350.f_26[iParam1 /*120*/] = (Global_36637.f_45.f_350.f_26[iParam1 /*120*/] || iParam0);
	}
}

int func_747(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_813(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_814())
	{
		return func_813(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	if (&Global_1225638->f_21[iParam1])
	{
		return func_813(&(((*Global_1108178)[iParam1 /*37*/])->f_4), iVar0, 5);
	}
	return 0;
}

int func_748(var uParam0)
{
	if (SCRIPTS::_0x72B2E00C9BAC6789(&(Global_1058888->f_49111), uParam0))
	{
		return 1;
	}
	return 0;
}

void func_749(int iParam0)
{
	int iVar0;
	
	if (func_815() != 0 || func_56() != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (!&Global_1225638->f_21[iVar0])
	{
		func_816(iParam0);
		return;
	}
	if (&Global_1058888->f_42357.f_1[iVar0 /*5*/] == 1)
	{
		return;
	}
	func_817(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 1);
	Global_1058888->f_42357.f_1[iVar0 /*5*/] = 1;
}

float func_750(int iParam0)
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	
	iVar4 = func_636(iParam0);
	switch (iParam0)
	{
		case 19:
		case 30:
		case 50:
			fVar3 = &Global_40.f_11095.f_11[iVar4];
			iVar5 = func_751(fVar3);
			iVar0 = iVar5;
			iVar6 = iVar0 + 1;
			iVar1 = (func_818(iVar6) - func_818(iVar5));
			fVar2 = (IntToFloat(iVar1) * 0.25f);
			return fVar2;
		
		default:
			break;
	}
	return -1f;
}

int func_751(float fParam0)
{
	if (fParam0 <= IntToFloat(-1))
	{
		return -1;
	}
	if (fParam0 < IntToFloat(50))
	{
		return 0;
	}
	if (fParam0 < IntToFloat(100))
	{
		return 1;
	}
	if (fParam0 < IntToFloat(200))
	{
		return 2;
	}
	if (fParam0 < IntToFloat(350))
	{
		return 3;
	}
	if (fParam0 < IntToFloat(550))
	{
		return 4;
	}
	if (fParam0 < IntToFloat(800))
	{
		return 5;
	}
	if (fParam0 < IntToFloat(1100))
	{
		return 6;
	}
	return 7;
}

int func_752(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 0:
			return 1;
		
		case 2:
			return 1;
		
		case 4:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_753(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 0:
			return 1;
		
		case 2:
			return 1;
		
		case 8:
			return 1;
		
		case 9:
			return 1;
		
		case 10:
			return 1;
		
		case 11:
			return 1;
		
		case 12:
			return 1;
		
		case 13:
			return 1;
		
		case 14:
			return 1;
		
		case 16:
			return 1;
		
		default:
			break;
	}
	return 0;
}

int func_754(float fParam0, float fParam1)
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	
	iVar0 = func_751(fParam0);
	fVar1 = BUILTIN::TO_FLOAT(func_818(iVar0));
	fVar2 = BUILTIN::TO_FLOAT(func_818(iVar0 + 1));
	fVar3 = (fVar2 - fVar1);
	iVar4 = BUILTIN::FLOOR((((fParam0 - fVar1) / fVar3) * 4f));
	iVar5 = BUILTIN::FLOOR((((fParam1 - fVar1) / fVar3) * 4f));
	if (iVar4 == iVar5)
	{
		return 0;
	}
	if (iVar5 >= 4 || iVar5 < 0)
	{
		return 0;
	}
	return iVar5;
}

int func_755(int iParam0)
{
	int iVar0;
	
	if (func_819(iParam0, &iVar0))
	{
		return func_818(iVar0);
	}
	switch (iParam0)
	{
		case 1:
			if (func_820())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		
		case 0:
			if (func_820())
			{
				return 550;
			}
			else
			{
				return 100;
			}
			break;
		
		case 2:
			if (func_820())
			{
				return 550;
			}
			else
			{
				return 50;
			}
			break;
		
		case 4:
			return 0;
	}
	return 0;
}

int func_756(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 246;
		
		case 2:
			return 247;
		
		case 1:
			return 248;
		
		default:
			break;
	}
	return -1;
}

void func_757(int iParam0, int iParam1, int iParam2)
{
	char* sVar0;
	char* sVar1;
	bool bVar2;
	int iVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	int iVar8;
	int iVar9;
	struct<6> Var10;
	
	if (iParam1 == 0)
	{
		return;
	}
	iVar3 = iParam1 + 1;
	if (iParam2 != 0)
	{
		sVar0 = "RPG_LEVEL_PROGRESS_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_PROGRESS_BODY", iParam2 * 25, iVar3 + 1);
	}
	else
	{
		sVar0 = "RPG_LEVEL_INCREASED_TOAST";
		sVar1 = MISC::_CREATE_VAR_STRING(2, "RPG_LEVEL_INCREASED_BODY", iVar3);
		bVar2 = true;
	}
	iVar3 = (iVar3 + func_821(iParam0));
	sVar4 = func_823(func_822(iVar3, iParam2));
	sVar6 = func_824(iParam0);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar6))
	{
		sVar5 = "HUD_Toast_Soundset";
	}
	sVar7 = MISC::_CREATE_VAR_STRING(10, sVar0, func_825(iParam0));
	iVar8 = func_826(iParam0);
	iVar9 = MISC::GET_HASH_KEY(sVar4);
	if (bVar2)
	{
		Var10 = sVar7;
		Var10.f_1 = sVar1;
		Var10.f_3 = iVar9;
		Var10.f_2 = iVar8;
		Var10.f_4 = 1;
		Var10.f_5 = func_827(iParam0);
		UILOG::_UILOG_POST_NOTIFICATION(&Var10);
	}
	func_378(sVar7, sVar1, iVar8, iVar9, -479097442, "INPUT_FEED_INTERACT_GENERIC", func_828(iParam0), -2, sVar5, sVar6, 0, 0, 1, 1);
}

void func_758()
{
	int iVar0;
	struct<4> Var30;
	
	if (!INVENTORY::_0x7C7E4AB748EA3B07())
	{
		return;
	}
	iVar0 = 29;
	func_829(Global_35, &iVar0);
	Var30 = { func_346(0) };
	INVENTORY::_0xE36D4A38D28D9CFB(0);
	INVENTORY::_0xC04F47D488EF9EBA(5, 1, &Var30, 0);
	INVENTORY::_0x5D6182F3BCE1333B(5, -142743235);
	func_830(0);
	func_831(7);
	func_227(-1623728698, 1, 1, 0);
	if (func_420() == 1160113249)
	{
		func_227(-763730846, 1, 1, 1);
		func_227(-361635024, 1, 1, 1);
	}
	func_832(Global_35, &iVar0);
}

var func_759(int iParam0)
{
	return (BUILTIN::SHIFT_RIGHT(iParam0, 26) & 31 * func_833(MISC::IS_BIT_SET(iParam0, 31), -1, 1)) + 1898;
}

int func_760(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 22) & 15;
}

int func_761(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 17) & 31;
}

int func_762(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 12) & 31;
}

int func_763(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 6) & 63;
}

int func_764(int iParam0)
{
	return BUILTIN::SHIFT_RIGHT(iParam0, 0) & 63;
}

int func_765(int iParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		iParam1 = 0;
	}
	switch (iParam0)
	{
		case 0:
		case 2:
		case 4:
		case 6:
		case 7:
		case 9:
		case 11:
			return 31;
		
		case 3:
		case 5:
		case 8:
		case 10:
			return 30;
		
		case 1:
			if ((iParam1 % 4) == 0)
			{
				if ((iParam1 % 100) != 0)
				{
					return 29;
				}
				else if ((iParam1 % 400) == 0)
				{
					return 29;
				}
			}
			return 28;
		
		default:
			break;
	}
	return 30;
}

void func_766(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_834(uParam0, iParam6);
	func_835(uParam0, iParam5);
	func_836(uParam0, iParam4);
	func_837(uParam0, iParam3);
	func_838(uParam0, iParam2);
	func_839(uParam0, iParam1);
}

int func_767(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	var uVar6;
	
	if (iParam1 < 0)
	{
		iParam1 = func_140(0);
	}
	if (!INVENTORY::_0x112BCA290D2EB53C(iParam1, uParam0, &iVar0, &iVar1, &iVar2, &iVar3, &iVar4, &iVar5))
	{
		return -15;
	}
	func_834(&uVar6, iVar0);
	func_835(&uVar6, iVar1);
	func_836(&uVar6, iVar2);
	func_837(&uVar6, iVar3);
	func_838(&uVar6, iVar4);
	func_839(&uVar6, iVar5);
	return uVar6;
}

bool func_768(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_840(iParam1) || !func_840(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

void func_769(int iParam0)
{
	struct<2> Var0;
	
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_325 = iParam0;
	Var0 = { func_449(1356759001) };
	STATS::STAT_ID_SET_INT(&Var0, iParam0, true);
}

int func_770(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2106445152:
			return 292;
		
		case -2106214197:
			return 104;
		
		case -2101264851:
			return 195;
		
		case -2073072369:
			return 59;
		
		case -2069570138:
			return 25;
		
		case -2066272360:
			return 357;
		
		case -2058120606:
			return 197;
		
		case -2038424081:
			return 49;
		
		case -2034257789:
			return 92;
		
		case -2022369555:
			return 265;
		
		case -2021582629:
			return 112;
		
		case -2020023971:
			return 278;
		
		case -1957523409:
			return 208;
		
		case -1952856164:
			return 165;
		
		case -1949204933:
			return 276;
		
		case -1925798111:
			return 41;
		
		case -1861414976:
			return 353;
		
		case -1852605133:
			return 10;
		
		case -1847672446:
			return 376;
		
		case -1840704908:
			return 289;
		
		case -1838712533:
			return 26;
		
		case -1838352012:
			return 57;
		
		case -1835851517:
			return 56;
		
		case -1831552326:
			return 123;
		
		case -1825294305:
			return 266;
		
		case -1824738758:
			return 277;
		
		case -1818850842:
			return 253;
		
		case -1799960545:
			return 257;
		
		case -1764522338:
			return 372;
		
		case -1763509974:
			return 141;
		
		case -1741667789:
			return 64;
		
		case -1738165526:
			return 3;
		
		case -1718674470:
			return 23;
		
		case -1717960576:
			return 61;
		
		case -1711895055:
			return 13;
		
		case -1706438978:
			return 233;
		
		case -1700452710:
			return 53;
		
		case -1674179981:
			return 55;
		
		case -1666278201:
			return 33;
		
		case -1612662716:
			return 201;
		
		case -1610966108:
			return 322;
		
		case -1582926490:
			return 146;
		
		case -1579419919:
			return 147;
		
		case -1558439474:
			return 301;
		
		case -1556423728:
			return 218;
		
		case -1532284567:
			return 116;
		
		case -1530132748:
			return 311;
		
		case -1524512402:
			return 209;
		
		case -1523910291:
			return 155;
		
		case -1455998786:
			return 338;
		
		case -1447311849:
			return 215;
		
		case -1436021162:
			return 172;
		
		case -1433686245:
			return 12;
		
		case -1425209566:
			return 32;
		
		case -1419919497:
			return 22;
		
		case -1414537028:
			return 73;
		
		case -1405998267:
			return 105;
		
		case -1344601768:
			return 314;
		
		case -1340339190:
			return 331;
		
		case -1329135070:
			return 140;
		
		case -1318987693:
			return 222;
		
		case -1311865656:
			return 37;
		
		case -1296807958:
			return 320;
		
		case -1283202000:
			return 321;
		
		case -1282804314:
			return 270;
		
		case -1278074582:
			return 171;
		
		case -1271608261:
			return 98;
		
		case -1257057567:
			return 21;
		
		case -1241340344:
			return 300;
		
		case -1236261996:
			return 235;
		
		case -1232809834:
			return 113;
		
		case -1230112817:
			return 170;
		
		case -1223121209:
			return 126;
		
		case -1215445344:
			return 131;
		
		case -1209597203:
			return 333;
		
		case -1206122982:
			return 156;
		
		case -1187950766:
			return 45;
		
		case -1179948750:
			return 136;
		
		case -1170496998:
			return 46;
		
		case -1164215952:
			return 234;
		
		case -1151084372:
			return 124;
		
		case -1145519186:
			return 100;
		
		case -1124061431:
			return 242;
		
		case -1123615607:
			return 29;
		
		case -1080627546:
			return 378;
		
		case -1077783786:
			return 194;
		
		case -1063147448:
			return 151;
		
		case -1062490780:
			return 79;
		
		case -1060078174:
			return 239;
		
		case -1056767524:
			return 176;
		
		case -1053549743:
			return 58;
		
		case -1029225159:
			return 106;
		
		case -1014145132:
			return 288;
		
		case -978957786:
			return 251;
		
		case -959357075:
			return 36;
		
		case -950054349:
			return 152;
		
		case -939420910:
			return 44;
		
		case -939114198:
			return 221;
		
		case -919512195:
			return 40;
		
		case -911126844:
			return 336;
		
		case -897750037:
			return 334;
		
		case -895073533:
			return 356;
		
		case -879507474:
			return 236;
		
		case -868076593:
			return 84;
		
		case -857964358:
			return 83;
		
		case -853383233:
			return 65;
		
		case -851626677:
			return 339;
		
		case -828139293:
			return 260;
		
		case -811637947:
			return 245;
		
		case -796902762:
			return 88;
		
		case -792853067:
			return 254;
		
		case -789397228:
			return 262;
		
		case -785605431:
			return 250;
		
		case -781631220:
			return 345;
		
		case -764163380:
			return 228;
		
		case -748969569:
			return 78;
		
		case -741351766:
			return 60;
		
		case -736853952:
			return 366;
		
		case -734416508:
			return 340;
		
		case -699277634:
			return 4;
		
		case -693828600:
			return 323;
		
		case -683458244:
			return 80;
		
		case -666014935:
			return 157;
		
		case -664512648:
			return 67;
		
		case -664252410:
			return 191;
		
		case -644722288:
			return 261;
		
		case -640663440:
			return 214;
		
		case -639037538:
			return 185;
		
		case -628542779:
			return 71;
		
		case -622554983:
			return 370;
		
		case -618620429:
			return 187;
		
		case -545450213:
			return 377;
		
		case -538889627:
			return 175;
		
		case -538880323:
			return 174;
		
		case -534215902:
			return 130;
		
		case -524787708:
			return 352;
		
		case -524145696:
			return 117;
		
		case -523522517:
			return 364;
		
		case -515561750:
			return 238;
		
		case -503955743:
			return 249;
		
		case -502473159:
			return 343;
		
		case -502324015:
			return 8;
		
		case -491981251:
			return 186;
		
		case -468693731:
			return 111;
		
		case -464836488:
			return 268;
		
		case -460024530:
			return 316;
		
		case -434590080:
			return 225;
		
		case -404698347:
			return 205;
		
		case -397760715:
			return 143;
		
		case -389056691:
			return 272;
		
		case -360036154:
			return 368;
		
		case -356975260:
			return 103;
		
		case -355531636:
			return 337;
		
		case -351362068:
			return 220;
		
		case -350863510:
			return 162;
		
		case -349064220:
			return 362;
		
		case -334729750:
			return 69;
		
		case -333135263:
			return 361;
		
		case -330120947:
			return 360;
		
		case -306246697:
			return 375;
		
		case -299522880:
			return 213;
		
		case -270094635:
			return 267;
		
		case -261141318:
			return 30;
		
		case -259123672:
			return 244;
		
		case -254562075:
			return 132;
		
		case -238080464:
			return 121;
		
		case -233743613:
			return 273;
		
		case -223469678:
			return 204;
		
		case -220282381:
			return 139;
		
		case -191424539:
			return 149;
		
		case -182889087:
			return 177;
		
		case -154581735:
			return 309;
		
		case -150493654:
			return 97;
		
		case -144653976:
			return 219;
		
		case -129643890:
			return 11;
		
		case -108780030:
			return 317;
		
		case -108307814:
			return 28;
		
		case -99303535:
			return 167;
		
		case -86199844:
			return 145;
		
		case -80522843:
			return 154;
		
		case -76237062:
			return 373;
		
		case -75024673:
			return 258;
		
		case -63926460:
			return 89;
		
		case -61411516:
			return 325;
		
		case -35658630:
			return 24;
		
		case -25901845:
			return 290;
		
		case -9438024:
			return 129;
		
		case -1:
			return 0;
		
		case 0:
			return 1;
		
		case 2639906:
			return 153;
		
		case 8924991:
			return 297;
		
		case 26054262:
			return 248;
		
		case 26245360:
			return 237;
		
		case 38162571:
			return 74;
		
		case 52706132:
			return 243;
		
		case 54073871:
			return 76;
		
		case 74872959:
			return 348;
		
		case 93964309:
			return 358;
		
		case 94263042:
			return 291;
		
		case 106479759:
			return 101;
		
		case 141950038:
			return 114;
		
		case 153152452:
			return 86;
		
		case 168171957:
			return 183;
		
		case 171107021:
			return 381;
		
		case 171499483:
			return 283;
		
		case 187862543:
			return 16;
		
		case 192515737:
			return 14;
		
		case 198200492:
			return 241;
		
		case 210001842:
			return 62;
		
		case 224551212:
			return 142;
		
		case 227918160:
			return 182;
		
		case 229371495:
			return 344;
		
		case 235928616:
			return 286;
		
		case 249726958:
			return 164;
		
		case 269047710:
			return 54;
		
		case 273461605:
			return 81;
		
		case 280705402:
			return 95;
		
		case 282809459:
			return 119;
		
		case 299694527:
			return 275;
		
		case 300221584:
			return 138;
		
		case 302205488:
			return 216;
		
		case 311708813:
			return 198;
		
		case 320943355:
			return 133;
		
		case 330026330:
			return 66;
		
		case 345808947:
			return 287;
		
		case 356365161:
			return 47;
		
		case 371850993:
			return 281;
		
		case 373691918:
			return 188;
		
		case 374115931:
			return 90;
		
		case 405586984:
			return 34;
		
		case 407136781:
			return 173;
		
		case 409602249:
			return 293;
		
		case 417081698:
			return 17;
		
		case 417525590:
			return 303;
		
		case 420709909:
			return 42;
		
		case 426191476:
			return 15;
		
		case 434558613:
			return 199;
		
		case 439465264:
			return 108;
		
		case 440043364:
			return 31;
		
		case 442317566:
			return 302;
		
		case 449774763:
			return 227;
		
		case 459290420:
			return 52;
		
		case 469053995:
			return 231;
		
		case 473295046:
			return 2;
		
		case 476714362:
			return 232;
		
		case 478884033:
			return 148;
		
		case 479419429:
			return 305;
		
		case 509781469:
			return 350;
		
		case 514932331:
			return 246;
		
		case 522677506:
			return 279;
		
		case 526003171:
			return 355;
		
		case 527226204:
			return 159;
		
		case 544152906:
			return 115;
		
		case 559573222:
			return 252;
		
		case 582380806:
			return 326;
		
		case 588987611:
			return 179;
		
		case 618699440:
			return 77;
		
		case 630808005:
			return 128;
		
		case 651395116:
			return 294;
		
		case 657241756:
			return 189;
		
		case 664571177:
			return 312;
		
		case 665676602:
			return 296;
		
		case 682839815:
			return 327;
		
		case 689024866:
			return 134;
		
		case 689930684:
			return 207;
		
		case 704802028:
			return 178;
		
		case 723021499:
			return 264;
		
		case 747514327:
			return 354;
		
		case 753127042:
			return 48;
		
		case 757752139:
			return 109;
		
		case 784360470:
			return 330;
		
		case 791041526:
			return 18;
		
		case 817925178:
			return 240;
		
		case 868326136:
			return 285;
		
		case 885203519:
			return 379;
		
		case 885378256:
			return 351;
		
		case 929582877:
			return 335;
		
		case 931649776:
			return 224;
		
		case 932909855:
			return 298;
		
		case 945612176:
			return 247;
		
		case 965986934:
			return 19;
		
		case 976539083:
			return 310;
		
		case 1010885152:
			return 7;
		
		case 1015669983:
			return 122;
		
		case 1050128548:
			return 284;
		
		case 1064154891:
			return 110;
		
		case 1067254646:
			return 319;
		
		case 1074873669:
			return 144;
		
		case 1140218954:
			return 27;
		
		case 1151197909:
			return 256;
		
		case 1159471771:
			return 329;
		
		case 1160698568:
			return 135;
		
		case 1164928979:
			return 158;
		
		case 1166612791:
			return 347;
		
		case 1167397384:
			return 307;
		
		case 1177464213:
			return 38;
		
		case 1186594126:
			return 230;
		
		case 1193080109:
			return 184;
		
		case 1203043430:
			return 274;
		
		case 1205826474:
			return 85;
		
		case 1207048789:
			return 169;
		
		case 1213993593:
			return 160;
		
		case 1216784232:
			return 269;
		
		case 1221801385:
			return 374;
		
		case 1238086793:
			return 313;
		
		case 1250636944:
			return 259;
		
		case 1302228510:
			return 315;
		
		case 1306158345:
			return 202;
		
		case 1321892118:
			return 324;
		
		case 1350371763:
			return 20;
		
		case 1350391819:
			return 75;
		
		case 1352699670:
			return 271;
		
		case 1358491857:
			return 263;
		
		case 1360745816:
			return 82;
		
		case 1376646519:
			return 223;
		
		case 1399676951:
			return 210;
		
		case 1410198831:
			return 217;
		
		case 1433244935:
			return 166;
		
		case 1441416901:
			return 211;
		
		case 1446719356:
			return 380;
		
		case 1453909576:
			return 125;
		
		case 1466547629:
			return 120;
		
		case 1478132521:
			return 367;
		
		case 1485195808:
			return 50;
		
		case 1485494263:
			return 102;
		
		case 1488286867:
			return 295;
		
		case 1488453464:
			return 212;
		
		case 1497516462:
			return 5;
		
		case 1500064347:
			return 72;
		
		case 1509509592:
			return 35;
		
		case 1512816328:
			return 168;
		
		case 1517904467:
			return 206;
		
		case 1522511407:
			return 280;
		
		case 1549124796:
			return 342;
		
		case 1557082963:
			return 163;
		
		case 1582370975:
			return 359;
		
		case 1583012985:
			return 304;
		
		case 1591451572:
			return 365;
		
		case 1607768502:
			return 9;
		
		case 1609506757:
			return 107;
		
		case 1626481264:
			return 118;
		
		case 1643531967:
			return 127;
		
		case 1649996811:
			return 181;
		
		case 1660024373:
			return 150;
		
		case 1665756137:
			return 93;
		
		case 1672143046:
			return 383;
		
		case 1691618738:
			return 68;
		
		case 1698972798:
			return 318;
		
		case 1703398561:
			return 332;
		
		case 1703426636:
			return 43;
		
		case 1708045337:
			return 346;
		
		case 1713221411:
			return 137;
		
		case 1743048395:
			return 226;
		
		case 1744443559:
			return 349;
		
		case 1766284049:
			return 94;
		
		case 1776302352:
			return 363;
		
		case 1804403874:
			return 382;
		
		case 1822001510:
			return 200;
		
		case 1846061697:
			return 99;
		
		case 1850082804:
			return 196;
		
		case 1867912207:
			return 70;
		
		case 1884271742:
			return 51;
		
		case 1926308480:
			return 96;
		
		case 1932172605:
			return 328;
		
		case 1944170089:
			return 161;
		
		case 1947931439:
			return 229;
		
		case 1952610440:
			return 203;
		
		case 1954026328:
			return 371;
		
		case 1982676972:
			return 91;
		
		case 2008888900:
			return 180;
		
		case 2016141805:
			return 6;
		
		case 2019386373:
			return 190;
		
		case 2024121624:
			return 193;
		
		case 2024383613:
			return 369;
		
		case 2024769126:
			return 308;
		
		case 2037589949:
			return 63;
		
		case 2051822093:
			return 299;
		
		case 2077022393:
			return 306;
		
		case 2080210939:
			return 282;
		
		case 2091701359:
			return 39;
		
		case 2109952320:
			return 192;
		
		case 2113625508:
			return 341;
		
		case 2127577956:
			return 255;
		
		case 2136753624:
			return 87;
		
		default:
			break;
	}
	if (iParam1 >= 1)
	{
	}
	return -1;
	if (iParam1 >= 1)
	{
	}
	return -1;
}

char* func_771(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 1:
					if (bParam2)
					{
						return "PMPLAYER_CONDITION_TEMPERATURE_FAIR";
					}
					else
					{
						return func_445(bParam3, "PMPLAYER_CONDITION_TEMPERATURE_COLD", "PMPLAYER_CONDITION_TEMPERATURE_HOT");
					}
					break;
				
				case 2:
					return func_445(bParam2, "PMPLAYER_CONDITION_HONOR_GOOD", "PMPLAYER_CONDITION_HONOR_BAD");
			}
			break;
		
		case 1:
		case 2:
		case 3:
			switch (iParam1)
			{
				case 0:
					return "PMPLAYER_CORE_PC_VALUE";
				
				case 1:
					return "PMPLAYER_TIME_VALUE_MINUTES";
				
				case 2:
					return "PMPLAYER_CORE_PC_VALUE";
				
				default:
					break;
			}
			break;
	}
	return "";
}

char* func_772(int iParam0)
{
	int iVar0;
	
	iVar0 = func_621(iParam0);
	if (iVar0 == 0)
	{
		return "OUT_UNKNOWN";
	}
	return func_574(iVar0);
}

int func_773(bool bParam0)
{
	int iVar0;
	
	if (func_841(bParam0))
	{
		iVar0 = 0;
	}
	else if (func_842(bParam0))
	{
		iVar0 = 1;
	}
	else if (func_843(bParam0))
	{
		iVar0 = 2;
	}
	else if (func_844(bParam0))
	{
		iVar0 = 3;
	}
	return iVar0;
}

int func_774(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 9)
	{
		if (func_15(func_845(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 > 1)
	{
		return 1;
	}
	return 0;
}

int func_775(int iParam0)
{
	int iVar0;
	int iVar1;
	
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_15(func_846(iVar0, iParam0), 1, 0))
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 >= 4)
	{
		return 1;
	}
	return 0;
}

bool func_776(int iParam0)
{
	return (Global_40.f_12003 && iParam0) != 0;
}

void func_777()
{
	int iVar0;
	
	if (func_56() != -1)
	{
		return;
	}
	func_325(1654063339, 1, 752097756);
	iVar0 = func_639(1);
	func_757(1, iVar0, 0);
}

void func_778(int iParam0)
{
	Global_40.f_12003 = (Global_40.f_12003 || iParam0);
}

void func_779()
{
	int iVar0;
	
	if (func_56() != -1)
	{
		return;
	}
	func_325(1623931083, 1, 752097756);
	iVar0 = func_639(2);
	func_757(2, iVar0, 0);
}

void func_780()
{
	int iVar0;
	
	if (func_56() != -1)
	{
		return;
	}
	func_325(-1845241476, 1, 752097756);
	iVar0 = func_639(0);
	func_757(0, iVar0, 0);
}

int func_781(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return 0;
	}
	return 1;
}

int func_782(var uParam0)
{
	if (func_847(&(uParam0->f_29), 62))
	{
		switch (func_848())
		{
			case 1:
				if (!func_847(&(uParam0->f_29), 6))
				{
					return 0;
				}
				break;
			
			case 2:
				if (!func_847(&(uParam0->f_29), 8))
				{
					return 0;
				}
				break;
			
			case 4:
				if (!func_847(&(uParam0->f_29), 16))
				{
					return 0;
				}
				break;
			
			case 8:
				if (!func_847(&(uParam0->f_29), 32))
				{
					if (func_847(&(uParam0->f_29), 2))
					{
						if (func_762(func_655()) < 5)
						{
							return 0;
						}
					}
					else
					{
						return 0;
					}
				}
				break;
		}
	}
	return 1;
}

int func_783(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_12105[iParam0 /*7*/])->f_3;
	}
	return 0;
}

int func_784(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	struct<4> Var1;
	int iVar5;
	
	if (func_849(iParam1) && !func_850(iParam1))
	{
		iVar0 = func_104(iParam1);
	}
	else
	{
		return 0;
	}
	func_851(uParam3);
	iVar5 = func_852(iParam2);
	if (!PED::_0x608BC6A6AACD5036(&Var1, iVar0, iVar5, 0))
	{
		return 0;
	}
	*uParam0 = Var1.f_3;
	if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
	{
		return 0;
	}
	if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(*uParam0) && !ENTITY::_0x88AD6CC10D8D35B2(*uParam0))
	{
		return 0;
	}
	*uParam3 = ENTITY::GET_ENTITY_MODEL(*uParam0);
	uParam3->f_2 = ENTITY::_0xD21C7418C590BB40(*uParam0);
	uParam3->f_3 = ENTITY::_0x0FD25587BB306C86(*uParam0);
	return 1;
}

void func_785(int iParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam0);
	if (ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		func_853(iVar0, &(iParam1->f_5), &(iParam1->f_6), &(iParam1->f_7), &(iParam1->f_4));
		if (func_854(&(iParam1->f_1), iVar0, iParam1->f_7, iParam1->f_5))
		{
		}
	}
}

var func_786(var uParam0, var uParam1)
{
	return AUDIO::_PLAY_AMBIENT_SPEECH1(uParam0, uParam1);
}

float func_787(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_855();
	}
	switch (iParam1)
	{
		case 0:
			return &(Global_1955569->f_753.f_5[iParam0 /*3*/]);
		
		case 1:
			return &(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/]);
		
		default:
			break;
	}
	return -1f;
}

int func_788(int iParam0, float fParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	int iVar0;
	
	if (iParam5 == 2)
	{
		iParam5 = func_855();
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (bParam2)
	{
		if (fParam1 >= 100f)
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Full", "Consumption_Sounds", true, 0);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND("Core_Fill_Up", "Consumption_Sounds", true, 0);
		}
	}
	if (bParam3)
	{
		func_856(iParam0, 7000, iParam5);
	}
	if (fParam1 > 100f)
	{
		fParam1 = 100f;
	}
	else if (fParam1 < 0f)
	{
		fParam1 = 0f;
	}
	func_857(iVar0, iParam0, fParam1);
	func_858(iParam0, fParam1, bParam4, iParam5);
	if (!ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		ATTRIBUTE::_0xC6258F41D86676E0(iVar0, func_795(iParam0), BUILTIN::CEIL(fParam1));
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_789(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	
	iVar0 = func_759(*iParam0);
	iVar1 = func_760(*iParam0);
	iVar2 = func_761(*iParam0);
	iVar3 = func_762(*iParam0);
	iVar4 = func_763(*iParam0);
	iVar5 = func_764(*iParam0);
	if (((((iParam6 == 0 && iParam5 == 0) && iParam4 == 0) && iParam3 == 0) && iParam2 == 0) && iParam1 == 0)
	{
		return;
	}
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam2 < 0)
	{
		return;
	}
	if (iParam3 < 0)
	{
		return;
	}
	if (iParam4 < 0)
	{
		return;
	}
	if (iParam5 < 0)
	{
		return;
	}
	if (iParam6 < 0)
	{
		return;
	}
	iVar5 = (iVar5 - iParam1);
	while (iVar5 < 0)
	{
		iParam2++;
		iVar5 += 60;
	}
	iVar4 = (iVar4 - iParam2);
	while (iVar4 < 0)
	{
		iParam3++;
		iVar4 += 60;
	}
	iVar3 = (iVar3 - iParam3);
	while (iVar3 < 0)
	{
		iParam4++;
		iVar3 += 24;
	}
	iVar2 = (iVar2 - iParam4);
	while (iVar2 <= 0)
	{
		iParam5++;
		iVar6 = (iVar1 - 1);
		if (iVar6 < 0)
		{
			iParam6++;
			iVar1 += 12;
		}
		iVar7 = func_765(iVar6, iVar0);
		iVar2 = (iVar2 + iVar7);
	}
	iVar1 = (iVar1 - iParam5);
	while (iVar1 < 0)
	{
		iParam6++;
		iVar1 += 12;
	}
	iVar0 = (iVar0 - iParam6);
	func_766(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

int func_790(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_855();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2;
		
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2;
		
		default:
			break;
	}
	return -1;
}

int func_791(int iParam0, int iParam1)
{
	if (iParam1 == 2)
	{
		iParam1 = func_855();
	}
	switch (iParam1)
	{
		case 0:
			return (Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1;
		
		case 1:
			return (Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1;
		
		default:
			break;
	}
	return -15;
}

void func_792(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_855();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_2 = iParam1;
			break;
		
		default:
			break;
	}
}

void func_793(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_855();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		
		case 1:
			(Global_1955569->f_866.f_2.f_5[iParam0 /*3*/])->f_1 = iParam1;
			break;
		
		default:
			break;
	}
}

int func_794(int iParam0)
{
	float fVar0;
	
	fVar0 = (BUILTIN::TO_FLOAT(iParam0 + 100) / 200f);
	return BUILTIN::CEIL((100f * fVar0));
}

int func_795(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1;
		
		case 0:
			return 0;
		
		case 2:
			return 2;
		
		default:
			break;
	}
	return 0;
}

int func_796(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		default:
			break;
	}
	return 0;
}

void func_797(int iParam0, float fParam1, int iParam2)
{
	char* sVar0;
	
	sVar0 = func_771(iParam0, 0, 0, 0);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0, BUILTIN::ROUND(fParam1));
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_12[0]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_16[0]), iParam2);
}

float func_798(int iParam0)
{
	float fVar0;
	
	fVar0 = (BUILTIN::TO_FLOAT(iParam0) / 100f);
	return ((fVar0 * 200f) - 100f);
}

int func_799(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 87;
		
		case 1:
			return 85;
		
		case 2:
			return 86;
		
		default:
			break;
	}
	return -1;
}

char* func_800(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HealthCoreValue";
		
		case 1:
			return "StaminaCoreValue";
		
		case 2:
			return "DeadEyeCoreValue";
		
		default:
			break;
	}
	return "";
}

int func_801(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_855();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850;
		
		case 1:
			return Global_1955569->f_866.f_115;
		
		default:
			break;
	}
	return -1;
}

void func_802(float fParam0, int iParam1)
{
	if (fParam0 == 0f)
	{
		return;
	}
	if (iParam1 == 0)
	{
		iParam1 = PLAYER::PLAYER_PED_ID();
	}
	if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iParam1))
	{
		return;
	}
	ENTITY::_0x835F131E7DC8F97A(iParam1, fParam0, 0, 0);
}

void func_803(int iParam0, bool bParam1, int iParam2)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_6, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_5, iParam2);
}

int func_804(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_855();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_2;
		
		case 1:
			return Global_1955569->f_866.f_115.f_2;
		
		default:
			break;
	}
	return -1;
}

void func_805(float fParam0)
{
	int iVar0;
	
	if (fParam0 == 0f)
	{
		return;
	}
	iVar0 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
	{
		return;
	}
	if (ENTITY::IS_ENTITY_DEAD(iVar0))
	{
		return;
	}
	PED::_0xC3D4B754C0E86B9E(iVar0, fParam0);
}

int func_806(int iParam0)
{
	if (iParam0 == 2)
	{
		iParam0 = func_855();
	}
	switch (iParam0)
	{
		case 0:
			return Global_1955569->f_850.f_1;
		
		case 1:
			return Global_1955569->f_866.f_115.f_1;
		
		default:
			break;
	}
	return -1;
}

void func_807(float fParam0, bool bParam1)
{
	int iVar0;
	int iVar1;
	float fVar2;
	
	iVar0 = PLAYER::PLAYER_ID();
	iVar1 = PLAYER::PLAYER_PED_ID();
	if (!ENTITY::DOES_ENTITY_EXIST(iVar1))
	{
		return;
	}
	if (PLAYER::_0xB16223CB7DA965F0(iVar0) && fParam0 > 0f)
	{
		return;
	}
	if (fParam0 == 0f)
	{
		return;
	}
	fVar2 = PLAYER::_0xAB3773E7AA1E9DCC(iVar0);
	if (fParam0 < 0f && bParam1 == 1)
	{
		bParam1 = false;
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, 1f);
	}
	if (fParam0 > 0f)
	{
		PLAYER::_0x51345AE20F22C261(iVar0, fParam0, 0, 0, 0);
	}
	else
	{
		PLAYER::_0x200114E99552462B(iVar0, fParam0, 0);
	}
	if (!bParam1)
	{
		PLAYER::_0x5A498FCA232F71E1(iVar0, fVar2);
	}
}

void func_808(int iParam0, bool bParam1, int iParam2, char* sParam3)
{
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_8, bParam1);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_7, iParam2);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING((Global_1955569->f_5.f_2[iParam0 /*36*/])->f_9, sParam3);
}

void func_809(bool bParam0, bool bParam1, bool bParam2)
{
	char* sVar0;
	
	sVar0 = func_771(0, 1, bParam0, bParam1);
	sVar0 = MISC::_CREATE_VAR_STRING(2, sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_12[1]), sVar0);
	DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_16[1]), bParam2);
	if (bParam0)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 0);
	}
	else if (bParam1)
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_cold");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
	else
	{
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_20[1]), "rpg_hot");
		DATABINDING::_DATABINDING_WRITE_DATA_STRING(&((Global_1955569->f_5.f_2[0 /*36*/])->f_24[1]), "pausemenu_player");
		DATABINDING::_DATABINDING_WRITE_DATA_BOOL(&((Global_1955569->f_5.f_2[0 /*36*/])->f_32[1]), 1);
	}
}

void func_810(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	func_859(&(uParam0->f_3));
}

void func_811(var uParam0)
{
	if (uParam0->f_3)
	{
		return;
	}
	func_860(&(uParam0->f_3), *uParam0, uParam0->f_2);
}

void func_812(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	iVar1 = func_861(iParam1);
	func_862(iParam1, iParam2);
	if (iVar1 >= 0 && uParam0->f_26 > 0)
	{
		func_863(&(uParam0->f_26), iVar1);
		if (func_864(uParam0->f_26, &iVar0))
		{
			func_865(iVar0, iVar1);
		}
	}
}

bool func_813(var uParam0, int iParam1, int iParam2)
{
	int iVar0;
	int iVar1;
	
	return MISC::IS_BIT_SET(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return MISC::IS_BIT_SET(uParam0[iVar0], iVar1);
}

int func_814()
{
	return Global_1109400->f_244;
}

int func_815()
{
	return Global_1572887->f_13;
}

void func_816(int iParam0)
{
	int iVar0;
	
	if (Global_1572887->f_13 != 0 || Global_1572887->f_12 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (&Global_1058888->f_42357.f_1[iVar0 /*5*/] == 0)
	{
		return;
	}
	func_817(iVar0);
	NETWORK::_0x51951DE06C0D1C40(iParam0, 0);
	Global_1058888->f_42357.f_1[iVar0 /*5*/] = 0;
}

void func_817(int iParam0)
{
	if ((Global_1058888->f_42357.f_1[iParam0 /*5*/])->f_1 != 0)
	{
		(Global_1058888->f_42357.f_1[iParam0 /*5*/])->f_2 = 0;
		(Global_1058888->f_42357.f_1[iParam0 /*5*/])->f_1 = 0;
	}
}

int func_818(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1;
		
		case 0:
			return 0;
		
		case 1:
			return 50;
		
		case 2:
			return 100;
		
		case 3:
			return 200;
		
		case 4:
			return 350;
		
		case 5:
			return 550;
		
		case 6:
			return 800;
		
		case 7:
			return 1100;
		
		default:
			break;
	}
	return 0;
}

int func_819(var uParam0, var uParam1)
{
	return 0;
}

int func_820()
{
	return 0;
}

int func_821(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return INVENTORY::_0xE787F05DFC977BDE(func_140(0), -1845241476, 0);
		
		case 1:
			return INVENTORY::_0xE787F05DFC977BDE(func_140(0), 1654063339, 0);
		
		case 2:
			return INVENTORY::_0xE787F05DFC977BDE(func_140(0), 1623931083, 0);
	}
	return 0;
}

struct<4> func_822(int iParam0, int iParam1)
{
	char cVar0[32];
	
	if (iParam0 >= 10)
	{
		iParam1 = 0;
	}
	StringCopy(&cVar0, "TOAST_RPG_LEVEL_", 32);
	StringIntConCat(&cVar0, iParam0, 32);
	StringConCat(&cVar0, "_", 32);
	StringIntConCat(&cVar0, iParam1, 32);
	return cVar0;
}

var func_823(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return HUD::_0xD8402B858F4DDD88(&uParam0, HUD::GET_LENGTH_OF_LITERAL_STRING(&uParam0));
}

char* func_824(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "health";
		
		case 0:
			return "stamina";
		
		case 2:
			return "dead_eye_level_up";
		
		default:
			break;
	}
	return "";
}

char* func_825(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return "RPG_STAMINA";
		
		case 0:
			return "RPG_HEALTH";
		
		case 2:
			return "RPG_DEADEYE";
		
		default:
			break;
	}
	return "";
}

int func_826(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 444492752;
		
		case 0:
			return 1874233471;
		
		case 2:
			return -1285232277;
		
		default:
			break;
	}
	return 0;
}

int func_827(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		
		case 1:
			return 2;
		
		case 2:
			return 3;
		
		default:
			break;
	}
	return 0;
}

int func_828(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1896546861;
		
		case 1:
			return 304419444;
		
		case 2:
			return 1497019382;
		
		default:
			break;
	}
	return 0;
}

void func_829(int iParam0, int* iParam1)
{
	var uVar0;
	int iVar30;
	int iVar31;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	uVar0 = 29;
	MISC::_COPY_MEMORY(iParam1, &uVar0, 30);
	iVar30 = 0;
	while (iVar30 < 29)
	{
		iVar31 = 0;
		WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar31, false, iVar30, true);
		if (func_137(iVar31))
		{
			(*iParam1)[iVar30] = iVar31;
		}
		else
		{
			(*iParam1)[iVar30] = 0;
		}
		iVar30++;
	}
}

void func_830(bool bParam0)
{
	int iVar0;
	bool bVar1;
	
	iVar0 = 17;
	while (iVar0 >= 0)
	{
		bVar1 = &Global_1946804->f_2657[iVar0];
		if (func_42(bVar1, 0))
		{
			func_608(bVar1, 0, bParam0);
		}
		Global_1946804->f_2657[iVar0] = 0;
		iVar0 = (iVar0 + -1);
	}
	Global_1946804->f_2657.f_20 = 0;
	Global_1946804->f_2657.f_21 = 0;
	Global_1946804->f_2657.f_22 = 0;
	Global_1946804->f_2657.f_23 = 0;
	Global_1946804->f_2657.f_24 = 0;
	Global_1946804->f_2657.f_25 = 0;
	Global_1946804->f_2657.f_19 = 0;
	Global_1946804->f_2657.f_26.f_6 = 0;
}

void func_831(int iParam0)
{
	int iVar0;
	int iVar1;
	bool bVar2;
	
	Global_1946804->f_2657.f_26.f_2 = 3;
	Global_1946804->f_2657.f_26.f_1 = 3;
	Global_1946804->f_2657.f_26 = 3;
	if (func_56() == -1)
	{
		func_866(352481484);
		iVar0 = 0;
		while (iVar0 < Global_26795.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_26795[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_26795.f_20;
		Global_1946804->f_2657.f_21 = Global_26795.f_21;
		Global_1946804->f_2657.f_22 = Global_26795.f_22;
		Global_1946804->f_2657.f_23 = Global_26795.f_23;
		Global_1946804->f_2657.f_24 = Global_26795.f_24;
		Global_1946804->f_2657.f_25 = Global_26795.f_25;
		Global_1946804->f_2657.f_19 = Global_26795.f_19;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < Global_36637.f_45.f_350.f_19)
		{
			Global_1946804->f_2657[iVar0] = &Global_36637.f_45.f_350[iVar0];
			iVar0++;
		}
		Global_1946804->f_2657.f_20 = Global_36637.f_45.f_350.f_20;
		Global_1946804->f_2657.f_21 = Global_36637.f_45.f_350.f_21;
		Global_1946804->f_2657.f_22 = Global_36637.f_45.f_350.f_22;
		Global_1946804->f_2657.f_23 = Global_36637.f_45.f_350.f_23;
		Global_1946804->f_2657.f_24 = Global_36637.f_45.f_350.f_24;
		Global_1946804->f_2657.f_25 = Global_36637.f_45.f_350.f_25;
		Global_1946804->f_2657.f_19 = Global_36637.f_45.f_350.f_19;
	}
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		bVar2 = &Global_1946804->f_2657[iVar0];
		if (func_100(bVar2) != -999503751)
		{
			func_604(&(Global_1946804->f_2657.f_26.f_26), bVar2, iVar0);
		}
		if (func_603(bVar2, 0))
		{
			func_111(bVar2, &Global_1946804->f_1497.f_1[iVar1 /*3*/] == &Global_1946804->f_2657[iVar0]);
		}
		iVar0++;
	}
}

void func_832(int iParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	if (ENTITY::IS_ENTITY_DEAD(iParam0))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 29)
	{
		if (iParam1[iVar0] != 0)
		{
			if (!WEAPON::HAS_PED_GOT_WEAPON(Global_35, iParam1[iVar0], 0, 0))
			{
				if (func_475(iParam1[iVar0]))
				{
					WEAPON::_GIVE_WEAPON_TO_PED_2(iParam0, iParam1[iVar0], 0, false, false, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
				}
			}
			iVar1 = 0;
			WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar1, false, iVar0, true);
			if (iVar1 != iParam1[iVar0])
			{
				WEAPON::SET_CURRENT_PED_WEAPON(Global_35, iParam1[iVar0], true, iVar0, false, false);
			}
		}
		iVar0++;
	}
}

int func_833(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_834(var uParam0, int iParam1)
{
	if (iParam1 < 0)
	{
		return;
	}
	if (iParam1 > 1930 || iParam1 < 1866)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 2080374784);
	if (iParam1 < 1898)
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((1898 - iParam1), 26));
		*uParam0 |= -2147483648;
	}
	else
	{
		*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT((iParam1 - 1898), 26));
		*uParam0 = (*uParam0 - *uParam0 & -2147483648);
	}
}

void func_835(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 62914560);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 22));
}

void func_836(var uParam0, int iParam1)
{
	int iVar0;
	int iVar1;
	
	iVar0 = func_760(*uParam0);
	iVar1 = func_759(*uParam0);
	if (iParam1 < 1 || iParam1 > func_765(iVar0, iVar1))
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4063232);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 17));
}

void func_837(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 126976);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 12));
}

void func_838(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 4032);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 6));
}

void func_839(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*uParam0 = (*uParam0 - *uParam0 & 63);
	*uParam0 = (*uParam0 || BUILTIN::SHIFT_LEFT(iParam1, 0));
}

int func_840(int iParam0)
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	
	if (iParam0 == -15)
	{
		return 0;
	}
	iVar0 = func_764(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return 0;
	}
	iVar1 = func_763(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return 0;
	}
	iVar2 = func_762(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return 0;
	}
	iVar3 = func_759(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return 0;
	}
	iVar4 = func_760(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return 0;
	}
	iVar5 = func_761(iParam0);
	if (iVar5 < 1 || iVar5 > func_765(iVar4, iVar3))
	{
		return 0;
	}
	return 1;
}

int func_841(bool bParam0)
{
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (func_91(bParam0, -1066545920))
	{
		return 1;
	}
	return 0;
}

int func_842(bool bParam0)
{
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (func_91(bParam0, -284267618))
	{
		return 1;
	}
	return 0;
}

int func_843(bool bParam0)
{
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (func_91(bParam0, 363491182))
	{
		return 1;
	}
	return 0;
}

int func_844(bool bParam0)
{
	if (!func_42(bParam0, 0))
	{
		return 0;
	}
	if (func_91(bParam0, 1406113494))
	{
		return 1;
	}
	return 0;
}

int func_845(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_867(iParam0);
		
		case 1:
			return func_868(iParam0);
		
		case 2:
			return func_869(iParam0);
		
		case 3:
			return func_870(iParam0);
	}
	return 0;
}

int func_846(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			return func_871(iParam0);
		
		case 1:
			return func_872(iParam0);
		
		case 2:
			return func_873(iParam0);
		
		case 3:
			return func_874(iParam0);
		
		case 4:
			return func_875(iParam0);
		
		case 5:
			return func_876(iParam0);
		
		case 6:
			return func_877(iParam0);
		
		case 7:
			return func_878(iParam0);
		
		case 8:
			return func_879(iParam0);
	}
	return 0;
}

int func_847(var uParam0, int iParam1)
{
	int iVar0;
	
	iVar0 = (*uParam0 && iParam1);
	if (!iVar0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_848()
{
	return &Global_1899516;
}

int func_849(int iParam0)
{
	iParam0 = func_213(iParam0);
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_1900383[iParam0 /*45*/]))
	{
		return 1;
	}
	return 0;
}

int func_850(int iParam0)
{
	int iVar0;
	
	iParam0 = func_213(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_849(iParam0))
	{
		return 0;
	}
	iVar0 = func_104(iParam0);
	if (ENTITY::IS_ENTITY_DEAD(iVar0) || PED::IS_PED_INJURED(iVar0))
	{
		return 1;
	}
	return 0;
}

void func_851(var uParam0)
{
	int iVar0;
	
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = -1;
	uParam0->f_6 = 0;
	uParam0->f_7 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		uParam0->f_10[iVar0 /*8*/] = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_1 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_2 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_3 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_4 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_5 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_6 = 0;
		(uParam0->f_10[iVar0 /*8*/])->f_7 = 0;
		iVar0++;
	}
	uParam0->f_91 = 0;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
}

int func_852(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 4;
		
		case 1:
			return 5;
		
		case 2:
			return 6;
	}
	return 0;
}

void func_853(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	*uParam3 = PED::_0x88EFFED5FE8B0B4A(iParam0);
	*uParam2 = FLOCK::_0xF8B48A361DC388AE(iParam0);
	if (*uParam2 == 2)
	{
		*uParam1 = 4;
	}
	else if (*uParam2 == 1)
	{
		*uParam1 = 3;
	}
	else
	{
		*uParam4 = PED::_0x7BCC6087D130312A(iParam0);
		switch (*uParam4)
		{
			case 0:
				*uParam1 = 0;
				break;
			
			case 1:
				*uParam1 = 1;
				break;
			
			case -1:
			case 2:
				*uParam1 = 2;
				break;
		}
	}
}

bool func_854(var uParam0, int iParam1, int iParam2, var uParam3)
{
	int iVar0;
	int iVar1;
	var uVar2;
	
	iVar0 = uParam3;
	iVar1 = iParam2;
	if (iVar0 < iVar1)
	{
		iParam2 = iVar0;
	}
	uVar2 = PED::_0x9E7738B291706746(uParam0, iParam1, iParam2);
	return uVar2;
}

int func_855()
{
	if (func_880())
	{
		return 1;
	}
	return 0;
}

void func_856(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_855();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_15[iParam0 /*3*/] = iParam1;
			break;
		
		case 1:
			Global_1955569->f_866.f_2.f_15[iParam0 /*3*/] = iParam1;
			break;
		
		default:
			break;
	}
}

void func_857(int iParam0, int iParam1, float fParam2)
{
	char* sVar0;
	
	sVar0 = func_800(iParam1);
	if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		PED::_0x437C08DB4FEBE2BD(iParam0, func_881(iParam1), fParam2, -1);
	}
}

void func_858(int iParam0, float fParam1, bool bParam2, int iParam3)
{
	int iVar0;
	
	if (iParam3 == 2)
	{
		iParam3 = func_855();
	}
	iVar0 = MISC::GET_GAME_TIMER();
	func_882(iParam0, fParam1, iParam3);
	if (bParam2)
	{
		func_883(iParam0, iVar0, iParam3);
	}
}

void func_859(var uParam0)
{
	if (*uParam0 && PED::_0x93FFD92F05EC32FD(uParam0->f_1))
	{
		PED::_0x13E7320C762F0477(uParam0->f_1);
		uParam0->f_1 = -1;
	}
	*uParam0 = 0;
}

void func_860(var uParam0, var uParam1, int iParam2)
{
	int iVar0;
	
	iVar0 = func_884(func_420());
	if (*uParam0)
	{
		func_859(uParam0);
	}
	uParam0->f_1 = PED::_0xF6D9E1F3560CBF8E(iVar0, uParam1, 0, func_56() != -1, iParam2);
	*uParam0 = 1;
}

var func_861(int iParam0)
{
	return &(Global_1946804->f_2657.f_26.f_7[iParam0]);
}

void func_862(int iParam0, int iParam1)
{
	var uVar0;
	
	uVar0 = &Global_1946804->f_2657.f_26.f_7[iParam0];
	Global_1946804->f_2657.f_26.f_7[iParam0] = &Global_1946804->f_2657.f_26.f_7[iParam1];
	Global_1946804->f_2657.f_26.f_7[iParam1] = uVar0;
}

void func_863(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - 1);
	func_810(uParam0->f_1[iParam1 /*5*/]);
	*(uParam0->f_1[iParam1 /*5*/]) = { *(uParam0->f_1[*uParam0 /*5*/]) };
}

int func_864(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1946804->f_2657.f_19)
	{
		if (&Global_1946804->f_2657.f_26.f_7[*uParam1] == iParam0)
		{
			return 1;
		}
		*uParam1++;
	}
	return 0;
}

void func_865(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_7[iParam0] = iParam1;
}

void func_866(int iParam0)
{
	int iVar0;
	int iVar1;
	struct<14> Var2;
	
	Var2 = -1;
	Var2.f_1 = -1;
	Var2.f_2 = -1;
	Var2.f_3 = -1;
	Var2.f_4 = -1;
	Var2.f_5 = -1;
	Var2.f_6 = -1;
	Var2.f_7 = -1;
	Var2.f_8 = -1;
	Var2.f_13 = -1;
	Var2 = { func_336(0, -1591664384, -1591664384, -1591664384, 0, iParam0) };
	if (func_339(&Var2, &iVar0, &iVar1, 0))
	{
		if (iVar1 > 0)
		{
			switch (iParam0)
			{
				case 352481484:
					Global_1946804->f_2657.f_26.f_2 = 5;
					Global_1946804->f_2657.f_26.f_1 = 5;
					Global_1946804->f_2657.f_26 = 5;
					break;
			}
		}
		func_138(iVar0);
	}
}

int func_867(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		
		case 1:
			return 1877538667;
		
		case 2:
			return -747118240;
		
		case 3:
			return 356885366;
		
		case 4:
			return -733784435;
		
		case 5:
			return -2010021430;
		
		case 6:
			return -1563051210;
		
		case 7:
			return 1532314048;
		
		case 8:
			return -1378972544;
		
		default:
			break;
	}
	return 0;
}

int func_868(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -77597297;
		
		case 1:
			return 1289620458;
		
		case 2:
			return 351104126;
		
		case 3:
			return -991258198;
		
		case 4:
			return -446539844;
		
		case 5:
			return 2146082234;
		
		case 6:
			return 330185476;
		
		case 7:
			return -1208917184;
		
		case 8:
			return -12904227;
		
		default:
			break;
	}
	return 0;
}

int func_869(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 624387589;
		
		case 1:
			return 1398329674;
		
		case 2:
			return -35737408;
		
		case 3:
			return 651323163;
		
		case 4:
			return 343794650;
		
		case 5:
			return 2072880089;
		
		case 6:
			return -2120749726;
		
		case 7:
			return -1749072364;
		
		case 8:
			return -583780175;
		
		default:
			break;
	}
	return 0;
}

int func_870(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1066104444;
		
		case 1:
			return -567070698;
		
		case 2:
			return 797308288;
		
		case 3:
			return -1669506545;
		
		case 4:
			return -1011624341;
		
		case 5:
			return 516134254;
		
		case 6:
			return -940514956;
		
		case 7:
			return 2030473481;
		
		case 8:
			return 2084389834;
		
		default:
			break;
	}
	return 0;
}

int func_871(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 227686058;
		
		case 1:
			return -77597297;
		
		case 2:
			return 624387589;
		
		case 3:
			return 1066104444;
		
		default:
			break;
	}
	return 0;
}

int func_872(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1877538667;
		
		case 1:
			return 1289620458;
		
		case 2:
			return 1398329674;
		
		case 3:
			return -567070698;
		
		default:
			break;
	}
	return 0;
}

int func_873(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -747118240;
		
		case 1:
			return 351104126;
		
		case 2:
			return -35737408;
		
		case 3:
			return 797308288;
		
		default:
			break;
	}
	return 0;
}

int func_874(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 356885366;
		
		case 1:
			return -991258198;
		
		case 2:
			return 651323163;
		
		case 3:
			return -1669506545;
		
		default:
			break;
	}
	return 0;
}

int func_875(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -733784435;
		
		case 1:
			return -446539844;
		
		case 2:
			return 343794650;
		
		case 3:
			return -1011624341;
		
		default:
			break;
	}
	return 0;
}

int func_876(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2010021430;
		
		case 1:
			return 2146082234;
		
		case 2:
			return 2072880089;
		
		case 3:
			return 516134254;
		
		default:
			break;
	}
	return 0;
}

int func_877(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1563051210;
		
		case 1:
			return 330185476;
		
		case 2:
			return -2120749726;
		
		case 3:
			return -940514956;
		
		default:
			break;
	}
	return 0;
}

int func_878(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1532314048;
		
		case 1:
			return -1208917184;
		
		case 2:
			return -1749072364;
		
		case 3:
			return 2030473481;
		
		default:
			break;
	}
	return 0;
}

int func_879(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1378972544;
		
		case 1:
			return -12904227;
		
		case 2:
			return -583780175;
		
		case 3:
			return 2084389834;
		
		default:
			break;
	}
	return 0;
}

bool func_880()
{
	return Global_1955569->f_866;
}

char* func_881(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "isLowHealthCoreActive";
		
		case 1:
			return "isLowStaminaCoreActive";
		
		case 2:
			return "isLowDeadEyeCoreActive";
		
		default:
			break;
	}
	return "";
}

void func_882(int iParam0, var uParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_855();
	}
	switch (iParam2)
	{
		case 0:
			Global_1955569->f_753.f_5[iParam0 /*3*/] = uParam1;
			break;
		
		case 1:
			Global_1955569->f_866.f_2.f_5[iParam0 /*3*/] = uParam1;
			break;
		
		default:
			break;
	}
}

void func_883(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 2)
	{
		iParam2 = func_855();
	}
	switch (iParam2)
	{
		case 0:
			(Global_1955569->f_753.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		
		case 1:
			(Global_1955569->f_866.f_2.f_15[iParam0 /*3*/])->f_2 = iParam1;
			break;
		
		default:
			break;
	}
}

int func_884(int iParam0)
{
	if (func_56() == -1)
	{
		switch (iParam0)
		{
			case -2125499975:
				return 0;
			
			case -449205311:
				return 0;
			
			case 1160113249:
				return 0;
			
			default:
				break;
		}
		return 0;
	}
	switch (iParam0)
	{
		case 2026485318:
			return 0;
		
		case 24043185:
			return 1;
		
		default:
			break;
	}
	return 0;
}
