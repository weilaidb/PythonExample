#define CARD_NAME "Miditerminal 4140"
#define DRIVER_NAME "MTS64"
#define PLATFORM_DRIVER "snd_mts64"
static int index[SNDRV_CARDS]  = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS]   = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
static struct platform_device *platform_devices[SNDRV_CARDS];
static int device_count;
module_param_array(index, int, NULL, S_IRUGO);
MODULE_PARM_DESC(index, "Index value for " CARD_NAME " soundcard.");
module_param_array(id, charp, NULL, S_IRUGO);
MODULE_PARM_DESC(id, "ID string for " CARD_NAME " soundcard.");
module_param_array(enable, bool, NULL, S_IRUGO);
MODULE_PARM_DESC(enable, "Enable " CARD_NAME " soundcard.");
MODULE_AUTHOR("Matthias Koenig <mk@phasorlab.de>");
MODULE_DESCRIPTION("ESI Miditerminal 4140");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#define MTS64_NUM_INPUT_PORTS 5
#define MTS64_NUM_OUTPUT_PORTS 4
#define MTS64_SMPTE_SUBSTREAM 4
struct mts64 ;
static int snd_mts64_free(struct mts64 *mts)
static int __devinit snd_mts64_create(struct snd_card *card,
struct pardevice *pardev,
struct mts64 **rchip)
#define MTS64_STAT_BSY             0x80
#define MTS64_STAT_BIT_SET         0x20
#define MTS64_STAT_PORT            0x10
#define MTS64_CTL_READOUT          0x08
#define MTS64_CTL_WRITE_CMD        0x06
#define MTS64_CTL_WRITE_DATA       0x02
#define MTS64_CTL_STROBE           0x01
#define MTS64_CMD_RESET            0xfe
#define MTS64_CMD_PROBE            0x8f
#define MTS64_CMD_SMPTE_SET_TIME   0xe8
#define MTS64_CMD_SMPTE_SET_FPS    0xee
#define MTS64_CMD_SMPTE_STOP       0xef
#define MTS64_CMD_SMPTE_FPS_24     0xe3
#define MTS64_CMD_SMPTE_FPS_25     0xe2
#define MTS64_CMD_SMPTE_FPS_2997   0xe4
#define MTS64_CMD_SMPTE_FPS_30D    0xe1
#define MTS64_CMD_SMPTE_FPS_30     0xe0
#define MTS64_CMD_COM_OPEN         0xf8
#define MTS64_CMD_COM_CLOSE1       0xff
#define MTS64_CMD_COM_CLOSE2       0xf5
static void mts64_enable_readout(struct parport *p);
static void mts64_disable_readout(struct parport *p);
static int mts64_device_ready(struct parport *p);
static int mts64_device_init(struct parport *p);
static int mts64_device_open(struct mts64 *mts);
static int mts64_device_close(struct mts64 *mts);
static u8 mts64_map_midi_input(u8 c);
static int mts64_probe(struct parport *p);
static u16 mts64_read(struct parport *p);
static u8 mts64_read_char(struct parport *p);
static void mts64_smpte_start(struct parport *p,
u8 hours, u8 minutes,
u8 seconds, u8 frames,
u8 idx);
static void mts64_smpte_stop(struct parport *p);
static void mts64_write_command(struct parport *p, u8 c);
static void mts64_write_data(struct parport *p, u8 c);
static void mts64_write_midi(struct mts64 *mts, u8 c, int midiport);
static void mts64_enable_readout(struct parport *p)
static void mts64_disable_readout(struct parport *p)
static int mts64_device_ready(struct parport *p)
static int __devinit mts64_device_init(struct parport *p)
static int mts64_device_open(struct mts64 *mts)
static int mts64_device_close(struct mts64 *mts)
static u8 mts64_map_midi_input(u8 c)
static int __devinit mts64_probe(struct parport *p)
static u16 mts64_read(struct parport *p)
static u8 mts64_read_char(struct parport *p)
static void mts64_smpte_start(struct parport *p,
u8 hours, u8 minutes,
u8 seconds, u8 frames,
u8 idx)
static void mts64_smpte_stop(struct parport *p)
static void mts64_write_command(struct parport *p, u8 c)
static void mts64_write_data(struct parport *p, u8 c)
static void mts64_write_midi(struct mts64 *mts, u8 c,
int midiport)
#define snd_mts64_ctl_smpte_switch_info		snd_ctl_boolean_mono_info
static int snd_mts64_ctl_smpte_switch_get(struct snd_kcontrol* kctl,
struct snd_ctl_elem_value *uctl)
static int snd_mts64_ctl_smpte_switch_put(struct snd_kcontrol* kctl,
struct snd_ctl_elem_value *uctl)
static struct snd_kcontrol_new mts64_ctl_smpte_switch __devinitdata = ;
static int snd_mts64_ctl_smpte_time_h_info(struct snd_kcontrol *kctl,
struct snd_ctl_elem_info *uinfo)
static int snd_mts64_ctl_smpte_time_f_info(struct snd_kcontrol *kctl,
struct snd_ctl_elem_info *uinfo)
static int snd_mts64_ctl_smpte_time_info(struct snd_kcontrol *kctl,
struct snd_ctl_elem_info *uinfo)
static int snd_mts64_ctl_smpte_time_get(struct snd_kcontrol *kctl,
struct snd_ctl_elem_value *uctl)
static int snd_mts64_ctl_smpte_time_put(struct snd_kcontrol *kctl,
struct snd_ctl_elem_value *uctl)
static struct snd_kcontrol_new mts64_ctl_smpte_time_hours __devinitdata = ;
static struct snd_kcontrol_new mts64_ctl_smpte_time_minutes __devinitdata = ;
static struct snd_kcontrol_new mts64_ctl_smpte_time_seconds __devinitdata = ;
static struct snd_kcontrol_new mts64_ctl_smpte_time_frames __devinitdata = ;
static int snd_mts64_ctl_smpte_fps_info(struct snd_kcontrol *kctl,
struct snd_ctl_elem_info *uinfo)
static int snd_mts64_ctl_smpte_fps_get(struct snd_kcontrol *kctl,
struct snd_ctl_elem_value *uctl)
static int snd_mts64_ctl_smpte_fps_put(struct snd_kcontrol *kctl,
struct snd_ctl_elem_value *uctl)
static struct snd_kcontrol_new mts64_ctl_smpte_fps __devinitdata = ;
static int __devinit snd_mts64_ctl_create(struct snd_card *card,
struct mts64 *mts)
#define MTS64_MODE_INPUT_TRIGGERED 0x01
static int snd_mts64_rawmidi_open(struct snd_rawmidi_substream *substream)
static int snd_mts64_rawmidi_close(struct snd_rawmidi_substream *substream)
static void snd_mts64_rawmidi_output_trigger(struct snd_rawmidi_substream *substream,
int up)
static void snd_mts64_rawmidi_input_trigger(struct snd_rawmidi_substream *substream,
int up)
static struct snd_rawmidi_ops snd_mts64_rawmidi_output_ops = ;
static struct snd_rawmidi_ops snd_mts64_rawmidi_input_ops = ;
static int __devinit snd_mts64_rawmidi_create(struct snd_card *card)
static void snd_mts64_interrupt(void *private)
static int __devinit snd_mts64_probe_port(struct parport *p)
static void __devinit snd_mts64_attach(struct parport *p)
static void snd_mts64_detach(struct parport *p)
static struct parport_driver mts64_parport_driver = ;
static void snd_mts64_card_private_free(struct snd_card *card)
static int __devinit snd_mts64_probe(struct platform_device *pdev)
static int __devexit snd_mts64_remove(struct platform_device *pdev)
static struct platform_driver snd_mts64_driver = ;
static void snd_mts64_unregister_all(void)
static int __init snd_mts64_module_init(void)
static void __exit snd_mts64_module_exit(void)
module_init(snd_mts64_module_init);
module_exit(snd_mts64_module_exit);
