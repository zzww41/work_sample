/*****************************************************************************
 *
 * File:	HMIMenu.c
 *
 * Author:	 Kris Li
 *
 * Copyright (C) Cooper Power Systems, Inc 2001, 2011
 *
 ******************************************************************************
 *
 * Design description:
 *This is a demo task, including HMI Menu structure.
 * 
 *
 ****************************************************************************/

#include "HMIMenu.h"
#include "HMIHandle.h"

const char *SOENameList[][MAX_SOE_ITEM] = {
{
    "Super-\nvisory On",
    "Super-\nvisory Off",
    "Non-\nReclosing On",
    "Non-\nReclosing Off",
    "Cold\nLoad Pickup On",
    "Cold\nLoad Pickup Off",
    "Ground\nTrip On",
    "Ground\nTrip Off", 
    "Phase\nTrip On",
    "Phase\nTrip Off",	
    "SGF On",
    "SGF Off",
    "Reset\nCounter",  
    "Profile\nSelection Change", //Profile Selection Change
    "Set Time",
    "TCPIP W/R \nFailure",
	
    "HLT On\nFrom Comm1",
    "HLT Off\nFrom Comm1",
	"HLT On\nFrom Comm2",
	"HLT Off\nFrom Comm2",
    "HLT On\nFrom Front Panel",
    "HLT Off\nFrom Front Panel",
    "HLT\nClose Attempts",
    
    "Seq\nCoor Opers",
    "Phase\nLockout",
    "Ground\nLockout",
    "Phase\nHCL",
    "Ground\nHCL",
    "SGF\nLockout",
    "Non-\nReclosing Lockout",
    "Operati-\non 1 Phase Trip",
    "Operati-\non 2 Phase Trip",
    "Operati-\non 3 Phase Trip",
    
    "Operati-\non 4 Phase Trip",
    "Operati-\non 1 Ground Trip",
    "Operati-\non 2 Ground Trip",
    "Operati-\non 3 Ground Trip",
    "Operati-\non 4 Ground Trip",
    "Control\nOK",
    "Close\nFail",
    "Trip\nFail",
    "Trip\nFrom Front Panel",  // HMI Trip 
    "Close\nFrom Front Panel", // HMI Close
    "Trip\nFrom I/O",
    "Close\nFrom I/O",
    "Normal\nClose",
    "Sequence\nReset",
    "Frequen-\ncy Trip",
    "Freq1 \nTrip",
    "Freq2 \nTrip",
    "Freq3 \nTrip",
    "Freq4 \nTrip",
    "Freq5 \nTrip",
    "Freq6 \nTrip",
    "Voltage \nTrip",
    "Over \nVoltage 1 Trip",
    "Over \nVoltage 2 Trip",
    "Over \nVoltage 3 Trip",
    "Under \nVoltage 1 Trip",
    "Under \nVoltage 2 Trip",
    "Under \nVoltage 3 Trip",
    "Voltage-\nFreq Restoration",
	
    "Switch\nAbnormal", // Switch abnormal changes    
    "Rel\nRetry",
    "Rel\nRetry fail",
    "Rel\nRetry Success",
    "Ctrl Ci-\nrcuit Interrupt", // Control Circuit Interrupt 
    "Trip\nCoil Fail",	
    "State I-\nndeterminate O&C", //State Indeterminate Open and Closed
    "Incons.\nState To Close", //Inconsistent State Check Close
    "Incons.\nState To Lockout", //Inconsistent State Check Lockout
	
    "Operati-\non 1 Phase AMT",
    "Operati-\non 2 Phase AMT",
    "Operati-\non 3 Phase AMT",
    "Operati-\non 4 Phase AMT",
    "Operati-\non 1 Ground AMT",
    "Operati-\non 2 Ground AMT",
    "Operati-\non 3 Ground AMT",
    "Operati-\non 4 Ground AMT",
    "Operati-\non 1 SGF AMT",    
    "Operati-\non 2 SGF AMT",
    "Operati-\non 3 SGF AMT",
    "Operati-\non 4 SGF AMT",  
    
    "AC Power\nLost",
    "AC Power\nPresent", 
    "Battery\nTest On", // Battery test on
    "Battery\nTest Manually",
    "Battery\nTest Auto",
    "Battery\nLow Voltage",
	"Battery\nReset",
    "Battery\nFailed",
    "Ext. Cl-\nose Req Comm1", //Ext.Close Request( Comm 1)
    "Ext. Cl-\nose Req Comm2",//Ext.Close Request( Comm 2)
    "Ext. Tr-\nip/Lockout Comm1", //Ext. Trip/Lockout( Comm 1)
    "Ext. Tr-\nip/Lockout Comm2", //Ext. Trip/Lockout( Comm 2)
   	"A-Ph Bus\nVol Pre",
	"B-Ph Bus\nVol Pre",
  	"C-Ph Bus\nVol Pre",
  	"A-Ph Bus\nVol Dis",
	"B-Ph Bus\nVol Dis",
  	"C-Ph Bus\nVol Dis",

	"Reset\nTarget"
},
{
	"����Զ��", // Supervisory on
	"�����͵�", // Supervisory off
	"����Э��ʹ��", // Seq Coord Enb
	"�غϳ���ʹ��", // Rel Retry Enb
	"��ֹ�غ�ʹ��", // NonReclosing On
	"��ֹ�غϹر�", // NonReclosing Off
	"Ͷ��������", // CLPU on
	"�˳�������", // CLPU off
	
	"Ͷ���ٶ�", // Fast Trip on
	"�˳��ٶ�", // Fast Trip off
	"Ͷ����ʱ�ٶ�", // delay fast Trip on
	"�˳���ʱ�ٶ�", // delay fast Trip off
	"Ͷ���������", // overcurrent trip on
	"�˳���������", // overcurrent trip off
	"Ͷ�����ٶ�", // Fast Trip on
	"�˳����ٶ�", // Fast Trip off
	"Ͷ����ʱ�ٶ�", // delay fast Trip on
	"������ʱ�ٶ�", // delay fast Trip off
	"Ͷ���������", // overcurrent trip on
	"�����������", // overcurrent trip off
	"Ͷ���غ�բ", // reclose on
	"�˳��غ�բ", // reclose off
	"Ͷ�����غ�բ", //CLPU reclose on
	"�˳����غ�բ", // CLPU reclose off
	"Ͷ������", // after fast on
	"�˳������", // after fast off
	"Ͷ�����򱣻�", // SGF on
	"�˳����򱣻�", // SGF off
	
	"����", // Target Reset
	"�������",
	"���������", // Target Reset
	"������ع���",
	"�رյ�ع���",
	
	"Զ�̽�ֹ��բʹ��", // Comm HLT on
	"Զ�̽�ֹ��բ�ر�", // Comm HLT off
	"����HLT", // HMI HLT on
	"�ر�HLT", // HMI HLT off
	"���Խ�ֹ��բ",  // HLT Close Attempt
		
	"����Э��ִ��", // Seq Coord Opers
	"�غϳ��Ա���", // Rel Retry Lckout
	"�������ϱ���", // OC lckout
	"��ʱ�ٶϱ���", // Delay trip Lckout
	"�ٶϱ���",     // fast trip lockout
	"�ӵع��ϱ���", // SGF lckout

	"һ�ι�����բ", // Oper1 Phase Trip
	"���ι�����բ", // Oper2 Phase Trip
	"���ι�����բ", // Oper3 Phase Trip
	"�Ĵι�����բ", // Oper4 Phase Trip
	"һ�����ٷ�բ", // Oper1 Gnd Trip
	"�������ٷ�բ", // Oper2 Gnd Trip
	"�������ٷ�բ", // Oper3 Gnd Trip
	"�Ĵ����ٷ�բ", // Oper4 Gnd Trip
	"һ���ٶϷ�բ", // Oper1 Gnd Trip
	"�����ٶϷ�բ", // Oper2 Gnd Trip
	"�����ٶϷ�բ", // Oper3 Gnd Trip
	"�Ĵ��ٶϷ�բ", // Oper4 Gnd Trip
	"һ�νӵط�բ", // Oper1 Gnd Trip
	"���νӵط�բ", // Oper2 Gnd Trip
	"���νӵط�բ", // Oper3 Gnd Trip
	"�Ĵνӵط�բ", // Oper4 Gnd Trip
	
	"���ƻָ�����", // Control Ok
	"��բʧ��", // Close fail
	"��բʧ��", // Trip fail
	"���Ʒ�բ", // Control/HMI Trip
	"���ƺ�բ", // Control/HMI Close
	"ң������բ", // Supervisory Trip
	"ң������բ", // Supervisory Close
	"������բ", // Normal Close
	"���и�λ", // sequence reset
	"�����������",//SGF alarm

	
	"�غ����쳣", // switch abnormal changes	
	"�غϳ���", //Rel Retry
	"�غϳ���ʧ��", // Rel Retry fail
	"�غϳ��Գɹ�", // Rel Retry Succ
	"���Ƶ�·�ж�", // CCI:Ctrl Cir Int
	"��բ��Ȧʧ��", // Trip Coil fail
	
	"��һ�ι����غϳ���", // Oper1 OC AMT
	"�ڶ��ι����غϳ���", // Oper2 OC AMT
	"�����ι����غϳ���", // Oper3 OC AMT
	"���Ĵι����غϳ���", // Oper4 OC AMT
	"��һ����ʱ�ٶ��غϳ���", // Oper1 Delay Trip AMT
	"�ڶ�����ʱ�ٶ��غϳ���", // Oper1 Delay Trip AMT
	"��������ʱ�ٶ��غϳ���", // Oper1 Delay Trip AMT
	"���Ĵ���ʱ�ٶ��غϳ���", // Oper1 Delay Trip AMT
	"��һ���ٶ��غϳ���", // Oper1 Fast Trip AMT
	"�ڶ����ٶ��غϳ���", // Oper1 Fast Trip AMT
	"�������ٶ��غϳ���", // Oper1 Fast Trip AMT
	"���Ĵ��ٶ��غϳ���", // Oper1 Fast Trip AMT
	
	"��һ�νӵ��غϳ���", // Oper1 SGF AMT
	"�ڶ��νӵ��غϳ���", // Oper2 SGF AMT
	"�����νӵ��غϳ���", // Oper3 SGF AMT
	"���Ĵνӵ��غϳ���", // Oper4 SGF AMT
	
	"������ʧ��", // AC Power lost
	"������ָ�", // AC Power restore

     "��ز��Դ�",//    BATTERY_TEST_ON,/* Battery test */
     "�ֶ����Ե��",//   BATTERY_MANUL_TEST,
     "�Զ����Ե��",//   BATTERY_AUTO_TEST, // Test mode updated, default is auto
     "��ص�ѹ����",//   BATTERY_VOL_LOW,
     "���õ��",//   BATTERY_RESET,
     "����쳣",//   BATTERY_FAIL_REPLACE,
	
	"������բ", // Trip from Comm
	"������բ", // Close from Comm
	"I/O ��բ", // Trip from IO
	"I/O ��բ", // Trip from IO
	"A ���ѹ����", // A-Ph Bus Vol Pre
	"B ���ѹ����", // B-Ph Bus Vol Pre
	"C ���ѹ����", // C-Ph Bus Vol Pre
}
};								 

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
		"����", //language_name
		
		// MainMenu
		"��������",   // 1
		"ʵʱ���",  // 2
		"�¼���¼",  // 3
		"״̬����",  // 4
		"��������", //5
		"״̬���", // 6
		"��ع���", // 7
		"��ȫ����", //  8
		"�汾��Ϣ", // 9
		

		//alarm menu
		"�ڴ�ʧ��.......%d", //  1
		"����ʧ��.......%d", //  2	
		"��բ����.......%d", // 3
		"��բ����.......%d", //  4		
		"�������.......%d", //  5
		"���豨��", // 6
		"����״̬", // 7
		"���豨��״̬", // 8
		"��ر���.......%d",  //9
		"��������.......%d", // 10
		"��Դ����.......%d", // 11

		//counter menu
		"��բ����", // 1
		"�����բ��", // 2
		"�����բ����", // 3
		
		"�����բ: %d", // 4
		"������բ: %d", // 5
		"���÷�բ��", // 6


		//battery menu
		"��ѹ:", // 1
		"����:", // 2
		"��ز���", // 3
		"����ȷ�Ͻ������",   // 4
		" ������...",         // 5
		"��ѹ:", // 6
		"����:", // 7
		"�������", // 8
		

		//clock menu
		"ʱ��", // 1
		"UTC ʱ��", // 2
		"����ѡ��", // 3
		"���ڸ�ʽ", // 4
		"ʱ���ʽ", // 5
		"12Сʱ", // 6
		"24Сʱ", // 7
		"�£��գ���", // 8
		"�꣭�£���", // 9

		//nameplate menu
		"����汾", // 1
		"Ӳ���汾", // 2
		"��������汾", // 3


		//metering menu
		"ʵʱ����", // 1
		"ʵʱ����", // 2
		"�й�����", // 3
		"�޹�����", // 4
		"���ڹ���", // 5
		"��������", // 6
		"��Ȳ���", // 7
		"�й����", // 8
		"�޹����", // 9
		"�������", // 10
		"Ƶ��",      // 11

		//record menu
		"<û�м�¼>", // 1


		//active menu		
		"��ֵ��ѡ��", // 1
		"��ֵ��༭", // 2
		"��ֵ�� 1", // 3
		"��ֵ�� 2",  // 4
		"��ֵ�� 3",  // 5
		"��ֵ�� 4",  // 6


		

		//overcurrent menu
		"��ֵ����", // 1
		"�ٶ�Ͷ��",   // 2
		"�ٶ�����ֵ",   // 3
		"��ʱ�ٶ�Ͷ��",   // 4
		"��ʱ�ٶ�����ֵ",   // 5
		"��ʱ�ٶ���ʱ",   // 6
		"����Ͷ��",   // 7
		"��������ֵ",   // 8
		"������ʱ",   // 9
		"�ٶϱ���", // 10
		"��ʱ�ٶϱ���", // 11
		"��������", // 12
		


		//oper menu		
		

		//SGF menu
		"���򱣻�", // 1
		"����Ͷ��", // 2
		"��������ֵ", // 3
		"������ʱ", // 4
		"���򱣻���ʽ", // 5
		"����", // 6
		"��բ", // 7


		//reclose menu
		"�غ�բ", // 1
		"�غϴ���",  // 2
		"��һ���غϼ��",  // 3
		"�ڶ����غϼ��",  // 4
		"�������غϼ��",  // 5
		"�غ�Ͷ��", // 6
		"�����Ͷ��", // 7

				
		//HLT menu
		"��ֹ��բ", // 1
		"��ֹ��բ����", // 2
		"��ֹ��բ��ʱ", // 3

		//system menu
		"ϵͳ����", // 1
		"��������",// 2
		"ʱ�ӹ���",// 3
		"Ƶ��", // 4	
		"CT���", // 5		
		"PT���", // 6
		"������λ", // 7
		"50Hz", // 8
		"60Hz", // 9
		"300/5", //10
		"600/5", // 11
		"1000/1", // 12
			
		//clpu menu
		"������", // 1
		"������Ͷ��",// 2			
		"��ֵ����",// 3
		"�غϴ���", // 4
		"�غϼ��", // 5
		"��Чʱ��", // 6
		
		"�ٶ�Ͷ��",   // 7
		"�ٶ�����ֵ",   // 8
		"��ʱ�ٶ�Ͷ��",   // 9
		"��ʱ�ٶ�����ֵ",   // 10
		"��ʱ�ٶ���ʱ",   // 11
		"����Ͷ��",   // 12
		"��������ֵ",   // 13
		"������ʱ",   // 14	
		"�ٶϱ���", // 15
		"��ʱ�ٶϱ���", // 16
		"��������", // 17
		"�����", // 18
		"�����Ͷ��", // 19
		"�غ�Ͷ��",   // 20
		
		//security menu		
		"����������",// 1
		"ͨ����֤",// 2
		"�������",// 3
		"   <�鿴: ����>",  // 4
		"< û��Ȩ�� >", // 5
		"����ȷ��", // 6
		"< ȷ�� >: ����", // 7
		"< ���� >: �˳�", // 8
		"<   \x1a  >: ȡ��", // 9
		"��ȫ��֤", // 10
		"����鿴", // 11
		"�����޸�", // 12
		"������������", // 13
		"���ٴ�����������", // 14
		"�˵�����", // 15
		"���벻һ��", // 16
		"���볤�Ȳ���", // 17
		

		//diagnostic menu
		"ָʾ�Ʋ���", // 1
		" ������...", // 2
		"Һ��������", // 3

		//confirm menu
		"< ȷ�� >: ��",  // 1
		"< ���� >: ��",  // 2
		"ȷ�Ϸ�բ?",  // 3
		"ȷ�Ϻ�բ?", // 4
		"ȷ�ϸı�HLT?", // 5
		"ȷ������?",  // 6
		"ȷ������Զ��?", // 7
		"ȷ�������͵�?", // 8
		
		//resettime menu
		"��λʱ��", // 1
				
		//special	 menu	
		"", // 1
		"< ��Ч >", // 2
		"< �ɹ� >", // 3
		"< ʧ�� >",// 4
		"�˳�", // 5
		"Ͷ��", // 6
		"��", // 7
		"��", // 8
		"�Զ�", // 9
		"�ֶ�", // 10
		"  < ����"" \x18""\x19"" >", // 11
		"��", // 12
		"��", // 13
		"< �༭ >",  // 14
		"< ȷ�� >",  // 15
		"< ���� >",  // 16
		"  < ����"" \x19"" >", // 17
		"  < ����"" \x18"" >", // 18
		"< ����"" \x18""\x19"" >", // 19
		"< ȷ�� >  ��", // 20
		"< ���� >  ��", // 21

		
		//У׼
