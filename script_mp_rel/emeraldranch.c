#region Local Var
	var uLocal_0 = 7;
	var uLocal_1 = 0;
	var uLocal_2 = 0;
	var uLocal_3 = 0;
	var uLocal_4 = 0;
	var uLocal_5 = 0;
	var uLocal_6 = 0;
	var uLocal_7 = 0;
	var uLocal_8 = -1;
	var uLocal_9 = 0;
	var uLocal_10 = 0;
	var uLocal_11 = 0;
	var uLocal_12 = 0;
	var uLocal_13 = 0;
	var uLocal_14 = 0;
	var uLocal_15 = 0;
	float fLocal_16 = 0f;
	float fLocal_17 = 0f;
	var uLocal_18 = 0;
	var uLocal_19 = 0;
	var uLocal_20 = 0;
	int iLocal_21 = 0;
	int iLocal_22 = 0;
	int iLocal_23 = 0;
	int iLocal_24 = 0;
	var uLocal_25 = 0;
	int iLocal_26 = 0;
	int iLocal_27 = 0;
	int iLocal_28 = 0;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	int iLocal_31 = 0;
	bool bLocal_32 = false;
	var uLocal_33 = 0;
	int iLocal_34 = 0;
	int iLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	int iLocal_38 = 0;
	int iLocal_39 = 0;
	bool bLocal_40 = false;
	vector3 vScriptParam_0 = { 0f, 0f, 0f };
	var uScriptParam_3 = 0;
#endregion

// __EntryFunction__ == aggregate_func_88

bool func_13()
{
	iLocal_21 = ((*Global_1887327)[74 /*36*/])->f_5;
	VOLUME::_0xB469CFD9E065EB99(iLocal_21, 17);
	iLocal_22 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Emerald - m_volPostOfficeOwner");
	VOLUME::_0x39816F6F94F385AD(iLocal_22, 1522f, 442.664f, 91.328f, 0f, 0f, 89.95493f, 5.041f, 4.081f, 3.9f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, 1521.951f, 438.992f, 91.328f, 0f, 0f, 89.95493f, 2.586f, 2.534f, 3.9f);
	VOLUME::_0x39816F6F94F385AD(iLocal_22, 1525.561f, 442.571f, 91.328f, 0f, 0f, 89.95493f, 2.417f, 2.096f, 3.9f);
	iLocal_24 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Emerald - m_volPostOfficeOfflimits");
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 1522.286f, 442.6286f, 91.09468f, 0f, 0f, 0.127711f, 3.924281f, 4.586129f, 2.884516f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 1524.154f, 443.6188f, 91.33035f, 0f, 0f, -40.52857f, 0.901248f, 0.812041f, 3.364722f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 1524.148f, 441.6273f, 91.32803f, 0f, 0f, 41.59158f, 0.901248f, 0.812041f, 3.361498f);
	VOLUME::_0x39816F6F94F385AD(iLocal_24, 1524.171f, 442.5686f, 91.33483f, 0f, 0f, 89.87004f, 2.182719f, 0.812041f, 3.355471f);
	iLocal_23 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Emerald - m_volPostOfficePrompt Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_23, 1521.928f, 439.418f, 91.598f, 0f, 0f, 89.87004f, 1.421f, 1.98f, 3.9f);
	VOLUME::_0x39816F6F94F385AD(iLocal_23, 1525.299f, 442.591f, 91.598f, 0f, 0f, 0.50203f, 1.421f, 1.902f, 3.9f);
	VOLUME::_0xB469CFD9E065EB99(iLocal_22, 10052);
	iLocal_27 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1416.919f, 275.628f, 89.84f, 0f, 0f, 13.744f, 4.796f, 10.102f, 3.23f, "Emerald - Fence Shop Volume");
	VOLUME::_0xB469CFD9E065EB99(iLocal_27, 10050);
	iLocal_30 = VOLUME::_CREATE_VOLUME_AGGREGATE_WITH_CUSTOM_NAME("Emerald - m_volHorsePen Agg");
	VOLUME::_0x39816F6F94F385AD(iLocal_30, 1392.317f, 341.5652f, 89.24782f, 0f, 0f, 12.46095f, 34.19419f, 40.64669f, 5.552397f);
	VOLUME::_0x39816F6F94F385AD(iLocal_30, 1406.395f, 342.4568f, 89.58327f, 0f, 0f, 39.45417f, 18.04731f, 26.06224f, 4.902727f);
	VOLUME::_0x39816F6F94F385AD(iLocal_30, 1416.681f, 332.729f, 89.86327f, 0f, 0f, 85.96169f, 12.0553f, 10.04752f, 5.028452f);
	iLocal_26 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1521.955f, 437.362f, 91.328f, 0f, 0f, 89.955f, 18.275f, 7.419f, 3.9f, "Emerald - m_volTrainStation");
	if (aggregate_func_4251() == 0)
	{
	}
	iLocal_28 = VOLUME::_CREATE_VOLUME_BOX_WITH_CUSTOM_NAME(1246.785f, 170.357f, 87.12f, 0f, 0f, -80f, 14.456f, 10.148f, 8.8f, "HRT E TravellingSalesman - m_volTravellingSalesman");
	iLocal_29 = VOLUME::_CREATE_VOLUME_CYLINDER_WITH_CUSTOM_NAME(1245.177f, 174.244f, 87.12f, 0f, 0f, -80f, 3.7f, 3.7f, 4.2f, "HRT E TravellingSalesman - m_volTravellingSalesmanPrompt");
	aggregate_func_4238();
	return true;
}

