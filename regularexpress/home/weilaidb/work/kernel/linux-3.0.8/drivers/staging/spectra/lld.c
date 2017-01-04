#if FLASH_EMU
u16 GLOB_LLD_Flash_Reset(void)
u16 GLOB_LLD_Read_Device_ID(void)
int GLOB_LLD_Flash_Release(void)
u16 GLOB_LLD_Flash_Init(void)
u16 GLOB_LLD_Erase_Block(u32 block_add)
u16 GLOB_LLD_Write_Page_Main(u8 *write_data, u32 block, u16 Page,
u16 PageCount)
u16 GLOB_LLD_Read_Page_Main(u8 *read_data, u32 block, u16 Page,
u16 PageCount)
u16 GLOB_LLD_Read_Page_Main_Polling(u8 *read_data,
u32 block, u16 page, u16 page_count)
u16 GLOB_LLD_Write_Page_Main_Spare(u8 *write_data, u32 block,
u16 Page, u16 PageCount)
u16 GLOB_LLD_Read_Page_Main_Spare(u8 *read_data, u32 block,
u16 Page, u16 PageCount)
u16 GLOB_LLD_Write_Page_Spare(u8 *write_data, u32 block, u16 Page,
u16 PageCount)
u16 GLOB_LLD_Read_Page_Spare(u8 *read_data, u32 block, u16 Page,
u16 PageCount)
u16  GLOB_LLD_Get_Bad_Block(u32 block)
#if FLASH_MTD
u16 GLOB_LLD_Flash_Reset(void)
u16 GLOB_LLD_Read_Device_ID(void)
int GLOB_LLD_Flash_Release(void)
u16 GLOB_LLD_Flash_Init(void)
u16 GLOB_LLD_Erase_Block(u32 block_add)
u16 GLOB_LLD_Write_Page_Main(u8 *write_data, u32 block, u16 Page,
u16 PageCount)
u16 GLOB_LLD_Read_Page_Main(u8 *read_data, u32 block, u16 Page,
u16 PageCount)
u16 GLOB_LLD_Read_Page_Main_Polling(u8 *read_data,
u32 block, u16 page, u16 page_count)
u16 GLOB_LLD_Write_Page_Main_Spare(u8 *write_data, u32 block,
u16 Page, u16 PageCount)
u16 GLOB_LLD_Read_Page_Main_Spare(u8 *read_data, u32 block,
u16 Page, u16 PageCount)
u16 GLOB_LLD_Write_Page_Spare(u8 *write_data, u32 block, u16 Page,
u16 PageCount)
u16 GLOB_LLD_Read_Page_Spare(u8 *read_data, u32 block, u16 Page,
u16 PageCount)
u16  GLOB_LLD_Get_Bad_Block(u32 block)
#if FLASH_NAND
void GLOB_LLD_ECC_Control(int enable)
u16 GLOB_LLD_Flash_Reset(void)
u16 GLOB_LLD_Read_Device_ID(void)
u16 GLOB_LLD_UnlockArrayAll(void)
u16 GLOB_LLD_Flash_Init(void)
int GLOB_LLD_Flash_Release(void)
u16 GLOB_LLD_Erase_Block(u32 block_add)
u16 GLOB_LLD_Write_Page_Main(u8 *write_data, u32 block, u16 Page,
u16 PageCount)
u16 GLOB_LLD_Read_Page_Main(u8 *read_data, u32 block, u16 page,
u16 page_count)
u16 GLOB_LLD_Read_Page_Main_Polling(u8 *read_data,
u32 block, u16 page, u16 page_count)
u16 GLOB_LLD_Write_Page_Main_Spare(u8 *write_data, u32 block,
u16 Page, u16 PageCount)
u16 GLOB_LLD_Write_Page_Spare(u8 *write_data, u32 block, u16 Page,
u16 PageCount)
u16 GLOB_LLD_Read_Page_Main_Spare(u8 *read_data, u32 block,
u16 page, u16 page_count)
u16 GLOB_LLD_Read_Page_Spare(u8 *read_data, u32 block, u16 Page,
u16 PageCount)
u16  GLOB_LLD_Get_Bad_Block(u32 block)
#if CMD_DMA
u16 GLOB_LLD_Event_Status(void)
u16 glob_lld_execute_cmds(void)
u16 GLOB_LLD_MemCopy_CMD(u8 *dest, u8 *src,
u32 ByteCount, u16 flag)
u16 GLOB_LLD_Erase_Block_cdma(u32 block, u16 flags)
u16 GLOB_LLD_Write_Page_Main_cdma(u8 *data, u32 block, u16 page, u16 count)
u16 GLOB_LLD_Read_Page_Main_cdma(u8 *data, u32 block, u16 page,
u16 count, u16 flags)
u16 GLOB_LLD_Write_Page_Main_Spare_cdma(u8 *data, u32 block, u16 page,
u16 count, u16 flags)
u16 GLOB_LLD_Read_Page_Main_Spare_cdma(u8 *data,
u32 block, u16 page, u16 count)
