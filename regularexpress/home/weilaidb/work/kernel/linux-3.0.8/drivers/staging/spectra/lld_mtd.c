#if CMD_DMA
u32 totalUsedBanks;
u32 valid_banks[MAX_CHANS];
#define GLOB_LLD_PAGES           64
#define GLOB_LLD_PAGE_SIZE       (512+16)
#define GLOB_LLD_PAGE_DATA_SIZE  512
#define GLOB_LLD_BLOCKS          2048
static struct mtd_info *spectra_mtd;
static int mtddev = -1;
module_param(mtddev, int, 0);
u16 mtd_Flash_Init(void)
int mtd_Flash_Release(void)
u16 mtd_Read_Device_ID(void)
u16 mtd_Flash_Reset(void)
void erase_callback(struct erase_info *e)
u16 mtd_Erase_Block(u32 block_add)
u16 mtd_Write_Page_Main(u8 *write_data, u32 Block,
u16 Page, u16 PageCount)
u16 mtd_Read_Page_Main(u8 *read_data, u32 Block,
u16 Page, u16 PageCount)
u16 mtd_Read_Page_Main_Spare(u8 *read_data, u32 Block,
u16 Page, u16 PageCount)
u16 mtd_Write_Page_Main_Spare(u8 *write_data, u32 Block,
u16 Page, u16 page_count)
u16 mtd_Write_Page_Spare(u8 *write_data, u32 Block,
u16 Page, u16 PageCount)
u16 mtd_Read_Page_Spare(u8 *read_data, u32 Block,
u16 Page, u16 PageCount)
void mtd_Enable_Disable_Interrupts(u16 INT_ENABLE)
u16 mtd_Get_Bad_Block(u32 block)
#if CMD_DMA
u16 mtd_CDMA_Flash_Init(void)
static void mtd_isr(int irq, void *dev_id)
u16 mtd_CDMA_Execute_CMDs(u16 tag_count)
debug_sync_cnt++;
for (i = MAX_CHANS;
i < tag_count + MAX_CHANS; i++)
for (i = tag_count + MAX_CHANS; i < MAX_DESCS; i++)
nand_dbg_print(NAND_DBG_TRACE, "At end of Execute CMDs.\n");
mtd_isr(0, 0);
return status;
}
u16 mtd_CDMA_Event_Status(void)
