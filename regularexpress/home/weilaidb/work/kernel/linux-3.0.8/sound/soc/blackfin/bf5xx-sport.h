#define __BF5XX_SPORT_H__
#define DESC_ELEMENT_COUNT 9
struct sport_device ;
struct sport_param ;
struct sport_device *sport_init(struct platform_device *pdev,
unsigned int wdsize, unsigned int dummy_count, size_t priv_size);
void sport_done(struct sport_device *sport);
int sport_set_multichannel(struct sport_device *sport, int tdm_count,
u32 mask, int packed);
int sport_config_rx(struct sport_device *sport,
unsigned int rcr1, unsigned int rcr2,
unsigned int clkdiv, unsigned int fsdiv);
int sport_config_tx(struct sport_device *sport,
unsigned int tcr1, unsigned int tcr2,
unsigned int clkdiv, unsigned int fsdiv);
int sport_config_rx_dma(struct sport_device *sport, void *buf,
int fragcount, size_t fragsize_bytes);
int sport_config_tx_dma(struct sport_device *sport, void *buf,
int fragcount, size_t fragsize_bytes);
int sport_tx_start(struct sport_device *sport);
int sport_tx_stop(struct sport_device *sport);
int sport_rx_start(struct sport_device *sport);
int sport_rx_stop(struct sport_device *sport);
unsigned long sport_curr_offset_rx(struct sport_device *sport);
unsigned long sport_curr_offset_tx(struct sport_device *sport);
void sport_incfrag(struct sport_device *sport, int *frag, int tx);
void sport_decfrag(struct sport_device *sport, int *frag, int tx);
int sport_set_rx_callback(struct sport_device *sport,
void (*rx_callback)(void *), void *rx_data);
int sport_set_tx_callback(struct sport_device *sport,
void (*tx_callback)(void *), void *tx_data);
int sport_set_err_callback(struct sport_device *sport,
void (*err_callback)(void *), void *err_data);
int sport_send_and_recv(struct sport_device *sport, u8 *out_data, \
u8 *in_data, int len);
