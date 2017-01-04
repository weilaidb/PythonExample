#define IVTV_MASK_SPU_ENABLE 		0xFFFFFFFE
#define IVTV_MASK_VPU_ENABLE15 		0xFFFFFFF6
#define IVTV_MASK_VPU_ENABLE16 		0xFFFFFFFB
#define IVTV_CMD_VDM_STOP 		0x00000000
#define IVTV_CMD_AO_STOP 		0x00000005
#define IVTV_CMD_APU_PING 		0x00000000
#define IVTV_CMD_VPU_STOP15 		0xFFFFFFFE
#define IVTV_CMD_VPU_STOP16 		0xFFFFFFEE
#define IVTV_CMD_HW_BLOCKS_RST 		0xFFFFFFFF
#define IVTV_CMD_SPU_STOP 		0x00000001
#define IVTV_CMD_SDRAM_PRECHARGE_INIT 	0x0000001A
#define IVTV_CMD_SDRAM_REFRESH_INIT 	0x80000640
#define IVTV_SDRAM_SLEEPTIME 		600
#define IVTV_DECODE_INIT_MPEG_FILENAME 	"v4l-cx2341x-init.mpg"
#define IVTV_DECODE_INIT_MPEG_SIZE 	(152*1024)
#define IVTV_FW_ENC_SIZE 		(376836)
#define IVTV_FW_DEC_SIZE 		(256*1024)
static int load_fw_direct(const char *fn, volatile u8 __iomem *mem, struct ivtv *itv, long size)
void ivtv_halt_firmware(struct ivtv *itv)
void ivtv_firmware_versions(struct ivtv *itv)
static int ivtv_firmware_copy(struct ivtv *itv)
static volatile struct ivtv_mailbox __iomem *ivtv_search_mailbox(const volatile u8 __iomem *mem, u32 size)
int ivtv_firmware_init(struct ivtv *itv)
void ivtv_init_mpeg_decoder(struct ivtv *itv)
int ivtv_firmware_restart(struct ivtv *itv)
int ivtv_firmware_check(struct ivtv *itv, char *where)
