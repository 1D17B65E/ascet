package types;

type T_CANTCMLever is struct {
	T_Bitfield2 TCM_ParkLight;
	T_Bitfield2 TCM_ReverseLight;
	T_Bitfield2 TCM_NeutralLight;
	T_Bitfield2 TCM_DriveLight;
	T_Bitfield2 TCM_SportLight;
	T_Bitfield2 TCM_ManualLight;
	T_Bitfield2 TCM_ShiftLock;
	T_Bitfield2 TCM_BackLight;
	T_Bitfield8 TCM_TestData1;
	T_Bitfield8 TCM_TestData2;
	T_Bitfield4 TCM_TargetGear;
	T_Bitfield4 TCM_ActualGear;
	T_Bitfield8 TCM_Checksum;
	T_Bitfield4 TCM_Counter;
	boolean TCM_ChecksumOkay;
};