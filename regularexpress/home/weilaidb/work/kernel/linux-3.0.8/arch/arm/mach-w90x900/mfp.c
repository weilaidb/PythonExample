#define REG_MFSEL	(W90X900_VA_GCR + 0xC)
#define GPSELF		(0x01 << 1)
#define GPSELC		(0x03 << 2)
#define ENKPI		(0x02 << 2)
#define ENNAND		(0x01 << 2)
#define GPSELEI0	(0x01 << 26)
#define GPSELEI1	(0x01 << 27)
#define GPIOG0TO1	(0x03 << 14)
#define GPIOG2TO3	(0x03 << 16)
#define GPIOG22TO23	(0x03 << 22)
#define ENSPI		(0x0a << 14)
#define ENI2C0		(0x01 << 14)
#define ENI2C1		(0x01 << 16)
#define ENAC97		(0x02 << 22)
static DEFINE_MUTEX(mfp_mutex);
void mfp_set_groupf(struct device *dev)
EXPORT_SYMBOL(mfp_set_groupf);
void mfp_set_groupc(struct device *dev)
EXPORT_SYMBOL(mfp_set_groupc);
void mfp_set_groupi(struct device *dev)
EXPORT_SYMBOL(mfp_set_groupi);
void mfp_set_groupg(struct device *dev)
EXPORT_SYMBOL(mfp_set_groupg);
