#define	FLAG_MODE_MJPEG		(1)
#define	FLAG_MODE_MPEG1		(1<<1)
#define	FLAG_MODE_MPEG2		(1<<2)
#define	FLAG_MODE_MPEG4		(1<<3)
#define	FLAG_MODE_H263		(1<<4)
#define FLAG_MODE_ALL		(FLAG_MODE_MJPEG | FLAG_MODE_MPEG1 | \
FLAG_MODE_MPEG2 | FLAG_MODE_MPEG4 | \
FLAG_MODE_H263)
#define FLAG_SPECIAL		(1<<8)
#define SPECIAL_FRM_HEAD	0
#define SPECIAL_BRC_CTRL	1
#define SPECIAL_CONFIG		2
#define SPECIAL_SEQHEAD		3
#define SPECIAL_AV_SYNC		4
#define SPECIAL_FINAL		5
#define SPECIAL_AUDIO		6
#define SPECIAL_MODET		7
struct code_gen ;
#define CODE_GEN(name, dest) struct code_gen name =
#define CODE_ADD(name, val, length) do  while (0)
#define CODE_LENGTH(name) (name.len + (32 - name.b))
static const s16 converge_speed_ip[101] = ;
static const s16 converge_speed_ipb[101] = ;
static const s16 LAMBDA_table[4][101] = ;
enum mpeg_frame_type ;
static const u32 addrinctab[33][2] = ;
static const u8 default_intra_quant_table[] = ;
static const u8 bits_dc_luminance[] = ;
static const u8 val_dc_luminance[] = ;
static const u8 bits_dc_chrominance[] = ;
static const u8 val_dc_chrominance[] = ;
static const u8 bits_ac_luminance[] = ;
static const u8 val_ac_luminance[] = ;
static const u8 bits_ac_chrominance[] = ;
static const u8 val_ac_chrominance[] = ;
static const int zz[64] = ;
static int copy_packages(__le16 *dest, u16 *src, int pkg_cnt, int space)
static int mjpeg_frame_header(struct go7007 *go, unsigned char *buf, int q)
static int gen_mjpeghdr_to_package(struct go7007 *go, __le16 *code, int space)
static int mpeg1_frame_header(struct go7007 *go, unsigned char *buf,
int modulo, int pict_struct, enum mpeg_frame_type frame)
static int mpeg1_sequence_header(struct go7007 *go, unsigned char *buf, int ext)
static int gen_mpeg1hdr_to_package(struct go7007 *go,
__le16 *code, int space, int *framelen)
static int vti_bitlen(struct go7007 *go)
static int mpeg4_frame_header(struct go7007 *go, unsigned char *buf,
int modulo, enum mpeg_frame_type frame)
static int mpeg4_sequence_header(struct go7007 *go, unsigned char *buf, int ext)
static int gen_mpeg4hdr_to_package(struct go7007 *go,
__le16 *code, int space, int *framelen)
static int brctrl_to_package(struct go7007 *go,
__le16 *code, int space, int *framelen)
static int config_package(struct go7007 *go, __le16 *code, int space)
static int seqhead_to_package(struct go7007 *go, __le16 *code, int space,
int (*sequence_header_func)(struct go7007 *go,
unsigned char *buf, int ext))
static int relative_prime(int big, int little)
static int avsync_to_package(struct go7007 *go, __le16 *code, int space)
static int final_package(struct go7007 *go, __le16 *code, int space)
static int audio_to_package(struct go7007 *go, __le16 *code, int space)
static int modet_to_package(struct go7007 *go, __le16 *code, int space)
static int do_special(struct go7007 *go, u16 type, __le16 *code, int space,
int *framelen)
int go7007_construct_fw_image(struct go7007 *go, u8 **fw, int *fwlen)
