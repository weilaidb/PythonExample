#define __ASM_TXX9_NDFMC_H
#define NDFMC_PLAT_FLAG_USE_BSPRT	0x01
#define NDFMC_PLAT_FLAG_NO_RSTR		0x02
#define NDFMC_PLAT_FLAG_HOLDADD		0x04
#define NDFMC_PLAT_FLAG_DUMMYWRITE	0x08
struct txx9ndfmc_platform_data ;
void txx9_ndfmc_init(unsigned long baseaddr,
const struct txx9ndfmc_platform_data *plat_data);
