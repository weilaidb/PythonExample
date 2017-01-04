static int cs46xx_dsp_async_init (struct snd_cs46xx *chip,
struct dsp_scb_descriptor * fg_entry);
static enum wide_opcode wide_opcodes[] = ;
static int shadow_and_reallocate_code (struct snd_cs46xx * chip, u32 * data, u32 size,
u32 overlay_begin_address)
static struct dsp_segment_desc * get_segment_desc (struct dsp_module_desc * module, int seg_type)
;
static int find_free_symbol_index (struct dsp_spos_instance * ins)
static int add_symbols (struct snd_cs46xx * chip, struct dsp_module_desc * module)
static struct dsp_symbol_entry *
add_symbol (struct snd_cs46xx * chip, char * symbol_name, u32 address, int type)
struct dsp_spos_instance *cs46xx_dsp_spos_create (struct snd_cs46xx * chip)
void  cs46xx_dsp_spos_destroy (struct snd_cs46xx * chip)
static int dsp_load_parameter(struct snd_cs46xx *chip,
struct dsp_segment_desc *parameter)
static int dsp_load_sample(struct snd_cs46xx *chip,
struct dsp_segment_desc *sample)
int cs46xx_dsp_load_module (struct snd_cs46xx * chip, struct dsp_module_desc * module)
struct dsp_symbol_entry *
cs46xx_dsp_lookup_symbol (struct snd_cs46xx * chip, char * symbol_name, int symbol_type)
static struct dsp_symbol_entry *
cs46xx_dsp_lookup_symbol_addr (struct snd_cs46xx * chip, u32 address, int symbol_type)
static void cs46xx_dsp_proc_symbol_table_read (struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void cs46xx_dsp_proc_modules_read (struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void cs46xx_dsp_proc_task_tree_read (struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void cs46xx_dsp_proc_scb_read (struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void cs46xx_dsp_proc_parameter_dump_read (struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void cs46xx_dsp_proc_sample_dump_read (struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
int cs46xx_dsp_proc_init (struct snd_card *card, struct snd_cs46xx *chip)
int cs46xx_dsp_proc_done (struct snd_cs46xx *chip)
static int debug_tree;
static void _dsp_create_task_tree (struct snd_cs46xx *chip, u32 * task_data,
u32  dest, int size)
static int debug_scb;
static void _dsp_create_scb (struct snd_cs46xx *chip, u32 * scb_data, u32 dest)
static int find_free_scb_index (struct dsp_spos_instance * ins)
static struct dsp_scb_descriptor * _map_scb (struct snd_cs46xx *chip, char * name, u32 dest)
static struct dsp_task_descriptor *
_map_task_tree (struct snd_cs46xx *chip, char * name, u32 dest, u32 size)
#define SCB_BYTES	(0x10 * 4)
struct dsp_scb_descriptor *
cs46xx_dsp_create_scb (struct snd_cs46xx *chip, char * name, u32 * scb_data, u32 dest)
static struct dsp_task_descriptor *
cs46xx_dsp_create_task_tree (struct snd_cs46xx *chip, char * name, u32 * task_data,
u32 dest, int size)
int cs46xx_dsp_scb_and_task_init (struct snd_cs46xx *chip)
static int cs46xx_dsp_async_init (struct snd_cs46xx *chip,
struct dsp_scb_descriptor * fg_entry)
static void cs46xx_dsp_disable_spdif_hw (struct snd_cs46xx *chip)
int cs46xx_dsp_enable_spdif_hw (struct snd_cs46xx *chip)
int cs46xx_dsp_enable_spdif_in (struct snd_cs46xx *chip)
int cs46xx_dsp_disable_spdif_in (struct snd_cs46xx *chip)
int cs46xx_dsp_enable_pcm_capture (struct snd_cs46xx *chip)
int cs46xx_dsp_disable_pcm_capture (struct snd_cs46xx *chip)
int cs46xx_dsp_enable_adc_capture (struct snd_cs46xx *chip)
int cs46xx_dsp_disable_adc_capture (struct snd_cs46xx *chip)
int cs46xx_poke_via_dsp (struct snd_cs46xx *chip, u32 address, u32 data)
int cs46xx_dsp_set_dac_volume (struct snd_cs46xx * chip, u16 left, u16 right)
int cs46xx_dsp_set_iec958_volume (struct snd_cs46xx * chip, u16 left, u16 right)
int cs46xx_dsp_resume(struct snd_cs46xx * chip)
