#define _FLASH_INTERFACE_
#define MAX_BYTE_VALUE        0xFF
#define MAX_WORD_VALUE        0xFFFF
#define MAX_U32_VALUE        0xFFFFFFFF
#define MAX_BLOCKNODE_VALUE     0xFFFFFF
#define DISCARD_BLOCK           0x800000
#define SPARE_BLOCK             0x400000
#define BAD_BLOCK               0xC00000
#define UNHIT_CACHE_ITEM         0xFFFF
#define NAND_CACHE_INIT_ADDR    0xffffffffffffffffULL
#define IN_PROGRESS_BLOCK_TABLE   0x00
#define CURRENT_BLOCK_TABLE       0x01
#define BTSIG_OFFSET   (0)
#define BTSIG_BYTES    (5)
#define BTSIG_DELTA    (3)
#define MAX_READ_COUNTER  0x2710
#define FIRST_BT_ID		(1)
#define LAST_BT_ID    (254)
#define BTBLOCK_INVAL  (u32)(0xFFFFFFFF)
struct device_info_tag ;
extern struct device_info_tag DeviceInfo;
struct flash_cache_item_tag ;
struct flash_cache_tag ;
struct spectra_l2_cache_list ;
struct spectra_l2_cache_info ;
#define RESTORE_CACHE_ON_CDMA_CHAIN_FAILURE    1
#if RESTORE_CACHE_ON_CDMA_CHAIN_FAILURE
struct flash_cache_mod_item_tag ;
struct flash_cache_delta_list_tag ;
extern struct flash_cache_tag Cache;
extern u8 *buf_read_page_main_spare;
extern u8 *buf_write_page_main_spare;
extern u8 *buf_read_page_spare;
extern u8 *buf_get_bad_block;
extern u8 *cdma_desc_buf;
extern u8 *memcp_desc_buf;
struct spectra_indentfy_dev_tag ;
int GLOB_FTL_Flash_Init(void);
int GLOB_FTL_Flash_Release(void);
int GLOB_FTL_Block_Erase(u64 block_addr);
int GLOB_FTL_Is_BadBlock(u32 block_num);
int GLOB_FTL_IdentifyDevice(struct spectra_indentfy_dev_tag *dev_data);
int GLOB_FTL_Event_Status(int *);
u16 glob_ftl_execute_cmds(void);
int FTL_Read_Disturbance(u32 dwBlockAddr);
int GLOB_FTL_Page_Read(u8 *read_data, u64 page_addr);
int GLOB_FTL_Page_Write(u8 *write_data, u64 page_addr);
int GLOB_FTL_Wear_Leveling(void);
int GLOB_FTL_Flash_Format(void);
int GLOB_FTL_Init(void);
int GLOB_FTL_Flush_Cache(void);
int GLOB_FTL_Garbage_Collection(void);
int GLOB_FTL_BT_Garbage_Collection(void);
void GLOB_FTL_Cache_Release(void);
u8 *get_blk_table_start_addr(void);
u8 *get_wear_leveling_table_start_addr(void);
unsigned long get_blk_table_len(void);
unsigned long get_wear_leveling_table_len(void);
#if DEBUG_BNDRY
void debug_boundary_lineno_error(int chnl, int limit, int no, int lineno,
char *filename);
#define debug_boundary_error(chnl, limit, no) debug_boundary_lineno_error(chnl,\
limit, no, __LINE__, __FILE__)
#define debug_boundary_error(chnl, limit, no) ;
