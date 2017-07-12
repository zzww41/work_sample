
const char *language_list[][MAX_MENU_ITEM] = 
{
	{
		"Engilsh", //0:	language_name
		//MainMenu
		"SETTINGS", // 1
		"METERING", // 2
		"SEQUENCE OF\n  EVENTS", // 3 
		"ALARM\n  LOG&STATUS", // 4
		"COUNTERS", //5
		"BATTERY", //6
		"COMMUNICATIONS", //7
		"CLOCK", //8
		"MENU SYSTEM", //9
		"NAMEPLATE DATA", //10
		"System Config",//11
		"SECURITY AUTH", //12
		//SettingsMenu
		"Actv Profile", //13
		"Active Profile", //14
		//Sequence of events
		"don't show title", //15
		//metering
		"Inst. Metering",//16
		"Power Metering", //17
		//alarmlog status
		"RAM Failure....%d", //18
		"ROM Failure....%d", //19
		"No AC Present..%d", //20
		"Battery Alarm..%d", //21
		"CTratio error..%d", //22
		"Pole Failure...%d", //23
		"Close Malf.....%d", //24
		"Loss\n"
		"Of Sensing.....%d", //25
		"Power Supply\n"
		"Malfunction....%d", //26
		"Interrupter\n"
		"Malfunction....%d", //27
		"Controller\n"
		"AC Power on....%d", //28
		//counters
		"Trip Cntrs=%d", //29
		"Mans. Trip=%d", //30
		"Prots. Trip=%d", //31
		"Auto Trip  =%d", //32
		"Reset Targets\n \n<ENTER>:Reset\n"
		"<ESC>  :Cancel", //33
		"Reset Trip Cntrs", //34
		"Trip Counter", //35
		//battery
		"VBat.....", //36
		"IBat.", //37
		"Test Battery", //38
		//comm
		"Comm Port #1", //39
		"Comm Port #2", //40
		//clock
		"Clock", //41
		"UTC Time Zone", //42
		//menu system
		"Language\nSelection", //43
		"Date Format", //44
		"Time Format", //45
		//name data
		"Firmware Ver", //46
		"Firmware\nDatabase Ver", //47
		"Front Panel Ver", //48
		"Hardware Ver", //49
		"Extended Comm\nProtocols Enable", //50
		"BootLoader Ver", //51
		//system configuration
		"Nominal Line\nFrequency", //52
		"Phantom Phase\nReference", //53
		"Recloser Time\nAdjuster", //54
		"CT Ratio", //55
		"PT Ratio A", //56
		"Power Factor\n  Sign Convention", //57
		//securtiy
		"TBD", //58
		//instantaneous metering
		"Inst. Voltages", //59
		"Inst. Voltages", //60
		"Inst. Currents", //61
		//energy metering
		"Real Power", //62
		"Reactive Power", //63
		"Apparent Power", //64
		"Power Factor", //65
		"<NO AUTHORITY>", //66
		"", //67
		//alarm makeup
		"Trip Malf......%d", //68
		"Reset Alarms", //69
		"Alarm Status", //70
		"Reset All Alarms",//71
		"Alarms Status", //72
		//action info
		"<INVAILD>", //73
		"<SUCCESS>", //74
		"<MORE \x19\x18>", //75
		"<NO RECORDS>", //76
		//counters makeup
		"Auto Cntr=%d", //77
		"OC Trip  =%d", //78
		"SGF Trip =%d", //79
		"Gnd Trip =%d", //80
		"Reset Target", //81
		"Reset Counter", //82
		//profile
		"System Config", //83
		"Oper Sequence", //84
		"Reclose Retry", //85
		"OverCurrent", //86
		"Sensitive\n  Earth Fault", //87
		"Hot Line Tag", //88
		"Normal\n  Sequence", //89
		"Cold Load\n  Pickup", //90
		"Frequency", //91
		"SequenceCoord\n  Enable", //92
		"SequenceCoord\n  Max Operation", //93
		"Global Reclose\nInterval", //94
		"Reset Mode", //95
		"Reset Time", //96
		"Reclose Retry\nEnable", //97
		"Reclose Retry\nNumber", //98
		"Reclose Retry\nInterval", //99
		"SEF Enable", //100
		"SEF Min\nTrip Current", //101
		"SEF Time Delay", //102
		"SEF Reclose\nIntervals", //103
		"SEF Opers\nTo Lockout", //104
		"HLT Enable", //105
		"HLT Phase Delay", //106
		"HLT Ground\nDelay", //107
		"Phase Param", //108
		"Phase Oper", //109
		"Phase TCC1\n  Modification", //110
		"Phase TCC2\n  Modification", //111
		"Phase Min\nTrip Enable", //112
		"Phase Min\nTrip Current", //113
		"Phase HCL\nOp1 Enable", //114
		"Phase HCL\nOp2 Enable", //115
		"Phase HCL\nOp3 Enable", //116
		"Phase HCL\nMin Trip Cur", //117
		"Phase HCL\nDelay", //118
		"Phase Op1 TCC", //119
		"Phase Op2 TCC", //120
		"Phase Op3 TCC", //121
		"Phase Op4 TCC", //122
		"Phase TCC1\nTime Mult Enb", //123
		"Phase TCC1\nTime Mult", //124
		"Phase TCC1\nTime Adder Enb", //125
		"Phase TCC1\nTime Adder", //126
		"Phase TCC1\nMRTA Enable", //127
		"Phase TCC1\nMRTA", //128
		"Phase TCC1\nHCT Enable", //129
		"Phase TCC1\nHCT Mult", //130
		"Phase TCC1\nHCT Delay", //131
		"Phase TCC1\nType", //132
		"Ground Param", //133
		"Ground Oper", //134
		"Ground TCC1\n  Modification", //135
		"Ground TCC2\n  Modification", //136
		"Ground Min\nTrip Enable", //137
		"Ground Min\nTrip Current", //138
		"Ground HCL\nOp1 Enable", //139
		"Ground HCL\nOp2 Enable", //140
		"Ground HCL\nOp3 Enable", //141
		"Ground HCL\nMin Trip Cur", //142
		"Ground HCL\nDelay", //143
		"Ground Op1 TCC", //144
		"Ground Op2 TCC", //145
		"Ground Op3 TCC", //146
		"Ground Op4 TCC", //147
		"Ground TCC1\nTime Mult Enb", //148
		"Ground TCC1\nTime Mult", //149
		"Ground TCC1\nTime Adder Enb", //150
		"Ground TCC1\nTime Adder", //151
		"Ground TCC1\nMRTA Enable", //152
		"Ground TCC1\nMRTA", //153
		"Ground TCC1\nHCT Enable", //154
		"Ground TCC1\nHCT Mult", //155
		"Ground TCC1\nHCT Delay", //156
		"Ground TCC1\nType", //157
		"Trip Opers\n  To Lockout", //158
		"Ground Trip\n  Precedence", //159
		"Phase Alarm\n  Delay", //160
		"Phase Alarm\n  Current", //161
		"Ground Alarm\n  Delay", //162
		"Ground Alarm\n  Current", //163
		"CLPU Opers To\n  Lockout", //164
		"CLPU Reclose\n  Intervals", //165
		"CLPU Act Time", //166
		"CT Ratio", //167
		"Phase TCC2\nTime Mult Enb", //168
		"Phase TCC2\nTime Mult", //169
		"Phase TCC2\nTime Adder Enb", //170
		"Phase TCC2\nTime Adder", //171
		"Phase TCC2\nMRTA Enable", //172
		"Phase TCC2\nMRTA", //173
		"Phase TCC2\nHCT Enable", //174
		"Phase TCC2\nHCT Mult", //175
		"Phase TCC2\nHCT Delay", //176
		"Phase TCC2\nType", //177
		"Ground TCC2\nTime Mult Enb", //178
		"Ground TCC2\nTime Mult", //179
		"Ground TCC2\nTime Adder Enb", //180
		"Ground TCC2\nTime Adder", //181
		"Ground TCC2\nMRTA Enable", //182
		"Ground TCC2\nMRTA", //183
		"Ground TCC2\nHCT Enable", //184
		"Ground TCC2\nHCT Mult", //185
		"Ground TCC2\nHCT Delay", //186
		"Ground TCC2\nType", //187
		"Non-Reclosing", //188
		"Min Trip\n  Enable", //189
		"12 Hour AM/PM", //190
		"24 Hour", //191
		"MM-DD-YYYY", //192
		"YYYY-MM-DD", //193
		"Enable", //194
		"Disable", //195
		"Non_Reclosing", //196
		"Reclosing", //197
		"Auto", //198
		"Manual", //199
		"<MORE \x18\x19\x1a\x1b>", //200
		"Yes", //201
		"No", //202
		"TCC2", //203
		"TCC1", //204
		"PT Conn\nTerminals",//205
		"PT Ratio",//206
		"Phantom Phase",//207
		"Conn Type",//208
		"PT2 Radio",//209
		"PT3 Radio",//210
		"PT2 Conn\nTerminals",//211
		"PT3 Conn\nTerminals",//212
		"ENTER PASSWORD",//213
		"VIEW ONLY",//214
		"<PASSWORD OK>",//215
		"Normal", //216
		"Wye Conn",//217
		"Delta Conn",//218
		"Phase TCC",//219
		"Ground TCC",//220
		"FAILED",//221
		"Mod/View\n  Setting",//222
		"Edit Profile",//223
		"Phase Min\n  Trip Current",//224
		"Phase TCC1",//225
		"Phase TCC2",//226
		"Phase Enable",//227
		"Phase HCL",//228
		"Ground Min\n  Trip Current",//229
		"Ground TCC1",//230
		"Ground TCC2",//231
		"Ground Enable",//232
		"Ground HCL",//233
		"Phase TCC\n  Select",//234
		"Ground TCC\n  Select",//235

		"CLPU Enable",//236
		"CLPU Phase\nCurve",//237
		"CLPU Phase",//238
		"CLPU Ground",//239
		"CLPU Phase\n  HCL",//240
		"CLPUG Curve",//241
		"CLPU Phase Min\nTrip Current",//242
		"CLPU Ground Min\nTrip Current",//243
		"CLPU Ground\n  HCL",//244
		"CLPU Phase TCC\nTime Mult Enb", //245
		"CLPU Phase TCC\nTime Mult", //246
		"CLPU Phase TCC\nTime Adder Enb", //247
		"CLPU Phase TCC\nTime Adder", //248
		"CLPU Phase TCC\nMRTA Enable", //249
		"CLPU Phase TCC\nMRTA", //250
		"CLPU Phase TCC\nHCT Enable", //251
		"CLPU Phase TCC\nHCT Mult", //252
		"CLPU Phase TCC\nHCT Delay", //253
		"CLPU Phase TCC\nType", //254

		"CLPU Ground TCC\nTime Mult Enb", //255
		"CLPU Ground TCC\nTime Mult", //256
		"CLPU Ground TCC\nTime Adder Enb", //257
		"CLPU Ground TCC\nTime Adder", //258
		"CLPU Ground TCC\nMRTA Enable", //259
		"CLPU Ground TCC\nMRTA", //260
		"CLPU Ground TCC\nHCT Enable", //261
		"CLPU Ground TCC\nHCT Mult", //262
		"CLPU Ground TCC\nHCT Delay", //263
		"CLPU Ground TCC\nType", //264

		"CLPU Phase HCL\nMin Trip Cur", //265
		"CLPU Ground HCL\nMin Trip Cur", //266

		"Select an Option", //267
		"<Enter>:SAVE", //268
		"<Esc>  :REVERT", //269
		"<\x1a>    :CANCEL", //270
		"Enter Password",  //271
		"To EDIT",  //272
		"<View Only: ESC>",  //273
		"Push ENTER to\n  test", //274
		"TESTING...",  //275
		"CLPU Phase HCL\nEnable", //276
		"CLPU Ground HCL\nEnable", //277

		"Reclose\n  Intervals", //278
		"Phase Param",  //279
		"Ground Param", //280
		"Phase Op1\nInterval",  //281
		"Phase Op2\nInterval",  //282
		"Phase Op3\nInterval",  //283
		"Ground Op1\nInterval",  //284
		"Ground Op2\nInterval",  //285
		"Ground Op3\nInterval",  //286

		"<Enter> : Yes",  //287
		"<Esc>   : No",  //288
		"Confirm Trip?",  //289
		"Confirm Close?", //290
		"Confirm This\nOperation?", //291
		"Normal", //292
		"Alternative #1",  //293
		"Alternative #2",  //294
		"Alternative #3",  //295
		"Confirm ENTER?",  //296
		"Trip Opers To\nLockout", //297
		"SequenceCoord\nEnable", //298
		"SequenceCoord\nMax Operation", //299
		"Ground Trip\nPrecedence", //300
		"CLPU Opers To\nLockout", //301
		"CLPU Reclose\nIntervals", //302
		"CLPU Activation\nTime", //303
		"Push Enter to\nTest",   //304
		"---TESTING---",         //305
		"VBat.....", //306
		"IBat.", //307
		"DIAGNOSTICS", //308
		"LED Test",  //309

		
		//calibration
#if _CALIBRATION_		
		"CALIBRATION",  //310
		"Voltage CAL",  //311
		"Current CAL",  //312
		"Battery CAL",  //313
		"Gear Setting",  //314
		"Phase A CAL",  //315
		"Phase B CAL",  //316
		"Phase C CAL",  //317
		"Phase G CAL",  //318
		"All Phase CAL",      //319
		"BatV CAL",      //320
		"BatI CAL",      //321		
		"Current\n  Metering",       //322
		"Voltage\n  Metering",       //323
		"Battery\n  Metering",       //324
		"UPDATE",            //325
		"Update Setting",   //326
		"Update Cali",      //327
		"Cali Block",       //328
		"Calibrate\nPoint1",      //329
		"Calibrate\nPoint2",      //330
		"Calibrate\nPoint3",      //331
		"Calibrate \nPoint4",      //332
		"Calibrate \nPoint5",      //333
		"Calibrate \nPoint6",      //334
		"Calibrate \nPoint7",      //335
		"Calibrate \nPoint8",      //336
		"Calibrate \nPoint9",      //337
		"Calibrate \nPoint10",      //338
		"Calibrate \nPoint11",      //339
		"Calibrate \nPoint12",      //340
		"Calibrate \nPoint13",      //341
		"Calibrate \nPoint14",      //342
		"Calibrate \nPoint15",      //343
		"Calibrate \nPoint16",      //344
		"Calibrate \nPoint17",      //345
		"Calibrate \nPoint18",      //346
		"Calibrate \nPoint19",      //347
		"Calibrate \nPoint20",      //348
		"Calibrate \nPoint21",      //349
		"Calibrate \nPoint22",      //350
		"Calibrate \nPoint23",      //351
		"Calibrate \nPoint24",      //352
		"Calibrate \nPoint25",      //353
		"Calibrate \nPoint26",      //354
		"Calibrate \nPoint27",      //355
		"Calibrate \nPoint28",      //356
		"Calibrate \nPoint29",      //357
		"Calibrate \nPoint30",      //358
		"Calibrate \nPoint31",      //359
		"Calibrate \nPoint32",      //360
		"Calibrate \nPoint33",      //361
		"Calibrate \nPoint34",      //362
		"Calibrate \nPoint35",      //363
		"KEY TEST",         // 364
		"Pls Enter Key",    // 365
		"UP",               // 366
		"DOWN",             // 367
		"LEFT",             // 368
		"RIGHT",            // 369
		"ENTER",            // 370
		"ESC",              // 371
		"EDIT",             // 372
		"TRIP",             // 373
		"CLOSE",            // 374
		"GND TRIP BLOCKED", // 375
		"NON RECLOSE",      // 376
		"SUPERVISORY OFF",  // 377
		"SGF/SEF BLOCKED",  // 378
		"HLT LINE TAG",     // 379
		"NULL KEY",         // 380 
		"GEAR_1",           //381
		"GEAR_2",           //382
#endif

		"Engy. Metering", //  0
		"Real Engy.", // 1
		"Reactive Engy.", // 2
		"Apparent\n  Engy.", // 3
		"Reset Engy.",     // 4
		"Reset Engy.", // 5
		"CLPU Enable",// 6
		"60 Hz", // 7
		"50 Hz", // 8
		"LCD Test",  // 9
		"Frequency", // 10
		"Set Counter", // 11
		"Bushing Rotation",//12
		"Channal Choose",//13
		"ACB",//14
		"ABC",//15
		"A/B",//16
		"B/C",//17
		"C/A",//18
		
		

        //communication
        "Communication",  // 0
        "Comm Port. #1",
        "Comm Port. #2",
        //port menu
        "Comm Port. #1\n  Configuration",
        "Comm Port. #2\n  Configuration",
        "Network\n  Configuration",
        "DNP3 Serial",
        "DNP3 Network",
        "IEC 101",
        "IEC 104",
        //port configuration menu
        "Comm Port\nAssignment",
        "Comm Protocol\nAssignment",
        //Network configuration menu
        "IP Address",
        "Subnet Mask",
        "Gateway",
        "MAC Address",
        //DNP3 serial menu
        "DNP RBE Master",
        "DNP IDE Slave",
        "DNP Baud Rate",
        "DNP Tx Enable\nDealy",
        "DNP Tx Disable\nDealy",
        //DNP3 network menu
        "DNP Protocol\nPort Type",
        "DNP Accept From\nAny IP",
        "DNP Accept From\nIP Address",
        "DNP Destination\nPort Number",
        "DNP Listening\nPort Number",
        "DNP Use Port\nFrom Request",
        "DNP Keep Alive\nTimeout",
        "DNP Keep Alive\nRetries",
        //IEC101 menu
        "IEC101 Link\nAddress",
        "IEC101 Common\nAddress",
        "IEC101 Link\nAddress Size",
        "IEC101 Common\nAddress Size",
        "IEC101 Object\nAddress Size",
        "IEC101 Cause of\nTransmit Size",
        "IEC101 Single\nCommand Op Mode",
        "IEC101 Select\nBefore Exec Time",
        //IEC104 menu
        "IEC104 Server\nListen Port",
        "IEC104 Common\nAddress",
        "IEC104 Single\nCommand Op Mode",
        "IEC104 Select\nBefore Exec Time",
        "IEC104 Response\nTimeout",
        "IEC104 Ack/No\nData",
        "IEC104 Idle\nTest",
        "IEC104 Max\nTransmit(k)",
        "IEC104 Max\nReceive(w)",

        "DNP Serial",
        "IEC101 Serial",
        // comm config
        "2400 BPS",
        "4800 BPS",
        "9600 BPS",
        "19200 BPS",
        "38400 BPS",
        "115200 BPS",
        "Data-7",
        "Data-8",
        "Stop-1",
        "Stop-2",
        "None",
        "Even",
        "Odd",
        //DNP
        "Slave Address",
        "Master Address",
        "Baud Rate",
        "DataBits",
        "StopBits",
        "Parity",              
		//IEC 101
		"Link Addr",
		"Link Addr Size",
		"Asdu Addr Size",
		"Object Addr Size",
		"Cot Size",
		"Sel Timeout",
		"baudRate",
		"dataBits",
		"stopBits",
		"Parity",
		//port assignment
		"SERIAL",
		"NETWORK",
		//protocol assignment
		//"DEBUG",
		//"MODBUS-RTU",
		"DNP3",
		"IEC-101",
		"IEC-104",

		//security manage
		"SECURITY",
		"Enter Password",
		"Invalid Password",
		"View Password",
		"Setting Password",
		"Edit Password",
		"Pls Enter New\nPassword",
		"Pls Enter New\nPassword Again",
		"Password Consistent",

		//alarm
		"Counter Alarm..%d",

		//Frequency Parameter
		"Frequency",
		"Frequency\n  Stage 1",
		"Frequency\n  Stage 2",
		"Frequency\n  Stage 3",
		"Frequency\n  Stage 4",
		"Frequency\n  Stage 5",
		"Frequency\n  Stage 6",
		"Frequency Load\n  Supervision",
		"Min Volt. for\n  Freq Tripping",
		"Frequency\n  Loads. Restore",
		
		"Frequency Stage\n1 Enable",
		"Frequency Stage\n2 Enable",
		"Frequency Stage\n3 Enable",
		"Frequency Stage\n4 Enable",
		"Frequency Stage\n5 Enable",
		"Frequency Stage\n6 Enable",
		"Frequency Stage\n1 Pickup",
		"Frequency Stage\n2 Pickup",
		"Frequency Stage\n3 Pickup",
		"Frequency Stage\n4 Pickup",
		"Frequency Stage\n5 Pickup",
		"Frequency Stage\n6 Pickup",
		"Frequency Stage\n1 Delay",
		"Frequency Stage\n2 Delay",
		"Frequency Stage\n3 Delay",
		"Frequency Stage\n4 Delay",
		"Frequency Stage\n5 Delay",
		"Frequency Stage\n6 Delay",
		
		"Frequency Load\nSupervis. Enable",
		"Frequency Load\nSupervis. Pickup",

		"Min Voltage for\nFreq Tripping",
		
		"Freq Restore\nEnable",
		"Freq Restore\nLow Limit",
		"Freq Restore\nHigh Limit",
		"Freq Restore\nSchedule Time",
		"Freq Restore\nTransient Time",
		"Freq Restore\nAbort Time",
		"Supervision Both\nVoltage & Freq",

		//Voltage Parameter
		"Voltage",
		"Undervoltage\n  Trip Mode",
		"Undervoltage\nTrip Mode",
		
		"Undervoltage 1",
		"Undervoltage 2",
		"Undervoltage 3",
		"Undervoltage 1\nEnable",
		"Undervoltage 2\nEnable",
		"Undervoltage 3\nEnable",
		"Undervoltage 1\nPickup",
		"Undervoltage 2\nPickup",
		"Undervoltage 3\nPickup",
		"Undervoltage 1\nTime Delay",
		"Undervoltage 2\nTime Delay",
		"Undervoltage 3\nTime Delay",
		
		"Overvoltage\n  Trip Mode",
		"Overvoltage\nTrip Mode",
		
		"Overvoltage 1",
		"Overvoltage 2",
		"Overvoltage 3",
		"Overvoltage 1\nEnable",
		"Overvoltage 2\nEnable",
		"Overvoltage 3\nEnable",
		"Overvoltage 1\nPickup",
		"Overvoltage 2\nPickup",
		"Overvoltage 3\nPickup",
		"Overvoltage 1\nTime Delay",
		"Overvoltage 2\nTime Delay",
		"Overvoltage 3\nTime Delay",
		
		"Voltage Loads.\n  Restore",
		"Voltage Restore\nEnable",
		"Voltage Restore\nMode",
		"Voltage Restore\nLow Limit",
		"Voltage Restore\nHigh Limit",
		"Voltage Restore\nSchedule Time",
		"Voltage Restore\nTransient Time",
		"Voltage Restore\nAbort Time",
		"Supervision Both\nVoltage & Freq",	

		"3P",
		"1P",
		"1P/3P INHIBIT",
        "Volt. Trip.....%d", 
        "Freq. Trip.....%d", 

		"TARGET",
		"Reset Target\n  After Rec TM",
		"Reset Target",
		"Reset Target\nAfter Rec TM",
	},

	{ 
		"中文", //language_name
		
		// MainMenu
		"参数设置",   // 1
		"实时监测",  // 2
		"事件记录",  // 3
		"状态报警",  // 4
		"动作计数", //5
		"状态诊断", // 6
		"电池管理", // 7
		"安全管理", //  8
		"版本信息", // 9
		

		//alarm menu
		"内存失败.......%d", //  1
		"闪存失败.......%d", //  2	
		"合闸故障.......%d", // 3
		"分闸故障.......%d", //  4		
		"零序故障.......%d", //  5
		"重设报警", // 6
		"报警状态", // 7
		"重设报警状态", // 8
		"电池报警.......%d",  //9
		"寿命报警.......%d", // 10
		"电源报警.......%d", // 11

		//counter menu
		"分闸总数", // 1
		"重设分闸数", // 2
		"重设分闸计数", // 3
		
		"命令分闸: %d", // 4
		"保护分闸: %d", // 5
		"设置分闸数", // 6


		//battery menu
		"电压:", // 1
		"电流:", // 2
		"电池测试", // 3
		"按下确认进入测试",   // 4
		" 测试中...",         // 5
		"电压:", // 6
		"电流:", // 7
		"电池设置", // 8
		

		//clock menu
		"时钟", // 1
		"UTC 时区", // 2
		"语言选择", // 3
		"日期格式", // 4
		"时间格式", // 5
		"12小时", // 6
		"24小时", // 7
		"月－日－年", // 8
		"年－月－日", // 9

		//nameplate menu
		"软件版本", // 1
		"硬件版本", // 2
		"引导程序版本", // 3


		//metering menu
		"实时测量", // 1
		"实时功率", // 2
		"有功功率", // 3
		"无功功率", // 4
		"视在功率", // 5
		"功率因数", // 6
		"电度测量", // 7
		"有功电度", // 8
		"无功电度", // 9
		"电度清零", // 10
		"频率",      // 11

		//record menu
		"<没有记录>", // 1


		//active menu		
		"定值组选择", // 1
		"定值组编辑", // 2
		"定值组 1", // 3
		"定值组 2",  // 4
		"定值组 3",  // 5
		"定值组 4",  // 6


		

		//overcurrent menu
		"定值保护", // 1
		"速断投切",   // 2
		"速断整定值",   // 3
		"限时速断投切",   // 4
		"限时速断整定值",   // 5
		"限时速断延时",   // 6
		"过流投切",   // 7
		"过流整定值",   // 8
		"过流延时",   // 9
		"速断保护", // 10
		"限时速断保护", // 11
		"过流保护", // 12
		


		//oper menu		
		

		//SGF menu
		"零序保护", // 1
		"零序投切", // 2
		"零序整定值", // 3
		"零序延时", // 4
		"零序保护方式", // 5
		"报警", // 6
		"分闸", // 7


		//reclose menu
		"重合闸", // 1
		"重合次数",  // 2
		"第一次重合间隔",  // 3
		"第二次重合间隔",  // 4
		"第三次重合间隔",  // 5
		"重合投切", // 6
		"后加速投切", // 7

				
		//HLT menu
		"禁止合闸", // 1
		"禁止合闸设置", // 2
		"禁止合闸延时", // 3

		//system menu
		"系统配置", // 1
		"参数配置",// 2
		"时钟管理",// 3
		"频率", // 4	
		"CT变比", // 5		
		"PT变比", // 6
		"虚拟相位", // 7
		"50Hz", // 8
		"60Hz", // 9
		"300/5", //10
		"600/5", // 11
		"1000/1", // 12
			
		//clpu menu
		"冷启动", // 1
		"冷启动投切",// 2			
		"定值保护",// 3
		"重合次数", // 4
		"重合间隔", // 5
		"有效时间", // 6
		
		"速断投切",   // 7
		"速断整定值",   // 8
		"限时速断投切",   // 9
		"限时速断整定值",   // 10
		"限时速断延时",   // 11
		"过流投切",   // 12
		"过流整定值",   // 13
		"过流延时",   // 14	
		"速断保护", // 15
		"限时速断保护", // 16
		"过流保护", // 17
		"后加速", // 18
		"后加速投切", // 19
		"重合投切",   // 20
		
		//security menu		
		"请输入密码",// 1
		"通过认证",// 2
		"密码错误",// 3
		"   <查看: 返回>",  // 4
		"< 没有权限 >", // 5
		"保存确认", // 6
		"< 确认 >: 保存", // 7
		"< 返回 >: 退出", // 8
		"<   \x1a  >: 取消", // 9
		"安全认证", // 10
		"密码查看", // 11
		"密码修改", // 12
		"请输入新密码", // 13
		"请再次输入新密码", // 14
		"菜单密码", // 15
		"密码不一致", // 16
		"密码长度不符", // 17
		

		//diagnostic menu
		"指示灯测试", // 1
		" 测试中...", // 2
		"液晶屏测试", // 3

		//confirm menu
		"< 确认 >: 是",  // 1
		"< 返回 >: 否",  // 2
		"确认分闸?",  // 3
		"确认合闸?", // 4
		"确认改变HLT?", // 5
		"确认设置?",  // 6
		"确认启动远程?", // 7
		"确认启动就地?", // 8
		
		//resettime menu
		"复位时间", // 1
				
		//special	 menu	
		"", // 1
		"< 无效 >", // 2
		"< 成功 >", // 3
		"< 失败 >",// 4
		"退出", // 5
		"投入", // 6
		"是", // 7
		"否", // 8
		"自动", // 9
		"手动", // 10
		"  < 更多"" \x18""\x19"" >", // 11
		"开", // 12
		"关", // 13
		"< 编辑 >",  // 14
		"< 确认 >",  // 15
		"< 返回 >",  // 16
		"  < 更多"" \x19"" >", // 17
		"  < 更多"" \x18"" >", // 18
		"< 更多"" \x18""\x19"" >", // 19
		"< 确认 >  是", // 20
		"< 返回 >  否", // 21

		
		//校准
#ifdef _CALIBRATION_		
		"校准",  // 1
		"监测",  // 2
		"更新",  // 3
		"电压校准",  // 4
		"电流校准",  // 5
		"电池校准",  // 6
		"档位设置",  // 7
		"A 相校准",  // 8
		"B 相校准",  // 9
		"C 相校准",  // 10
		"G 相校准",  // 11
		"全部校准",      // 12
		"电池电压校准",      // 13
		"电池电流校准",      // 14
		"电流测量",       // 15
		"电压测量",       // 16
		"电池测量",       // 17
		
		"更新设置参数",   // 18
		"更新校准参数",      // 19
		"校准使能",       // 20
		"档位01",        // 21 //0.5
	    "档位02",        // 22 //5
		"校准点01",      // 23
		"校准点02",      
		"校准点03",      
		"校准点04",      
		"校准点05",      
		"校准点06",      
		"校准点07",      
		"校准点08",      
		"校准点09",      
		"校准点10",      
		"校准点11",      
		"校准点12",      
		"校准点13",      
		"校准点14",      
		"校准点15",      
#endif

		
	}
};

