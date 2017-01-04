#define __CVMX_BOOTINFO_H__
#define CVMX_BOOTINFO_MAJ_VER 1
#define CVMX_BOOTINFO_MIN_VER 2
#if (CVMX_BOOTINFO_MAJ_VER == 1)
#define CVMX_BOOTINFO_OCTEON_SERIAL_LEN 20
struct cvmx_bootinfo ;
#define CVMX_BOOTINFO_CFG_FLAG_PCI_HOST			(1ull << 0)
#define CVMX_BOOTINFO_CFG_FLAG_PCI_TARGET		(1ull << 1)
#define CVMX_BOOTINFO_CFG_FLAG_DEBUG			(1ull << 2)
#define CVMX_BOOTINFO_CFG_FLAG_NO_MAGIC			(1ull << 3)
#define CVMX_BOOTINFO_CFG_FLAG_OVERSIZE_TLB_MAPPING     (1ull << 4)
#define CVMX_BOOTINFO_CFG_FLAG_BREAK			(1ull << 5)
enum cvmx_board_types_enum ;
enum cvmx_chip_types_enum ;
#define CVMX_BOARD_TYPE_NAO38	CVMX_BOARD_TYPE_NAC38
#define ENUM_BRD_TYPE_CASE(x) \
case x: return(#x + 16);
static inline const char *cvmx_board_type_to_string(enum
cvmx_board_types_enum type)
#define ENUM_CHIP_TYPE_CASE(x) \
case x: return(#x + 15);
static inline const char *cvmx_chip_type_to_string(enum
cvmx_chip_types_enum type)
