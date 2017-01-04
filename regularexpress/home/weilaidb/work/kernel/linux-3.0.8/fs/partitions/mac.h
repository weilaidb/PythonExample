#define MAC_PARTITION_MAGIC	0x504d
#define APPLE_AUX_TYPE	"Apple_UNIX_SVR2"
struct mac_partition ;
#define MAC_STATUS_BOOTABLE	8
#define MAC_DRIVER_MAGIC	0x4552
struct mac_driver_desc ;
int mac_partition(struct parsed_partitions *state);
