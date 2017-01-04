#define __MACH_PRCMU_U5500_H
void db5500_prcmu_early_init(void);
int db5500_prcmu_abb_read(u8 slave, u8 reg, u8 *value, u8 size);
int db5500_prcmu_abb_write(u8 slave, u8 reg, u8 *value, u8 size);
static inline void db5500_prcmu_early_init(void)
static inline int db5500_prcmu_abb_read(u8 slave, u8 reg, u8 *value, u8 size)
static inline int db5500_prcmu_abb_write(u8 slave, u8 reg, u8 *value, u8 size)
static inline int db5500_prcmu_config_abb_event_readout(u32 abb_events)
