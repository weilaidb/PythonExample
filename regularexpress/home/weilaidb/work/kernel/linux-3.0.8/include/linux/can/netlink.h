#define CAN_NETLINK_H
struct can_bittiming ;
struct can_bittiming_const ;
struct can_clock ;
enum can_state ;
struct can_berr_counter ;
struct can_ctrlmode ;
#define CAN_CTRLMODE_LOOPBACK		0x01
#define CAN_CTRLMODE_LISTENONLY		0x02
#define CAN_CTRLMODE_3_SAMPLES		0x04
#define CAN_CTRLMODE_ONE_SHOT		0x08
#define CAN_CTRLMODE_BERR_REPORTING	0x10
struct can_device_stats ;
enum ;
#define IFLA_CAN_MAX	(__IFLA_CAN_MAX - 1)
