MODULE_LICENSE("GPL");
#define NAND_DEFAULT_TIMINGS	-1
static int onfi_timing_mode = NAND_DEFAULT_TIMINGS;
module_param(onfi_timing_mode, int, S_IRUGO);
MODULE_PARM_DESC(onfi_timing_mode, "Overrides default ONFI setting."
" -1 indicates use default timings");
#define DENALI_NAND_NAME    "denali-nand"
#define DENALI_IRQ_ALL	(INTR_STATUS__DMA_CMD_COMP | \
INTR_STATUS__ECC_TRANSACTION_DONE | \
INTR_STATUS__ECC_ERR | \
INTR_STATUS__PROGRAM_FAIL | \
INTR_STATUS__LOAD_COMP | \
INTR_STATUS__PROGRAM_COMP | \
INTR_STATUS__TIME_OUT | \
INTR_STATUS__ERASE_FAIL | \
INTR_STATUS__RST_COMP | \
INTR_STATUS__ERASE_COMP)
#define CHIP_SELECT_INVALID	-1
#define SUPPORT_8BITECC		1
#define CEIL_DIV(X, Y) (((X)%(Y)) ? ((X)/(Y)+1) : ((X)/(Y)))
#define mtd_to_denali(m) container_of(m, struct denali_nand_info, mtd)
#define SPARE_ACCESS		0x41
#define MAIN_ACCESS		0x42
#define MAIN_SPARE_ACCESS	0x43
#define DENALI_READ	0
#define DENALI_WRITE	0x100
#define COMMAND_CYCLE	0
#define ADDR_CYCLE	1
#define STATUS_CYCLE	2
#define BANK(x) ((x) << 24)
static const struct pci_device_id denali_pci_ids[] = ;
static void clear_interrupts(struct denali_nand_info *denali);
static uint32_t wait_for_irq(struct denali_nand_info *denali,
uint32_t irq_mask);
static void denali_irq_enable(struct denali_nand_info *denali,
uint32_t int_mask);
static uint32_t read_interrupt_status(struct denali_nand_info *denali);
static void index_addr(struct denali_nand_info *denali,
uint32_t address, uint32_t data)
static void index_addr_read_data(struct denali_nand_info *denali,
uint32_t address, uint32_t *pdata)
static void reset_buf(struct denali_nand_info *denali)
static void write_byte_to_buf(struct denali_nand_info *denali, uint8_t byte)
static void read_status(struct denali_nand_info *denali)
static void reset_bank(struct denali_nand_info *denali)
static uint16_t denali_nand_reset(struct denali_nand_info *denali)
static void nand_onfi_timing_set(struct denali_nand_info *denali,
uint16_t mode)
static uint16_t get_onfi_nand_para(struct denali_nand_info *denali)
static void get_samsung_nand_para(struct denali_nand_info *denali,
uint8_t device_id)
static void get_toshiba_nand_para(struct denali_nand_info *denali)
static void get_hynix_nand_para(struct denali_nand_info *denali,
uint8_t device_id)
static void find_valid_banks(struct denali_nand_info *denali)
static void detect_max_banks(struct denali_nand_info *denali)
static void detect_partition_feature(struct denali_nand_info *denali)
static uint16_t denali_nand_timing_set(struct denali_nand_info *denali)
static void denali_set_intr_modes(struct denali_nand_info *denali,
uint16_t INT_ENABLE)
static inline bool is_flash_bank_valid(int flash_bank)
static void denali_irq_init(struct denali_nand_info *denali)
static void denali_irq_cleanup(int irqnum, struct denali_nand_info *denali)
static void denali_irq_enable(struct denali_nand_info *denali,
uint32_t int_mask)
static inline uint32_t denali_irq_detected(struct denali_nand_info *denali)
static inline void clear_interrupt(struct denali_nand_info *denali,
uint32_t irq_mask)
static void clear_interrupts(struct denali_nand_info *denali)
static uint32_t read_interrupt_status(struct denali_nand_info *denali)
static irqreturn_t denali_isr(int irq, void *dev_id)
#define BANK(x) ((x) << 24)
static uint32_t wait_for_irq(struct denali_nand_info *denali, uint32_t irq_mask)
static void setup_ecc_for_xfer(struct denali_nand_info *denali, bool ecc_en,
bool transfer_spare)
static int denali_send_pipeline_cmd(struct denali_nand_info *denali,
bool ecc_en,
bool transfer_spare,
int access_type,
int op)
static int write_data_to_flash_mem(struct denali_nand_info *denali,
const uint8_t *buf,
int len)
static int read_data_from_flash_mem(struct denali_nand_info *denali,
uint8_t *buf,
int len)
static int write_oob_data(struct mtd_info *mtd, uint8_t *buf, int page)
static void read_oob_data(struct mtd_info *mtd, uint8_t *buf, int page)
bool is_erased(uint8_t *buf, int len)
#define ECC_SECTOR_SIZE 512
#define ECC_SECTOR(x)	(((x) & ECC_ERROR_ADDRESS__SECTOR_NR) >> 12)
#define ECC_BYTE(x)	(((x) & ECC_ERROR_ADDRESS__OFFSET))
#define ECC_CORRECTION_VALUE(x) ((x) & ERR_CORRECTION_INFO__BYTEMASK)
#define ECC_ERROR_CORRECTABLE(x) (!((x) & ERR_CORRECTION_INFO__ERROR_TYPE))
#define ECC_ERR_DEVICE(x)	(((x) & ERR_CORRECTION_INFO__DEVICE_NR) >> 8)
#define ECC_LAST_ERR(x)		((x) & ERR_CORRECTION_INFO__LAST_ERR_INFO)
static bool handle_ecc(struct denali_nand_info *denali, uint8_t *buf,
uint32_t irq_status)
static void denali_enable_dma(struct denali_nand_info *denali, bool en)
static void denali_setup_dma(struct denali_nand_info *denali, int op)
static void write_page(struct mtd_info *mtd, struct nand_chip *chip,
const uint8_t *buf, bool raw_xfer)
static void denali_write_page(struct mtd_info *mtd, struct nand_chip *chip,
const uint8_t *buf)
static void denali_write_page_raw(struct mtd_info *mtd, struct nand_chip *chip,
const uint8_t *buf)
static int denali_write_oob(struct mtd_info *mtd, struct nand_chip *chip,
int page)
static int denali_read_oob(struct mtd_info *mtd, struct nand_chip *chip,
int page, int sndcmd)
static int denali_read_page(struct mtd_info *mtd, struct nand_chip *chip,
uint8_t *buf, int page)
static int denali_read_page_raw(struct mtd_info *mtd, struct nand_chip *chip,
uint8_t *buf, int page)
static uint8_t denali_read_byte(struct mtd_info *mtd)
static void denali_select_chip(struct mtd_info *mtd, int chip)
static int denali_waitfunc(struct mtd_info *mtd, struct nand_chip *chip)
static void denali_erase(struct mtd_info *mtd, int page)
static void denali_cmdfunc(struct mtd_info *mtd, unsigned int cmd, int col,
int page)
static int denali_ecc_calculate(struct mtd_info *mtd, const uint8_t *data,
uint8_t *ecc_code)
static int denali_ecc_correct(struct mtd_info *mtd, uint8_t *data,
uint8_t *read_ecc, uint8_t *calc_ecc)
static void denali_ecc_hwctl(struct mtd_info *mtd, int mode)
static void denali_hw_init(struct denali_nand_info *denali)
#define ECC_8BITS	14
static struct nand_ecclayout nand_8bit_oob = ;
#define ECC_15BITS	26
static struct nand_ecclayout nand_15bit_oob = ;
static uint8_t bbt_pattern[] = ;
static uint8_t mirror_pattern[] = ;
static struct nand_bbt_descr bbt_main_descr = ;
static struct nand_bbt_descr bbt_mirror_descr = ;
void denali_drv_init(struct denali_nand_info *denali)
static int denali_pci_probe(struct pci_dev *dev, const struct pci_device_id *id)
static void denali_pci_remove(struct pci_dev *dev)
MODULE_DEVICE_TABLE(pci, denali_pci_ids);
static struct pci_driver denali_pci_driver = ;
static int __devinit denali_init(void)
static void __devexit denali_exit(void)
module_init(denali_init);
module_exit(denali_exit);
