#if CMD_DMA
#define BLK_FROM_ADDR(addr)  ((u32)(addr >> DeviceInfo.nBitsInBlockDataSize))
#define PAGE_FROM_ADDR(addr, Block)  ((u16)((addr - (u64)Block * \
DeviceInfo.wBlockDataSize) >> DeviceInfo.nBitsInPageDataSize))
#define IS_SPARE_BLOCK(blk)     (BAD_BLOCK != (pbt[blk] &\
BAD_BLOCK) && SPARE_BLOCK == (pbt[blk] & SPARE_BLOCK))
#define IS_DATA_BLOCK(blk)      (0 == (pbt[blk] & BAD_BLOCK))
#define IS_DISCARDED_BLOCK(blk) (BAD_BLOCK != (pbt[blk] &\
BAD_BLOCK) && DISCARD_BLOCK == (pbt[blk] & DISCARD_BLOCK))
#define IS_BAD_BLOCK(blk)       (BAD_BLOCK == (pbt[blk] & BAD_BLOCK))
#if DEBUG_BNDRY
void debug_boundary_lineno_error(int chnl, int limit, int no,
int lineno, char *filename)
static u16 FTL_Cache_If_Hit(u64 dwPageAddr);
static int FTL_Cache_Read(u64 dwPageAddr);
static void FTL_Cache_Read_Page(u8 *pData, u64 dwPageAddr,
u16 cache_blk);
static void FTL_Cache_Write_Page(u8 *pData, u64 dwPageAddr,
u8 cache_blk, u16 flag);
static int FTL_Cache_Write(void);
static void FTL_Calculate_LRU(void);
static u32 FTL_Get_Block_Index(u32 wBlockNum);
static int FTL_Search_Block_Table_IN_Block(u32 BT_Block,
u8 BT_Tag, u16 *Page);
static int FTL_Read_Block_Table(void);
static int FTL_Write_Block_Table(int wForce);
static int FTL_Write_Block_Table_Data(void);
static int FTL_Check_Block_Table(int wOldTable);
static int FTL_Static_Wear_Leveling(void);
static u32 FTL_Replace_Block_Table(void);
static int FTL_Write_IN_Progress_Block_Table_Page(void);
static u32 FTL_Get_Page_Num(u64 length);
static u64 FTL_Get_Physical_Block_Addr(u64 blk_addr);
static u32 FTL_Replace_OneBlock(u32 wBlockNum,
u32 wReplaceNum);
static u32 FTL_Replace_LWBlock(u32 wBlockNum,
int *pGarbageCollect);
static u32 FTL_Replace_MWBlock(void);
static int FTL_Replace_Block(u64 blk_addr);
static int FTL_Adjust_Relative_Erase_Count(u32 Index_of_MAX);
struct device_info_tag DeviceInfo;
struct flash_cache_tag Cache;
static struct spectra_l2_cache_info cache_l2;
static u8 *cache_l2_page_buf;
static u8 *cache_l2_blk_buf;
u8 *g_pBlockTable;
u8 *g_pWearCounter;
u16 *g_pReadCounter;
u32 *g_pBTBlocks;
static u16 g_wBlockTableOffset;
static u32 g_wBlockTableIndex;
static u8 g_cBlockTableStatus;
static u8 *g_pTempBuf;
static u8 *flag_check_blk_table;
static u8 *tmp_buf_search_bt_in_block;
static u8 *spare_buf_search_bt_in_block;
static u8 *spare_buf_bt_search_bt_in_block;
static u8 *tmp_buf1_read_blk_table;
static u8 *tmp_buf2_read_blk_table;
static u8 *flags_static_wear_leveling;
static u8 *tmp_buf_write_blk_table_data;
static u8 *tmp_buf_read_disturbance;
u8 *buf_read_page_main_spare;
u8 *buf_write_page_main_spare;
u8 *buf_read_page_spare;
u8 *buf_get_bad_block;
#if (RESTORE_CACHE_ON_CDMA_CHAIN_FAILURE && CMD_DMA)
struct flash_cache_delta_list_tag int_cache[MAX_CHANS + MAX_DESCS];
struct flash_cache_tag cache_start_copy;
int g_wNumFreeBlocks;
u8 g_SBDCmdIndex;
static u8 *g_pIPF;
static u8 bt_flag = FIRST_BT_ID;
static u8 bt_block_changed;
static u16 cache_block_to_write;
static u8 last_erased = FIRST_BT_ID;
static u8 GC_Called;
static u8 BT_GC_Called;
#if CMD_DMA
#define COPY_BACK_BUF_NUM 10
static u8 ftl_cmd_cnt;
u8 *g_pBTDelta;
u8 *g_pBTDelta_Free;
u8 *g_pBTStartingCopy;
u8 *g_pWearCounterCopy;
u16 *g_pReadCounterCopy;
u8 *g_pBlockTableCopies;
u8 *g_pNextBlockTable;
static u8 *cp_back_buf_copies[COPY_BACK_BUF_NUM];
static int cp_back_buf_idx;
static u8 *g_temp_buf;
struct BTableChangesDelta ;
struct BTableChangesDelta *p_BTableChangesDelta;
#define MARK_BLOCK_AS_BAD(blocknode)      (blocknode |= BAD_BLOCK)
#define MARK_BLK_AS_DISCARD(blk)  (blk = (blk & ~SPARE_BLOCK) | DISCARD_BLOCK)
#define FTL_Get_LBAPBA_Table_Mem_Size_Bytes() (DeviceInfo.wDataBlockNum *\
sizeof(u32))
#define FTL_Get_WearCounter_Table_Mem_Size_Bytes() (DeviceInfo.wDataBlockNum *\
sizeof(u8))
#define FTL_Get_ReadCounter_Table_Mem_Size_Bytes() (DeviceInfo.wDataBlockNum *\
sizeof(u16))
#if SUPPORT_LARGE_BLOCKNUM
#define FTL_Get_LBAPBA_Table_Flash_Size_Bytes() (DeviceInfo.wDataBlockNum *\
sizeof(u8) * 3)
#define FTL_Get_LBAPBA_Table_Flash_Size_Bytes() (DeviceInfo.wDataBlockNum *\
sizeof(u16))
#define FTL_Get_WearCounter_Table_Flash_Size_Bytes \
FTL_Get_WearCounter_Table_Mem_Size_Bytes
#define FTL_Get_ReadCounter_Table_Flash_Size_Bytes \
FTL_Get_ReadCounter_Table_Mem_Size_Bytes
static u32 FTL_Get_Block_Table_Flash_Size_Bytes(void)
static u16  FTL_Get_Block_Table_Flash_Size_Pages(void)
static int FTL_Copy_Block_Table_To_Flash(u8 *flashBuf, u32 sizeToTx,
u32 sizeTxed)
static int FTL_Copy_Block_Table_From_Flash(u8 *flashBuf,
u32 sizeToTx, u32 sizeTxed)
static int FTL_Insert_Block_Table_Signature(u8 *buf, u8 tag)
static int FTL_Extract_Block_Table_Tag(u8 *buf, u8 **tagarray)
static int FTL_Execute_SPL_Recovery(void)
int GLOB_FTL_IdentifyDevice(struct spectra_indentfy_dev_tag *dev_data)
static int allocate_memory(void)
static int free_memory(void)
static void dump_cache_l2_table(void)
int GLOB_FTL_Init(void)
#if CMD_DMA
ftl_cmd = p_BTableChangesDelta->ftl_cmd_cnt;
while (ftl_cmd <= PendingCMD[idx].Tag)
}
static void discard_cmds(u16 n)
static void process_cmd_pass(int *first_failed_cmd, u16 idx)
static void process_cmd_fail_abort(int *first_failed_cmd,
u16 idx, int event)
static void process_cmd(int *first_failed_cmd, u16 idx, int event)
static void process_cmd(int *first_failed_cmd, u16 idx, int event)
int GLOB_FTL_Event_Status(int *first_failed_cmd)
u16 glob_ftl_execute_cmds(void)
#if !CMD_DMA
int GLOB_FTL_Read_Immediate(u8 *read_data, u64 addr)
static void FTL_Invert_Block_Table(void)
int GLOB_FTL_Flash_Init(void)
int GLOB_FTL_Flash_Release(void)
void GLOB_FTL_Cache_Release(void)
static u16 FTL_Cache_If_Hit(u64 page_addr)
static void FTL_Calculate_LRU(void)
static void FTL_Cache_Read_Page(u8 *data_buf, u64 logic_addr, u16 cache_item)
static int FTL_Cache_Read_All(u8 *pData, u64 phy_addr)
static int FTL_Cache_Write_All(u8 *pData, u64 blk_addr)
int FTL_Copy_Block(u64 old_blk_addr, u64 blk_addr)
static u32 find_least_worn_blk_for_l2_cache(void)
static int get_l2_cache_blks(void)
static int erase_l2_cache_blocks(void)
static int flush_l2_cache(void)
static int write_back_to_l2_cache(u8 *buf, u64 logical_addr)
static int search_l2_cache(u8 *buf, u64 logical_addr)
static void FTL_Cache_Write_Page(u8 *pData, u64 page_addr,
u8 cache_blk, u16 flag)
static int FTL_Cache_Write(void)
static int FTL_Cache_Read(u64 logical_addr)
static int FTL_Check_Block_Table(int wOldTable)
static int FTL_Write_Block_Table(int wForce)
static int  force_format_nand(void)
int GLOB_FTL_Flash_Format(void)
static int FTL_Search_Block_Table_IN_Block(u32 BT_Block,
u8 BT_Tag, u16 *Page)
u8 *get_blk_table_start_addr(void)
unsigned long get_blk_table_len(void)
u8 *get_wear_leveling_table_start_addr(void)
unsigned long get_wear_leveling_table_len(void)
static int FTL_Read_Block_Table(void)
static u32 FTL_Get_Page_Num(u64 length)
static u64 FTL_Get_Physical_Block_Addr(u64 logical_addr)
static u32 FTL_Get_Block_Index(u32 wBlockNum)
int GLOB_FTL_Wear_Leveling(void)
static void find_least_most_worn(u8 *chg,
u32 *least_idx, u8 *least_cnt,
u32 *most_idx, u8 *most_cnt)
static int move_blks_for_wear_leveling(u8 *chg,
u32 *least_idx, u32 *rep_blk_num, int *result)
int FTL_Static_Wear_Leveling(void)
#if CMD_DMA
static int do_garbage_collection(u32 discard_cnt)
static int do_garbage_collection(u32 discard_cnt)
int GLOB_FTL_Garbage_Collection(void)
#if CMD_DMA
static int do_bt_garbage_collection(void)
static int do_bt_garbage_collection(void)
int GLOB_FTL_BT_Garbage_Collection(void)
static u32 FTL_Replace_OneBlock(u32 blk, u32 rep_blk)
static int FTL_Write_Block_Table_Data(void)
static u32 FTL_Replace_Block_Table(void)
static u32 FTL_Replace_LWBlock(u32 wBlockNum, int *pGarbageCollect)
static u32 FTL_Replace_MWBlock(void)
static int FTL_Replace_Block(u64 blk_addr)
int GLOB_FTL_Is_BadBlock(u32 wBlockNum)
int GLOB_FTL_Flush_Cache(void)
int GLOB_FTL_Page_Read(u8 *data, u64 logical_addr)
int GLOB_FTL_Page_Write(u8 *pData, u64 dwPageAddr)
int GLOB_FTL_Block_Erase(u64 blk_addr)
static int FTL_Adjust_Relative_Erase_Count(u32 Index_of_MAX)
static int FTL_Write_IN_Progress_Block_Table_Page(void)
int FTL_Read_Disturbance(u32 blk_addr)