#ifdef _CALIBRATION_		
		"У׼",  // 1
		"���",  // 2
		"����",  // 3
		"��ѹУ׼",  // 4
		"����У׼",  // 5
		"���У׼",  // 6
		"��λ����",  // 7
		"A ��У׼",  // 8
		"B ��У׼",  // 9
		"C ��У׼",  // 10
		"G ��У׼",  // 11
		"ȫ��У׼",      // 12
		"��ص�ѹУ׼",      // 13
		"��ص���У׼",      // 14
		"��������",       // 15
		"��ѹ����",       // 16
		"��ز���",       // 17
		
		"�������ò���",   // 18
		"����У׼����",      // 19
		"У׼ʹ��",       // 20
		"��λ01",        // 21 //0.5
	    "��λ02",        // 22 //5
		"У׼��01",      // 23
		"У׼��02",      
		"У׼��03",      
		"У׼��04",      
		"У׼��05",      
		"У׼��06",      
		"У׼��07",      
		"У׼��08",      
		"У׼��09",      
		"У׼��10",      
		"У׼��11",      
		"У׼��12",      
		"У׼��13",      
		"У׼��14",      
		"У׼��15",      
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
////////////////////alarm log&status//////////////////////
const MenuItem_t reset_alarm_menu[] =
{
{(MenuItem_t *)alarm_menu,71,TitleLine4,"",HMI_ResetAlarm_Func,0,NULL},//leaf
MENU_END
};
const MenuItem_t alarm_status_menu[] =
{
{(MenuItem_t *)alarm_menu,15,TitleLine4,"",HMI_Show_Alarm_Func,0,NULL},//leaf
MENU_END
};
const MenuItem_t alarm_menu[] =
{
{(MenuItem_t *)main_menu,70,TitleLine1,NULL,NULL,0,(MenuItem_t *)alarm_status_menu},
{(MenuItem_t *)main_menu,69,TitleLine1,NULL,NULL,0,(MenuItem_t *)reset_alarm_menu},
MENU_END
};


