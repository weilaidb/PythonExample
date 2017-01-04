#define SSP_H
struct ssp_state ;
int ssp_write_word(u16 data);
int ssp_read_word(u16 *data);
int ssp_flush(void);
void ssp_enable(void);
void ssp_disable(void);
void ssp_save_state(struct ssp_state *ssp);
void ssp_restore_state(struct ssp_state *ssp);
int ssp_init(void);
void ssp_exit(void);
