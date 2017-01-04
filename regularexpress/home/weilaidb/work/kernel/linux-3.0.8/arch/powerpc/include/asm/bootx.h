#define __ASM_BOOTX_H__
#define BOOT_INFO_VERSION               5
#define BOOT_INFO_COMPATIBLE_VERSION    1
#define BOOT_ARCH_PCI                   0x00000001UL
#define BOOT_ARCH_NUBUS                 0x00000002UL
#define BOOT_ARCH_NUBUS_PDM             0x00000010UL
#define BOOT_ARCH_NUBUS_PERFORMA        0x00000020UL
#define BOOT_ARCH_NUBUS_POWERBOOK       0x00000040UL
#define MAX_MEM_MAP_SIZE				26
typedef struct boot_info_map_entry
boot_info_map_entry_t;
typedef struct boot_infos
boot_infos_t;
#define BOOTX_COLORTABLE_SIZE    (256UL*3UL*2UL)
struct bootx_dt_prop ;
struct bootx_dt_node ;
extern void bootx_init(unsigned long r4, unsigned long phys);
