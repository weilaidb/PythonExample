#define __BFIN_SPORT_H__
#define NORM_MODE	0x0
#define TDM_MODE	0x1
#define I2S_MODE	0x2
#define NORM_FORMAT	0x0
#define ALAW_FORMAT	0x2
#define ULAW_FORMAT	0x3
struct sport_config ;
#define SPORT_IOC_MAGIC		'P'
#define SPORT_IOC_CONFIG	_IOWR('P', 0x01, struct sport_config)
#define __BFP(m) u16 m; u16 __pad_##m
struct sport_register ;
#undef __BFP
struct bfin_snd_platform_data ;
#define bfin_read_sport_rx32(base) \
()
#define TSPEN		0x0001
#define ITCLK		0x0002
#define TDTYPE		0x000C
#define DTYPE_NORM	0x0000
#define DTYPE_ULAW	0x0008
#define DTYPE_ALAW	0x000C
#define TLSBIT		0x0010
#define ITFS		0x0200
#define TFSR		0x0400
#define DITFS		0x0800
#define LTFS		0x1000
#define LATFS		0x2000
#define TCKFE		0x4000
#define SLEN		0x001F
#define DP_SLEN(x)	BFIN_DEPOSIT(SLEN, x)
#define EX_SLEN(x)	BFIN_EXTRACT(SLEN, x)
#define TXSE		0x0100
#define TSFSE		0x0200
#define TRFST		0x0400
#define RSPEN		0x0001
#define IRCLK		0x0002
#define RDTYPE		0x000C
#define RLSBIT		0x0010
#define IRFS		0x0200
#define RFSR		0x0400
#define LRFS		0x1000
#define LARFS		0x2000
#define RCKFE		0x4000
#define RXSE		0x0100
#define RSFSE		0x0200
#define RRFST		0x0400
#define RXNE		0x0001
#define RUVF		0x0002
#define ROVF		0x0004
#define TXF		0x0008
#define TUVF		0x0010
#define TOVF		0x0020
#define TXHRE		0x0040
#define SP_WOFF		0x03FF
#define DP_SP_WOFF(x)	BFIN_DEPOSIT(SP_WOFF, x)
#define EX_SP_WOFF(x)	BFIN_EXTRACT(SP_WOFF, x)
#define SP_WSIZE	0xF000
#define DP_SP_WSIZE(x)	BFIN_DEPOSIT(SP_WSIZE, x)
#define EX_SP_WSIZE(x)	BFIN_EXTRACT(SP_WSIZE, x)
#define MCCRM		0x0003
#define REC_BYPASS	0x0000
#define REC_2FROM4	0x0002
#define REC_8FROM16	0x0003
#define MCDTXPE		0x0004
#define MCDRXPE		0x0008
#define MCMEN		0x0010
#define FSDR		0x0080
#define MFD		0xF000
#define DP_MFD(x)	BFIN_DEPOSIT(MFD, x)
#define EX_MFD(x)	BFIN_EXTRACT(MFD, x)
