#if defined(CONFIG_SND_SEQ_DUMMY_MODULE)
int seq_client_load[15] = ;
int seq_client_load[15] = ;
int seq_default_timer_class = SNDRV_TIMER_CLASS_GLOBAL;
int seq_default_timer_sclass = SNDRV_TIMER_SCLASS_NONE;
int seq_default_timer_card = -1;
int seq_default_timer_device =
SNDRV_TIMER_GLOBAL_HRTIMER
#elif defined(CONFIG_SND_SEQ_RTCTIMER_DEFAULT)
SNDRV_TIMER_GLOBAL_RTC
SNDRV_TIMER_GLOBAL_SYSTEM
;
int seq_default_timer_subdevice = 0;
int seq_default_timer_resolution = 0;
MODULE_AUTHOR("Frank van de Pol <fvdpol@coil.demon.nl>, Jaroslav Kysela <perex@perex.cz>");
MODULE_DESCRIPTION("Advanced Linux Sound Architecture sequencer.");
MODULE_LICENSE("GPL");
module_param_array(seq_client_load, int, NULL, 0444);
MODULE_PARM_DESC(seq_client_load, "The numbers of global (system) clients to load through kmod.");
module_param(seq_default_timer_class, int, 0644);
MODULE_PARM_DESC(seq_default_timer_class, "The default timer class.");
module_param(seq_default_timer_sclass, int, 0644);
MODULE_PARM_DESC(seq_default_timer_sclass, "The default timer slave class.");
module_param(seq_default_timer_card, int, 0644);
MODULE_PARM_DESC(seq_default_timer_card, "The default timer card number.");
module_param(seq_default_timer_device, int, 0644);
MODULE_PARM_DESC(seq_default_timer_device, "The default timer device number.");
module_param(seq_default_timer_subdevice, int, 0644);
MODULE_PARM_DESC(seq_default_timer_subdevice, "The default timer subdevice number.");
module_param(seq_default_timer_resolution, int, 0644);
MODULE_PARM_DESC(seq_default_timer_resolution, "The default timer resolution in Hz.");
MODULE_ALIAS_CHARDEV(CONFIG_SND_MAJOR, SNDRV_MINOR_SEQUENCER);
MODULE_ALIAS("devname:snd/seq");
static int __init alsa_seq_init(void)
static void __exit alsa_seq_exit(void)
module_init(alsa_seq_init)
module_exit(alsa_seq_exit)
