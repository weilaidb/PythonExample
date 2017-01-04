#define _LINUX_TBOOT_H
enum ;
#define TB_KEY_SIZE             64
#define MAX_TB_MAC_REGIONS      32
struct tboot_mac_region  __packed;
struct tboot_acpi_generic_address  __packed;
struct tboot_acpi_sleep_info  __packed;
struct tboot  __packed;
#define TBOOT_UUID
extern struct tboot *tboot;
static inline int tboot_enabled(void)
extern void tboot_probe(void);
extern void tboot_shutdown(u32 shutdown_type);
extern void tboot_sleep(u8 sleep_state, u32 pm1a_control, u32 pm1b_control);
extern struct acpi_table_header *tboot_get_dmar_table(
struct acpi_table_header *dmar_tbl);
extern int tboot_force_iommu(void);
#define tboot_enabled()			0
#define tboot_probe()			do  while (0)
#define tboot_shutdown(shutdown_type)	do  while (0)
#define tboot_sleep(sleep_state, pm1a_control, pm1b_control)	\
do  while (0)
#define tboot_get_dmar_table(dmar_tbl)	(dmar_tbl)
#define tboot_force_iommu()		0
