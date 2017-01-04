#define __MANTIS_COMMON_H
#define MANTIS_ERROR		0
#define MANTIS_NOTICE		1
#define MANTIS_INFO		2
#define MANTIS_DEBUG		3
#define MANTIS_TMG		9
#define dprintk(y, z, format, arg...) do  while(0)
#define mwrite(dat, addr)	writel((dat), addr)
#define mread(addr)		readl(addr)
#define mmwrite(dat, addr)	mwrite((dat), (mantis->mmio + (addr)))
#define mmread(addr)		mread(mantis->mmio + (addr))
#define MANTIS_TS_188		0
#define MANTIS_TS_204		1
#define TWINHAN_TECHNOLOGIES	0x1822
#define MANTIS			0x4e35
#define TECHNISAT		0x1ae4
#define TERRATEC		0x153b
#define MAKE_ENTRY(__subven, __subdev, __configptr)
enum mantis_i2c_mode ;
struct mantis_pci;
struct mantis_hwconfig ;
struct mantis_pci ;
#define MANTIS_HIF_STATUS	(mantis->gpio_status)
