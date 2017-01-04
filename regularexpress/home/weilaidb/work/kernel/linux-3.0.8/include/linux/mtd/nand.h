#define __LINUX_MTD_NAND_H
struct mtd_info;
struct nand_flash_dev;
extern int nand_scan(struct mtd_info *mtd, int max_chips);
extern int nand_scan_ident(struct mtd_info *mtd, int max_chips,
struct nand_flash_dev *table);
extern int nand_scan_tail(struct mtd_info *mtd);
extern void nand_release(struct mtd_info *mtd);
extern void nand_wait_ready(struct mtd_info *mtd);
extern int nand_lock(struct mtd_info *mtd, loff_t ofs, uint64_t len);
extern int nand_unlock(struct mtd_info *mtd, loff_t ofs, uint64_t len);
#define NAND_MAX_CHIPS		8
#define NAND_MAX_OOBSIZE	576
#define NAND_MAX_PAGESIZE	8192
#define NAND_NCE		0x01
#define NAND_CLE		0x02
#define NAND_ALE		0x04
#define NAND_CTRL_CLE		(NAND_NCE | NAND_CLE)
#define NAND_CTRL_ALE		(NAND_NCE | NAND_ALE)
#define NAND_CTRL_CHANGE	0x80
#define NAND_CMD_READ0		0
#define NAND_CMD_READ1		1
#define NAND_CMD_RNDOUT		5
#define NAND_CMD_PAGEPROG	0x10
#define NAND_CMD_READOOB	0x50
#define NAND_CMD_ERASE1		0x60
#define NAND_CMD_STATUS		0x70
#define NAND_CMD_STATUS_MULTI	0x71
#define NAND_CMD_SEQIN		0x80
#define NAND_CMD_RNDIN		0x85
#define NAND_CMD_READID		0x90
#define NAND_CMD_ERASE2		0xd0
#define NAND_CMD_PARAM		0xec
#define NAND_CMD_RESET		0xff
#define NAND_CMD_LOCK		0x2a
#define NAND_CMD_UNLOCK1	0x23
#define NAND_CMD_UNLOCK2	0x24
#define NAND_CMD_READSTART	0x30
#define NAND_CMD_RNDOUTSTART	0xE0
#define NAND_CMD_CACHEDPROG	0x15
#define NAND_CMD_DEPLETE1	0x100
#define NAND_CMD_DEPLETE2	0x38
#define NAND_CMD_STATUS_MULTI	0x71
#define NAND_CMD_STATUS_ERROR	0x72
#define NAND_CMD_STATUS_ERROR0	0x73
#define NAND_CMD_STATUS_ERROR1	0x74
#define NAND_CMD_STATUS_ERROR2	0x75
#define NAND_CMD_STATUS_ERROR3	0x76
#define NAND_CMD_STATUS_RESET	0x7f
#define NAND_CMD_STATUS_CLEAR	0xff
#define NAND_CMD_NONE		-1
#define NAND_STATUS_FAIL	0x01
#define NAND_STATUS_FAIL_N1	0x02
#define NAND_STATUS_TRUE_READY	0x20
#define NAND_STATUS_READY	0x40
#define NAND_STATUS_WP		0x80
typedef enum  nand_ecc_modes_t;
#define NAND_ECC_READ		0
#define NAND_ECC_WRITE		1
#define NAND_ECC_READSYN	2
#define NAND_GET_DEVICE		0x80
#define NAND_NO_AUTOINCR	0x00000001
#define NAND_BUSWIDTH_16	0x00000002
#define NAND_NO_PADDING		0x00000004
#define NAND_CACHEPRG		0x00000008
#define NAND_COPYBACK		0x00000010
#define NAND_IS_AND		0x00000020
#define NAND_4PAGE_ARRAY	0x00000040
#define BBT_AUTO_REFRESH	0x00000080
#define NAND_NO_READRDY		0x00000100
#define NAND_NO_SUBPAGE_WRITE	0x00000200
#define NAND_BROKEN_XD		0x00000400
#define NAND_ROM		0x00000800
#define NAND_SAMSUNG_LP_OPTIONS \
(NAND_NO_PADDING | NAND_CACHEPRG | NAND_COPYBACK)
#define NAND_CANAUTOINCR(chip) (!(chip->options & NAND_NO_AUTOINCR))
#define NAND_MUST_PAD(chip) (!(chip->options & NAND_NO_PADDING))
#define NAND_HAS_CACHEPROG(chip) ((chip->options & NAND_CACHEPRG))
#define NAND_HAS_COPYBACK(chip) ((chip->options & NAND_COPYBACK))
#define NAND_SUBPAGE_READ(chip) ((chip->ecc.mode == NAND_ECC_SOFT) \
&& (chip->page_shift > 9))
#define NAND_CHIPOPTIONS_MSK	(0x0000ffff & ~NAND_NO_AUTOINCR)
#define NAND_USE_FLASH_BBT	0x00010000
#define NAND_SKIP_BBTSCAN	0x00020000
#define NAND_OWN_BUFFERS	0x00040000
#define NAND_SCAN_SILENT_NODEV	0x00080000
#define NAND_USE_FLASH_BBT_NO_OOB	0x00800000
#define NAND_CREATE_EMPTY_BBT		0x01000000
#define NAND_CONTROLLER_ALLOC	0x80000000
#define NAND_CI_CHIPNR_MSK	0x03
#define NAND_CI_CELLTYPE_MSK	0x0C
struct nand_chip;
struct nand_onfi_params  __attribute__((packed));
#define ONFI_CRC_BASE	0x4F4E
struct nand_hw_control ;
struct nand_ecc_ctrl ;
struct nand_buffers ;
struct nand_chip ;
#define NAND_MFR_TOSHIBA	0x98
#define NAND_MFR_SAMSUNG	0xec
#define NAND_MFR_FUJITSU	0x04
#define NAND_MFR_NATIONAL	0x8f
#define NAND_MFR_RENESAS	0x07
#define NAND_MFR_STMICRO	0x20
#define NAND_MFR_HYNIX		0xad
#define NAND_MFR_MICRON		0x2c
#define NAND_MFR_AMD		0x01
struct nand_flash_dev ;
struct nand_manufacturers ;
extern struct nand_flash_dev nand_flash_ids[];
extern struct nand_manufacturers nand_manuf_ids[];
extern int nand_scan_bbt(struct mtd_info *mtd, struct nand_bbt_descr *bd);
extern int nand_update_bbt(struct mtd_info *mtd, loff_t offs);
extern int nand_default_bbt(struct mtd_info *mtd);
extern int nand_isbad_bbt(struct mtd_info *mtd, loff_t offs, int allowbbt);
extern int nand_erase_nand(struct mtd_info *mtd, struct erase_info *instr,
int allowbbt);
extern int nand_do_read(struct mtd_info *mtd, loff_t from, size_t len,
size_t *retlen, uint8_t *buf);
struct platform_nand_chip ;
struct platform_device;
struct platform_nand_ctrl ;
struct platform_nand_data ;
static inline
struct platform_nand_chip *get_platform_nandchip(struct mtd_info *mtd)
