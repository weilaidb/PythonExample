#define __OCTEON_BOOT_H__
struct boot_init_vector ;
struct linux_app_boot_info ;
#define AVAIL_COREMASK_OFFSET_IN_LINUX_APP_BOOT_BLOCK    0x765c
#define  LABI_ADDR_IN_BOOTLOADER                         0x700
#define LINUX_APP_BOOT_BLOCK_NAME "linux-app-boot"
#define LABI_SIGNATURE 0xAABBCC01
#define EXCEPTION_BASE_INCR     (4 * 1024)
#define EXCEPTION_BASE_BASE     0
#define BOOTLOADER_PRIV_DATA_BASE       (EXCEPTION_BASE_BASE + 0x800)
#define BOOTLOADER_BOOT_VECTOR          (BOOTLOADER_PRIV_DATA_BASE)
