#define __rioinfo_h
struct RioHostInfo ;
#define INTERRUPTED_MODE	0x01
#define POLLED_MODE		0x02
#define AUTO_MODE		0x03
#define WORD_ACCESS_MODE	0x10
#define BYTE_ACCESS_MODE	0x20
#define ISA_BUS			0x01
#define EISA_BUS		0x02
#define MCA_BUS			0x04
#define PCI_BUS			0x08
#define DEF_TERM_CHARACTERISTICS \
