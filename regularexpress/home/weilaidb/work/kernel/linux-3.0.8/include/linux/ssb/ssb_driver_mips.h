#define LINUX_SSB_MIPSCORE_H_
struct ssb_device;
struct ssb_serial_port ;
struct ssb_mipscore ;
extern void ssb_mipscore_init(struct ssb_mipscore *mcore);
extern u32 ssb_cpu_clock(struct ssb_mipscore *mcore);
extern unsigned int ssb_mips_irq(struct ssb_device *dev);
struct ssb_mipscore ;
static inline
void ssb_mipscore_init(struct ssb_mipscore *mcore)
