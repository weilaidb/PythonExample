MODULE_AUTHOR("Takashi Iwai, Steve Ratcliffe");
MODULE_DESCRIPTION("Emu8000 synth plug-in routine");
MODULE_LICENSE("GPL");
static int snd_emu8000_new_device(struct snd_seq_device *dev)
static int snd_emu8000_delete_device(struct snd_seq_device *dev)
static int __init alsa_emu8000_init(void)
static void __exit alsa_emu8000_exit(void)
module_init(alsa_emu8000_init)
module_exit(alsa_emu8000_exit)
