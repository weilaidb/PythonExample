#define __SIGMA_FIRMWARE_H__
struct i2c_client;
#define SIGMA_MAGIC "ADISIGM"
struct sigma_firmware ;
struct sigma_firmware_header ;
enum ;
struct sigma_action ;
static inline u32 sigma_action_len(struct sigma_action *sa)
static inline size_t sigma_action_size(struct sigma_action *sa, u32 payload_len)
extern int process_sigma_firmware(struct i2c_client *client, const char *name);
