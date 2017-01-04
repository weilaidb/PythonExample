#define __LINUX_RISCOM8_H
#define RC_NBOARD		4
#define RC_NPORT        	8
#define RC_BOARD(line)		(((line) >> 3) & 0x07)
#define RC_PORT(line)		((line) & (RC_NPORT - 1))
#define RISCOM_TPS		4000
#define RISCOM_RXFIFO		6
#define RISCOM8_MAGIC		0x0907
#define RC_IOBASE1	0x220
#define RC_IOBASE2	0x240
#define RC_IOBASE3	0x250
#define RC_IOBASE4	0x260
struct riscom_board ;
#define RC_BOARD_PRESENT	0x00000001
#define RC_BOARD_ACTIVE		0x00000002
struct riscom_port ;
