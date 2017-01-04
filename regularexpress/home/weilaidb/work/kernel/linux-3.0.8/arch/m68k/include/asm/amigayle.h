#define _M68K_AMIGAYLE_H_
#define GAYLE_RAM		(0x600000+zTwoBase)
#define GAYLE_RAMSIZE		(0x400000)
#define GAYLE_ATTRIBUTE		(0xa00000+zTwoBase)
#define GAYLE_ATTRIBUTESIZE	(0x020000)
#define GAYLE_IO		(0xa20000+zTwoBase)
#define GAYLE_IOSIZE		(0x010000)
#define GAYLE_IO_8BITODD	(0xa30000+zTwoBase)
#define GAYLE_ODD		(GAYLE_IO_8BITODD-GAYLE_IO-1)
struct GAYLE ;
#define GAYLE_ADDRESS	(0xda8000)
#define GAYLE_RESET	(0xa40000)
#define gayle (*(volatile struct GAYLE *)(zTwoBase+GAYLE_ADDRESS))
#define gayle_reset (*(volatile u_char *)(zTwoBase+GAYLE_RESET))
#define gayle_attribute ((volatile u_char *)(GAYLE_ATTRIBUTE))
#define GAYLE_CS_CCDET		0x40
#define GAYLE_CS_BVD1		0x20
#define GAYLE_CS_SC		0x20
#define GAYLE_CS_BVD2		0x10
#define GAYLE_CS_DA		0x10
#define GAYLE_CS_WR		0x08
#define GAYLE_CS_BSY		0x04
#define GAYLE_CS_IRQ		0x04
#define GAYLE_IRQ_IDE		0x80
#define GAYLE_IRQ_CCDET		0x40
#define GAYLE_IRQ_BVD1		0x20
#define GAYLE_IRQ_SC		0x20
#define GAYLE_IRQ_BVD2		0x10
#define GAYLE_IRQ_DA		0x10
#define GAYLE_IRQ_WR		0x08
#define GAYLE_IRQ_BSY		0x04
#define GAYLE_IRQ_IRQ		0x04
#define GAYLE_IRQ_IDEACK1	0x02
#define GAYLE_IRQ_IDEACK0	0x01
#define GAYLE_CFG_0V		0x00
#define GAYLE_CFG_5V		0x01
#define GAYLE_CFG_12V		0x02
#define GAYLE_CFG_100NS		0x08
#define GAYLE_CFG_150NS		0x04
#define GAYLE_CFG_250NS		0x00
#define GAYLE_CFG_720NS		0x0c
struct gayle_ide_platform_data ;
