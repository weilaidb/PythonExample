static void snd_emu10k1_proc_spdif_status(struct snd_emu10k1 * emu,
struct snd_info_buffer *buffer,
char *title,
int status_reg,
int rate_reg)
static void snd_emu10k1_proc_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_emu10k1_proc_spdif_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_emu10k1_proc_rates_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_emu10k1_proc_acode_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
#define TOTAL_SIZE_GPR		(0x100*4)
#define A_TOTAL_SIZE_GPR	(0x200*4)
#define TOTAL_SIZE_TANKMEM_DATA	(0xa0*4)
#define TOTAL_SIZE_TANKMEM_ADDR (0xa0*4)
#define A_TOTAL_SIZE_TANKMEM_DATA (0x100*4)
#define A_TOTAL_SIZE_TANKMEM_ADDR (0x100*4)
#define TOTAL_SIZE_CODE		(0x200*8)
#define A_TOTAL_SIZE_CODE	(0x400*8)
static ssize_t snd_emu10k1_fx8010_read(struct snd_info_entry *entry,
void *file_private_data,
struct file *file, char __user *buf,
size_t count, loff_t pos)
static void snd_emu10k1_proc_voices_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_emu_proc_emu1010_reg_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_emu_proc_io_reg_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_emu_proc_io_reg_write(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static unsigned int snd_ptr_read(struct snd_emu10k1 * emu,
unsigned int iobase,
unsigned int reg,
unsigned int chn)
static void snd_ptr_write(struct snd_emu10k1 *emu,
unsigned int iobase,
unsigned int reg,
unsigned int chn,
unsigned int data)
static void snd_emu_proc_ptr_reg_read(struct snd_info_entry *entry,
struct snd_info_buffer *buffer, int iobase, int offset, int length, int voices)
static void snd_emu_proc_ptr_reg_write(struct snd_info_entry *entry,
struct snd_info_buffer *buffer, int iobase)
static void snd_emu_proc_ptr_reg_write00(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_emu_proc_ptr_reg_write20(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_emu_proc_ptr_reg_read00a(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_emu_proc_ptr_reg_read00b(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_emu_proc_ptr_reg_read20a(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_emu_proc_ptr_reg_read20b(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_emu_proc_ptr_reg_read20c(struct snd_info_entry *entry,
struct snd_info_buffer * buffer)
static struct snd_info_entry_ops snd_emu10k1_proc_ops_fx8010 = ;
int __devinit snd_emu10k1_proc_init(struct snd_emu10k1 * emu)