const MenuItem_t target_menu[]=
{
//{(MenuItem_t *)main_menu,Reset_Target_After_Rec_TM,TitleLine2,NULL,NULL,0,(MenuItem_t *)reset_target_after_rec_tm_menu},
{(MenuItem_t *)main_menu,Reset_Target,TitleLine1,NULL,NULL,0,(MenuItem_t *)reset_target_menu},
MENU_END
};

const MenuItem_t reset_target_menu[]=
{
{(MenuItem_t *)target_menu,Reset_Target,TitleLine4,"",HMI_ResetTarget_Func,0,NULL},//leaf
MENU_END
};

////////////////////counter//////////////////////
const MenuItem_t trip_cntr_menu[] =
{
{(MenuItem_t *)counter_menu,15,TitleLine4,"",HMI_Show_Counter_Func,0,NULL},//leaf
MENU_END
};

const MenuItem_t reset_trip_cntr_menu[] =
{
{(MenuItem_t *)counter_menu,34,TitleLine4,"",HMI_ResetCounter_Func,0,NULL},//leaf
MENU_END
};

const MenuItem_t set_trip_cntr_menu[] =
{
{(MenuItem_t *)counter_menu,34,TitleLine4,"",HMI_SetCounterDeadband_Func,0,NULL},//leaf
MENU_END
};

