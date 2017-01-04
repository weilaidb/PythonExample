#define _LLD_
#define GOOD_BLOCK 0
#define DEFECTIVE_BLOCK 1
#define READ_ERROR 2
#define CLK_X  5
#define CLK_MULTI 4
extern void GLOB_LLD_ECC_Control(int enable);
extern u16 GLOB_LLD_Flash_Reset(void);
extern u16 GLOB_LLD_Read_Device_ID(void);
extern u16 GLOB_LLD_UnlockArrayAll(void);
extern u16 GLOB_LLD_Flash_Init(void);
extern int GLOB_LLD_Flash_Release(void);
extern u16 GLOB_LLD_Erase_Block(u32 block_add);
extern u16 GLOB_LLD_Write_Page_Main(u8 *write_data,
u32 block, u16 Page, u16 PageCount);
extern u16 GLOB_LLD_Read_Page_Main(u8 *read_data,
u32 block, u16 page, u16 page_count);
extern u16 GLOB_LLD_Read_Page_Main_Polling(u8 *read_data,
u32 block, u16 page, u16 page_count);
extern u16 GLOB_LLD_Write_Page_Main_Spare(u8 *write_data,
u32 block, u16 Page, u16 PageCount);
extern u16 GLOB_LLD_Write_Page_Spare(u8 *write_data,
u32 block, u16 Page, u16 PageCount);
extern u16 GLOB_LLD_Read_Page_Main_Spare(u8 *read_data,
u32 block, u16 page, u16 page_count);
extern u16 GLOB_LLD_Read_Page_Spare(u8 *read_data,
u32 block, u16 Page, u16 PageCount);
extern u16  GLOB_LLD_Get_Bad_Block(u32 block);
extern u16 GLOB_LLD_Event_Status(void);
extern u16 GLOB_LLD_MemCopy_CMD(u8 *dest, u8 *src, u32 ByteCount, u16 flag);
extern u16 glob_lld_execute_cmds(void);
extern u16 GLOB_LLD_Erase_Block_cdma(u32 block, u16 flags);
extern u16 GLOB_LLD_Write_Page_Main_cdma(u8 *data,
u32 block, u16 page, u16 count);
extern u16 GLOB_LLD_Read_Page_Main_cdma(u8 *data,
u32 block, u16 page, u16 count, u16 flags);
extern u16 GLOB_LLD_Write_Page_Main_Spare_cdma(u8 *data,
u32 block, u16 page, u16 count, u16 flags);
extern u16 GLOB_LLD_Read_Page_Main_Spare_cdma(u8 *data,
u32 block, u16 page, u16 count);
#define LLD_CMD_FLAG_ORDER_BEFORE_REST		(0x1)
#define LLD_CMD_FLAG_MODE_CDMA			(0x8)
