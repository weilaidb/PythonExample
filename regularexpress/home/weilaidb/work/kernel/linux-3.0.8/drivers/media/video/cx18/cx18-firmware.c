#define CX18_PROC_SOFT_RESET 		0xc70010
#define CX18_DDR_SOFT_RESET          	0xc70014
#define CX18_CLOCK_SELECT1           	0xc71000
#define CX18_CLOCK_SELECT2           	0xc71004
#define CX18_HALF_CLOCK_SELECT1      	0xc71008
#define CX18_HALF_CLOCK_SELECT2      	0xc7100C
#define CX18_CLOCK_POLARITY1         	0xc71010
#define CX18_CLOCK_POLARITY2         	0xc71014
#define CX18_ADD_DELAY_ENABLE1       	0xc71018
#define CX18_ADD_DELAY_ENABLE2       	0xc7101C
#define CX18_CLOCK_ENABLE1           	0xc71020
#define CX18_CLOCK_ENABLE2           	0xc71024
#define CX18_REG_BUS_TIMEOUT_EN      	0xc72024
#define CX18_FAST_CLOCK_PLL_INT      	0xc78000
#define CX18_FAST_CLOCK_PLL_FRAC     	0xc78004
#define CX18_FAST_CLOCK_PLL_POST     	0xc78008
#define CX18_FAST_CLOCK_PLL_PRESCALE 	0xc7800C
#define CX18_FAST_CLOCK_PLL_ADJUST_BANDWIDTH 0xc78010
#define CX18_SLOW_CLOCK_PLL_INT      	0xc78014
#define CX18_SLOW_CLOCK_PLL_FRAC     	0xc78018
#define CX18_SLOW_CLOCK_PLL_POST     	0xc7801C
#define CX18_MPEG_CLOCK_PLL_INT		0xc78040
#define CX18_MPEG_CLOCK_PLL_FRAC	0xc78044
#define CX18_MPEG_CLOCK_PLL_POST	0xc78048
#define CX18_PLL_POWER_DOWN          	0xc78088
#define CX18_SW1_INT_STATUS             0xc73104
#define CX18_SW1_INT_ENABLE_PCI         0xc7311C
#define CX18_SW2_INT_SET                0xc73140
#define CX18_SW2_INT_STATUS             0xc73144
#define CX18_ADEC_CONTROL            	0xc78120
#define CX18_DDR_REQUEST_ENABLE      	0xc80000
#define CX18_DDR_CHIP_CONFIG         	0xc80004
#define CX18_DDR_REFRESH            	0xc80008
#define CX18_DDR_TIMING1             	0xc8000C
#define CX18_DDR_TIMING2             	0xc80010
#define CX18_DDR_POWER_REG		0xc8001C
#define CX18_DDR_TUNE_LANE           	0xc80048
#define CX18_DDR_INITIAL_EMRS        	0xc80054
#define CX18_DDR_MB_PER_ROW_7        	0xc8009C
#define CX18_DDR_BASE_63_ADDR        	0xc804FC
#define CX18_WMB_CLIENT02            	0xc90108
#define CX18_WMB_CLIENT05            	0xc90114
#define CX18_WMB_CLIENT06            	0xc90118
#define CX18_WMB_CLIENT07            	0xc9011C
#define CX18_WMB_CLIENT08            	0xc90120
#define CX18_WMB_CLIENT09            	0xc90124
#define CX18_WMB_CLIENT10            	0xc90128
#define CX18_WMB_CLIENT11            	0xc9012C
#define CX18_WMB_CLIENT12            	0xc90130
#define CX18_WMB_CLIENT13            	0xc90134
#define CX18_WMB_CLIENT14            	0xc90138
#define CX18_DSP0_INTERRUPT_MASK     	0xd0004C
#define APU_ROM_SYNC1 0x6D676553
#define APU_ROM_SYNC2 0x72646548
struct cx18_apu_rom_seghdr ;
static int load_cpu_fw_direct(const char *fn, u8 __iomem *mem, struct cx18 *cx)
static int load_apu_fw_direct(const char *fn, u8 __iomem *dst, struct cx18 *cx,
u32 *entry_addr)
void cx18_halt_firmware(struct cx18 *cx)
void cx18_init_power(struct cx18 *cx, int lowpwr)
void cx18_init_memory(struct cx18 *cx)
int cx18_firmware_init(struct cx18 *cx)
