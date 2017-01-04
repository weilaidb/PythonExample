#define  _MAX1363_H_
#define MAX1363_SETUP_BYTE(a) ((a) | 0x80)
#define MAX1363_SETUP_AIN3_IS_AIN3_REF_IS_VDD	0x00
#define MAX1363_SETUP_AIN3_IS_REF_EXT_TO_REF	0x20
#define MAX1363_SETUP_AIN3_IS_AIN3_REF_IS_INT	0x40
#define MAX1363_SETUP_AIN3_IS_REF_REF_IS_INT	0x60
#define MAX1363_SETUP_POWER_UP_INT_REF		0x10
#define MAX1363_SETUP_POWER_DOWN_INT_REF	0x00
#define MAX1363_SETUP_EXT_CLOCK			0x08
#define MAX1363_SETUP_INT_CLOCK			0x00
#define MAX1363_SETUP_UNIPOLAR			0x00
#define MAX1363_SETUP_BIPOLAR			0x04
#define MAX1363_SETUP_RESET			0x00
#define MAX1363_SETUP_NORESET			0x02
#define MAX1363_SETUP_MONITOR_SETUP		0x01
#define MAX1363_MON_RESET_CHAN(a) (1 << ((a) + 4))
#define MAX1363_MON_INT_ENABLE			0x01
#define MAX1363_CONFIG_BYTE(a) ((a))
#define MAX1363_CONFIG_SE			0x01
#define MAX1363_CONFIG_DE			0x00
#define MAX1363_CONFIG_SCAN_TO_CS		0x00
#define MAX1363_CONFIG_SCAN_SINGLE_8		0x20
#define MAX1363_CONFIG_SCAN_MONITOR_MODE	0x40
#define MAX1363_CONFIG_SCAN_SINGLE_1		0x60
#define MAX1236_SCAN_MID_TO_CHANNEL		0x40
#define MAX1363_CONFIG_EN_MON_MODE_READ 0x18
#define MAX1363_CHANNEL_SEL(a) ((a) << 1)
#define MAX1363_CHANNEL_SEL_MASK		0x1E
#define MAX1363_SCAN_MASK			0x60
#define MAX1363_SE_DE_MASK			0x01
struct max1363_mode ;
enum max1363_modes ;
struct max1363_chip_info ;
struct max1363_state ;
const struct max1363_mode
*max1363_match_mode(u32 mask, const struct max1363_chip_info *ci);
int max1363_set_scan_mode(struct max1363_state *st);
int max1363_single_channel_from_ring(long mask, struct max1363_state *st);
int max1363_register_ring_funcs_and_init(struct iio_dev *indio_dev);
void max1363_ring_cleanup(struct iio_dev *indio_dev);
int max1363_single_channel_from_ring(long mask, struct max1363_state *st)
static inline int
max1363_register_ring_funcs_and_init(struct iio_dev *indio_dev)
static inline void max1363_ring_cleanup(struct iio_dev *indio_dev)
