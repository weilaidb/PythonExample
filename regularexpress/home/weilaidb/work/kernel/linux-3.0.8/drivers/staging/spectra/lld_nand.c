#define SPECTRA_NAND_NAME    "nd"
#define CEIL_DIV(X, Y) (((X)%(Y)) ? ((X)/(Y)+1) : ((X)/(Y)))
#define MAX_PAGES_PER_RW        128
#define INT_IDLE_STATE                 0
#define INT_READ_PAGE_MAIN    0x01
#define INT_WRITE_PAGE_MAIN    0x02
#define INT_PIPELINE_READ_AHEAD    0x04
#define INT_PIPELINE_WRITE_AHEAD    0x08
#define INT_MULTI_PLANE_READ    0x10
#define INT_MULTI_PLANE_WRITE    0x11
static u32 enable_ecc;
struct mrst_nand_info info;
int totalUsedBanks;
u32 GLOB_valid_banks[LLD_MAX_FLASH_BANKS];
void __iomem *FlashReg;
void __iomem *FlashMem;
u16 conf_parameters[] = ;
u16   NAND_Get_Bad_Block(u32 block)
u16 NAND_Flash_Reset(void)
static void NAND_ONFi_Timing_Mode(u16 mode)
static void index_addr(u32 address, u32 data)
static void index_addr_read_data(u32 address, u32 *pdata)
static void set_ecc_config(void)
static u16 get_onfi_nand_para(void)
static void get_samsung_nand_para(void)
static void get_toshiba_nand_para(void)
static void get_hynix_nand_para(void)
static void find_valid_banks(void)
static void detect_partition_feature(void)
static void dump_device_info(void)
u16 NAND_Read_Device_ID(void)
u16 NAND_UnlockArrayAll(void)
void NAND_LLD_Enable_Disable_Interrupts(u16 INT_ENABLE)
u16 NAND_Erase_Block(u32 block)
static u32 Boundary_Check_Block_Page(u32 block, u16 page,
u16 page_count)
u16 NAND_Read_Page_Spare(u8 *read_data, u32 block, u16 page,
u16 page_count)
u16 NAND_Write_Page_Spare(u8 *write_data, u32 block, u16 page,
u16 page_count)
static void ddma_trans(u8 *data, u64 flash_add,
u32 flash_bank, int op, u32 numPages)
static int check_all_1(u8 *buf)
static int do_ecc_new(unsigned long bank, u8 *buf,
u32 block, u16 page)
u16 NAND_Read_Page_Main_Polling(u8 *read_data,
u32 block, u16 page, u16 page_count)
u16 NAND_Pipeline_Read_Ahead_Polling(u8 *read_data,
u32 block, u16 page, u16 page_count)
u16 NAND_Read_Page_Main(u8 *read_data, u32 block, u16 page,
u16 page_count)
void Conv_Spare_Data_Log2Phy_Format(u8 *data)
void Conv_Spare_Data_Phy2Log_Format(u8 *data)
void Conv_Main_Spare_Data_Log2Phy_Format(u8 *data, u16 page_count)
void Conv_Main_Spare_Data_Phy2Log_Format(u8 *data, u16 page_count)
u16 NAND_Multiplane_Read(u8 *read_data, u32 block, u16 page,
u16 page_count)
u16 NAND_Pipeline_Read_Ahead(u8 *read_data, u32 block,
u16 page, u16 page_count)
u16 NAND_Write_Page_Main(u8 *write_data, u32 block, u16 page,
u16 page_count)
void NAND_ECC_Ctrl(int enable)
u16 NAND_Write_Page_Main_Spare(u8 *write_data, u32 block,
u16 page, u16 page_count)
u16 NAND_Read_Page_Main_Spare(u8 *read_data, u32 block, u16 page,
u16 page_count)
u16 NAND_Pipeline_Write_Ahead(u8 *write_data, u32 block,
u16 page, u16 page_count)
u16 NAND_Multiplane_Write(u8 *write_data, u32 block, u16 page,
u16 page_count)
#if CMD_DMA
static irqreturn_t cdma_isr(int irq, void *dev_id)
static void handle_nand_int_read(struct mrst_nand_info *dev)
static void handle_nand_int_write(struct mrst_nand_info *dev)
static irqreturn_t ddma_isr(int irq, void *dev_id)
static const struct pci_device_id nand_pci_ids[] = ;
static int nand_pci_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void nand_pci_remove(struct pci_dev *dev)
MODULE_DEVICE_TABLE(pci, nand_pci_ids);
static struct pci_driver nand_pci_driver = ;
int NAND_Flash_Init(void)
int nand_release_spectra(void)
