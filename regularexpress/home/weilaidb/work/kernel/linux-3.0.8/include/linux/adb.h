#define __ADB_H
#define ADB_BUSRESET		0
#define ADB_FLUSH(id)		(0x01 | ((id) << 4))
#define ADB_WRITEREG(id, reg)	(0x08 | (reg) | ((id) << 4))
#define ADB_READREG(id, reg)	(0x0C | (reg) | ((id) << 4))
#define ADB_DONGLE	1
#define ADB_KEYBOARD	2
#define ADB_MOUSE	3
#define ADB_TABLET	4
#define ADB_MODEM	5
#define ADB_MISC	7
#define ADB_RET_OK	0
#define ADB_RET_TIMEOUT	3
#define ADB_PACKET	0
#define CUDA_PACKET	1
#define ERROR_PACKET	2
#define TIMER_PACKET	3
#define POWER_PACKET	4
#define MACIIC_PACKET	5
#define PMU_PACKET	6
#define ADB_QUERY	7
#define ADB_QUERY_GETDEVINFO	1
struct adb_request ;
struct adb_ids ;
struct adb_driver ;
#define ADBREQ_REPLY	1
#define ADBREQ_SYNC	2
#define ADBREQ_NOSEND	4
enum adb_message ;
extern struct blocking_notifier_head adb_client_list;
int adb_request(struct adb_request *req, void (*done)(struct adb_request *),
int flags, int nbytes, ...);
int adb_register(int default_id,int handler_id,struct adb_ids *ids,
void (*handler)(unsigned char *, int, int));
int adb_unregister(int index);
void adb_poll(void);
void adb_input(unsigned char *, int, int);
int adb_reset_bus(void);
int adb_try_handler_change(int address, int new_id);
int adb_get_infos(int address, int *original_address, int *handler_id);