const MenuItem_t counter_menu[] =
{
{(MenuItem_t *)main_menu,35,TitleLine1,NULL,NULL,0,(MenuItem_t *)trip_cntr_menu},
{(MenuItem_t *)main_menu,82,TitleLine1,NULL,NULL,0,(MenuItem_t *)reset_trip_cntr_menu},
{(MenuItem_t *)main_menu,MENU_ENERGY_INDEX+11,TitleLine1,NULL,NULL,0,(MenuItem_t *)set_trip_cntr_menu},

MENU_END
};
////////////////////battery//////////////////////
const MenuItem_t battery_menu[] =
{
{(MenuItem_t *)main_menu,15,TitleLine4,"",HMI_Battery_Func,0,NULL},//leaf
MENU_END
};

////////////////////clock//////////////////////
const MenuItem_t clock_menu[] =
{
{(MenuItem_t *)main_menu,41,TitleLine4,"",HMI_Clock_Func,0,NULL},//leaf
{(MenuItem_t *)main_menu,42,TitleLine4,"",HMI_TimeZone_Func,0,NULL},//leaf
{(MenuItem_t *)main_menu,44,TitleLine4,"",HMI_DateFormat_Func,0,NULL},//leaf
{(MenuItem_t *)main_menu,45,TitleLine4,"",HMI_TimeFormat_Func,0,NULL},//leaf
MENU_END
};

////////////////////namepalte data//////////////////////
const MenuItem_t nameplate_menu[] =
{
{(MenuItem_t *)main_menu,46,TitleLine4,"%d.%02d",HMI_Show_Ver_Func,0,NULL},//leaf
{(MenuItem_t *)main_menu,49,TitleLine4,"%d.%02d",HMI_Show_Ver_Func,1,NULL},//leaf
{(MenuItem_t *)main_menu,48,TitleLine4,"%d.%02d",HMI_Show_Ver_Func,2,NULL},//leaf
{(MenuItem_t *)main_menu,51,TitleLine4,"%d.%02d",HMI_Show_Ver_Func,3,NULL},//leaf
MENU_END
};

////////////////////system config//////////////////////
const MenuItem_t sys_config_menu[] =
{
{(MenuItem_t *)modview_Setting,91,TitleLine4,"",HMI_StrPara_Func,OFFSET(active_profile.ppSysConfig.Frequency)|((MENU_ENERGY_INDEX+7)<<16),NULL},//leaf
{(MenuItem_t *)modview_Setting,167,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppSysConfig.CTRatio),NULL},//leaf
{(MenuItem_t *)modview_Setting,205,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.ppSysConfig.PTConn[0]),NULL},//leaf
{(MenuItem_t *)modview_Setting,206,TitleLine4,"%.2f",HMI_FloatPara_Func,OFFSET(active_profile.ppSysConfig.PTRatio[0]),NULL},//leaf
{(MenuItem_t *)modview_Setting,207,TitleLine4,"Enable Disabled",HMI_StrPara_Func,OFFSET(active_profile.ppSysConfig.PhomPh)|(194<<16),NULL},//leaf
{(MenuItem_t *)modview_Setting,208,TitleLine4,"%d",HMI_StrPara_Func,OFFSET(active_profile.ppSysConfig.DeltaPots)|(217<<16),NULL},//leaf
{(MenuItem_t *)modview_Setting,322,TitleLine4,"",HMI_StrPara_Func,OFFSET(active_profile.ppSysConfig.BushingRotation)|(324<<16),NULL},
{(MenuItem_t *)modview_Setting,323,TitleLine4,"3",HMI_MultStrPara_Func,OFFSET(active_profile.ppSysConfig.ChannalChoose)|(326<<16)|(1ul<<31),NULL},
MENU_END
};

const MenuItem_t lamptest_menu[]=
{
{(MenuItem_t *)diagnostics_menu,15,TitleLine4,"",HMI_LampTest_Func,0,NULL},
MENU_END
};

const MenuItem_t lcdtest_menu[]=
{
{(MenuItem_t *)diagnostics_menu,15,TitleLine4,"",HMI_LcdTest_Func,0,NULL},
MENU_END
};


