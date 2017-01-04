#define _LLD_NAND_
#define MODE_00    0x00000000
#define MODE_01    0x04000000
#define MODE_10    0x08000000
#define MODE_11    0x0C000000
#define DATA_TRANSFER_MODE              0
#define PROTECTION_PER_BLOCK            1
#define LOAD_WAIT_COUNT                 2
#define PROGRAM_WAIT_COUNT              3
#define ERASE_WAIT_COUNT                4
#define INT_MONITOR_CYCLE_COUNT         5
#define READ_BUSY_PIN_ENABLED           6
#define MULTIPLANE_OPERATION_SUPPORT    7
#define PRE_FETCH_MODE                  8
#define CE_DONT_CARE_SUPPORT            9
#define COPYBACK_SUPPORT                10
#define CACHE_WRITE_SUPPORT             11
#define CACHE_READ_SUPPORT              12
#define NUM_PAGES_IN_BLOCK              13
#define ECC_ENABLE_SELECT               14
#define WRITE_ENABLE_2_READ_ENABLE      15
#define ADDRESS_2_DATA                  16
#define READ_ENABLE_2_WRITE_ENABLE      17
#define TWO_ROW_ADDRESS_CYCLES          18
#define MULTIPLANE_ADDRESS_RESTRICT     19
#define ACC_CLOCKS                      20
#define READ_WRITE_ENABLE_LOW_COUNT     21
#define READ_WRITE_ENABLE_HIGH_COUNT    22
#define ECC_SECTOR_SIZE     512
#define LLD_MAX_FLASH_BANKS     4
struct mrst_nand_info ;
int NAND_Flash_Init(void);
int nand_release_spectra(void);
u16  NAND_Flash_Reset(void);
u16  NAND_Read_Device_ID(void);
u16  NAND_Erase_Block(u32 flash_add);
u16  NAND_Write_Page_Main(u8 *write_data, u32 block, u16 page,
u16 page_count);
u16  NAND_Read_Page_Main(u8 *read_data, u32 block, u16 page,
u16 page_count);
u16  NAND_UnlockArrayAll(void);
u16  NAND_Write_Page_Main_Spare(u8 *write_data, u32 block,
u16 page, u16 page_count);
u16  NAND_Write_Page_Spare(u8 *read_data, u32 block, u16 page,
u16 page_count);
u16  NAND_Read_Page_Main_Spare(u8 *read_data, u32 block, u16 page,
u16 page_count);
u16  NAND_Read_Page_Spare(u8 *read_data, u32 block, u16 page,
u16 page_count);
void NAND_LLD_Enable_Disable_Interrupts(u16 INT_ENABLE);
u16  NAND_Get_Bad_Block(u32 block);
u16  NAND_Pipeline_Read_Ahead(u8 *read_data, u32 block, u16 page,
u16 page_count);
u16  NAND_Pipeline_Write_Ahead(u8 *write_data, u32 block,
u16 page, u16 page_count);
u16  NAND_Multiplane_Read(u8 *read_data, u32 block, u16 page,
u16 page_count);
u16  NAND_Multiplane_Write(u8 *write_data, u32 block, u16 page,
u16 page_count);
void NAND_ECC_Ctrl(int enable);
u16 NAND_Read_Page_Main_Polling(u8 *read_data,
u32 block, u16 page, u16 page_count);
u16 NAND_Pipeline_Read_Ahead_Polling(u8 *read_data,
u32 block, u16 page, u16 page_count);
void Conv_Spare_Data_Log2Phy_Format(u8 *data);
void Conv_Spare_Data_Phy2Log_Format(u8 *data);
void Conv_Main_Spare_Data_Log2Phy_Format(u8 *data, u16 page_count);
void Conv_Main_Spare_Data_Phy2Log_Format(u8 *data, u16 page_count);
extern void __iomem *FlashReg;
extern void __iomem *FlashMem;
extern int totalUsedBanks;
extern u32 GLOB_valid_banks[LLD_MAX_FLASH_BANKS];
