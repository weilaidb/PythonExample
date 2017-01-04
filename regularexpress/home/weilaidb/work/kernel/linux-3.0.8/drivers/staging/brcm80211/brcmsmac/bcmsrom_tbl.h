#define	_bcmsrom_tbl_h_
typedef struct  sromvar_t;
#define SRFL_MORE	1
#define	SRFL_NOFFS	2
#define	SRFL_PRHEX	4
#define	SRFL_PRSIGN	8
#define	SRFL_CCODE	0x10
#define	SRFL_ETHADDR	0x20
#define SRFL_LEDDC	0x40
#define SRFL_NOVAR	0x80
static const sromvar_t pci_sromvars[] = ;
static const sromvar_t perpath_pci_sromvars[] = ;
#if !(defined(PHY_TYPE_N) && defined(PHY_TYPE_LP))
#define	PHY_TYPE_N		4
#define	PHY_TYPE_LP		5
#if !defined(PHY_TYPE_NULL)
#define	PHY_TYPE_NULL		0xf
typedef struct  pavars_t;
static const pavars_t pavars[] = ;
typedef struct  povars_t;
static const povars_t povars[] = ;
typedef struct  cis_tuple_t;
#define OTP_RAW		(0xff - 1)
#define OTP_VERS_1	(0xff - 2)
#define OTP_MANFID	(0xff - 3)
#define OTP_RAW1	(0xff - 4)
