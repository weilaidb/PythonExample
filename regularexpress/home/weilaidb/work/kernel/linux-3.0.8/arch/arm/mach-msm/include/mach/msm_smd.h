#define __ASM_ARCH_MSM_SMD_H
typedef struct smd_channel smd_channel_t;
extern int (*msm_check_for_modem_crash)(void);
int smd_open(const char *name, smd_channel_t **ch, void *priv,
void (*notify)(void *priv, unsigned event));
#define SMD_EVENT_DATA 1
#define SMD_EVENT_OPEN 2
#define SMD_EVENT_CLOSE 3
int smd_close(smd_channel_t *ch);
int smd_read(smd_channel_t *ch, void *data, int len);
int smd_write(smd_channel_t *ch, const void *data, int len);
int smd_write_atomic(smd_channel_t *ch, const void *data, int len);
int smd_write_avail(smd_channel_t *ch);
int smd_read_avail(smd_channel_t *ch);
int smd_cur_packet_size(smd_channel_t *ch);
void smd_kick(smd_channel_t *ch);
typedef enum  smd_port_id_type;
