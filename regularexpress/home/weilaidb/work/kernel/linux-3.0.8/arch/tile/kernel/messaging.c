static DEFINE_PER_CPU(HV_MsgState, msg_state);
void __cpuinit init_messaging(void)
void hv_message_intr(struct pt_regs *regs, int intnum)
