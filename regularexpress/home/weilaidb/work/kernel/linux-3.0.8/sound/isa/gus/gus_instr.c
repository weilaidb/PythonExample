int snd_gus_iwffff_put_sample(void *private_data, struct iwffff_wave *wave,
char __user *data, long len, int atomic)
int snd_gus_iwffff_get_sample(void *private_data, struct iwffff_wave *wave,
char __user *data, long len, int atomic)
int snd_gus_iwffff_remove_sample(void *private_data, struct iwffff_wave *wave,
int atomic)
int snd_gus_gf1_put_sample(void *private_data, struct gf1_wave *wave,
char __user *data, long len, int atomic)
int snd_gus_gf1_get_sample(void *private_data, struct gf1_wave *wave,
char __user *data, long len, int atomic)
int snd_gus_gf1_remove_sample(void *private_data, struct gf1_wave *wave,
int atomic)
int snd_gus_simple_put_sample(void *private_data, struct simple_instrument *instr,
char __user *data, long len, int atomic)
int snd_gus_simple_get_sample(void *private_data, struct simple_instrument *instr,
char __user *data, long len, int atomic)
int snd_gus_simple_remove_sample(void *private_data, struct simple_instrument *instr,
int atomic)
