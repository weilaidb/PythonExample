#define __SND_SEQ_CLIENTMGR_H
struct snd_seq_user_client ;
struct snd_seq_kernel_client ;
struct snd_seq_client ;
struct snd_seq_usage ;
int client_init_data(void);
int snd_sequencer_device_init(void);
void snd_sequencer_device_done(void);
struct snd_seq_client *snd_seq_client_use_ptr(int clientid);
#define snd_seq_client_unlock(client) snd_use_lock_free(&(client)->use_lock)
int snd_seq_dispatch_event(struct snd_seq_event_cell *cell, int atomic, int hop);
int snd_seq_kernel_client_enqueue(int client, struct snd_seq_event *ev, int atomic, int hop);
int snd_seq_kernel_client_enqueue_blocking(int client, struct snd_seq_event * ev,
struct file *file, int atomic, int hop);
int snd_seq_kernel_client_write_poll(int clientid, struct file *file, poll_table *wait);
int snd_seq_client_notify_subscription(int client, int port,
struct snd_seq_port_subscribe *info, int evtype);
extern int seq_client_load[15];
