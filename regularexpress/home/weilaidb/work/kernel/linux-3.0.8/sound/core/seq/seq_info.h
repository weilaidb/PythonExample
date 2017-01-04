#define __SND_SEQ_INFO_H
void snd_seq_info_clients_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer);
void snd_seq_info_timer_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer);
void snd_seq_info_queues_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer);
int snd_seq_info_init( void );
int snd_seq_info_done( void );
static inline int snd_seq_info_init(void)
static inline int snd_seq_info_done(void)