////////////////////main menu//////////////////////
const MenuItem_t main_menu[] =
{
{NULL,1,TitleLine1,NULL,NULL,0,(MenuItem_t *)setting_menu},
{NULL,2,TitleLine1,NULL,NULL,0,(MenuItem_t *)metering_menu},
{NULL,3,TitleLine2,NULL,NULL,0,(MenuItem_t *)sequence_menu},
{NULL,4,TitleLine2,NULL,NULL,0,(MenuItem_t *)alarm_menu},
{NULL,TARGET,TitleLine1,NULL,NULL,0,(MenuItem_t *)target_menu},
{NULL,5,TitleLine1,NULL,NULL,0,(MenuItem_t *)counter_menu},
{NULL,6,TitleLine1,NULL,NULL,0,(MenuItem_t *)battery_menu},
{NULL,SECURITY,TitleLine1,NULL,NULL,0,(MenuItem_t *)security_menu},
{NULL,8,TitleLine1,NULL,NULL,0,(MenuItem_t *)clock_menu},
{NULL,308,TitleLine1,NULL,NULL,0,(MenuItem_t *)diagnostics_menu},
{NULL,10,TitleLine1,NULL,NULL,0,(MenuItem_t *)nameplate_menu},
MENU_END
};

const MenuItem_t setting_menu[] =
{
{(MenuItem_t *)main_menu,222,TitleLine2,"%d",menu_security_access,OFFSET(active_profile.PassWord),(MenuItem_t *)modview_Setting},
MENU_END
};

