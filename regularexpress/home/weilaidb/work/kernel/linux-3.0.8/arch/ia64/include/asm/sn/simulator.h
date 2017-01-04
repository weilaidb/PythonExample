#define _ASM_IA64_SN_SIMULATOR_H
#if defined(CONFIG_IA64_GENERIC) || defined(CONFIG_IA64_SGI_SN2) || defined(CONFIG_IA64_SGI_UV)
#define SNMAGIC 0xaeeeeeee8badbeefL
#define IS_MEDUSA()			()
#define SIMULATOR_SLEEP()		asm("nop.i 0x8beef")
#define IS_RUNNING_ON_SIMULATOR()	(sn_prom_type)
#define IS_RUNNING_ON_FAKE_PROM()	(sn_prom_type == 2)
extern int sn_prom_type;
#define IS_MEDUSA()			0
#define SIMULATOR_SLEEP()
#define IS_RUNNING_ON_SIMULATOR()	0
