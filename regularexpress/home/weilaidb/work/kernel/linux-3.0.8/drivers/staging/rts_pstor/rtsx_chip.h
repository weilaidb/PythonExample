#define __REALTEK_RTSX_CHIP_H
#define SUPPORT_CPRM
#define SUPPORT_OCP
#define SUPPORT_SDIO_ASPM
#define SUPPORT_MAGIC_GATE
#define SUPPORT_MSXC
#define SUPPORT_SD_LOCK
#define HW_AUTO_SWITCH_SD_BUS
#define HW_INT_WRITE_CLR
#define MG_SET_ICV_SLOW
#define MS_SAMPLE_INT_ERR
#define READ_BYTES_WAIT_INT
#define XC_POWERCLASS
#define SUPPORT_PCGL_1P18
#define REGULAR_BLINK
#define LED_BLINK_SPEED		5
#define LED_TOGGLE_INTERVAL	6
#define	GPIO_TOGGLE_THRESHOLD   1024
#define LED_GPIO		0
#define POLLING_INTERVAL	30
#define TRACE_ITEM_CNT		64
#define STATUS_SUCCESS		0
#define STATUS_FAIL		1
#define STATUS_TIMEDOUT		2
#define STATUS_NOMEM		3
#define STATUS_READ_FAIL	4
#define STATUS_WRITE_FAIL	5
#define STATUS_ERROR		10
#define PM_S1			1
#define PM_S3			3
#define TRANSPORT_GOOD	   	0
#define TRANSPORT_FAILED  	1
#define TRANSPORT_NO_SENSE 	2
#define TRANSPORT_ERROR   	3
#define STOP_MEDIUM			0x00
#define MAKE_MEDIUM_READY		0x01
#define UNLOAD_MEDIUM			0x02
#define LOAD_MEDIUM			0x03
#define QULIFIRE                0x00
#define AENC_FNC                0x00
#define TRML_IOP                0x00
#define REL_ADR                 0x00
#define WBUS_32                 0x00
#define WBUS_16                 0x00
#define SYNC                    0x00
#define LINKED                  0x00
#define CMD_QUE                 0x00
#define SFT_RE                  0x00
#define VEN_ID_LEN              8
#define PRDCT_ID_LEN            16
#define PRDCT_REV_LEN           4
#define RTSX_FLIDX_TRANS_ACTIVE		18
#define RTSX_FLIDX_ABORTING		20
#define RTSX_FLIDX_DISCONNECTING	21
#define ABORTING_OR_DISCONNECTING	((1UL << US_FLIDX_ABORTING) | \
(1UL << US_FLIDX_DISCONNECTING))
#define RTSX_FLIDX_RESETTING		22
#define RTSX_FLIDX_TIMED_OUT		23
#define DRCT_ACCESS_DEV         0x00
#define RMB_DISC                0x80
#define ANSI_SCSI2              0x02
#define SCSI                    0x00
#define	WRITE_PROTECTED_MEDIA 0x07
#define ILI                     0x20
#define NO_SENSE                0x00
#define RECOVER_ERR             0x01
#define NOT_READY               0x02
#define MEDIA_ERR               0x03
#define HARDWARE_ERR            0x04
#define ILGAL_REQ               0x05
#define UNIT_ATTENTION          0x06
#define DAT_PRTCT               0x07
#define BLNC_CHK                0x08
#define CPY_ABRT                0x0a
#define ABRT_CMD                0x0b
#define EQUAL                   0x0c
#define VLM_OVRFLW              0x0d
#define MISCMP                  0x0e
#define READ_ERR                -1
#define WRITE_ERR               -2
#define	FIRST_RESET		0x01
#define	USED_EXIST		0x02
#define SENSE_VALID             0x80
#define SENSE_INVALID           0x00
#define CUR_ERR                 0x70
#define DEF_ERR                 0x71
#define SNSKEYINFO_LEN          3
#define SKSV                    0x80
#define CDB_ILLEGAL             0x40
#define DAT_ILLEGAL             0x00
#define BPV                     0x08
#define BIT_ILLEGAL0            0
#define BIT_ILLEGAL1            1
#define BIT_ILLEGAL2            2
#define BIT_ILLEGAL3            3
#define BIT_ILLEGAL4            4
#define BIT_ILLEGAL5            5
#define BIT_ILLEGAL6            6
#define BIT_ILLEGAL7            7
#define ASC_NO_INFO             0x00
#define ASC_MISCMP              0x1d
#define ASC_INVLD_CDB           0x24
#define ASC_INVLD_PARA          0x26
#define ASC_LU_NOT_READY	0x04
#define ASC_WRITE_ERR           0x0c
#define ASC_READ_ERR            0x11
#define ASC_LOAD_EJCT_ERR       0x53
#define	ASC_MEDIA_NOT_PRESENT	0x3A
#define	ASC_MEDIA_CHANGED	0x28
#define	ASC_MEDIA_IN_PROCESS	0x04
#define	ASC_WRITE_PROTECT	0x27
#define ASC_LUN_NOT_SUPPORTED	0x25
#define ASCQ_NO_INFO            0x00
#define	ASCQ_MEDIA_IN_PROCESS	0x01
#define ASCQ_MISCMP             0x00
#define ASCQ_INVLD_CDB          0x00
#define ASCQ_INVLD_PARA         0x02
#define ASCQ_LU_NOT_READY	0x02
#define ASCQ_WRITE_ERR          0x02
#define ASCQ_READ_ERR           0x00
#define ASCQ_LOAD_EJCT_ERR      0x00
#define	ASCQ_WRITE_PROTECT	0x00
struct sense_data_t ;
#define RTSX_HCBAR		0x00
#define RTSX_HCBCTLR		0x04
#define RTSX_HDBAR		0x08
#define RTSX_HDBCTLR		0x0C
#define RTSX_HAIMR		0x10
#define RTSX_BIPR		0x14
#define RTSX_BIER		0x18
#define STOP_CMD		(0x01 << 28)
#define SDMA_MODE		0x00
#define ADMA_MODE		(0x02 << 26)
#define STOP_DMA		(0x01 << 28)
#define TRIG_DMA		(0x01 << 31)
#define CMD_DONE_INT		(1 << 31)
#define DATA_DONE_INT		(1 << 30)
#define TRANS_OK_INT		(1 << 29)
#define TRANS_FAIL_INT		(1 << 28)
#define XD_INT			(1 << 27)
#define MS_INT			(1 << 26)
#define SD_INT			(1 << 25)
#define GPIO0_INT		(1 << 24)
#define OC_INT			(1 << 23)
#define SD_WRITE_PROTECT	(1 << 19)
#define XD_EXIST		(1 << 18)
#define MS_EXIST		(1 << 17)
#define SD_EXIST		(1 << 16)
#define DELINK_INT		GPIO0_INT
#define MS_OC_INT		(1 << 23)
#define SD_OC_INT		(1 << 22)
#define CARD_INT		(XD_INT | MS_INT | SD_INT)
#define NEED_COMPLETE_INT	(DATA_DONE_INT | TRANS_OK_INT | TRANS_FAIL_INT)
#define RTSX_INT		(CMD_DONE_INT | NEED_COMPLETE_INT | CARD_INT | GPIO0_INT | OC_INT)
#define CARD_EXIST		(XD_EXIST | MS_EXIST | SD_EXIST)
#define CMD_DONE_INT_EN		(1 << 31)
#define DATA_DONE_INT_EN	(1 << 30)
#define TRANS_OK_INT_EN		(1 << 29)
#define TRANS_FAIL_INT_EN	(1 << 28)
#define XD_INT_EN		(1 << 27)
#define MS_INT_EN		(1 << 26)
#define SD_INT_EN		(1 << 25)
#define GPIO0_INT_EN		(1 << 24)
#define OC_INT_EN		(1 << 23)
#define DELINK_INT_EN		GPIO0_INT_EN
#define MS_OC_INT_EN		(1 << 23)
#define SD_OC_INT_EN		(1 << 22)
#define READ_REG_CMD		0
#define WRITE_REG_CMD		1
#define CHECK_REG_CMD		2
#define HOST_TO_DEVICE		0
#define DEVICE_TO_HOST		1
#define RTSX_RESV_BUF_LEN	4096
#define HOST_CMDS_BUF_LEN	1024
#define HOST_SG_TBL_BUF_LEN	(RTSX_RESV_BUF_LEN - HOST_CMDS_BUF_LEN)
#define SD_NR		2
#define MS_NR		3
#define XD_NR		4
#define SPI_NR		7
#define SD_CARD		(1 << SD_NR)
#define MS_CARD		(1 << MS_NR)
#define XD_CARD		(1 << XD_NR)
#define SPI_CARD	(1 << SPI_NR)
#define MAX_ALLOWED_LUN_CNT	8
#define XD_FREE_TABLE_CNT	1200
#define MS_FREE_TABLE_CNT	512
#define SET_BIT(data, idx)	((data) |= 1 << (idx))
#define CLR_BIT(data, idx)	((data) &= ~(1 << (idx)))
#define CHK_BIT(data, idx)	((data) & (1 << (idx)))
#define SG_INT			0x04
#define SG_END			0x02
#define SG_VALID		0x01
#define SG_NO_OP		0x00
#define SG_TRANS_DATA		(0x02 << 4)
#define SG_LINK_DESC		(0x03 << 4)
struct rtsx_chip;
typedef int (*card_rw_func)(struct scsi_cmnd *srb, struct rtsx_chip *chip, u32 sec_addr, u16 sec_cnt);
enum card_clock	;
enum RTSX_STAT	;
enum IC_VER	;
#define MAX_RESET_CNT		3
#define MAX_DEFECTIVE_BLOCK     10
struct zone_entry ;
#define TYPE_SD			0x0000
#define TYPE_MMC		0x0001
#define SD_HS			0x0100
#define SD_SDR50		0x0200
#define SD_DDR50		0x0400
#define SD_SDR104		0x0800
#define SD_HCXC			0x1000
#define MMC_26M			0x0100
#define MMC_52M			0x0200
#define MMC_4BIT		0x0400
#define MMC_8BIT		0x0800
#define MMC_SECTOR_MODE		0x1000
#define MMC_DDR52		0x2000
#define CHK_SD(sd_card)			(((sd_card)->sd_type & 0xFF) == TYPE_SD)
#define CHK_SD_HS(sd_card)		(CHK_SD(sd_card) && ((sd_card)->sd_type & SD_HS))
#define CHK_SD_SDR50(sd_card)		(CHK_SD(sd_card) && ((sd_card)->sd_type & SD_SDR50))
#define CHK_SD_DDR50(sd_card)		(CHK_SD(sd_card) && ((sd_card)->sd_type & SD_DDR50))
#define CHK_SD_SDR104(sd_card)		(CHK_SD(sd_card) && ((sd_card)->sd_type & SD_SDR104))
#define CHK_SD_HCXC(sd_card)		(CHK_SD(sd_card) && ((sd_card)->sd_type & SD_HCXC))
#define CHK_SD_HC(sd_card)		(CHK_SD_HCXC(sd_card) && ((sd_card)->capacity <= 0x4000000))
#define CHK_SD_XC(sd_card)		(CHK_SD_HCXC(sd_card) && ((sd_card)->capacity > 0x4000000))
#define CHK_SD30_SPEED(sd_card)		(CHK_SD_SDR50(sd_card) || CHK_SD_DDR50(sd_card) || CHK_SD_SDR104(sd_card))
#define SET_SD(sd_card)			((sd_card)->sd_type = TYPE_SD)
#define SET_SD_HS(sd_card)		((sd_card)->sd_type |= SD_HS)
#define SET_SD_SDR50(sd_card)		((sd_card)->sd_type |= SD_SDR50)
#define SET_SD_DDR50(sd_card)		((sd_card)->sd_type |= SD_DDR50)
#define SET_SD_SDR104(sd_card)		((sd_card)->sd_type |= SD_SDR104)
#define SET_SD_HCXC(sd_card)		((sd_card)->sd_type |= SD_HCXC)
#define CLR_SD_HS(sd_card)		((sd_card)->sd_type &= ~SD_HS)
#define CLR_SD_SDR50(sd_card)		((sd_card)->sd_type &= ~SD_SDR50)
#define CLR_SD_DDR50(sd_card)		((sd_card)->sd_type &= ~SD_DDR50)
#define CLR_SD_SDR104(sd_card)		((sd_card)->sd_type &= ~SD_SDR104)
#define CLR_SD_HCXC(sd_card)		((sd_card)->sd_type &= ~SD_HCXC)
#define CHK_MMC(sd_card)		(((sd_card)->sd_type & 0xFF) == TYPE_MMC)
#define CHK_MMC_26M(sd_card)		(CHK_MMC(sd_card) && ((sd_card)->sd_type & MMC_26M))
#define CHK_MMC_52M(sd_card)		(CHK_MMC(sd_card) && ((sd_card)->sd_type & MMC_52M))
#define CHK_MMC_4BIT(sd_card)		(CHK_MMC(sd_card) && ((sd_card)->sd_type & MMC_4BIT))
#define CHK_MMC_8BIT(sd_card)		(CHK_MMC(sd_card) && ((sd_card)->sd_type & MMC_8BIT))
#define CHK_MMC_SECTOR_MODE(sd_card)	(CHK_MMC(sd_card) && ((sd_card)->sd_type & MMC_SECTOR_MODE))
#define CHK_MMC_DDR52(sd_card)		(CHK_MMC(sd_card) && ((sd_card)->sd_type & MMC_DDR52))
#define SET_MMC(sd_card)		((sd_card)->sd_type = TYPE_MMC)
#define SET_MMC_26M(sd_card)		((sd_card)->sd_type |= MMC_26M)
#define SET_MMC_52M(sd_card)		((sd_card)->sd_type |= MMC_52M)
#define SET_MMC_4BIT(sd_card)		((sd_card)->sd_type |= MMC_4BIT)
#define SET_MMC_8BIT(sd_card)		((sd_card)->sd_type |= MMC_8BIT)
#define SET_MMC_SECTOR_MODE(sd_card)	((sd_card)->sd_type |= MMC_SECTOR_MODE)
#define SET_MMC_DDR52(sd_card)		((sd_card)->sd_type |= MMC_DDR52)
#define CLR_MMC_26M(sd_card)		((sd_card)->sd_type &= ~MMC_26M)
#define CLR_MMC_52M(sd_card)		((sd_card)->sd_type &= ~MMC_52M)
#define CLR_MMC_4BIT(sd_card)		((sd_card)->sd_type &= ~MMC_4BIT)
#define CLR_MMC_8BIT(sd_card)		((sd_card)->sd_type &= ~MMC_8BIT)
#define CLR_MMC_SECTOR_MODE(sd_card)	((sd_card)->sd_type &= ~MMC_SECTOR_MODE)
#define CLR_MMC_DDR52(sd_card)		((sd_card)->sd_type &= ~MMC_DDR52)
#define CHK_MMC_HS(sd_card)		(CHK_MMC_52M(sd_card) && CHK_MMC_26M(sd_card))
#define CLR_MMC_HS(sd_card)			\
do  while (0)
#define SD_SUPPORT_CLASS_TEN		0x01
#define SD_SUPPORT_1V8			0x02
#define SD_SET_CLASS_TEN(sd_card)	((sd_card)->sd_setting |= SD_SUPPORT_CLASS_TEN)
#define SD_CHK_CLASS_TEN(sd_card)	((sd_card)->sd_setting & SD_SUPPORT_CLASS_TEN)
#define SD_CLR_CLASS_TEN(sd_card)	((sd_card)->sd_setting &= ~SD_SUPPORT_CLASS_TEN)
#define SD_SET_1V8(sd_card)		((sd_card)->sd_setting |= SD_SUPPORT_1V8)
#define SD_CHK_1V8(sd_card)		((sd_card)->sd_setting & SD_SUPPORT_1V8)
#define SD_CLR_1V8(sd_card)		((sd_card)->sd_setting &= ~SD_SUPPORT_1V8)
struct sd_info ;
struct xd_delay_write_tag ;
struct xd_info ;
#define MODE_512_SEQ		0x01
#define MODE_2K_SEQ		0x02
#define TYPE_MS			0x0000
#define TYPE_MSPRO		0x0001
#define MS_4BIT			0x0100
#define MS_8BIT			0x0200
#define MS_HG			0x0400
#define MS_XC			0x0800
#define HG8BIT			(MS_HG | MS_8BIT)
#define CHK_MSPRO(ms_card)	(((ms_card)->ms_type & 0xFF) == TYPE_MSPRO)
#define CHK_HG8BIT(ms_card)	(CHK_MSPRO(ms_card) && (((ms_card)->ms_type & HG8BIT) == HG8BIT))
#define CHK_MSXC(ms_card)	(CHK_MSPRO(ms_card) && ((ms_card)->ms_type & MS_XC))
#define CHK_MSHG(ms_card)	(CHK_MSPRO(ms_card) && ((ms_card)->ms_type & MS_HG))
#define CHK_MS8BIT(ms_card)	(((ms_card)->ms_type & MS_8BIT))
#define CHK_MS4BIT(ms_card)	(((ms_card)->ms_type & MS_4BIT))
struct ms_delay_write_tag ;
struct ms_info ;
struct spi_info ;
struct trace_msg_t ;
#define DEFAULT_SINGLE		0
#define SD_MS_2LUN		1
#define SD_MS_1LUN		2
#define LAST_LUN_MODE		2
#define QFN		0
#define LQFP		1
#define SD_PUSH_POINT_CTL_MASK		0x03
#define SD_PUSH_POINT_DELAY		0x01
#define SD_PUSH_POINT_AUTO		0x02
#define SD_SAMPLE_POINT_CTL_MASK	0x0C
#define SD_SAMPLE_POINT_DELAY		0x04
#define SD_SAMPLE_POINT_AUTO		0x08
#define SD_DDR_TX_PHASE_SET_BY_USER	0x10
#define MMC_DDR_TX_PHASE_SET_BY_USER	0x20
#define SUPPORT_MMC_DDR_MODE		0x40
#define RESET_MMC_FIRST			0x80
#define SEQ_START_CRITERIA		0x20
#define POWER_CLASS_2_EN		0x02
#define POWER_CLASS_1_EN		0x01
#define MAX_SHOW_CNT			10
#define MAX_RESET_CNT			3
#define SDIO_EXIST			0x01
#define SDIO_IGNORED			0x02
#define CHK_SDIO_EXIST(chip)		((chip)->sdio_func_exist & SDIO_EXIST)
#define SET_SDIO_EXIST(chip)		((chip)->sdio_func_exist |= SDIO_EXIST)
#define CLR_SDIO_EXIST(chip)		((chip)->sdio_func_exist &= ~SDIO_EXIST)
#define CHK_SDIO_IGNORED(chip)		((chip)->sdio_func_exist & SDIO_IGNORED)
#define SET_SDIO_IGNORED(chip)		((chip)->sdio_func_exist |= SDIO_IGNORED)
#define CLR_SDIO_IGNORED(chip)		((chip)->sdio_func_exist &= ~SDIO_IGNORED)
struct rtsx_chip ;
#define rtsx_set_stat(chip, stat)				\
do  while (0)
#define rtsx_get_stat(chip)		((chip)->rtsx_stat)
#define rtsx_chk_stat(chip, stat)	((chip)->rtsx_stat == (stat))
#define RTSX_SET_DELINK(chip)	((chip)->rtsx_flag |= 0x01)
#define RTSX_CLR_DELINK(chip)	((chip)->rtsx_flag &= 0xFE)
#define RTSX_TST_DELINK(chip)	((chip)->rtsx_flag & 0x01)
#define CHECK_PID(chip, pid)		((chip)->product_id == (pid))
#define CHECK_BARO_PKG(chip, pkg)	((chip)->baro_pkg == (pkg))
#define CHECK_LUN_MODE(chip, mode)	((chip)->lun_mode == (mode))
#define SSC_PDCTL		0x01
#define OC_PDCTL		0x02
int rtsx_force_power_on(struct rtsx_chip *chip, u8 ctl);
int rtsx_force_power_down(struct rtsx_chip *chip, u8 ctl);
void rtsx_disable_card_int(struct rtsx_chip *chip);
void rtsx_enable_card_int(struct rtsx_chip *chip);
void rtsx_enable_bus_int(struct rtsx_chip *chip);
void rtsx_disable_bus_int(struct rtsx_chip *chip);
int rtsx_reset_chip(struct rtsx_chip *chip);
int rtsx_init_chip(struct rtsx_chip *chip);
void rtsx_release_chip(struct rtsx_chip *chip);
void rtsx_polling_func(struct rtsx_chip *chip);
void rtsx_undo_delink(struct rtsx_chip *chip);
void rtsx_stop_cmd(struct rtsx_chip *chip, int card);
int rtsx_write_register(struct rtsx_chip *chip, u16 addr, u8 mask, u8 data);
int rtsx_read_register(struct rtsx_chip *chip, u16 addr, u8 *data);
int rtsx_write_cfg_dw(struct rtsx_chip *chip, u8 func_no, u16 addr, u32 mask, u32 val);
int rtsx_read_cfg_dw(struct rtsx_chip *chip, u8 func_no, u16 addr, u32 *val);
int rtsx_write_cfg_seq(struct rtsx_chip *chip, u8 func, u16 addr, u8 *buf, int len);
int rtsx_read_cfg_seq(struct rtsx_chip *chip, u8 func, u16 addr, u8 *buf, int len);
int rtsx_write_phy_register(struct rtsx_chip *chip, u8 addr, u16 val);
int rtsx_read_phy_register(struct rtsx_chip *chip, u8 addr, u16 *val);
int rtsx_read_efuse(struct rtsx_chip *chip, u8 addr, u8 *val);
int rtsx_write_efuse(struct rtsx_chip *chip, u8 addr, u8 val);
int rtsx_clr_phy_reg_bit(struct rtsx_chip *chip, u8 reg, u8 bit);
int rtsx_set_phy_reg_bit(struct rtsx_chip *chip, u8 reg, u8 bit);
int rtsx_check_link_ready(struct rtsx_chip *chip);
void rtsx_enter_ss(struct rtsx_chip *chip);
void rtsx_exit_ss(struct rtsx_chip *chip);
int rtsx_pre_handle_interrupt(struct rtsx_chip *chip);
void rtsx_enter_L1(struct rtsx_chip *chip);
void rtsx_exit_L1(struct rtsx_chip *chip);
void rtsx_do_before_power_down(struct rtsx_chip *chip, int pm_stat);
void rtsx_enable_aspm(struct rtsx_chip *chip);
void rtsx_disable_aspm(struct rtsx_chip *chip);
int rtsx_read_ppbuf(struct rtsx_chip *chip, u8 *buf, int buf_len);
int rtsx_write_ppbuf(struct rtsx_chip *chip, u8 *buf, int buf_len);
int rtsx_check_chip_exist(struct rtsx_chip *chip);
#define RTSX_WRITE_REG(chip, addr, mask, data)					\
do  while (0)
#define RTSX_READ_REG(chip, addr, data)						\
do  while (0)