void func_16(int iParam0)
{
	iParam0 = iParam0;
	ENTITY::CREATE_MODEL_HIDE(1446.648f, 371.4435f, 89.77228f, 0.25f, joaat("p_bottlebeer01x"), true);
	ENTITY::CREATE_MODEL_HIDE(1446.594f, 371.3564f, 89.84016f, 0.25f, 654026816, true);
	ENTITY::CREATE_MODEL_HIDE(1446.431f, 371.1044f, 89.73589f, 0.25f, 954963420, true);
	TASK::_0x6C269F673C47031E(-736104133);
}

bool func_17(int iParam0)
{
	if (!TASK::_0xF97F462779B31786(-736104133))
	{
		return false;
	}
	if (!func_54("EMRHAU"))
	{
		return false;
	}
	if (!func_54("SHOWFAU"))
	{
		return false;
	}
	return true;
}

void func_29(int iParam0)
{
	aggregate_func_348(2, iLocal_22, iParam0, iLocal_23, iLocal_24, 1277952, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_7096(2, 2057841001, 0, 0);
	aggregate_func_1218(2, 0);
	aggregate_func_348(4, iLocal_27, iParam0, iLocal_27, 0, 12, 0, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_1218(4, 0);
	aggregate_func_348(38, iLocal_28, iParam0, iLocal_29, 0, 12, 1, 0, -1082130432 /* Float: -1f */, 0);
	aggregate_func_1218(38, 0);
}

void func_30(int iParam0)
{
	iParam0 = iParam0;
	aggregate_func_2366(592, iLocal_27, 1);
	aggregate_func_2366(584, iLocal_22, 1);
	aggregate_func_2366(583, iLocal_30, 1);
	aggregate_func_2366(588, iLocal_30, 0);
	aggregate_func_2366(589, iLocal_30, 0);
	aggregate_func_2366(590, iLocal_30, 0);
	aggregate_func_2366(591, iLocal_30, 0);
	aggregate_func_2366(592, iLocal_30, 0);
	aggregate_func_2366(587, iLocal_30, 0);
	aggregate_func_2366(585, iLocal_30, 0);
	aggregate_func_2366(586, iLocal_30, 0);
}

void func_36(int iParam0, var uParam1)
{
	iParam0 = iParam0;
	aggregate_func_3063(uParam1, iLocal_21, 1);
	aggregate_func_3063(uParam1, iLocal_27, 2);
	aggregate_func_3063(uParam1, iLocal_22, 10);
}

bool func_40(int iParam0)
{
	if (aggregate_func_6721(&bLocal_32))
	{
		if (bLocal_32)
		{
			aggregate_func_6624(220516644, 1);
			aggregate_func_6624(-336949584, 1);
		}
	}
	aggregate_func_386(&uLocal_33, &iLocal_34, 1422.583f, 377.0824f, 89.0055f, joaat("p_door41x"));
	aggregate_func_7429(25, iLocal_26, &uLocal_25);
	if (aggregate_func_7399(6) && !aggregate_func_1774(6))
	{
		if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_31))
		{
			iLocal_31 = VOLUME::_0x0EB78C2B156635B1(-1612834106, 1448.551f, 374.271f, 90.332f, 0f, 0f, -0.353f, 11.5f, 12.211f, 2.918f);
			VOLUME::_0x5B23DFF8E0948BB2(iLocal_31, 1);
			VOLUME::_0xBE551C2CC421185D(iLocal_31, 1);
		}
	}
	else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_31))
	{
		VOLUME::_0x5B23DFF8E0948BB2(iLocal_31, 0);
		VOLUME::_0xBE551C2CC421185D(iLocal_31, 0);
		VOLUME::_DELETE_VOLUME(iLocal_31);
	}
	return true;
}

bool func_54(char* sParam0)
{
	HUD::_TEXT_DATABASE_REQUEST(sParam0);
	if (!HUD::_TEXT_DATABASE_HAS_LOADED(sParam0))
	{
		HUD::_TEXT_DATABASE_REQUEST(sParam0);
		return false;
	}
	return true;
}

void func_90(int iParam0)
{
	aggregate_func_6501(0.775f, 0.2f, 0.025f, 0f);
	func_152("EMRHAU");
	func_152("SHOWFAU");
	TASK::_0x9667CCE29BFA0780(-736104133);
	if (VOLUME::_DOES_VOLUME_EXIST(iLocal_31))
	{
		VOLUME::_0x5B23DFF8E0948BB2(iLocal_31, 1);
		VOLUME::_0xBE551C2CC421185D(iLocal_31, 1);
		VOLUME::_DELETE_VOLUME(iLocal_31);
	}
	if (ITEMSET::IS_ITEMSET_VALID(iLocal_34))
	{
		ITEMSET::DESTROY_ITEMSET(iLocal_34);
	}
	iParam0 = iParam0;
}

void func_152(char* sParam0)
{
	if (HUD::_DOES_TEXT_DATABASE_EXIST(sParam0))
	{
		if (HUD::_TEXT_DATABASE_HAS_LOADED(sParam0))
		{
			HUD::_TEXT_DATABASE_DELETE(sParam0);
		}
	}
}

