#define __MTD_ABI_H__
struct erase_info_user ;
struct erase_info_user64 ;
struct mtd_oob_buf ;
struct mtd_oob_buf64 ;
#define MTD_ABSENT		0
#define MTD_RAM			1
#define MTD_ROM			2
#define MTD_NORFLASH		3
#define MTD_NANDFLASH		4
#define MTD_DATAFLASH		6
#define MTD_UBIVOLUME		7
#define MTD_MLCNANDFLASH	8
#define MTD_WRITEABLE		0x400
#define MTD_BIT_WRITEABLE	0x800
#define MTD_NO_ERASE		0x1000
#define MTD_POWERUP_LOCK	0x2000
#define MTD_CAP_ROM		0
#define MTD_CAP_RAM		(MTD_WRITEABLE | MTD_BIT_WRITEABLE | MTD_NO_ERASE)
#define MTD_CAP_NORFLASH	(MTD_WRITEABLE | MTD_BIT_WRITEABLE)
#define MTD_CAP_NANDFLASH	(MTD_WRITEABLE)
#define MTD_NANDECC_OFF		0
#define MTD_NANDECC_PLACE	1
#define MTD_NANDECC_AUTOPLACE	2
#define MTD_NANDECC_PLACEONLY	3
#define MTD_NANDECC_AUTOPL_USR 	4
#define MTD_OTP_OFF		0
#define MTD_OTP_FACTORY		1
#define MTD_OTP_USER		2
struct mtd_info_user ;
struct region_info_user ;
struct otp_info ;
#define MEMGETINFO		_IOR('M', 1, struct mtd_info_user)
#define MEMERASE		_IOW('M', 2, struct erase_info_user)
#define MEMWRITEOOB		_IOWR('M', 3, struct mtd_oob_buf)
#define MEMREADOOB		_IOWR('M', 4, struct mtd_oob_buf)
#define MEMLOCK			_IOW('M', 5, struct erase_info_user)
#define MEMUNLOCK		_IOW('M', 6, struct erase_info_user)
#define MEMGETREGIONCOUNT	_IOR('M', 7, int)
#define MEMGETREGIONINFO	_IOWR('M', 8, struct region_info_user)
#define MEMSETOOBSEL		_IOW('M', 9, struct nand_oobinfo)
#define MEMGETOOBSEL		_IOR('M', 10, struct nand_oobinfo)
#define MEMGETBADBLOCK		_IOW('M', 11, __kernel_loff_t)
#define MEMSETBADBLOCK		_IOW('M', 12, __kernel_loff_t)
#define OTPSELECT		_IOR('M', 13, int)
#define OTPGETREGIONCOUNT	_IOW('M', 14, int)
#define OTPGETREGIONINFO	_IOW('M', 15, struct otp_info)
#define OTPLOCK			_IOR('M', 16, struct otp_info)
#define ECCGETLAYOUT		_IOR('M', 17, struct nand_ecclayout_user)
#define ECCGETSTATS		_IOR('M', 18, struct mtd_ecc_stats)
#define MTDFILEMODE		_IO('M', 19)
#define MEMERASE64		_IOW('M', 20, struct erase_info_user64)
#define MEMWRITEOOB64		_IOWR('M', 21, struct mtd_oob_buf64)
#define MEMREADOOB64		_IOWR('M', 22, struct mtd_oob_buf64)
#define MEMISLOCKED		_IOR('M', 23, struct erase_info_user)
struct nand_oobinfo ;
struct nand_oobfree ;
#define MTD_MAX_OOBFREE_ENTRIES	8
#define MTD_MAX_ECCPOS_ENTRIES	64
struct nand_ecclayout_user ;
struct mtd_ecc_stats ;
enum mtd_file_modes ;
