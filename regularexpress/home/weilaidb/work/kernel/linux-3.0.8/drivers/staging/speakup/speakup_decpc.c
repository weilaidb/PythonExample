#define	MODULE_init		0x0dec
#define	MODULE_self_test	0x8800
#define	MODULE_reset		0xffff
#define	MODE_mask		0xf000
#define	MODE_null		0x0000
#define	MODE_test		0x2000
#define	MODE_status		0x8000
#define	STAT_int		0x0001
#define	STAT_tr_char		0x0002
#define	STAT_rr_char		0x0004
#define	STAT_cmd_ready		0x0008
#define	STAT_dma_ready		0x0010
#define	STAT_digitized		0x0020
#define	STAT_new_index		0x0040
#define	STAT_new_status		0x0080
#define	STAT_dma_state		0x0100
#define	STAT_index_valid	0x0200
#define	STAT_flushing		0x0400
#define	STAT_self_test		0x0800
#define	MODE_ready		0xc000
#define	READY_boot		0x0000
#define	READY_kernel		0x0001
#define	MODE_error		0xf000
#define	CMD_mask		0xf000
#define	CMD_null		0x0000
#define	CMD_control		0x1000
#define	CTRL_mask		0x0F00
#define	CTRL_data		0x00FF
#define	CTRL_null		0x0000
#define	CTRL_vol_up		0x0100
#define	CTRL_vol_down		0x0200
#define	CTRL_vol_set		0x0300
#define	CTRL_pause		0x0400
#define	CTRL_resume		0x0500
#define	CTRL_resume_spc		0x0001
#define	CTRL_flush		0x0600
#define	CTRL_int_enable	0x0700
#define	CTRL_buff_free		0x0800
#define	CTRL_buff_used		0x0900
#define	CTRL_speech		0x0a00
#define	   CTRL_SP_voice	0x0001
#define	   CTRL_SP_rate		0x0002
#define	   CTRL_SP_comma	0x0003
#define	   CTRL_SP_period	0x0004
#define	   CTRL_SP_rate_delta	0x0005
#define	   CTRL_SP_get_param	0x0006
#define	CTRL_last_index		0x0b00
#define	CTRL_io_priority	0x0c00
#define	CTRL_free_mem		0x0d00
#define	CTRL_get_lang		0x0e00
#define	CMD_test			0x2000
#define	TEST_mask		0x0F00
#define	TEST_null		0x0000
#define	TEST_isa_int		0x0100
#define	TEST_echo		0x0200
#define	TEST_seg		0x0300
#define	TEST_off		0x0400
#define	TEST_peek		0x0500
#define	TEST_poke		0x0600
#define	TEST_sub_code		0x00FF
#define	CMD_id			0x3000
#define	ID_null			0x0000
#define	ID_kernel		0x0100
#define	ID_boot			0x0200
#define	CMD_dma			0x4000
#define	CMD_reset		0x5000
#define	CMD_sync		0x6000
#define	CMD_char_in		0x7000
#define	CMD_char_out		0x8000
#define	CHAR_count_1		0x0100
#define	CHAR_count_2		0x0200
#define	CHAR_count_3		0x0300
#define	CMD_spc_mode		0x9000
#define	CMD_spc_to_text		0x0100
#define	CMD_spc_to_digit	0x0200
#define	CMD_spc_rate		0x0400
#define	CMD_error		0xf000
enum ;
#define	DMA_single_in		0x01
#define	DMA_single_out		0x02
#define	DMA_buff_in		0x03
#define	DMA_buff_out		0x04
#define	DMA_control		0x05
#define	DT_MEM_ALLOC		0x03
#define	DT_SET_DIC		0x04
#define	DT_START_TASK		0x05
#define	DT_LOAD_MEM		0x06
#define	DT_READ_MEM		0x07
#define	DT_DIGITAL_IN		0x08
#define	DMA_sync		0x06
#define	DMA_sync_char		0x07
#define DRV_VERSION "2.12"
#define PROCSPEECH 0x0b
#define SYNTH_IO_EXTENT 8
static int synth_probe(struct spk_synth *synth);
static void dtpc_release(void);
static const char *synth_immediate(struct spk_synth *synth, const char *buf);
static void do_catch_up(struct spk_synth *synth);
static void synth_flush(struct spk_synth *synth);
static int synth_portlist[] = ;
static int in_escape, is_flushing;
static int dt_stat, dma_state;
static struct var_t vars[] = ;
static struct kobj_attribute caps_start_attribute =
__ATTR(caps_start, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute caps_stop_attribute =
__ATTR(caps_stop, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute pitch_attribute =
__ATTR(pitch, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute punct_attribute =
__ATTR(punct, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute rate_attribute =
__ATTR(rate, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute voice_attribute =
__ATTR(voice, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute vol_attribute =
__ATTR(vol, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute delay_time_attribute =
__ATTR(delay_time, ROOT_W, spk_var_show, spk_var_store);
static struct kobj_attribute direct_attribute =
__ATTR(direct, USER_RW, spk_var_show, spk_var_store);
static struct kobj_attribute full_time_attribute =
__ATTR(full_time, ROOT_W, spk_var_show, spk_var_store);
static struct kobj_attribute jiffy_delta_attribute =
__ATTR(jiffy_delta, ROOT_W, spk_var_show, spk_var_store);
static struct kobj_attribute trigger_time_attribute =
__ATTR(trigger_time, ROOT_W, spk_var_show, spk_var_store);
static struct attribute *synth_attrs[] = ;
static struct spk_synth synth_dec_pc = ;
static int dt_getstatus(void)
static void dt_sendcmd(u_int cmd)
static int dt_waitbit(int bit)
static int dt_wait_dma(void)
static int dt_ctrl(u_int cmd)
static void synth_flush(struct spk_synth *synth)
static int dt_sendchar(char ch)
static int testkernel(void)
static void do_catch_up(struct spk_synth *synth)
static const char *synth_immediate(struct spk_synth *synth, const char *buf)
static int synth_probe(struct spk_synth *synth)
static void dtpc_release(void)
module_param_named(start, synth_dec_pc.startup, short, S_IRUGO);
MODULE_PARM_DESC(start, "Start the synthesizer once it is loaded.");
static int __init decpc_init(void)
static void __exit decpc_exit(void)
module_init(decpc_init);
module_exit(decpc_exit);
MODULE_AUTHOR("Kirk Reiser <kirk@braille.uwo.ca>");
MODULE_AUTHOR("David Borowski");
MODULE_DESCRIPTION("Speakup support for DECtalk PC synthesizers");
MODULE_LICENSE("GPL");
MODULE_VERSION(DRV_VERSION);
