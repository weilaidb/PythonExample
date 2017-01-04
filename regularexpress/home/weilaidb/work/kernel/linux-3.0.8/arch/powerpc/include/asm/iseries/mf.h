#define _ASM_POWERPC_ISERIES_MF_H
struct rtc_time;
typedef void (*MFCompleteHandler)(void *clientToken, int returnCode);
extern void mf_allocate_lp_events(HvLpIndex targetLp, HvLpEvent_Type type,
unsigned size, unsigned amount, MFCompleteHandler hdlr,
void *userToken);
extern void mf_deallocate_lp_events(HvLpIndex targetLp, HvLpEvent_Type type,
unsigned count, MFCompleteHandler hdlr, void *userToken);
extern void mf_power_off(void);
extern void mf_reboot(char *cmd);
extern void mf_display_src(u32 word);
extern void mf_display_progress(u16 value);
extern void mf_init(void);