const MenuItem_t modview_Setting[] =
{
{(MenuItem_t *)setting_menu,13,TitleLine1,NULL,NULL,0,(MenuItem_t *)active_profile_menu},
{(MenuItem_t *)setting_menu,223,TitleLine1,NULL,NULL,0,(MenuItem_t *)edit_profile_menu},
{(MenuItem_t *)setting_menu,86,TitleLine2,NULL,NULL,0,(MenuItem_t *)normal_oc_setting_menu},
{(MenuItem_t *)setting_menu,84,TitleLine1,NULL,NULL,0,(MenuItem_t *)seq_setting_menu},

{(MenuItem_t *)setting_menu,278,TitleLine2,NULL,NULL,0,(MenuItem_t *)intervals_setting_menu},

{(MenuItem_t *)setting_menu,96,TitleLine1,NULL,NULL,0,(MenuItem_t *)resettime_setting_menu},
{(MenuItem_t *)setting_menu,Reset_Target_TM,TitleLine1,NULL,NULL,0,(MenuItem_t *)reset_target_after_rec_tm_menu},
{(MenuItem_t *)setting_menu,90,TitleLine2,NULL,NULL,0,(MenuItem_t *)clpu_setting_menu},
{(MenuItem_t *)setting_menu,PP_Voltage,TitleLine1,NULL,NULL,0,(MenuItem_t *)VoltagePara_menu},
{(MenuItem_t *)setting_menu,PP_Frequency,TitleLine1,NULL,NULL,0,(MenuItem_t *)FrequencyPara_menu},
{(MenuItem_t *)setting_menu,87,TitleLine2,NULL,NULL,0,(MenuItem_t *)sgf_setting_menu},
{(MenuItem_t *)setting_menu,11,TitleLine1,NULL,NULL,0,(MenuItem_t *)sys_config_menu},
{(MenuItem_t *)setting_menu,COMMUNICATION,TitleLine1,NULL,NULL,0,(MenuItem_t *)commnication_menu},
MENU_END
};


