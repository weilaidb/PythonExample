#define __PKTCDVD_H
#define PACKET_DEBUG		1
#define	MAX_WRITERS		8
#define PKT_RB_POOL_SIZE	512
#define PACKET_WAIT_TIME	(HZ * 5 / 1000)
#if defined(CONFIG_CDROM_PKTCDVD_WCACHE)
#define USE_WCACHING		1
#define USE_WCACHING		0
#define PACKET_CDR		1
#define	PACKET_CDRW		2
#define PACKET_DVDR		3
#define PACKET_DVDRW		4
#define PACKET_WRITABLE		1
#define PACKET_NWA_VALID	2
#define PACKET_LRA_VALID	3
#define PACKET_MERGE_SEGS	4
#define PACKET_DISC_EMPTY	0
#define PACKET_DISC_INCOMPLETE	1
#define PACKET_DISC_COMPLETE	2
#define PACKET_DISC_OTHER	3
#define PACKET_MODE1		1
#define PACKET_MODE2		2
#define PACKET_BLOCK_MODE1	8
#define PACKET_BLOCK_MODE2	10
#define PACKET_SESSION_EMPTY		0
#define PACKET_SESSION_INCOMPLETE	1
#define PACKET_SESSION_RESERVED		2
#define PACKET_SESSION_COMPLETE		3
#define PACKET_MCN			"4a656e734178626f65323030300000"
#undef PACKET_USE_LS
#define PKT_CTRL_CMD_SETUP	0
#define PKT_CTRL_CMD_TEARDOWN	1
#define PKT_CTRL_CMD_STATUS	2
struct pkt_ctrl_command ;
#define PACKET_IOCTL_MAGIC	('X')
#define PACKET_CTRL_CMD		_IOWR(PACKET_IOCTL_MAGIC, 1, struct pkt_ctrl_command)
#define PKT_WRITE_CONGESTION_ON    10000
#define PKT_WRITE_CONGESTION_OFF   9000
struct packet_settings
;
struct packet_stats
;
struct packet_cdrw
;
#define HI_SPEED_SWITCH 512
struct packet_iosched
;
#if (PAGE_SIZE % CD_FRAMESIZE) != 0
#error "PAGE_SIZE must be a multiple of CD_FRAMESIZE"
#define PACKET_MAX_SIZE		128
#define FRAMES_PER_PAGE		(PAGE_SIZE / CD_FRAMESIZE)
#define PACKET_MAX_SECTORS	(PACKET_MAX_SIZE * CD_FRAMESIZE >> 9)
enum packet_data_state ;
struct pktcdvd_device;
struct packet_data
;
struct pkt_rb_node ;
struct packet_stacked_data
;
#define PSD_POOL_SIZE		64
struct pktcdvd_kobj
;
#define to_pktcdvdkobj(_k) \
((struct pktcdvd_kobj*)container_of(_k,struct pktcdvd_kobj,kobj))
struct pktcdvd_device
;
