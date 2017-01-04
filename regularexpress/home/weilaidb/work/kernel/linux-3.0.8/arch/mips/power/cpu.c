static u32 saved_status;
struct pt_regs saved_regs;
void save_processor_state(void)
void restore_processor_state(void)
int pfn_is_nosave(unsigned long pfn)
