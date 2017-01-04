#define _ASM_POWERPC_ISERIES_HV_CALL_SC_H
#define HvCallBase		0x8000000000000000ul
#define HvCallCc		0x8001000000000000ul
#define HvCallCfg		0x8002000000000000ul
#define HvCallEvent		0x8003000000000000ul
#define HvCallHpt		0x8004000000000000ul
#define HvCallPci		0x8005000000000000ul
#define HvCallSm		0x8007000000000000ul
#define HvCallXm		0x8009000000000000ul
extern u64 HvCall0(u64);
extern u64 HvCall1(u64, u64);
extern u64 HvCall2(u64, u64, u64);
extern u64 HvCall3(u64, u64, u64, u64);
extern u64 HvCall4(u64, u64, u64, u64, u64);
extern u64 HvCall5(u64, u64, u64, u64, u64, u64);
extern u64 HvCall6(u64, u64, u64, u64, u64, u64, u64);
extern u64 HvCall7(u64, u64, u64, u64, u64, u64, u64, u64);
extern u64 HvCall0Ret16(u64, void *);
extern u64 HvCall1Ret16(u64, void *, u64);
extern u64 HvCall2Ret16(u64, void *, u64, u64);
extern u64 HvCall3Ret16(u64, void *, u64, u64, u64);
extern u64 HvCall4Ret16(u64, void *, u64, u64, u64, u64);
extern u64 HvCall5Ret16(u64, void *, u64, u64, u64, u64, u64);
extern u64 HvCall6Ret16(u64, void *, u64, u64, u64, u64, u64, u64);
extern u64 HvCall7Ret16(u64, void *, u64, u64 ,u64 ,u64 ,u64 ,u64 ,u64);
