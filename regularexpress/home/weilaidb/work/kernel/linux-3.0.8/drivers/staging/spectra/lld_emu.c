#if CMD_DMA
#if FLASH_EMU
u32 totalUsedBanks;
u32 valid_banks[MAX_CHANS];
#define GLOB_LLD_PAGES           64
#define GLOB_LLD_PAGE_SIZE       (512+16)
#define GLOB_LLD_PAGE_DATA_SIZE  512
#define GLOB_LLD_BLOCKS          2048
#if FLASH_EMU
static u8 *flash_memory[GLOB_LLD_BLOCKS * GLOB_LLD_PAGES];
int emu_load_file_to_mem(void)
int emu_write_mem_to_file(void)
u16 emu_Flash_Init(void)
int emu_Flash_Release(void)
u16 emu_Read_Device_ID(void)
u16 emu_Flash_Reset(void)
u16 emu_Erase_Block(u32 block_add)
u16 emu_Write_Page_Main(u8 *write_data, u32 Block,
u16 Page, u16 PageCount)
u16 emu_Read_Page_Main(u8 *read_data, u32 Block,
u16 Page, u16 PageCount)
u16 emu_Read_Page_Main_Spare(u8 *read_data, u32 Block,
u16 Page, u16 PageCount)
u16 emu_Write_Page_Main_Spare(u8 *write_data, u32 Block,
u16 Page, u16 page_count)
u16 emu_Write_Page_Spare(u8 *write_data, u32 Block,
u16 Page, u16 PageCount)
u16 emu_Read_Page_Spare(u8 *write_data, u32 Block,
u16 Page, u16 PageCount)
void emu_Enable_Disable_Interrupts(u16 INT_ENABLE)
u16 emu_Get_Bad_Block(u32 block)
#if CMD_DMA
u16 emu_CDMA_Flash_Init(void)
static void emu_isr(int irq, void *dev_id)
u16 emu_CDMA_Execute_CMDs(u16 tag_count)
debug_sync_cnt++;
for (i = MAX_CHANS;
i < tag_count + MAX_CHANS; i++)
for (i = tag_count + MAX_CHANS; i < MAX_DESCS; i++)
nand_dbg_print(NAND_DBG_TRACE, "At end of Execute CMDs.\n");
emu_isr(0, 0);
return status;
}
u16 emu_CDMA_Event_Status(void)
