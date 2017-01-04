#define _LLD_MTD_
extern u16 mtd_Flash_Reset(void);
extern u16 mtd_Flash_Init(void);
extern int mtd_Flash_Release(void);
extern u16 mtd_Read_Device_ID(void);
extern u16 mtd_Erase_Block(u32 block_addr);
extern u16 mtd_Write_Page_Main(u8 *write_data, u32 Block,
u16 Page, u16 PageCount);
extern u16 mtd_Read_Page_Main(u8 *read_data, u32 Block, u16 Page,
u16 PageCount);
extern u16 mtd_Event_Status(void);
extern void mtd_Enable_Disable_Interrupts(u16 INT_ENABLE);
extern u16 mtd_Write_Page_Main_Spare(u8 *write_data, u32 Block,
u16 Page, u16 PageCount);
extern u16 mtd_Write_Page_Spare(u8 *write_data, u32 Block,
u16 Page, u16 PageCount);
extern u16 mtd_Read_Page_Main_Spare(u8 *read_data, u32 Block,
u16 Page, u16 PageCount);
extern u16 mtd_Read_Page_Spare(u8 *read_data, u32 Block, u16 Page,
u16 PageCount);
extern u16 mtd_Get_Bad_Block(u32 block);
u16 mtd_CDMA_Flash_Init(void);
u16 mtd_CDMA_Execute_CMDs(u16 tag_count);
u16 mtd_CDMA_Event_Status(void);
