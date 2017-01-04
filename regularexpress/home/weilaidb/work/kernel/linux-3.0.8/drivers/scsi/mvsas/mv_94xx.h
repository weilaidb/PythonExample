#define _MVS94XX_REG_H_
#define MAX_LINK_RATE		SAS_LINK_RATE_6_0_GBPS
enum hw_registers ;
enum pci_cfg_registers ;
enum sas_sata_vsp_regs ;
enum chip_register_bits ;
enum pci_interrupt_cause ;
#define MAX_SG_ENTRY		255
struct mvs_prd_imt ;
struct mvs_prd  __attribute__ ((packed));
#define SPI_CTRL_REG_94XX           	0xc800
#define SPI_ADDR_REG_94XX            	0xc804
#define SPI_WR_DATA_REG_94XX         0xc808
#define SPI_RD_DATA_REG_94XX         	0xc80c
#define SPI_CTRL_READ_94XX         	(1U << 2)
#define SPI_ADDR_VLD_94XX         	(1U << 1)
#define SPI_CTRL_SpiStart_94XX     	(1U << 0)
#define mv_ffc(x)   ffz(x)
static inline int
mv_ffc64(u64 v)
#define r_reg_set_enable(i) \
(((i) > 31) ? mr32(MVS_STP_REG_SET_1) : \
mr32(MVS_STP_REG_SET_0))
#define w_reg_set_enable(i, tmp) \
(((i) > 31) ? mw32(MVS_STP_REG_SET_1, tmp) : \
mw32(MVS_STP_REG_SET_0, tmp))
extern const struct mvs_dispatch mvs_94xx_dispatch;