const MenuItem_t security_menu[] =
{
{(MenuItem_t *)main_menu,VIEW_PW,TitleLine1,NULL,NULL,0,(MenuItem_t *)view_pw_menu},
{(MenuItem_t *)main_menu,EDIT_PW,TitleLine1,NULL,NULL,0,(MenuItem_t *)edit_pw_menu},
MENU_END
};

const MenuItem_t view_pw_menu[] =
{
{(MenuItem_t *)security_menu,MENU_PW,TitleLine4,"%d",HMI_ShowSecurity_Func,OFFSET(active_profile.PassWord),NULL},
MENU_END
};

const MenuItem_t edit_pw_menu[] =
{
{(MenuItem_t *)security_menu,15,TitleLine4,"%d",HMI_ModifySecurity_Func,OFFSET(active_profile.PassWord),NULL},
MENU_END
};

const MenuItem_t phase_tcc_select[] =
{
{(MenuItem_t *)seq_setting_menu,119,TitleLine4,"TCC1 TCC2",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].OperTCC[0])|(203<<16),NULL},//leaf
{(MenuItem_t *)seq_setting_menu,120,TitleLine4,"TCC1 TCC2",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].OperTCC[1])|(203<<16),NULL},//leaf
{(MenuItem_t *)seq_setting_menu,121,TitleLine4,"TCC1 TCC2",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].OperTCC[2])|(203<<16),NULL},//leaf
{(MenuItem_t *)seq_setting_menu,122,TitleLine4,"TCC1 TCC2",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].OperTCC[3])|(203<<16)|(1ul<<31),NULL},//leaf
MENU_END
};

const MenuItem_t ground_tcc_select[] =
{
{(MenuItem_t *)seq_setting_menu,144,TitleLine4,"TCC1 TCC2",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].OperTCC[0])|(203<<16),NULL}, //leaf
{(MenuItem_t *)seq_setting_menu,145,TitleLine4,"TCC1 TCC2",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].OperTCC[1])|(203<<16),NULL},//leaf
{(MenuItem_t *)seq_setting_menu,146,TitleLine4,"TCC1 TCC2",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].OperTCC[2])|(203<<16),NULL}, //leaf
{(MenuItem_t *)seq_setting_menu,147,TitleLine4,"TCC1 TCC2",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].OperTCC[3])|(203<<16)|(1ul<<31),NULL},//leaf
MENU_END
};

/*
const MenuItem_t seq_coor_en_menu[] =
{
{(MenuItem_t *)seq_setting_menu,298,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppSeqCoor.SeqCoordEnb)|(1ul<<31)|(194<<16),NULL},//leaf
MENU_END
};

const MenuItem_t seq_coor_op_menu[] =
{
{(MenuItem_t *)seq_setting_menu,299,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.ppSeqCoor.SeqCoordOpers)|(1ul<<31),NULL},//leaf
MENU_END
};
*/
const MenuItem_t seq_setting_menu[] =
{
{(MenuItem_t *)modview_Setting,158,TitleLine2,NULL,NULL,0,(MenuItem_t *)seq_num_setting_menu},
{(MenuItem_t *)modview_Setting,234,TitleLine2,NULL,NULL,0,(MenuItem_t *)phase_tcc_select},
{(MenuItem_t *)modview_Setting,235,TitleLine2,NULL,NULL,0,(MenuItem_t *)ground_tcc_select},
//{(MenuItem_t *)modview_Setting,92,TitleLine2,NULL,NULL,0,(MenuItem_t *)seq_coor_en_menu},
//{(MenuItem_t *)modview_Setting,93,TitleLine2,NULL,NULL,0,(MenuItem_t *)seq_coor_op_menu},
{(MenuItem_t *)modview_Setting,159,TitleLine2,NULL,NULL,0,(MenuItem_t *)gnd_pre_setting_menu},
MENU_END
};