const MenuItem_t diagnostics_menu[]=
{
{(MenuItem_t *)main_menu,309,TitleLine1,NULL,NULL,0,(MenuItem_t *)lamptest_menu},
{(MenuItem_t *)main_menu,MENU_ENERGY_INDEX+9,TitleLine1,NULL,NULL,0,(MenuItem_t *)lcdtest_menu},
MENU_END
};

////////////////////communication///////////////////
const MenuItem_t commnication_menu[]=
{
//{(MenuItem_t *)modview_Setting,COMM_PORT1,TitleLine1,NULL,NULL,0,(MenuItem_t *)COMPort1_menu},
//{(MenuItem_t *)modview_Setting,COMM_PORT2,TitleLine1,NULL,NULL,0,(MenuItem_t *)COMPort2_menu},
#if IEC104_COM
{(MenuItem_t *)modview_Setting,NETWORK_CONFIG,TitleLine1,NULL,NULL,0,(MenuItem_t *)port1_network_menu},
{(MenuItem_t *)modview_Setting,IEC_104_CONFIG,TitleLine1,NULL,NULL,0,(MenuItem_t *)port1_iec_104_menu},
#endif
#if IEC_COM
{(MenuItem_t *)modview_Setting,COMM_PORT1,TitleLine1,NULL,NULL,0,(MenuItem_t *)COMPort1_menu},

#endif
MENU_END
};

const MenuItem_t COMPort1_menu[]=
{
#if IEC_COM
{(MenuItem_t *)commnication_menu,COMM_PORT2_CONFIG,TitleLine1,NULL,NULL,0,(MenuItem_t *)port1_config_menu},
{(MenuItem_t *)commnication_menu,DNP3_SERIAL_CONFIG,TitleLine1,NULL,NULL,0,(MenuItem_t *)port1_dnp_Serial_menu},
//{(MenuItem_t *)commnication_menu,DNP3_NETWORK_CONFIG,TitleLine1,NULL,NULL,0,(MenuItem_t *)port1_dnp_network_menu},
{(MenuItem_t *)commnication_menu,IEC_101_CONFIG,TitleLine1,NULL,NULL,0,(MenuItem_t *)port1_iec_101_menu},
#endif
MENU_END
};
/*
const MenuItem_t COMPort2_menu[]=
{
{(MenuItem_t *)commnication_menu,COMM_PORT2_CONFIG,TitleLine1,NULL,NULL,0,(MenuItem_t *)port2_config_menu},
//{(MenuItem_t *)commnication_menu,NETWORK_CONFIG,TitleLine1,NULL,NULL,0,(MenuItem_t *)port2_network_menu},
{(MenuItem_t *)commnication_menu,DNP3_SERIAL_CONFIG,TitleLine1,NULL,NULL,0,(MenuItem_t *)port2_dnp_Serial_menu},
//{(MenuItem_t *)commnication_menu,DNP3_NETWORK_CONFIG,TitleLine1,NULL,NULL,0,(MenuItem_t *)port2_dnp_network_menu},
{(MenuItem_t *)commnication_menu,IEC_101_CONFIG,TitleLine1,NULL,NULL,0,(MenuItem_t *)port2_iec_101_menu},
//{(MenuItem_t *)commnication_menu,IEC_104_CONFIG,TitleLine1,NULL,NULL,0,(MenuItem_t *)port2_iec_104_menu},
MENU_END
};
*/

//**********************************port1*****************************************************************/

const MenuItem_t port1_config_menu[]=
{
{(MenuItem_t *)COMPort1_menu,COMM_PORT_ASSIGN,    TitleLine4,"2",HMI_MultStrPara_Func,OFFSET(active_profile.communicationConfig.portConfig.comAssignment)|(PORT_ASSIGN_SERIAL<<16),NULL},
{(MenuItem_t *)COMPort1_menu,COMM_PROTOCOL_ASSIGN,TitleLine4,"3",HMI_MultStrPara_Func,OFFSET(active_profile.communicationConfig.portConfig.protocolAssignment)|(PROTOCOL_ASSIGN_DNP3<<16)|(1ul<<31),NULL},
MENU_END
};



const MenuItem_t port1_network_menu[]=
{
{(MenuItem_t *)commnication_menu,NW_IP_ADDR,    TitleLine4,"IPConfig",IPconfig_handle,OFFSET(active_profile.communicationConfig.networkConfig.ipAddress),NULL},
{(MenuItem_t *)commnication_menu,NW_SUBNET_MASK,TitleLine4,"IPConfig",IPconfig_handle,OFFSET(active_profile.communicationConfig.networkConfig.subNetMask),NULL},
{(MenuItem_t *)commnication_menu,NW_GATEWAY,    TitleLine4,"IPConfig",IPconfig_handle,OFFSET(active_profile.communicationConfig.networkConfig.gateWay),NULL},
{(MenuItem_t *)commnication_menu,NW_MAC_ADDR,   TitleLine4,"",show_MAC_Addr,1ul<<31,NULL},
MENU_END
};



const MenuItem_t port1_dnp_Serial_menu[]=
{
{(MenuItem_t *)COMPort1_menu,DNP3S_RBE_MASTER,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.dnpSerialConfig.dnpRBEMaster),NULL},
{(MenuItem_t *)COMPort1_menu,DNP3S_IDE_SLAVE, TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.dnpSerialConfig.dnpIEDSlave),NULL},
{(MenuItem_t *)COMPort1_menu,DNP3S_BAUD_RATE, TitleLine4,"6", HMI_MultStrPara_Func,OFFSET(active_profile.communicationConfig.dnpSerialConfig.dnpBaudrate)|(COM_B2400<<16)|(1ul<<31),NULL},
MENU_END
};


