#define _LLD_EMU_
extern u16 emu_Flash_Reset(void);
extern u16 emu_Flash_Init(void);
extern int emu_Flash_Release(void);
extern u16 emu_Read_Device_ID(void);
extern u16 emu_Erase_Block(u32 block_addr);
extern u16 emu_Write_Page_Main(u8 *write_data, u32 Block,
u16 Page, u16 PageCount);
extern u16 emu_Read_Page_Main(u8 *read_data, u32 Block, u16 Page,
u16 PageCount);
extern u16 emu_Event_Status(void);
extern void emu_Enable_Disable_Interrupts(u16 INT_ENABLE);
extern u16 emu_Write_Page_Main_Spare(u8 *write_data, u32 Block,
u16 Page, u16 PageCount);
extern u16 emu_Write_Page_Spare(u8 *write_data, u32 Block,
u16 Page, u16 PageCount);
extern u16 emu_Read_Page_Main_Spare(u8 *read_data, u32 Block,
u16 Page, u16 PageCount);
extern u16 emu_Read_Page_Spare(u8 *read_data, u32 Block, u16 Page,
u16 PageCount);
extern u16 emu_Get_Bad_Block(u32 block);
u16 emu_CDMA_Flash_Init(void);
u16 emu_CDMA_Execute_CMDs(u16 tag_count);
u16 emu_CDMA_Event_Status(void);
