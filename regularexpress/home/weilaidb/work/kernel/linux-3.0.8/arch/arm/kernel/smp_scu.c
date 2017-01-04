#define SCU_CTRL		0x00
#define SCU_CONFIG		0x04
#define SCU_CPU_STATUS		0x08
#define SCU_INVALIDATE		0x0c
#define SCU_FPGA_REVISION	0x10
unsigned int __init scu_get_core_count(void __iomem *scu_base)
void __init scu_enable(void __iomem *scu_base)
int scu_power_mode(void __iomem *scu_base, unsigned int mode)