/*
const MenuItem_t port1_dnp_network_menu[]=
{
{(MenuItem_t *)COMPort1_menu,DNP3N_PROTOCOL_PORT_TYPE,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[0].dnpNetworkConfig.dnpPortType),NULL},
{(MenuItem_t *)COMPort1_menu,DNP3N_ACCEPT_F_ANY_IP,   TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[0].dnpNetworkConfig.dnpAcceptFromAnyIPEnb),NULL},
{(MenuItem_t *)COMPort1_menu,DNP3N_ACCEPT_F_IP_ADDR,  TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[0].dnpNetworkConfig.dnpAcceptFromIP),NULL},
{(MenuItem_t *)COMPort1_menu,DNP3N_DEST_PORT_MUM,     TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[0].dnpNetworkConfig.dnpDestPortNum),NULL},
{(MenuItem_t *)COMPort1_menu,DNP3N_LISTEN_PORT_NUM,   TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[0].dnpNetworkConfig.dnpListingPortNum),NULL},
{(MenuItem_t *)COMPort1_menu,DNP3N_USE_PORT_REQ,      TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[0].dnpNetworkConfig.dnpUsePortFromReq),NULL},
{(MenuItem_t *)COMPort1_menu,DNP3N_KEEP_ALIVE_TIMEOUT,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[0].dnpNetworkConfig.dnpKeepAliveTimeout),NULL},
{(MenuItem_t *)COMPort1_menu,DNP3N_KEEP_ALIVE_RETRIY, TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[0].dnpNetworkConfig.dnpKeepAliveRetries)|(1ul<<31),NULL},
MENU_END
};
*/



const MenuItem_t port1_iec_101_menu[]=
{
{(MenuItem_t *)COMPort1_menu,IEC101_LINK_ADDR,          TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec101Config.linkAddr),NULL},
{(MenuItem_t *)COMPort1_menu,IEC101_COMM_ADDR,          TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec101Config.CommonAddr),NULL},
{(MenuItem_t *)COMPort1_menu,IEC101_LINK_ADDR_SIZE,     TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec101Config.linkAddrSize),NULL},
{(MenuItem_t *)COMPort1_menu,IEC101_COMM_ADDR_SIZE,     TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec101Config.commonAddrSize),NULL},
{(MenuItem_t *)COMPort1_menu,IEC101_OBJ_ADDR_SIZE,      TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec101Config.objectAddrSize),NULL},
{(MenuItem_t *)COMPort1_menu,IEC101_CAUSE_TRANS_SIZE,   TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec101Config.causeofTransmitSize),NULL},
{(MenuItem_t *)COMPort1_menu,IEC101_SINGLE_CMD_OP_MODE, TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec101Config.singeCommandOpMode),NULL},
{(MenuItem_t *)COMPort1_menu,IEC101_SELECT_BF_EXEC_TIME,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec101Config.selectTimeout)|(1ul<<31),NULL},
MENU_END
};


const MenuItem_t port1_iec_104_menu[]=
{
{(MenuItem_t *)commnication_menu,IEC104_SERVER_LISTEN_PORT, TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec104Config.serverListingPort),NULL},
{(MenuItem_t *)commnication_menu,IEC104_COMM_ADDR,          TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec104Config.CommonAddr),NULL},
//{(MenuItem_t *)COMPort1_menu,IEC104_SINGLE_CMD_OP_TIME, TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[0].iec104Config.singeCommandOpMode),NULL},
{(MenuItem_t *)commnication_menu,IEC104_SELECT_BF_EXEC_TIME,TitleLine4,"%d ms",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec104Config.selectTimeout),NULL},
{(MenuItem_t *)commnication_menu,IEC104_RESPONSE_TIMEOUT,   TitleLine4,"%d s",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec104Config.responseTimeout),NULL},
{(MenuItem_t *)commnication_menu,IEC104_ACK_NO_DATA,        TitleLine4,"%d s",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec104Config.ackNoDataTimeout),NULL},
{(MenuItem_t *)commnication_menu,IEC104_IDLE_TEST,          TitleLine4,"%d s",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec104Config.idleTestTime),NULL},
{(MenuItem_t *)commnication_menu,IEC104_MAX_TRANS,          TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec104Config.maxTransmit),NULL},
{(MenuItem_t *)commnication_menu,IEC104_MAX_RECEIVE,        TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig.iec104Config.maxReceive)|(1ul<<31),NULL},
MENU_END
};

