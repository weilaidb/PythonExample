#define _MVS64XX_REG_H_
#define MAX_LINK_RATE		SAS_LINK_RATE_3_0_GBPS
enum hw_registers ;
enum pci_cfg_registers ;
enum sas_sata_vsp_regs ;
enum chip_register_bits ;
#define MAX_SG_ENTRY		64
struct mvs_prd ;
#define SPI_CTRL_REG				0xc0
#define SPI_CTRL_VENDOR_ENABLE		(1U<<29)
#define SPI_CTRL_SPIRDY         		(1U<<22)
#define SPI_CTRL_SPISTART			(1U<<20)
#define SPI_CMD_REG		0xc4
#define SPI_DATA_REG		0xc8
#define SPI_CTRL_REG_64XX		0x10
#define SPI_CMD_REG_64XX		0x14
#define SPI_DATA_REG_64XX		0x18
