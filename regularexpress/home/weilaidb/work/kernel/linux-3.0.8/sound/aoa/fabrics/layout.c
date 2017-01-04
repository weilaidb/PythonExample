MODULE_AUTHOR("Johannes Berg <johannes@sipsolutions.net>");
MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Layout-ID fabric for snd-aoa");
#define MAX_CODECS_PER_BUS	2
#define CC_SPEAKERS	(1<<0)
#define CC_HEADPHONE	(1<<1)
#define CC_LINEOUT	(1<<2)
#define CC_DIGITALOUT	(1<<3)
#define CC_LINEIN	(1<<4)
#define CC_MICROPHONE	(1<<5)
#define CC_DIGITALIN	(1<<6)
#define CC_LINEOUT_LABELLED_HEADPHONE	(1<<7)
struct codec_connection ;
struct codec_connect_info ;
#define LAYOUT_FLAG_COMBO_LINEOUT_SPDIF	(1<<0)
struct layout ;
MODULE_ALIAS("sound-layout-36");
MODULE_ALIAS("sound-layout-41");
MODULE_ALIAS("sound-layout-45");
MODULE_ALIAS("sound-layout-47");
MODULE_ALIAS("sound-layout-48");
MODULE_ALIAS("sound-layout-49");
MODULE_ALIAS("sound-layout-50");
MODULE_ALIAS("sound-layout-51");
MODULE_ALIAS("sound-layout-56");
MODULE_ALIAS("sound-layout-57");
MODULE_ALIAS("sound-layout-58");
MODULE_ALIAS("sound-layout-60");
MODULE_ALIAS("sound-layout-61");
MODULE_ALIAS("sound-layout-62");
MODULE_ALIAS("sound-layout-64");
MODULE_ALIAS("sound-layout-65");
MODULE_ALIAS("sound-layout-66");
MODULE_ALIAS("sound-layout-67");
MODULE_ALIAS("sound-layout-68");
MODULE_ALIAS("sound-layout-69");
MODULE_ALIAS("sound-layout-70");
MODULE_ALIAS("sound-layout-72");
MODULE_ALIAS("sound-layout-76");
MODULE_ALIAS("sound-layout-80");
MODULE_ALIAS("sound-layout-82");
MODULE_ALIAS("sound-layout-84");
MODULE_ALIAS("sound-layout-86");
MODULE_ALIAS("sound-layout-90");
MODULE_ALIAS("sound-layout-92");
MODULE_ALIAS("sound-layout-94");
MODULE_ALIAS("sound-layout-96");
MODULE_ALIAS("sound-layout-98");
MODULE_ALIAS("sound-layout-100");
MODULE_ALIAS("aoa-device-id-14");
MODULE_ALIAS("aoa-device-id-22");
MODULE_ALIAS("aoa-device-id-35");
static struct codec_connection onyx_connections_nomic[] = ;
static struct codec_connection onyx_connections_noheadphones[] = ;
static struct codec_connection onyx_connections_reallineout[] = ;
static struct codec_connection tas_connections_nolineout[] = ;
static struct codec_connection tas_connections_noline[] = ;
static struct codec_connection tas_connections_nomic[] = ;
static struct codec_connection tas_connections_all[] = ;
static struct codec_connection toonie_connections[] = ;
static struct codec_connection topaz_input[] = ;
static struct codec_connection topaz_output[] = ;
static struct codec_connection topaz_inout[] = ;
static struct layout layouts[] = ;
static struct layout *find_layout_by_id(unsigned int id)
static struct layout *find_layout_by_device(unsigned int id)
static void use_layout(struct layout *l)
struct layout_dev;
struct layout_dev_ptr ;
struct layout_dev ;
static LIST_HEAD(layouts_list);
static int layouts_list_items;
static struct layout_dev *layout_device;
#define control_info	snd_ctl_boolean_mono_info
#define AMP_CONTROL(n, description)					\
static int n##_control_get(struct snd_kcontrol *kcontrol,		\
struct snd_ctl_elem_value *ucontrol)		\
\
static int n##_control_put(struct snd_kcontrol *kcontrol,		\
struct snd_ctl_elem_value *ucontrol)		\
\
static struct snd_kcontrol_new n##_ctl =
AMP_CONTROL(headphone, "Headphone Switch");
AMP_CONTROL(speakers, "Speakers Switch");
AMP_CONTROL(lineout, "Line-Out Switch");
AMP_CONTROL(master, "Master Switch");
static int detect_choice_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int detect_choice_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new headphone_detect_choice = ;
static struct snd_kcontrol_new lineout_detect_choice = ;
static int detected_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new headphone_detected = ;
static struct snd_kcontrol_new lineout_detected = ;
static int check_codec(struct aoa_codec *codec,
struct layout_dev *ldev,
struct codec_connect_info *cci)
static int layout_found_codec(struct aoa_codec *codec)
static void layout_remove_codec(struct aoa_codec *codec)
static void layout_notify(void *data)
static void layout_attached_codec(struct aoa_codec *codec)
static struct aoa_fabric layout_fabric = ;
static int aoa_fabric_layout_probe(struct soundbus_dev *sdev)
static int aoa_fabric_layout_remove(struct soundbus_dev *sdev)
static int aoa_fabric_layout_suspend(struct soundbus_dev *sdev, pm_message_t state)
static int aoa_fabric_layout_resume(struct soundbus_dev *sdev)
static struct soundbus_driver aoa_soundbus_driver = ;
static int __init aoa_fabric_layout_init(void)
static void __exit aoa_fabric_layout_exit(void)
module_init(aoa_fabric_layout_init);
module_exit(aoa_fabric_layout_exit);
