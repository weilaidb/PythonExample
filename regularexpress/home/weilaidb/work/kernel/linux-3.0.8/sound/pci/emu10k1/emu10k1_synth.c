MODULE_AUTHOR("Takashi Iwai");
MODULE_DESCRIPTION("Routines for control of EMU10K1 WaveTable synth");
MODULE_LICENSE("GPL");
static int snd_emu10k1_synth_new_device(struct snd_seq_device *dev)
static int snd_emu10k1_synth_delete_device(struct snd_seq_device *dev)
static int __init alsa_emu10k1_synth_init(void)
static void __exit alsa_emu10k1_synth_exit(void)
module_init(alsa_emu10k1_synth_init)
module_exit(alsa_emu10k1_synth_exit)
