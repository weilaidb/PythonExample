#define __HDLC_IOCTL_H__
#define GENERIC_HDLC_VERSION 4
#define CLOCK_DEFAULT   0
#define CLOCK_EXT	1
#define CLOCK_INT	2
#define CLOCK_TXINT	3
#define CLOCK_TXFROMRX	4
#define ENCODING_DEFAULT	0
#define ENCODING_NRZ		1
#define ENCODING_NRZI		2
#define ENCODING_FM_MARK	3
#define ENCODING_FM_SPACE	4
#define ENCODING_MANCHESTER	5
#define PARITY_DEFAULT		0
#define PARITY_NONE		1
#define PARITY_CRC16_PR0	2
#define PARITY_CRC16_PR1	3
#define PARITY_CRC16_PR0_CCITT	4
#define PARITY_CRC16_PR1_CCITT	5
#define PARITY_CRC32_PR0_CCITT	6
#define PARITY_CRC32_PR1_CCITT	7
#define LMI_DEFAULT		0
#define LMI_NONE		1
#define LMI_ANSI		2
#define LMI_CCITT		3
#define LMI_CISCO		4
typedef struct  sync_serial_settings;
typedef struct  te1_settings;
typedef struct  raw_hdlc_proto;
typedef struct  fr_proto;
typedef struct  fr_proto_pvc;
typedef struct fr_proto_pvc_info;
typedef struct  cisco_proto;
