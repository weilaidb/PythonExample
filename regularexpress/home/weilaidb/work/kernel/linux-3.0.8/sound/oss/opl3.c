#define MAX_VOICE	18
#define OFFS_4OP	11
struct voice_info
;
typedef struct opl_devinfo
opl_devinfo;
static struct opl_devinfo *devc = NULL;
static int      detected_model;
static int      store_instr(int instr_no, struct sbi_instrument *instr);
static void     freq_to_fnum(int freq, int *block, int *fnum);
static void     opl3_command(int io_addr, unsigned int addr, unsigned int val);
static int      opl3_kill_note(int dev, int voice, int note, int velocity);
static void enter_4op_mode(void)
static int opl3_ioctl(int dev, unsigned int cmd, void __user * arg)
static int opl3_detect(int ioaddr)
static int opl3_kill_note  (int devno, int voice, int note, int velocity)
#define HIHAT			0
#define CYMBAL			1
#define TOMTOM			2
#define SNARE			3
#define BDRUM			4
#define UNDEFINED		TOMTOM
#define DEFAULT			TOMTOM
static int store_instr(int instr_no, struct sbi_instrument *instr)
static int opl3_set_instr  (int dev, int voice, int instr_no)
static char fm_volume_table[128] =
;
static void calc_vol(unsigned char *regbyte, int volume, int main_vol)
static void set_voice_volume(int voice, int volume, int main_vol)
static int opl3_start_note (int dev, int voice, int note, int volume)
static void freq_to_fnum    (int freq, int *block, int *fnum)
static void opl3_command    (int io_addr, unsigned int addr, unsigned int val)
static void opl3_reset(int devno)
static int opl3_open(int dev, int mode)
static void opl3_close(int dev)
static void opl3_hw_control(int dev, unsigned char *event)
static int opl3_load_patch(int dev, int format, const char __user *addr,
int count, int pmgr_flag)
static void opl3_panning(int dev, int voice, int value)
static void opl3_volume_method(int dev, int mode)
#define SET_VIBRATO(cell)
static void opl3_aftertouch(int dev, int voice, int pressure)
#undef SET_VIBRATO
static void bend_pitch(int dev, int voice, int value)
static void opl3_controller (int dev, int voice, int ctrl_num, int value)
static void opl3_bender(int dev, int voice, int value)
static int opl3_alloc_voice(int dev, int chn, int note, struct voice_alloc_info *alloc)
static void opl3_setup_voice(int dev, int voice, int chn)
static struct synth_operations opl3_operations =
;
static int opl3_init(int ioaddr, struct module *owner)
static int me;
static int io = -1;
module_param(io, int, 0);
static int __init init_opl3 (void)
static void __exit cleanup_opl3(void)
module_init(init_opl3);
module_exit(cleanup_opl3);
static int __init setup_opl3(char *str)
__setup("opl3=", setup_opl3);
MODULE_LICENSE("GPL");
