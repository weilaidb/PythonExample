#define __ASM_MACH_POWERTV_ASIC_H_
enum asic_type ;
#define CRONUS_10	0x0B4C1C20
#define CRONUS_11	0x0B4C1C21
#define CRONUSLITE_10	0x0B4C1C40
#define NAND_FLASH_BASE		0x03000000
#define CALLIOPE_IO_BASE	0x08000000
#define GAIA_IO_BASE		0x09000000
#define CRONUS_IO_BASE		0x09000000
#define ZEUS_IO_BASE		0x09000000
#define ASIC_IO_SIZE		0x01000000
#define UART1_INTSTAT	uart1_intstat
#define UART1_INTEN	uart1_inten
#define UART1_CONFIG1	uart1_config1
#define UART1_CONFIG2	uart1_config2
#define UART1_DIVISORHI	uart1_divisorhi
#define UART1_DIVISORLO	uart1_divisorlo
#define UART1_DATA	uart1_data
#define UART1_STATUS	uart1_status
union register_map_entry ;
#define REGISTER_MAP_ELEMENT(x) union register_map_entry x;
struct register_map ;
#undef REGISTER_MAP_ELEMENT
static inline void register_map_offset_phys(struct register_map *map,
unsigned long offset)
static inline void register_map_virtualize(struct register_map *map)
extern struct register_map _asic_register_map;
extern unsigned long asic_phy_base;
#define asic_reg_addr(x)	(_asic_register_map.x.virt)
#define asic_reg_phys_addr(x)	(virt_to_phys((void *) CAC_ADDR(	\
(unsigned long) asic_reg_addr(x))))
#define asic_read(x)		readl(asic_reg_addr(x))
#define asic_write(v, x)	writel(v, asic_reg_addr(x))
extern void asic_irq_init(void);