//**********************************port2*****************************************************************/
/*
const MenuItem_t port2_config_menu[]=
{
{(MenuItem_t *)COMPort2_menu,COMM_PORT_ASSIGN,    TitleLine4,"2",HMI_MultStrPara_Func,OFFSET(active_profile.communicationConfig[1].portConfig.comAssignment)|(PORT_ASSIGN_SERIAL<<16),NULL},
{(MenuItem_t *)COMPort2_menu,COMM_PROTOCOL_ASSIGN,TitleLine4,"2",HMI_MultStrPara_Func,OFFSET(active_profile.communicationConfig[1].portConfig.protocolAssignment)|(PROTOCOL_ASSIGN_DNP3<<16)|(1ul<<31),NULL},
MENU_END
};
*/
/*
const MenuItem_t port2_network_menu[]=
{
{(MenuItem_t *)COMPort2_menu,NW_IP_ADDR,    TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].networkConfig.ipAddress),NULL},
{(MenuItem_t *)COMPort2_menu,NW_SUBNET_MASK,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].networkConfig.subNetMask),NULL},
{(MenuItem_t *)COMPort2_menu,NW_GATEWAY,    TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].networkConfig.gateWay),NULL},
{(MenuItem_t *)COMPort2_menu,NW_MAC_ADDR,   TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].networkConfig.MacAddress)|(1ul<<31),NULL},
MENU_END
};
*/
/*
const MenuItem_t port2_dnp_Serial_menu[]=
{
{(MenuItem_t *)COMPort2_menu,DNP3S_RBE_MASTER,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].dnpSerialConfig.dnpRBEMaster),NULL},
{(MenuItem_t *)COMPort2_menu,DNP3S_IDE_SLAVE, TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].dnpSerialConfig.dnpIEDSlave),NULL},
{(MenuItem_t *)COMPort2_menu,DNP3S_BAUD_RATE, TitleLine4,"6", HMI_MultStrPara_Func,OFFSET(active_profile.communicationConfig[1].dnpSerialConfig.dnpBaudrate)|(COM_B2400<<16)|(1ul<<31),NULL},
MENU_END
};
*/
/*
const MenuItem_t port2_dnp_network_menu[]=
{
{(MenuItem_t *)COMPort2_menu,DNP3N_PROTOCOL_PORT_TYPE,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].dnpNetworkConfig.dnpPortType),NULL},
{(MenuItem_t *)COMPort2_menu,DNP3N_ACCEPT_F_ANY_IP,   TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].dnpNetworkConfig.dnpAcceptFromAnyIPEnb),NULL},
{(MenuItem_t *)COMPort2_menu,DNP3N_ACCEPT_F_IP_ADDR,  TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].dnpNetworkConfig.dnpAcceptFromIP),NULL},
{(MenuItem_t *)COMPort2_menu,DNP3N_DEST_PORT_MUM,     TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].dnpNetworkConfig.dnpDestPortNum),NULL},
{(MenuItem_t *)COMPort2_menu,DNP3N_LISTEN_PORT_NUM,   TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].dnpNetworkConfig.dnpListingPortNum),NULL},
{(MenuItem_t *)COMPort2_menu,DNP3N_USE_PORT_REQ,      TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].dnpNetworkConfig.dnpUsePortFromReq),NULL},
{(MenuItem_t *)COMPort2_menu,DNP3N_KEEP_ALIVE_TIMEOUT,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].dnpNetworkConfig.dnpKeepAliveTimeout),NULL},
{(MenuItem_t *)COMPort2_menu,DNP3N_KEEP_ALIVE_RETRIY, TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].dnpNetworkConfig.dnpKeepAliveRetries)|(1ul<<31),NULL},
MENU_END
};
*/
/*
const MenuItem_t port2_iec_101_menu[]=
{
{(MenuItem_t *)COMPort2_menu,IEC101_LINK_ADDR,          TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec101Config.linkAddr),NULL},
{(MenuItem_t *)COMPort2_menu,IEC101_COMM_ADDR,          TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec101Config.CommonAddr),NULL},
{(MenuItem_t *)COMPort2_menu,IEC101_LINK_ADDR_SIZE,     TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec101Config.linkAddrSize),NULL},
{(MenuItem_t *)COMPort2_menu,IEC101_COMM_ADDR_SIZE,     TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec101Config.commonAddrSize),NULL},
{(MenuItem_t *)COMPort2_menu,IEC101_OBJ_ADDR_SIZE,      TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec101Config.objectAddrSize),NULL},
{(MenuItem_t *)COMPort2_menu,IEC101_CAUSE_TRANS_SIZE,   TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec101Config.causeofTransmitSize),NULL},
{(MenuItem_t *)COMPort2_menu,IEC101_SINGLE_CMD_OP_MODE, TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec101Config.singeCommandOpMode),NULL},
{(MenuItem_t *)COMPort2_menu,IEC101_SELECT_BF_EXEC_TIME,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec101Config.selectTimeout)|(1ul<<31),NULL},
MENU_END
};
*/
/*
const MenuItem_t port2_iec_104_menu[]=
{
{(MenuItem_t *)COMPort2_menu,IEC104_SERVER_LISTEN_PORT, TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec104Config.serverListingPort),NULL},
{(MenuItem_t *)COMPort2_menu,IEC104_COMM_ADDR,          TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec104Config.CommonAddr),NULL},
{(MenuItem_t *)COMPort2_menu,IEC104_SINGLE_CMD_OP_TIME, TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec104Config.singeCommandOpMode),NULL},
{(MenuItem_t *)COMPort2_menu,IEC104_SELECT_BF_EXEC_TIME,TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec104Config.selectTimeout),NULL},
{(MenuItem_t *)COMPort2_menu,IEC104_RESPONSE_TIMEOUT,   TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec104Config.responseTimeout),NULL},
{(MenuItem_t *)COMPort2_menu,IEC104_ACK_NO_DATA,        TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec104Config.ackNoDataTimeout),NULL},
{(MenuItem_t *)COMPort2_menu,IEC104_IDLE_TEST,          TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec104Config.idleTestTime),NULL},
{(MenuItem_t *)COMPort2_menu,IEC104_MAX_TRANS,          TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec104Config.maxTransmit),NULL},
{(MenuItem_t *)COMPort2_menu,IEC104_MAX_RECEIVE,        TitleLine4,"%d",HMI_IntPara_Func,OFFSET(active_profile.communicationConfig[1].iec104Config.maxReceive)|(1ul<<31),NULL},
MENU_END
};
*/

/////////////////////////Calibration menu//////////////////////////////////////////////

#if _CALIBRATION_

const MenuItem_t vol_gear_set_menu[] = 
{
{(MenuItem_t *)voltage_cal_menu,314,TitleLine1,"%d",gear_set_func,OFFSET(CaliData.CaliGear),NULL},
MENU_END
};

const MenuItem_t vol_phaseA_cal_menu[] = 
{
{(MenuItem_t *)voltage_cal_menu,15,TitleLine1,"%.1f V",voltage_cal_func,0,NULL},
MENU_END
};

const MenuItem_t vol_phaseB_cal_menu[] = 
{
{(MenuItem_t *)voltage_cal_menu,15,TitleLine1,"%.1f V",voltage_cal_func,1,NULL},
MENU_END
};

const MenuItem_t vol_phaseC_cal_menu[] = 
{
{(MenuItem_t *)voltage_cal_menu,15,TitleLine1,"%.1f V",voltage_cal_func,2,NULL},
MENU_END
};

const MenuItem_t vol_Allphase_cal_menu[] = 
{
{(MenuItem_t *)voltage_cal_menu,15,TitleLine1,"%.1f V",voltage_cal_func,3,NULL},
MENU_END
};


const MenuItem_t voltage_cal_menu[] = 
{
{(MenuItem_t *)calibration_menu,314,TitleLine1,NULL,NULL,0,(MenuItem_t *)vol_gear_set_menu},
{(MenuItem_t *)calibration_menu,315,TitleLine1,NULL,NULL,0,(MenuItem_t *)vol_phaseA_cal_menu},
{(MenuItem_t *)calibration_menu,316,TitleLine1,NULL,NULL,0,(MenuItem_t *)vol_phaseB_cal_menu},
{(MenuItem_t *)calibration_menu,317,TitleLine1,NULL,NULL,0,(MenuItem_t *)vol_phaseC_cal_menu},
{(MenuItem_t *)calibration_menu,319,TitleLine1,NULL,NULL,0,(MenuItem_t *)vol_Allphase_cal_menu},
MENU_END
};


const MenuItem_t cur_gear_set_menu[] = 
{
{(MenuItem_t *)current_cal_menu,314,TitleLine1,"%d",gear_set_func,OFFSET(CaliData.CaliGear),NULL},
MENU_END
};

const MenuItem_t cur_phaseA_cal_menu[] = 
{
{(MenuItem_t *)current_cal_menu,15,TitleLine1,"%.2f A",current_cal_func,0,NULL},
MENU_END
};

