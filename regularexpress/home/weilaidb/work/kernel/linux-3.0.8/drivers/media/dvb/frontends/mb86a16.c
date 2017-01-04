unsigned int verbose = 5;
module_param(verbose, int, 0644);
#define ABS(x)		((x) < 0 ? (-x) : (x))
struct mb86a16_state ;
#define MB86A16_ERROR		0
#define MB86A16_NOTICE		1
#define MB86A16_INFO		2
#define MB86A16_DEBUG		3
#define dprintk(x, y, z, format, arg...) do  while (0)
#define TRACE_IN	dprintk(verbose, MB86A16_DEBUG, 1, "-->()")
#define TRACE_OUT	dprintk(verbose, MB86A16_DEBUG, 1, "()-->")
static int mb86a16_write(struct mb86a16_state *state, u8 reg, u8 val)
static int mb86a16_read(struct mb86a16_state *state, u8 reg, u8 *val)
static int CNTM_set(struct mb86a16_state *state,
unsigned char timint1,
unsigned char timint2,
unsigned char cnext)
static int smrt_set(struct mb86a16_state *state, int rate)
static int srst(struct mb86a16_state *state)
static int afcex_data_set(struct mb86a16_state *state,
unsigned char AFCEX_L,
unsigned char AFCEX_H)
static int afcofs_data_set(struct mb86a16_state *state,
unsigned char AFCEX_L,
unsigned char AFCEX_H)
static int stlp_set(struct mb86a16_state *state,
unsigned char STRAS,
unsigned char STRBS)
static int Vi_set(struct mb86a16_state *state, unsigned char ETH, unsigned char VIA)
static int initial_set(struct mb86a16_state *state)
static int S01T_set(struct mb86a16_state *state,
unsigned char s1t,
unsigned s0t)
static int EN_set(struct mb86a16_state *state,
int cren,
int afcen)
static int AFCEXEN_set(struct mb86a16_state *state,
int afcexen,
int smrt)
static int DAGC_data_set(struct mb86a16_state *state,
unsigned char DAGCA,
unsigned char DAGCW)
static void smrt_info_get(struct mb86a16_state *state, int rate)
static int signal_det(struct mb86a16_state *state,
int smrt,
unsigned char *SIG)
static int rf_val_set(struct mb86a16_state *state,
int f,
int smrt,
unsigned char R)
static int afcerr_chk(struct mb86a16_state *state)
static int dagcm_val_get(struct mb86a16_state *state)
static int mb86a16_read_status(struct dvb_frontend *fe, fe_status_t *status)
static int sync_chk(struct mb86a16_state *state,
unsigned char *VIRM)
static int freqerr_chk(struct mb86a16_state *state,
int fTP,
int smrt,
int unit)
static unsigned char vco_dev_get(struct mb86a16_state *state, int smrt)
static void swp_info_get(struct mb86a16_state *state,
int fOSC_start,
int smrt,
int v, int R,
int swp_ofs,
int *fOSC,
int *afcex_freq,
unsigned char *AFCEX_L,
unsigned char *AFCEX_H)
static int swp_freq_calcuation(struct mb86a16_state *state, int i, int v, int *V,  int vmax, int vmin,
int SIGMIN, int fOSC, int afcex_freq, int swp_ofs, unsigned char *SIG1)
static void swp_info_get2(struct mb86a16_state *state,
int smrt,
int R,
int swp_freq,
int *afcex_freq,
int *fOSC,
unsigned char *AFCEX_L,
unsigned char *AFCEX_H)
static void afcex_info_get(struct mb86a16_state *state,
int afcex_freq,
unsigned char *AFCEX_L,
unsigned char *AFCEX_H)
static int SEQ_set(struct mb86a16_state *state, unsigned char loop)
static int iq_vt_set(struct mb86a16_state *state, unsigned char IQINV)
static int FEC_srst(struct mb86a16_state *state)
static int S2T_set(struct mb86a16_state *state, unsigned char S2T)
static int S45T_set(struct mb86a16_state *state, unsigned char S4T, unsigned char S5T)
static int mb86a16_set_fe(struct mb86a16_state *state)
static int mb86a16_send_diseqc_msg(struct dvb_frontend *fe,
struct dvb_diseqc_master_cmd *cmd)
static int mb86a16_send_diseqc_burst(struct dvb_frontend *fe, fe_sec_mini_cmd_t burst)
static int mb86a16_set_tone(struct dvb_frontend *fe, fe_sec_tone_mode_t tone)
static enum dvbfe_search mb86a16_search(struct dvb_frontend *fe,
struct dvb_frontend_parameters *p)
static void mb86a16_release(struct dvb_frontend *fe)
static int mb86a16_init(struct dvb_frontend *fe)
static int mb86a16_sleep(struct dvb_frontend *fe)
static int mb86a16_read_ber(struct dvb_frontend *fe, u32 *ber)
static int mb86a16_read_signal_strength(struct dvb_frontend *fe, u16 *strength)
struct cnr ;
static const struct cnr cnr_tab[] = ;
static int mb86a16_read_snr(struct dvb_frontend *fe, u16 *snr)
static int mb86a16_read_ucblocks(struct dvb_frontend *fe, u32 *ucblocks)
static enum dvbfe_algo mb86a16_frontend_algo(struct dvb_frontend *fe)
static struct dvb_frontend_ops mb86a16_ops = ;
struct dvb_frontend *mb86a16_attach(const struct mb86a16_config *config,
struct i2c_adapter *i2c_adap)
EXPORT_SYMBOL(mb86a16_attach);
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Manu Abraham");