const MenuItem_t seq_num_setting_menu[] =
{
{(MenuItem_t *)seq_setting_menu,297,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.SeqOperNum)|(1ul<<31),NULL},	//leaf
MENU_END
};

const MenuItem_t gnd_pre_setting_menu[] =
{
{(MenuItem_t *)seq_setting_menu,300,TitleLine4,"Yes No",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.GNDPrecedence )|(201<<16)|(1ul<<31),NULL},	//leaf
MENU_END
};


const MenuItem_t phase_normal_min_trip_menu[] =
{
{(MenuItem_t *)phase_normal_oc_menu,113,TitleLine4,"%.1f Amps",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].MinTripCurr)|(1ul<<31),NULL},//leaf
MENU_END
};

const MenuItem_t phase_normal_tcc1_menu[] =
{
{(MenuItem_t *)phase_normal_oc_menu,132,TitleLine4,"%s",HMI_TccType_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].TccIndex[0]),NULL},//leaf
{(MenuItem_t *)phase_normal_oc_menu,123,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[0].TimeMulEnb)|(194<<16),NULL},	//leaf
{(MenuItem_t *)phase_normal_oc_menu,124,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[0].TimeMul),NULL},//leaf
{(MenuItem_t *)phase_normal_oc_menu,125,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[0].TimeAdderEnb)|(194<<16),NULL},	//leaf
{(MenuItem_t *)phase_normal_oc_menu,126,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[0].TimeAdder),NULL},//leaf
{(MenuItem_t *)phase_normal_oc_menu,127,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[0].MinRepTimeAdderEnb)|(194<<16),NULL},//leaf
{(MenuItem_t *)phase_normal_oc_menu,128,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[0].MinRepTimeAdder),NULL},	//leaf
{(MenuItem_t *)phase_normal_oc_menu,129,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[0].HCTEnb)|(194<<16),NULL},//leaf
{(MenuItem_t *)phase_normal_oc_menu,130,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[0].HCTMul),NULL},	//leaf
{(MenuItem_t *)phase_normal_oc_menu,131,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[0].HCTDelay)|(1ul<<31),NULL},//leaf
MENU_END
};

const MenuItem_t phase_normal_tcc2_menu[] =
{
{(MenuItem_t *)phase_normal_oc_menu,177,TitleLine4,"%s",HMI_TccType_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].TccIndex[1]),NULL},//leaf
{(MenuItem_t *)phase_normal_oc_menu,168,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[1].TimeMulEnb)|(194<<16),NULL},	//leaf
{(MenuItem_t *)phase_normal_oc_menu,169,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[1].TimeMul),NULL},//leaf
{(MenuItem_t *)phase_normal_oc_menu,170,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[1].TimeAdderEnb)|(194<<16),NULL},	//leaf
{(MenuItem_t *)phase_normal_oc_menu,171,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[1].TimeAdder),NULL},//leaf
{(MenuItem_t *)phase_normal_oc_menu,172,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[1].MinRepTimeAdderEnb)|(194<<16),NULL},//leaf
{(MenuItem_t *)phase_normal_oc_menu,173,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[1].MinRepTimeAdder),NULL},	//leaf
{(MenuItem_t *)phase_normal_oc_menu,174,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[1].HCTEnb)|(194<<16),NULL},//leaf
{(MenuItem_t *)phase_normal_oc_menu,175,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[1].HCTMul),NULL},	//leaf
{(MenuItem_t *)phase_normal_oc_menu,176,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].Tcc[1].HCTDelay)|(1ul<<31),NULL},//leaf
MENU_END
};

const MenuItem_t phase_normal_min_trip_en_menu[] =
{
{(MenuItem_t *)phase_normal_oc_menu,112,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].MinTripEnb)|(1ul<<31)|(194<<16),NULL},//leaf
MENU_END
};

const MenuItem_t phase_normal_HCL_setting_menu[] =
{
{(MenuItem_t *)phase_normal_oc_menu,114,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].HCLEnbOpers[0])|(194<<16),NULL},//leaf
{(MenuItem_t *)phase_normal_oc_menu,115,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].HCLEnbOpers[1])|(194<<16),NULL},//leaf	{(MenuItem_t *)normal_oc_setting_menu,116,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].HCLEnbOpers[2])|(194<<16),NULL},//leaf
{(MenuItem_t *)phase_normal_oc_menu,116,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].HCLEnbOpers[2])|(194<<16),NULL},//leaf	{(MenuItem_t *)normal_oc_setting_menu,116,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].HCLEnbOpers[2])|(194<<16),NULL},//leaf
{(MenuItem_t *)phase_normal_oc_menu,117,TitleLine4,"%.1f Amps",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].HCLMTCurr)|(1ul<<31),NULL},//leaf
MENU_END
};


const MenuItem_t phase_normal_oc_menu[] =
{
{(MenuItem_t *)normal_oc_setting_menu,224,TitleLine2,NULL,NULL,0,(MenuItem_t *)phase_normal_min_trip_menu},
{(MenuItem_t *)normal_oc_setting_menu,225,TitleLine1,NULL,NULL,0,(MenuItem_t *)phase_normal_tcc1_menu},
{(MenuItem_t *)normal_oc_setting_menu,226,TitleLine1,NULL,NULL,0,(MenuItem_t *)phase_normal_tcc2_menu},
{(MenuItem_t *)normal_oc_setting_menu,227,TitleLine1,NULL,NULL,0,(MenuItem_t *)phase_normal_min_trip_en_menu},
{(MenuItem_t *)normal_oc_setting_menu,228,TitleLine1,NULL,NULL,0,(MenuItem_t *)phase_normal_HCL_setting_menu},
MENU_END
};

const MenuItem_t ground_normal_min_trip_menu[] =
{
{(MenuItem_t *)ground_normal_oc_menu,138,TitleLine4,"%.1f Amps",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].MinTripCurr)|(1ul<<31),NULL},//leaf
MENU_END
};


const MenuItem_t ground_normal_tcc1_menu[] =
{
{(MenuItem_t *)ground_normal_oc_menu,157,TitleLine4,"%s",HMI_TccType_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].TccIndex[0]),NULL},//leaf
{(MenuItem_t *)ground_normal_oc_menu,148,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[0].TimeMulEnb)|(194<<16),NULL},	//leaf
{(MenuItem_t *)ground_normal_oc_menu,149,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[0].TimeMul),NULL},//leaf
{(MenuItem_t *)ground_normal_oc_menu,150,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[0].TimeAdderEnb)|(194<<16),NULL},	//leaf
{(MenuItem_t *)ground_normal_oc_menu,151,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[0].TimeAdder),NULL},//leaf
{(MenuItem_t *)ground_normal_oc_menu,152,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[0].MinRepTimeAdderEnb)|(194<<16),NULL},//leaf
{(MenuItem_t *)ground_normal_oc_menu,153,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[0].MinRepTimeAdder),NULL},	//leaf
{(MenuItem_t *)ground_normal_oc_menu,154,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[0].HCTEnb)|(194<<16),NULL},//leaf
{(MenuItem_t *)ground_normal_oc_menu,155,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[0].HCTMul),NULL},	//leaf
{(MenuItem_t *)ground_normal_oc_menu,156,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[0].HCTDelay)|(1ul<<31),NULL},//lea{(MenuItem_t *)ground_tcc1_setting_menu,157,TitleLine2,"%s",HMI_TccType_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].TccIndex[0]),NULL},//leaf
MENU_END
};

const MenuItem_t ground_normal_tcc2_menu[] =
{
{(MenuItem_t *)ground_normal_oc_menu,187,TitleLine4,"%s",HMI_TccType_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].TccIndex[1]),NULL},//leaf
{(MenuItem_t *)ground_normal_oc_menu,178,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[1].TimeMulEnb)|(194<<16),NULL},	//leaf
{(MenuItem_t *)ground_normal_oc_menu,179,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[1].TimeMul),NULL},//leaf
{(MenuItem_t *)ground_normal_oc_menu,180,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[1].TimeAdderEnb)|(194<<16),NULL},	//leaf
{(MenuItem_t *)ground_normal_oc_menu,181,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[1].TimeAdder),NULL},//leaf
{(MenuItem_t *)ground_normal_oc_menu,182,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[1].MinRepTimeAdderEnb)|(194<<16),NULL},//leaf
{(MenuItem_t *)ground_normal_oc_menu,183,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[1].MinRepTimeAdder),NULL},	//leaf
{(MenuItem_t *)ground_normal_oc_menu,184,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[1].HCTEnb)|(194<<16),NULL},//leaf
{(MenuItem_t *)ground_normal_oc_menu,185,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[1].HCTMul),NULL},	//leaf
{(MenuItem_t *)ground_normal_oc_menu,186,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].Tcc[1].HCTDelay)|(1ul<<31),NULL},//leaf
MENU_END
};

