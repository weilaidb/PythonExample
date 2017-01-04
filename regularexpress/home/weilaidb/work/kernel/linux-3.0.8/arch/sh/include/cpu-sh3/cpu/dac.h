#define __ASM_CPU_SH3_DAC_H
#define DADR0	0xa40000a0
#define DADR1	0xa40000a2
#define DACR	0xa40000a4
#define DACR_DAOE1	0x80
#define DACR_DAOE0	0x40
#define DACR_DAE	0x20
static __inline__ void sh_dac_enable(int channel)
static __inline__ void sh_dac_disable(int channel)
static __inline__ void sh_dac_output(u8 value, int channel)
