struct snd_ca0106_category_str ;
static struct snd_ca0106_category_str snd_ca0106_con_category[] = ;
static void snd_ca0106_proc_dump_iec958( struct snd_info_buffer *buffer, u32 value)
static void snd_ca0106_proc_iec958(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_ca0106_proc_reg_write32(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_ca0106_proc_reg_read32(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_ca0106_proc_reg_read16(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_ca0106_proc_reg_read8(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_ca0106_proc_reg_read1(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_ca0106_proc_reg_read2(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_ca0106_proc_reg_write(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_ca0106_proc_i2c_write(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
int __devinit snd_ca0106_proc_init(struct snd_ca0106 * emu)