const MenuItem_t ground_normal_min_trip_en_menu[] =
{
{(MenuItem_t *)ground_normal_oc_menu,137,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].MinTripEnb)|(1ul<<31)|(194<<16),NULL},	//leaf
MENU_END
};

const MenuItem_t ground_normal_HCL_setting_menu[] =
{
{(MenuItem_t *)ground_normal_oc_menu,139,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].HCLEnbOpers[0])|(194<<16),NULL},	//leaf
{(MenuItem_t *)ground_normal_oc_menu,140,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].HCLEnbOpers[1])|(194<<16),NULL},//leaf
{(MenuItem_t *)ground_normal_oc_menu,141,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].HCLEnbOpers[2])|(194<<16),NULL},//leaf
{(MenuItem_t *)ground_normal_oc_menu,142,TitleLine4,"%.1f Amps",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].HCLMTCurr)|(1ul<<31),NULL},//leaf
MENU_END
};

const MenuItem_t ground_normal_oc_menu[] =
{
{(MenuItem_t *)normal_oc_setting_menu,229,TitleLine2,NULL,NULL,0,(MenuItem_t *)ground_normal_min_trip_menu},
{(MenuItem_t *)normal_oc_setting_menu,230,TitleLine1,NULL,NULL,0,(MenuItem_t *)ground_normal_tcc1_menu},
{(MenuItem_t *)normal_oc_setting_menu,231,TitleLine1,NULL,NULL,0,(MenuItem_t *)ground_normal_tcc2_menu},
{(MenuItem_t *)normal_oc_setting_menu,232,TitleLine1,NULL,NULL,0,(MenuItem_t *)ground_normal_min_trip_en_menu},
{(MenuItem_t *)normal_oc_setting_menu,233,TitleLine1,NULL,NULL,0,(MenuItem_t *)ground_normal_HCL_setting_menu},
MENU_END
};

const MenuItem_t normal_oc_setting_menu[] =
{
{(MenuItem_t *)modview_Setting,108,TitleLine1,NULL,NULL,0,(MenuItem_t *)phase_normal_oc_menu},
{(MenuItem_t *)modview_Setting,133,TitleLine1,NULL,NULL,0,(MenuItem_t *)ground_normal_oc_menu},
MENU_END
};

const MenuItem_t clpu_seq_num_setting_menu[] =
{
{(MenuItem_t *)clpu_setting_menu,301,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.ppCLPUParam.SeqOperNum)|(1ul<<31),NULL},	//leaf
MENU_END
};

const MenuItem_t clpu_rec_setting_menu[] =
{
{(MenuItem_t *)clpu_setting_menu,302,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppCLPUParam.ClpuRecIntvl)|(1ul<<31),NULL},	//leaf
MENU_END
};

const MenuItem_t clpu_act_setting_menu[] =
{
{(MenuItem_t *)clpu_setting_menu,303,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppCLPUParam.ClpuActTime)|(1ul<<31),NULL},	//leaf
MENU_END
};

const MenuItem_t clpu_trip_setting_menu[] =
{
{(MenuItem_t *)clpu_setting_menu,MENU_ENERGY_INDEX+6,TitleLine4,"Enable Disable",HMI_StrPara_Func,OFFSET(active_profile.ppCLPUParam.clpuEnabled)|(194<<16)|(1ul<<31),NULL},	//leaf
MENU_END
};


const MenuItem_t clpu_phase_setting_menu[] =
{
{(MenuItem_t *)clpu_setting_menu,242,TitleLine4,"%.1f Amps",HMI_FloatPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[0].MinTripCurr),NULL},//leaf,//min trip curr
{(MenuItem_t *)clpu_setting_menu,254,TitleLine4,"%s",HMI_TccType_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[0].TccIndex[0]),NULL},//leaf
{(MenuItem_t *)clpu_setting_menu,245,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[0].Tcc[0].TimeMulEnb)|(194<<16),NULL}, //leaf
{(MenuItem_t *)clpu_setting_menu,246,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[0].Tcc[0].TimeMul),NULL},//leaf
{(MenuItem_t *)clpu_setting_menu,247,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[0].Tcc[0].TimeAdderEnb)|(194<<16),NULL},	//leaf
{(MenuItem_t *)clpu_setting_menu,248,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[0].Tcc[0].TimeAdder),NULL},//leaf
{(MenuItem_t *)clpu_setting_menu,249,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[0].Tcc[0].MinRepTimeAdderEnb)|(194<<16),NULL},//leaf
{(MenuItem_t *)clpu_setting_menu,250,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[0].Tcc[0].MinRepTimeAdder),NULL},	//leaf
{(MenuItem_t *)clpu_setting_menu,251,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[0].Tcc[0].HCTEnb)|(194<<16),NULL},//leaf
{(MenuItem_t *)clpu_setting_menu,252,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[0].Tcc[0].HCTMul),NULL},	//leaf
{(MenuItem_t *)clpu_setting_menu,253,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[0].Tcc[0].HCTDelay),NULL},//leaf
{(MenuItem_t *)clpu_setting_menu,276,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[0].HCLEnbOpers[0])|(194<<16),NULL},
{(MenuItem_t *)clpu_setting_menu,265,TitleLine4,"%.1f Amps",HMI_FloatPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[0].HCLMTCurr)|(1ul<<31),NULL},//leaf,//HCL Min Current
MENU_END
};

const MenuItem_t clpu_ground_setting_menu[] =
{
{(MenuItem_t *)clpu_setting_menu,243,TitleLine4,"%.1f Amps",HMI_FloatPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[1].MinTripCurr),NULL},//leaf
{(MenuItem_t *)clpu_setting_menu,264,TitleLine4,"%s",HMI_TccType_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[1].TccIndex[0]),NULL},//leaf
{(MenuItem_t *)clpu_setting_menu,255,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[1].Tcc[0].TimeMulEnb)|(194<<16),NULL},	//leaf
{(MenuItem_t *)clpu_setting_menu,256,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[1].Tcc[0].TimeMul),NULL},//leaf
{(MenuItem_t *)clpu_setting_menu,257,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[1].Tcc[0].TimeAdderEnb)|(194<<16),NULL},	//leaf
{(MenuItem_t *)clpu_setting_menu,258,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[1].Tcc[0].TimeAdder),NULL},//leaf
{(MenuItem_t *)clpu_setting_menu,259,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[1].Tcc[0].MinRepTimeAdderEnb)|(194<<16),NULL},//leaf
{(MenuItem_t *)clpu_setting_menu,260,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[1].Tcc[0].MinRepTimeAdder),NULL},	//leaf
{(MenuItem_t *)clpu_setting_menu,261,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[1].Tcc[0].HCTEnb )|(194<<16),NULL},//leaf
{(MenuItem_t *)clpu_setting_menu,262,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[1].Tcc[0].HCTMul ),NULL},	//leaf
{(MenuItem_t *)clpu_setting_menu,263,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[1].Tcc[0].HCTDelay),NULL},//leaf
{(MenuItem_t *)clpu_setting_menu,277,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[1].HCLEnbOpers[0])|(194<<16),NULL},
{(MenuItem_t *)clpu_setting_menu,266,TitleLine4,"%.1f Amps",HMI_FloatPara_Func,OFFSET(active_profile.ppCLPUParam.PhGndPara[1].HCLMTCurr)|(1ul<<31),NULL},//leaf
MENU_END
};

const MenuItem_t clpu_setting_menu[] =
{
{(MenuItem_t *)modview_Setting,236,TitleLine1,NULL,NULL,0,(MenuItem_t *)clpu_trip_setting_menu},
{(MenuItem_t *)modview_Setting,238,TitleLine1,NULL,NULL,0,(MenuItem_t *)clpu_phase_setting_menu},
{(MenuItem_t *)modview_Setting,239,TitleLine1,NULL,NULL,0,(MenuItem_t *)clpu_ground_setting_menu},
{(MenuItem_t *)modview_Setting,164,TitleLine2,NULL,NULL,0,(MenuItem_t *)clpu_seq_num_setting_menu},
{(MenuItem_t *)modview_Setting,165,TitleLine2,NULL,NULL,0,(MenuItem_t *)clpu_rec_setting_menu},
{(MenuItem_t *)modview_Setting,166,TitleLine2,NULL,NULL,0,(MenuItem_t *)clpu_act_setting_menu},
MENU_END
};

const MenuItem_t VoltagePara_menu[] =
{
{(MenuItem_t *)modview_Setting,PP_Volt_UnderMode,TitleLine1,NULL,NULL,0,(MenuItem_t *)Vol_underMode_menu},
{(MenuItem_t *)modview_Setting,PP_Volt_UnderVol1,TitleLine1,NULL,NULL,0,(MenuItem_t *)Vol_undervolt1_menu},
{(MenuItem_t *)modview_Setting,PP_Volt_UnderVol2,TitleLine1,NULL,NULL,0,(MenuItem_t *)Vol_undervolt2_menu},
{(MenuItem_t *)modview_Setting,PP_Volt_UnderVol3,TitleLine1,NULL,NULL,0,(MenuItem_t *)Vol_undervolt3_menu},
{(MenuItem_t *)modview_Setting,PP_Volt_OverMode,TitleLine1,NULL,NULL,0,(MenuItem_t *)Vol_overMode_menu},
{(MenuItem_t *)modview_Setting,PP_Volt_OverVol1,TitleLine1,NULL,NULL,0,(MenuItem_t *)Vol_overvolt1_menu},
{(MenuItem_t *)modview_Setting,PP_Volt_OverVol2,TitleLine1,NULL,NULL,0,(MenuItem_t *)Vol_overvolt2_menu},
{(MenuItem_t *)modview_Setting,PP_Volt_OverVol3,TitleLine1,NULL,NULL,0,(MenuItem_t *)Vol_overvolt3_menu},
{(MenuItem_t *)modview_Setting,PP_Volt_LoadRestore,TitleLine1,NULL,NULL,0,(MenuItem_t *)Vol_Restore_menu},
MENU_END
};

