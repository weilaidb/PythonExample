#define SBNI_H
#define DP( A ) A
#define DP( A )
#define SBNI_PCI_VENDOR 	0x55
#define SBNI_PCI_DEVICE 	0x9f
#define ISA_MODE 0x00
#define PCI_MODE 0x01
#define	SBNI_IO_EXTENT	4
enum sbni_reg ;
enum ;
#define PR_RES 0x80
struct sbni_csr1 ;
#define FRAME_ACK_MASK  (unsigned short)0x7000
#define FRAME_LEN_MASK  (unsigned short)0x03FF
#define FRAME_FIRST     (unsigned short)0x8000
#define FRAME_RETRY     (unsigned short)0x0800
#define FRAME_SENT_BAD  (unsigned short)0x4000
#define FRAME_SENT_OK   (unsigned short)0x3000
enum ;
enum ;
#define DEF_RXL_DELTA	-1
#define DEF_RXL		0xf
#define SBNI_SIG 0x5a
#define	SBNI_MIN_LEN	60
#define SBNI_MAX_FRAME	1023
#define ETHER_MAX_LEN	1518
#define SBNI_TIMEOUT	(HZ/10)
#define TR_ERROR_COUNT	32
#define CHANGE_LEVEL_START_TICKS 4
#define SBNI_MAX_NUM_CARDS	16
struct sbni_in_stats ;
#define SIOCDEVGETINSTATS 	SIOCDEVPRIVATE
#define SIOCDEVRESINSTATS 	SIOCDEVPRIVATE+1
#define SIOCDEVGHWSTATE   	SIOCDEVPRIVATE+2
#define SIOCDEVSHWSTATE   	SIOCDEVPRIVATE+3
#define SIOCDEVENSLAVE  	SIOCDEVPRIVATE+4
#define SIOCDEVEMANSIPATE  	SIOCDEVPRIVATE+5
struct sbni_flags ;
#define CRC32(c,crc) (crc32tab[((size_t)(crc) ^ (c)) & 0xff] ^ (((crc) >> 8) & 0x00FFFFFF))
#define CRC32_REMAINDER 0x2144DF1C
#define CRC32_INITIAL 0x00000000
#define __initdata
