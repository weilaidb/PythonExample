#define _INC_PMCC4_PRIVATE_H_
#define SBE_DRVR_INIT        0x0
#define SBE_DRVR_AVAILABLE   0x69734F4E
#define SBE_DRVR_DOWN        0x1
struct mdesc
;
struct c4_chan_info
;
typedef struct c4_chan_info mch_t;
struct c4_port_info
;
typedef struct c4_port_info mpi_t;
#define COMET_OFFSET(x) (0x80000+(x)*0x10000)
#define EEPROM_OFFSET   0xC0000
#define ISPLD_OFFSET    0xD0000
#define ISPLD_MCSR  0x0
#define ISPLD_MCLK  0x1
#define ISPLD_LEDS  0x2
#define ISPLD_INTR  0x3
#define ISPLD_MAX   0x3
struct sbe_card_info
;
typedef struct sbe_card_info ci_t;
struct s_hdw_info
;
typedef struct s_hdw_info hdw_info_t;
struct c4_priv
;
extern ci_t *c4_list;
mch_t      *c4_find_chan (int);
int         c4_set_chan (int channum, struct sbecom_chan_param *);
int         c4_get_chan (int channum, struct sbecom_chan_param *);
int         c4_get_chan_stats (int channum, struct sbecom_chan_stats *);