const MenuItem_t Vol_underMode_menu[] =
{
{(MenuItem_t *)VoltagePara_menu,PP_Volt_UnderMode_Value,TitleLine4,"3",HMI_MultStrPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.UnderVolTripMod)|(PP_Volt_3P<<16),NULL},	//leaf
MENU_END
};

const MenuItem_t Vol_undervolt1_menu[] =	
{
{(MenuItem_t *)VoltagePara_menu,PP_Volt_UnderVol1_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.UndervolStageEnb[0])|(194<<16),NULL}, //leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_UnderVol1_Pickup,TitleLine4,"%.1f kV",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.UndervolStagePickup[0]),NULL},//leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_UnderVol1_Delay,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.UndervolStageDelay[0])|(1ul<<31),NULL}, //leaf
MENU_END
};

const MenuItem_t Vol_undervolt2_menu[] =
{
{(MenuItem_t *)VoltagePara_menu,PP_Volt_UnderVol2_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.UndervolStageEnb[1])|(194<<16),NULL}, //leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_UnderVol2_Pickup,TitleLine4,"%.1f kV",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.UndervolStagePickup[1]),NULL},//leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_UnderVol2_Delay,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.UndervolStageDelay[1])|(1ul<<31),NULL}, //leaf
MENU_END

};

const MenuItem_t Vol_undervolt3_menu[] =
{
{(MenuItem_t *)VoltagePara_menu,PP_Volt_UnderVol3_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.UndervolStageEnb[2])|(194<<16),NULL}, //leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_UnderVol3_Pickup,TitleLine4,"%.1f kV",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.UndervolStagePickup[2]),NULL},//leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_UnderVol3_Delay,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.UndervolStageDelay[2])|(1ul<<31),NULL}, //leaf
MENU_END

};

const MenuItem_t Vol_overMode_menu[] =
{
{(MenuItem_t *)VoltagePara_menu,PP_Volt_OverMode_Value,TitleLine4,"2",HMI_MultStrPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.OverVolTripMod)|(PP_Volt_3P<<16)|(1ul<<31),NULL}, //leaf
MENU_END
};

const MenuItem_t Vol_overvolt1_menu[] =
{
{(MenuItem_t *)VoltagePara_menu,PP_Volt_OverVol1_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.OvervolStageEnb[0])|(194<<16),NULL}, //leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_OverVol1_Pickup,TitleLine4,"%.1f kV",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.OvervolStagePickup[0]),NULL},//leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_OverVol1_Delay,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.OvervolStageDelay[0])|(1ul<<31),NULL}, //leaf
MENU_END
};
const MenuItem_t Vol_overvolt2_menu[] =
{
{(MenuItem_t *)VoltagePara_menu,PP_Volt_OverVol2_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.OvervolStageEnb[1])|(194<<16),NULL}, //leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_OverVol2_Pickup,TitleLine4,"%.1f kV",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.OvervolStagePickup[1]),NULL},//leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_OverVol2_Delay,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.OvervolStageDelay[1])|(1ul<<31),NULL}, //leaf
MENU_END
};
const MenuItem_t Vol_overvolt3_menu[] =
{
{(MenuItem_t *)VoltagePara_menu,PP_Volt_OverVol3_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.OvervolStageEnb[2])|(194<<16),NULL}, //leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_OverVol3_Pickup,TitleLine4,"%.1f kV",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.OvervolStagePickup[2]),NULL},//leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_OverVol3_Delay,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.OvervolStageDelay[2])|(1ul<<31),NULL}, //leaf
MENU_END
};
const MenuItem_t Vol_Restore_menu[] =
{
{(MenuItem_t *)VoltagePara_menu,PP_Volt_Restore_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.VolRestoreEnb)|(194<<16),NULL}, //leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_Restore_Mode,TitleLine4,"2",HMI_MultStrPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.VolRestoreMode)|(PP_Volt_3P<<16),NULL}, //leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_Restore_LoLimit,TitleLine4,"%.1f kV",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.VolRestoreLoLimit),NULL},//leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_Restore_HiLimit,TitleLine4,"%.1f kV",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.VolRestoreHiLimit),NULL},//leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_Restore_SchedTime,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.RestoreSchedTime),NULL}, //leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_Restore_TransTime,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.RestoreTransTime),NULL}, //leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_Restore_AbortTime,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.RestoreAbortTime),NULL}, //leaf
{(MenuItem_t *)VoltagePara_menu,PP_Volt_Super_BothVolFreq,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.SuperBothVolandFreq)|(194<<16)|(1ul<<31),NULL}, //leaf

MENU_END
};

const MenuItem_t FrequencyPara_menu[] =
{
{(MenuItem_t *)modview_Setting,PP_Freq_Stage1,TitleLine1,NULL,NULL,0,(MenuItem_t *)Freq_Stage1_menu},
{(MenuItem_t *)modview_Setting,PP_Freq_Stage2,TitleLine1,NULL,NULL,0,(MenuItem_t *)Freq_Stage2_menu},
{(MenuItem_t *)modview_Setting,PP_Freq_Stage3,TitleLine1,NULL,NULL,0,(MenuItem_t *)Freq_Stage3_menu},
{(MenuItem_t *)modview_Setting,PP_Freq_Stage4,TitleLine1,NULL,NULL,0,(MenuItem_t *)Freq_Stage4_menu},
{(MenuItem_t *)modview_Setting,PP_Freq_Stage5,TitleLine1,NULL,NULL,0,(MenuItem_t *)Freq_Stage5_menu},
{(MenuItem_t *)modview_Setting,PP_Freq_Stage6,TitleLine1,NULL,NULL,0,(MenuItem_t *)Freq_Stage6_menu},
{(MenuItem_t *)modview_Setting,PP_Freq_Load_Super,TitleLine1,NULL,NULL,0,(MenuItem_t *)Freq_LoadSuper_menu},
{(MenuItem_t *)modview_Setting,PP_Freq_MinVolt,TitleLine1,NULL,NULL,0,(MenuItem_t *)Freq_MinVolt_menu},
{(MenuItem_t *)modview_Setting,PP_Freq_LoadRestore,TitleLine1,NULL,NULL,0,(MenuItem_t *)Freq_Restore_menu},
MENU_END
};

const MenuItem_t Freq_Stage1_menu[] =
{
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage1_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStageEnb[0])|(194<<16),NULL}, //leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage1_Pickup,TitleLine4,"%.1f Hz",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStagePickup[0]),NULL},//leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage1_Delay,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStageDelay[0])|(1ul<<31),NULL}, //leaf
MENU_END
};
const MenuItem_t Freq_Stage2_menu[] =
{
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage2_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStageEnb[1])|(194<<16),NULL}, //leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage2_Pickup,TitleLine4,"%.1f Hz",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStagePickup[1]),NULL},//leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage2_Delay,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStageDelay[1])|(1ul<<31),NULL}, //leaf
MENU_END
};
const MenuItem_t Freq_Stage3_menu[] =
{
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage3_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStageEnb[2])|(194<<16),NULL}, //leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage3_Pickup,TitleLine4,"%.1f Hz",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStagePickup[2]),NULL},//leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage3_Delay,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStageDelay[2])|(1ul<<31),NULL}, //leaf
MENU_END
};
const MenuItem_t Freq_Stage4_menu[] =
{
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage4_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStageEnb[3])|(194<<16),NULL}, //leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage4_Pickup,TitleLine4,"%.1f Hz",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStagePickup[3]),NULL},//leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage4_Delay,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStageDelay[3])|(1ul<<31),NULL}, //leaf
MENU_END
};
const MenuItem_t Freq_Stage5_menu[] =
{
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage5_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStageEnb[4])|(194<<16),NULL}, //leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage5_Pickup,TitleLine4,"%.1f Hz",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStagePickup[4]),NULL},//leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage5_Delay,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStageDelay[4])|(1ul<<31),NULL}, //leaf
MENU_END
};
const MenuItem_t Freq_Stage6_menu[] =
{
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage6_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStageEnb[5])|(194<<16),NULL}, //leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage6_Pickup,TitleLine4,"%.1f Hz",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStagePickup[5]),NULL},//leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Stage6_Delay,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqStageDelay[5])|(1ul<<31),NULL}, //leaf
MENU_END
};
const MenuItem_t Freq_LoadSuper_menu[] =
{
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Load_Super_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqLoadSuperEnb)|(194<<16),NULL}, //leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Load_Super_Pickup,TitleLine4,"%.2f A",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqLoadSuperPickup)|(1ul<<31),NULL},//leaf
MENU_END
};
const MenuItem_t Freq_MinVolt_menu[] =
{
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_MinVolt_Value,TitleLine4,"%.1f kV",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.MinVoltForFreq)|(1ul<<31),NULL},//leaf
MENU_END
};
const MenuItem_t Freq_Restore_menu[] =
{
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Restore_Enb,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqRestoreEnb)|(194<<16),NULL}, //leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Restore_LoLimit,TitleLine4,"%.1f Hz",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqRestoreLoLimit),NULL},//leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Restore_HiLimit,TitleLine4,"%.1f Hz",HMI_FloatPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.FreqRestoreHiLimit),NULL},//leaf

