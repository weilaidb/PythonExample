#define IIO_DDS_AD9834_H_
#define AD9834_REG_CMD		(0 << 14)
#define AD9834_REG_FREQ0	(1 << 14)
#define AD9834_REG_FREQ1	(2 << 14)
#define AD9834_REG_PHASE0	(6 << 13)
#define AD9834_REG_PHASE1	(7 << 13)
#define AD9834_B28		(1 << 13)
#define AD9834_HLB		(1 << 12)
#define AD9834_FSEL		(1 << 11)
#define AD9834_PSEL		(1 << 10)
#define AD9834_PIN_SW		(1 << 9)
#define AD9834_RESET		(1 << 8)
#define AD9834_SLEEP1		(1 << 7)
#define AD9834_SLEEP12		(1 << 6)
#define AD9834_OPBITEN		(1 << 5)
#define AD9834_SIGN_PIB		(1 << 4)
#define AD9834_DIV2		(1 << 3)
#define AD9834_MODE		(1 << 1)
#define AD9834_FREQ_BITS	28
#define AD9834_PHASE_BITS	12
#define RES_MASK(bits)	((1 << (bits)) - 1)
struct ad9834_state ;
struct ad9834_platform_data ;
enum ad9834_supported_device_ids ;
