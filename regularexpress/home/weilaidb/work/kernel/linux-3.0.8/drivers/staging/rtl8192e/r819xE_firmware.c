#define GET_COMMAND_PACKET_FRAG_THRESHOLD(v) (4 * (v / 4) - 8)
enum firmware_init_step ;
enum opt_rst_type ;
void firmware_init_param(struct r8192_priv *priv)
static bool fw_download_code(struct r8192_priv *priv, u8 *code_virtual_address,
u32 buffer_len)
static bool CPUcheck_maincodeok_turnonCPU(struct r8192_priv *priv)
static bool CPUcheck_firmware_ready(struct r8192_priv *priv)
bool init_firmware(struct r8192_priv *priv)
MODULE_FIRMWARE("RTL8192E/boot.img");
MODULE_FIRMWARE("RTL8192E/main.img");
MODULE_FIRMWARE("RTL8192E/data.img");