{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Restore_SchedTime,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.RestoreSchedTime),NULL}, //leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Restore_TransTime,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.RestoreTransTime),NULL}, //leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Restore_AbortTime,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.FreqPara.RestoreAbortTime),NULL}, //leaf
{(MenuItem_t *)FrequencyPara_menu,PP_Freq_Super_BothVolFreq,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppNorSeqParam.VoltagePara.SuperBothVolandFreq)|(194<<16)|(1ul<<31),NULL}, //leaf
MENU_END
};


const MenuItem_t sgf_setting_menu[] =
{
{(MenuItem_t *)modview_Setting,100,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppSGFParam.SGFEnb)|(194<<16),NULL},	//leaf
{(MenuItem_t *)modview_Setting,101,TitleLine4,"%.1f Amps",HMI_FloatPara_Func,OFFSET(active_profile.ppSGFParam.SGFMinTripCurr),NULL},//leaf
{(MenuItem_t *)modview_Setting,102,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppSGFParam.SGFMinTripDelay),NULL},	//leaf
{(MenuItem_t *)modview_Setting,103,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppSGFParam.SGFRecIntvl),NULL},//leaf
{(MenuItem_t *)modview_Setting,104,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.ppSGFParam.SGFOperNum)|(1ul<<31),NULL},//leaf
MENU_END
};

const MenuItem_t hlt_setting_menu[] =
{
{(MenuItem_t *)modview_Setting,106,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppHLTParam.HLTPhDelay ),NULL},//leaf
{(MenuItem_t *)modview_Setting,107,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppHLTParam.HLTGndDelay)|(1ul<<31),NULL},//leaf
MENU_END
};

const MenuItem_t non_setting_menu[] =
{
{(MenuItem_t *)modview_Setting,188,TitleLine4,"",HMI_StrPara_Func,OFFSET(active_profile.ppNonReclose)|(194<<16)|(1ul<<31),NULL},//leaf
MENU_END
};

const MenuItem_t resettime_setting_menu[] =
{
{(MenuItem_t *)modview_Setting,96,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppSeqCoor.ResetTime)|(1ul<<31),NULL},//leaf
MENU_END
};

const MenuItem_t reset_target_after_rec_tm_menu[]=
{
{(MenuItem_t *)modview_Setting,Reset_Target_After_Rec_TM,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppSeqCoor.ResetTargetAfterRecTM),NULL},//leaf
MENU_END
};

const MenuItem_t intervals_setting_menu[];


const MenuItem_t intervals_phase_menu[] =
{
{(MenuItem_t *)intervals_setting_menu,281,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].RecloseInternal[0]),NULL},//leaf
{(MenuItem_t *)intervals_setting_menu,282,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].RecloseInternal[1]),NULL},//leaf
{(MenuItem_t *)intervals_setting_menu,283,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[0].RecloseInternal[2])|(1ul<<31),NULL},//leaf

MENU_END
};

const MenuItem_t intervals_ground_menu[] =
{
{(MenuItem_t *)intervals_setting_menu,284,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].RecloseInternal[0]),NULL},//leaf
{(MenuItem_t *)intervals_setting_menu,285,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].RecloseInternal[1]),NULL},//leaf
{(MenuItem_t *)intervals_setting_menu,286,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.ppNorSeqParam.PhGndPara[1].RecloseInternal[2])|(1ul<<31),NULL},//leaf

MENU_END
};

const MenuItem_t intervals_setting_menu[] =
{
{(MenuItem_t *)modview_Setting,279,TitleLine1,NULL,NULL,0,(MenuItem_t *)intervals_phase_menu},//leaf
{(MenuItem_t *)modview_Setting,280,TitleLine1,NULL,NULL,0,(MenuItem_t *)intervals_ground_menu},//leaf

MENU_END
};

const MenuItem_t edit_profile_menu[] =
{
{(MenuItem_t *)modview_Setting,223,TitleLine4,"",HMI_EditProfile_Func,OFFSET(CurProfileIndex),NULL},
MENU_END
};
const MenuItem_t active_profile_menu[] =
{
{(MenuItem_t *)modview_Setting,14,TitleLine4,"",HMI_ActiveProfile_Func,0,NULL},//leaf
MENU_END
};

////////////////////sequence//////////////////////
const MenuItem_t sequence_menu[] =
{
{(MenuItem_t *)main_menu,15,TitleLine4,"",HMI_Show_Soe_Records_Func,0,NULL},	//leaf
MENU_END
};

////////////////////metering//////////////////////
const MenuItem_t instant_metering_menu[] =
{
{(MenuItem_t *)metering_menu,15,TitleLine4,"",HMI_Show_Metering_Func,5,NULL},//leaf
MENU_END
};

const MenuItem_t real_metering_menu[] =
{
{(MenuItem_t *)power_metering_menu,15,TitleLine4,"",HMI_Show_Metering_Func,1,NULL},//leaf
MENU_END
};
const MenuItem_t reactive_metering_menu[] =
{
{(MenuItem_t *)power_metering_menu,15,TitleLine4,"",HMI_Show_Metering_Func,2,NULL},//leaf
MENU_END
};
const MenuItem_t appearent_metering_menu[] =
{
{(MenuItem_t *)power_metering_menu,15,TitleLine4,"",HMI_Show_Metering_Func,3,NULL},//leaf
MENU_END
};
const MenuItem_t factor_metering_menu[] =
{
{(MenuItem_t *)metering_menu,15,TitleLine4,"",HMI_Show_Metering_Func,4,NULL},//leaf
MENU_END
};

const MenuItem_t real_eng_metering_menu[] =
{
{(MenuItem_t *)energy_metering_menu,15,TitleLine4,"",HMI_Show_Metering_Func,6,NULL},//leaf
MENU_END
};

const MenuItem_t reactive_eng_metering_menu[] =
{
{(MenuItem_t *)energy_metering_menu,15,TitleLine4,"",HMI_Show_Metering_Func,7,NULL},//leaf
MENU_END
};

const MenuItem_t appearent_eng_metering_menu[] =
{
{(MenuItem_t *)energy_metering_menu,15,TitleLine4,"",HMI_Show_Metering_Func,8,NULL},//leaf
MENU_END
};

const MenuItem_t reset_eng_metering_menu[] =
{
{(MenuItem_t *)energy_metering_menu,MENU_ENERGY_INDEX+5,TitleLine4,"",HMI_ResetEnergy_Func,8,NULL},//leaf
MENU_END
};

const MenuItem_t power_metering_menu[] =
{
{(MenuItem_t *)metering_menu,62,TitleLine1,NULL,NULL,0,(MenuItem_t *)real_metering_menu},
{(MenuItem_t *)metering_menu,63,TitleLine1,NULL,NULL,0,(MenuItem_t *)reactive_metering_menu},
{(MenuItem_t *)metering_menu,64,TitleLine2,NULL,NULL,0,(MenuItem_t *)appearent_metering_menu},
MENU_END
};

const MenuItem_t energy_metering_menu[] =
{
{(MenuItem_t *)metering_menu,MENU_ENERGY_INDEX+1,TitleLine1,NULL,NULL,0,(MenuItem_t *)real_eng_metering_menu},
{(MenuItem_t *)metering_menu,MENU_ENERGY_INDEX+2,TitleLine1,NULL,NULL,0,(MenuItem_t *)reactive_eng_metering_menu},
{(MenuItem_t *)metering_menu,MENU_ENERGY_INDEX+4,TitleLine1,NULL,NULL,0,(MenuItem_t *)reset_eng_metering_menu},
//{(MenuItem_t *)metering_menu,MENU_ENERGY_INDEX+3,TitleLine2,NULL,NULL,0,(MenuItem_t *)appearent_eng_metering_menu},
MENU_END
};

const MenuItem_t Freq_metering_menu[] =
{
{(MenuItem_t *)metering_menu,15,TitleLine4,"",HMI_Show_Metering_Func,9,NULL},//leaf
MENU_END
};

const MenuItem_t metering_menu[] =
{
{(MenuItem_t *)main_menu,16,TitleLine2,NULL,NULL,0,(MenuItem_t *)instant_metering_menu},
{(MenuItem_t *)main_menu,17,TitleLine1,NULL,NULL,0,(MenuItem_t *)power_metering_menu},
{(MenuItem_t *)main_menu,MENU_ENERGY_INDEX,TitleLine1,NULL,NULL,0,(MenuItem_t *)energy_metering_menu},
{(MenuItem_t *)main_menu,65,TitleLine1,NULL,NULL,0,(MenuItem_t *)factor_metering_menu},
{(MenuItem_t *)main_menu,MENU_ENERGY_INDEX+10,TitleLine1,NULL,NULL,0,(MenuItem_t *)Freq_metering_menu},
MENU_END
};


