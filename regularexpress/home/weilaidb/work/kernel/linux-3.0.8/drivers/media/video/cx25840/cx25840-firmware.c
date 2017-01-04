#define FWSEND 48
#define FWDEV(x) &((x)->dev)
static char *firmware = "";
module_param(firmware, charp, 0444);
MODULE_PARM_DESC(firmware, "Firmware image to load");
static void start_fw_load(struct i2c_client *client)
static void end_fw_load(struct i2c_client *client)
static const char *get_fw_name(struct i2c_client *client)
static int check_fw_load(struct i2c_client *client, int size)
static int fw_write(struct i2c_client *client, const u8 *data, int size)
int cx25840_loadfw(struct i2c_client *client)
