#define _ASM_NLM_IOMAP_H
#define DEFAULT_NETLOGIC_IO_BASE           CKSEG1ADDR(0x1ef00000)
#define NETLOGIC_IO_DDR2_CHN0_OFFSET       0x01000
#define NETLOGIC_IO_DDR2_CHN1_OFFSET       0x02000
#define NETLOGIC_IO_DDR2_CHN2_OFFSET       0x03000
#define NETLOGIC_IO_DDR2_CHN3_OFFSET       0x04000
#define NETLOGIC_IO_PIC_OFFSET             0x08000
#define NETLOGIC_IO_UART_0_OFFSET          0x14000
#define NETLOGIC_IO_UART_1_OFFSET          0x15100
#define NETLOGIC_IO_SIZE                   0x1000
#define NETLOGIC_IO_BRIDGE_OFFSET          0x00000
#define NETLOGIC_IO_RLD2_CHN0_OFFSET       0x05000
#define NETLOGIC_IO_RLD2_CHN1_OFFSET       0x06000
#define NETLOGIC_IO_SRAM_OFFSET            0x07000
#define NETLOGIC_IO_PCIX_OFFSET            0x09000
#define NETLOGIC_IO_HT_OFFSET              0x0A000
#define NETLOGIC_IO_SECURITY_OFFSET        0x0B000
#define NETLOGIC_IO_GMAC_0_OFFSET          0x0C000
#define NETLOGIC_IO_GMAC_1_OFFSET          0x0D000
#define NETLOGIC_IO_GMAC_2_OFFSET          0x0E000
#define NETLOGIC_IO_GMAC_3_OFFSET          0x0F000
#define NETLOGIC_IO_GMAC_4_OFFSET          0x20000
#define NETLOGIC_IO_GMAC_5_OFFSET          0x21000
#define NETLOGIC_IO_GMAC_6_OFFSET          0x22000
#define NETLOGIC_IO_GMAC_7_OFFSET          0x23000
#define NETLOGIC_IO_PCIE_0_OFFSET          0x1E000
#define NETLOGIC_IO_PCIE_1_OFFSET          0x1F000
#define NETLOGIC_IO_SRIO_0_OFFSET          0x1E000
#define NETLOGIC_IO_SRIO_1_OFFSET          0x1F000
#define NETLOGIC_IO_USB_0_OFFSET           0x24000
#define NETLOGIC_IO_USB_1_OFFSET           0x25000
#define NETLOGIC_IO_COMP_OFFSET            0x1D000
#define NETLOGIC_IO_SPI4_0_OFFSET          0x10000
#define NETLOGIC_IO_XGMAC_0_OFFSET         0x11000
#define NETLOGIC_IO_SPI4_1_OFFSET          0x12000
#define NETLOGIC_IO_XGMAC_1_OFFSET         0x13000
#define NETLOGIC_IO_I2C_0_OFFSET           0x16000
#define NETLOGIC_IO_I2C_1_OFFSET           0x17000
#define NETLOGIC_IO_GPIO_OFFSET            0x18000
#define NETLOGIC_IO_FLASH_OFFSET           0x19000
#define NETLOGIC_IO_TB_OFFSET              0x1C000
#define NETLOGIC_CPLD_OFFSET               KSEG1ADDR(0x1d840000)
#define DEFAULT_PCI_CONFIG_BASE         0x18000000
#define DEFAULT_HT_TYPE0_CFG_BASE       0x16000000
#define DEFAULT_HT_TYPE1_CFG_BASE       0x17000000
typedef volatile __u32 nlm_reg_t;
extern unsigned long netlogic_io_base;
#define netlogic_read_reg(base, offset)		((base)[(offset)])
#define netlogic_write_reg(base, offset, value)	((base)[(offset)] = (value))
#define netlogic_read_reg(base, offset)		(be32_to_cpu((base)[(offset)]))
#define netlogic_write_reg(base, offset, value) \
((base)[(offset)] = cpu_to_be32((value)))
#define netlogic_read_reg_le32(base, offset) (le32_to_cpu((base)[(offset)]))
#define netlogic_write_reg_le32(base, offset, value) \
((base)[(offset)] = cpu_to_le32((value)))
#define netlogic_io_mmio(offset) ((nlm_reg_t *)(netlogic_io_base+(offset)))