const MenuItem_t cur_phaseB_cal_menu[] = 
{
{(MenuItem_t *)current_cal_menu,15,TitleLine1,"%.2f A",current_cal_func,1,NULL},
MENU_END
};

const MenuItem_t cur_phaseC_cal_menu[] = 
{
{(MenuItem_t *)current_cal_menu,15,TitleLine1,"%.2f A",current_cal_func,2,NULL},
MENU_END
};

const MenuItem_t cur_phaseG_cal_menu[] = 
{
{(MenuItem_t *)current_cal_menu,15,TitleLine1,"%.2f A",current_cal_func,3,NULL},
MENU_END
};

const MenuItem_t cur_Allphase_cal_menu[] = 
{
{(MenuItem_t *)current_cal_menu,15,TitleLine1,"%.2f A",current_cal_func,4,NULL},
MENU_END
};

const MenuItem_t current_cal_menu[] = 
{
{(MenuItem_t *)calibration_menu,314,TitleLine1,NULL,NULL,0,(MenuItem_t *)cur_gear_set_menu},
{(MenuItem_t *)calibration_menu,315,TitleLine1,NULL,NULL,0,(MenuItem_t *)cur_phaseA_cal_menu},
{(MenuItem_t *)calibration_menu,316,TitleLine1,NULL,NULL,0,(MenuItem_t *)cur_phaseB_cal_menu},
{(MenuItem_t *)calibration_menu,317,TitleLine1,NULL,NULL,0,(MenuItem_t *)cur_phaseC_cal_menu},
{(MenuItem_t *)calibration_menu,318,TitleLine1,NULL,NULL,0,(MenuItem_t *)cur_phaseG_cal_menu},
{(MenuItem_t *)calibration_menu,319,TitleLine1,NULL,NULL,0,(MenuItem_t *)cur_Allphase_cal_menu},
MENU_END
};

const MenuItem_t bat_vol_cal_menu[] = 
{
{(MenuItem_t *)battery_cal_menu,15,TitleLine1,"%.1f V",battery_cal_func,0,NULL},
MENU_END
};

const MenuItem_t bat_cur_cal_menu[] = 
{
{(MenuItem_t *)battery_cal_menu,15,TitleLine1,"%.2f A",battery_cal_func,1,NULL},
MENU_END
};

const MenuItem_t battery_cal_menu[] = 
{
{(MenuItem_t *)calibration_menu,320,TitleLine1,NULL,NULL,0,(MenuItem_t *)bat_vol_cal_menu},
{(MenuItem_t *)calibration_menu,321,TitleLine1,NULL,NULL,0,(MenuItem_t *)bat_cur_cal_menu},
MENU_END
};

const MenuItem_t voltage_metering_menu[] = 
{
{(MenuItem_t *)cal_metering_menu,15,TitleLine1,"%.1f",show_cal_metering,0,NULL},
MENU_END
};

const MenuItem_t current_metering_menu[] = 
{
{(MenuItem_t *)cal_metering_menu,15,TitleLine1,"%.1f",show_cal_metering,1,NULL},
MENU_END
};

const MenuItem_t battery_metering_menu[] = 
{
{(MenuItem_t *)cal_metering_menu,15,TitleLine1,"%.1f",show_cal_metering,2,NULL},
MENU_END
};

const MenuItem_t cali_en_menu[] = 
{
{(MenuItem_t *)cal_metering_menu,328,TitleLine1," ",cali_en_func,0,NULL},
MENU_END
};

const MenuItem_t metering_gear_set_menu[] = 
{
{(MenuItem_t *)cal_metering_menu,314,TitleLine1,"%d",gear_set_func,OFFSET(CaliData.CaliGear),NULL},
MENU_END
};


const MenuItem_t calibration_menu[] = 
{
{(MenuItem_t *)main_cal_menu,311,TitleLine1,NULL,NULL,0,(MenuItem_t *)voltage_cal_menu},
{(MenuItem_t *)main_cal_menu,312,TitleLine1,NULL,NULL,0,(MenuItem_t *)current_cal_menu},
{(MenuItem_t *)main_cal_menu,313,TitleLine1,NULL,NULL,0,(MenuItem_t *)battery_cal_menu},
MENU_END
};

const MenuItem_t cal_metering_menu[] = 
{
{(MenuItem_t *)main_cal_menu,323,TitleLine1,NULL,NULL,0,(MenuItem_t *)voltage_metering_menu},
{(MenuItem_t *)main_cal_menu,322,TitleLine1,NULL,NULL,0,(MenuItem_t *)current_metering_menu},
{(MenuItem_t *)main_cal_menu,324,TitleLine1,NULL,NULL,0,(MenuItem_t *)battery_metering_menu},
{(MenuItem_t *)main_cal_menu,328,TitleLine1,NULL,NULL,0,(MenuItem_t *)cali_en_menu},
{(MenuItem_t *)main_cal_menu,314,TitleLine1,NULL,NULL,0,(MenuItem_t *)metering_gear_set_menu},
MENU_END
};

const MenuItem_t update_setting_menu[] = 
{
{(MenuItem_t *)update_menu,326,TitleLine1," ",update_setting_func,0,NULL},
MENU_END
};

const MenuItem_t update_cali_menu[] = 
{
{(MenuItem_t *)update_menu,327,TitleLine1," ",update_setting_func,1,NULL},
MENU_END
};


const MenuItem_t update_menu[] = 
{
{(MenuItem_t *)main_cal_menu,326,TitleLine1," ",NULL,0,(MenuItem_t *)update_setting_menu},
{(MenuItem_t *)main_cal_menu,327,TitleLine1," ",NULL,1,(MenuItem_t *)update_cali_menu},
MENU_END
};

const MenuItem_t keytest_menu[] = 
{
{(MenuItem_t *)main_cal_menu,365,TitleLine1," ",key_test_func,1,NULL},
MENU_END
};

const MenuItem_t main_cal_menu[] = 
{
{NULL,310,TitleLine1,NULL,NULL,0,(MenuItem_t *)calibration_menu},
{NULL,2,TitleLine1,NULL,NULL,0,(MenuItem_t *)cal_metering_menu},
{NULL,325,TitleLine1,NULL,NULL,0,(MenuItem_t *)update_menu},
{NULL,364,TitleLine1,NULL,NULL,0,(MenuItem_t *)keytest_menu},
MENU_END
};

#endif

