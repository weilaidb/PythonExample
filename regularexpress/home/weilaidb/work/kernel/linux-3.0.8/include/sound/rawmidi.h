#define __SOUND_RAWMIDI_H
#if defined(CONFIG_SND_SEQUENCER) || defined(CONFIG_SND_SEQUENCER_MODULE)
#define SNDRV_RAWMIDI_DEVICES		8
#define SNDRV_RAWMIDI_LFLG_OUTPUT	(1<<0)
#define SNDRV_RAWMIDI_LFLG_INPUT	(1<<1)
#define SNDRV_RAWMIDI_LFLG_OPEN		(3<<0)
#define SNDRV_RAWMIDI_LFLG_APPEND	(1<<2)
struct snd_rawmidi;
struct snd_rawmidi_substream;
struct snd_seq_port_info;
struct pid;
struct snd_rawmidi_ops ;
struct snd_rawmidi_global_ops ;
struct snd_rawmidi_runtime ;
struct snd_rawmidi_substream ;
struct snd_rawmidi_file ;
struct snd_rawmidi_str ;
struct snd_rawmidi ;
int snd_rawmidi_new(struct snd_card *card, char *id, int device,
int output_count, int input_count,
struct snd_rawmidi **rmidi);
void snd_rawmidi_set_ops(struct snd_rawmidi *rmidi, int stream,
struct snd_rawmidi_ops *ops);
void snd_rawmidi_receive_reset(struct snd_rawmidi_substream *substream);
int snd_rawmidi_receive(struct snd_rawmidi_substream *substream,
const unsigned char *buffer, int count);
void snd_rawmidi_transmit_reset(struct snd_rawmidi_substream *substream);
int snd_rawmidi_transmit_empty(struct snd_rawmidi_substream *substream);
int snd_rawmidi_transmit_peek(struct snd_rawmidi_substream *substream,
unsigned char *buffer, int count);
int snd_rawmidi_transmit_ack(struct snd_rawmidi_substream *substream, int count);
int snd_rawmidi_transmit(struct snd_rawmidi_substream *substream,
unsigned char *buffer, int count);
int snd_rawmidi_info_select(struct snd_card *card, struct snd_rawmidi_info *info);
int snd_rawmidi_kernel_open(struct snd_card *card, int device, int subdevice,
int mode, struct snd_rawmidi_file *rfile);
int snd_rawmidi_kernel_release(struct snd_rawmidi_file *rfile);
int snd_rawmidi_output_params(struct snd_rawmidi_substream *substream,
struct snd_rawmidi_params *params);
int snd_rawmidi_input_params(struct snd_rawmidi_substream *substream,
struct snd_rawmidi_params *params);
int snd_rawmidi_drop_output(struct snd_rawmidi_substream *substream);
int snd_rawmidi_drain_output(struct snd_rawmidi_substream *substream);
int snd_rawmidi_drain_input(struct snd_rawmidi_substream *substream);
long snd_rawmidi_kernel_read(struct snd_rawmidi_substream *substream,
unsigned char *buf, long count);
long snd_rawmidi_kernel_write(struct snd_rawmidi_substream *substream,
const unsigned char *buf, long count);
