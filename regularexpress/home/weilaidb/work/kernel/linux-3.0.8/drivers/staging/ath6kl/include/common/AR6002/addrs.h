#define __ADDRS_H__
#if defined(AR6002_REV2)
#define AR6K_RAM_START 0x00500000
#define TARG_RAM_OFFSET(vaddr) ((u32)(vaddr) & 0xfffff)
#define TARG_RAM_SZ (184*1024)
#define TARG_ROM_SZ (80*1024)
#if defined(AR6002_REV4) || defined(AR6003)
#define AR6K_RAM_START 0x00540000
#define TARG_RAM_OFFSET(vaddr) (((u32)(vaddr) & 0xfffff) - 0x40000)
#define TARG_RAM_SZ (256*1024)
#define TARG_ROM_SZ (256*1024)
#define AR6002_BOARD_DATA_SZ 768
#define AR6002_BOARD_EXT_DATA_SZ 0
#define AR6003_BOARD_DATA_SZ 1024
#define AR6003_BOARD_EXT_DATA_SZ 768
#define AR6K_RAM_ADDR(byte_offset) (AR6K_RAM_START+(byte_offset))
#define TARG_RAM_ADDRS(byte_offset) AR6K_RAM_ADDR(byte_offset)
#define AR6K_ROM_START 0x004e0000
#define TARG_ROM_OFFSET(vaddr) (((u32)(vaddr) & 0x1fffff) - 0xe0000)
#define AR6K_ROM_ADDR(byte_offset) (AR6K_ROM_START+(byte_offset))
#define TARG_ROM_ADDRS(byte_offset) AR6K_ROM_ADDR(byte_offset)
#define ROM_DATASET_INDEX_ADDR          (TARG_ROM_ADDRS(TARG_ROM_SZ)-8)
#define ROM_MBIST_CKSUM_ADDR            (TARG_ROM_ADDRS(TARG_ROM_SZ)-4)
#if defined(AR6002_REV4) || defined(AR6003)
#define BOARD_DATA_SZ AR6003_BOARD_DATA_SZ
#define BOARD_DATA_SZ AR6002_BOARD_DATA_SZ
#if defined(AR6002_REV4) || defined(AR6003)
#define HOST_INTEREST_FLASH_IS_PRESENT_ADDR  (AR6K_RAM_START + 0x60c)
#define HOST_INTEREST_FLASH_IS_PRESENT_ADDR  (AR6K_RAM_START + 0x40c)
#define FLASH_IS_PRESENT_TARGADDR       HOST_INTEREST_FLASH_IS_PRESENT_ADDR
