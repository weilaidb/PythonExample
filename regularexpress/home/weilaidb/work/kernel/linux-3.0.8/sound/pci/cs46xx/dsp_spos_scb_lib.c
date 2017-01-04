struct proc_scb_info ;
static void remove_symbol (struct snd_cs46xx * chip, struct dsp_symbol_entry * symbol)
static void cs46xx_dsp_proc_scb_info_read (struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void _dsp_unlink_scb (struct snd_cs46xx *chip, struct dsp_scb_descriptor * scb)
static void _dsp_clear_sample_buffer (struct snd_cs46xx *chip, u32 sample_buffer_addr,
int dword_count)
void cs46xx_dsp_remove_scb (struct snd_cs46xx *chip, struct dsp_scb_descriptor * scb)
void cs46xx_dsp_proc_free_scb_desc (struct dsp_scb_descriptor * scb)
void cs46xx_dsp_proc_register_scb_desc (struct snd_cs46xx *chip,
struct dsp_scb_descriptor * scb)
static struct dsp_scb_descriptor *
_dsp_create_generic_scb (struct snd_cs46xx *chip, char * name, u32 * scb_data, u32 dest,
struct dsp_symbol_entry * task_entry,
struct dsp_scb_descriptor * parent_scb,
int scb_child_type)
static struct dsp_scb_descriptor *
cs46xx_dsp_create_generic_scb (struct snd_cs46xx *chip, char * name, u32 * scb_data,
u32 dest, char * task_entry_name,
struct dsp_scb_descriptor * parent_scb,
int scb_child_type)
struct dsp_scb_descriptor *
cs46xx_dsp_create_timing_master_scb (struct snd_cs46xx *chip)
struct dsp_scb_descriptor *
cs46xx_dsp_create_codec_out_scb(struct snd_cs46xx * chip, char * codec_name,
u16 channel_disp, u16 fifo_addr, u16 child_scb_addr,
u32 dest, struct dsp_scb_descriptor * parent_scb,
int scb_child_type)
struct dsp_scb_descriptor *
cs46xx_dsp_create_codec_in_scb(struct snd_cs46xx * chip, char * codec_name,
u16 channel_disp, u16 fifo_addr, u16 sample_buffer_addr,
u32 dest, struct dsp_scb_descriptor * parent_scb,
int scb_child_type)
static struct dsp_scb_descriptor *
cs46xx_dsp_create_pcm_reader_scb(struct snd_cs46xx * chip, char * scb_name,
u16 sample_buffer_addr, u32 dest,
int virtual_channel, u32 playback_hw_addr,
struct dsp_scb_descriptor * parent_scb,
int scb_child_type)
#define GOF_PER_SEC 200
struct dsp_scb_descriptor *
cs46xx_dsp_create_src_task_scb(struct snd_cs46xx * chip, char * scb_name,
int rate,
u16 src_buffer_addr,
u16 src_delay_buffer_addr, u32 dest,
struct dsp_scb_descriptor * parent_scb,
int scb_child_type,
int pass_through)
struct dsp_scb_descriptor *
cs46xx_dsp_create_mix_only_scb(struct snd_cs46xx * chip, char * scb_name,
u16 mix_buffer_addr, u32 dest,
struct dsp_scb_descriptor * parent_scb,
int scb_child_type)
struct dsp_scb_descriptor *
cs46xx_dsp_create_mix_to_ostream_scb(struct snd_cs46xx * chip, char * scb_name,
u16 mix_buffer_addr, u16 writeback_spb, u32 dest,
struct dsp_scb_descriptor * parent_scb,
int scb_child_type)
struct dsp_scb_descriptor *
cs46xx_dsp_create_vari_decimate_scb(struct snd_cs46xx * chip,char * scb_name,
u16 vari_buffer_addr0,
u16 vari_buffer_addr1,
u32 dest,
struct dsp_scb_descriptor * parent_scb,
int scb_child_type)
static struct dsp_scb_descriptor *
cs46xx_dsp_create_pcm_serial_input_scb(struct snd_cs46xx * chip, char * scb_name, u32 dest,
struct dsp_scb_descriptor * input_scb,
struct dsp_scb_descriptor * parent_scb,
int scb_child_type)
static struct dsp_scb_descriptor *
cs46xx_dsp_create_asynch_fg_tx_scb(struct snd_cs46xx * chip, char * scb_name, u32 dest,
u16 hfg_scb_address,
u16 asynch_buffer_address,
struct dsp_scb_descriptor * parent_scb,
int scb_child_type)
struct dsp_scb_descriptor *
cs46xx_dsp_create_asynch_fg_rx_scb(struct snd_cs46xx * chip, char * scb_name, u32 dest,
u16 hfg_scb_address,
u16 asynch_buffer_address,
struct dsp_scb_descriptor * parent_scb,
int scb_child_type)
struct dsp_scb_descriptor *
cs46xx_dsp_create_spio_write_scb(struct snd_cs46xx * chip, char * scb_name, u32 dest,
struct dsp_scb_descriptor * parent_scb,
int scb_child_type)
struct dsp_scb_descriptor *
cs46xx_dsp_create_magic_snoop_scb(struct snd_cs46xx * chip, char * scb_name, u32 dest,
u16 snoop_buffer_address,
struct dsp_scb_descriptor * snoop_scb,
struct dsp_scb_descriptor * parent_scb,
int scb_child_type)
static struct dsp_scb_descriptor *
find_next_free_scb (struct snd_cs46xx * chip, struct dsp_scb_descriptor * from)
static u32 pcm_reader_buffer_addr[DSP_MAX_PCM_CHANNELS] = ;
static u32 src_output_buffer_addr[DSP_MAX_SRC_NR] = ;
static u32 src_delay_buffer_addr[DSP_MAX_SRC_NR] = ;
struct dsp_pcm_channel_descriptor *
cs46xx_dsp_create_pcm_channel (struct snd_cs46xx * chip,
u32 sample_rate, void * private_data,
u32 hw_dma_addr,
int pcm_channel_id)
int cs46xx_dsp_pcm_channel_set_period (struct snd_cs46xx * chip,
struct dsp_pcm_channel_descriptor * pcm_channel,
int period_size)
int cs46xx_dsp_pcm_ostream_set_period (struct snd_cs46xx * chip,
int period_size)
void cs46xx_dsp_destroy_pcm_channel (struct snd_cs46xx * chip,
struct dsp_pcm_channel_descriptor * pcm_channel)
int cs46xx_dsp_pcm_unlink (struct snd_cs46xx * chip,
struct dsp_pcm_channel_descriptor * pcm_channel)
int cs46xx_dsp_pcm_link (struct snd_cs46xx * chip,
struct dsp_pcm_channel_descriptor * pcm_channel)
struct dsp_scb_descriptor *
cs46xx_add_record_source (struct snd_cs46xx *chip, struct dsp_scb_descriptor * source,
u16 addr, char * scb_name)
int cs46xx_src_unlink(struct snd_cs46xx *chip, struct dsp_scb_descriptor * src)
int cs46xx_src_link(struct snd_cs46xx *chip, struct dsp_scb_descriptor * src)
int cs46xx_dsp_enable_spdif_out (struct snd_cs46xx *chip)
int  cs46xx_dsp_disable_spdif_out (struct snd_cs46xx *chip)
int cs46xx_iec958_pre_open (struct snd_cs46xx *chip)
int cs46xx_iec958_post_close (struct snd_cs46xx *chip)
