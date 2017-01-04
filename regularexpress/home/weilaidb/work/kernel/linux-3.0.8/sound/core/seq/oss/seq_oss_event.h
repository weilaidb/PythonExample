#define __SEQ_OSS_EVENT_H
#define SHORT_EVENT_SIZE	4
#define LONG_EVENT_SIZE		8
struct evrec_short ;
struct evrec_note ;
struct evrec_timer ;
struct evrec_extended ;
struct evrec_long ;
struct evrec_voice ;
struct evrec_sysex ;
union evrec ;
#define ev_is_long(ev) ((ev)->s.code >= 128)
#define ev_length(ev) ((ev)->s.code >= 128 ? LONG_EVENT_SIZE : SHORT_EVENT_SIZE)
int snd_seq_oss_process_event(struct seq_oss_devinfo *dp, union evrec *q, struct snd_seq_event *ev);
int snd_seq_oss_process_timer_event(struct seq_oss_timer *rec, union evrec *q);
int snd_seq_oss_event_input(struct snd_seq_event *ev, int direct, void *private_data, int atomic, int hop);
