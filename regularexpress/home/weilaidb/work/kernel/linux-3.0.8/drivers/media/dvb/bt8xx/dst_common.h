#define DST_COMMON_H
#define NO_DELAY		0
#define LONG_DELAY		1
#define DEVICE_INIT		2
#define DELAY			1
#define DST_TYPE_IS_SAT		0
#define DST_TYPE_IS_TERR	1
#define DST_TYPE_IS_CABLE	2
#define DST_TYPE_IS_ATSC	3
#define DST_TYPE_HAS_TS188	1
#define DST_TYPE_HAS_TS204	2
#define DST_TYPE_HAS_SYMDIV	4
#define DST_TYPE_HAS_FW_1	8
#define DST_TYPE_HAS_FW_2	16
#define DST_TYPE_HAS_FW_3	32
#define DST_TYPE_HAS_FW_BUILD	64
#define DST_TYPE_HAS_OBS_REGS	128
#define DST_TYPE_HAS_INC_COUNT	256
#define DST_TYPE_HAS_MULTI_FE	512
#define DST_TYPE_HAS_NEWTUNE_2	1024
#define DST_TYPE_HAS_DBOARD	2048
#define DST_TYPE_HAS_VLF	4096
#define DST_TYPE_HAS_MAC	1
#define DST_TYPE_HAS_DISEQC3	2
#define DST_TYPE_HAS_DISEQC4	4
#define DST_TYPE_HAS_DISEQC5	8
#define DST_TYPE_HAS_MOTO	16
#define DST_TYPE_HAS_CA		32
#define	DST_TYPE_HAS_ANALOG	64
#define DST_TYPE_HAS_SESSION	128
#define TUNER_TYPE_MULTI	1
#define TUNER_TYPE_UNKNOWN	2
#define TUNER_TYPE_L64724	4
#define TUNER_TYPE_STV0299	8
#define TUNER_TYPE_MB86A15	16
#define TUNER_TYPE_TDA10046	32
#define TUNER_TYPE_NXT200x	64
#define RDC_8820_PIO_0_DISABLE	0
#define RDC_8820_PIO_0_ENABLE	1
#define RDC_8820_INT		2
#define RDC_8820_RESET		4
#define GET_REPLY		1
#define NO_REPLY		0
#define GET_ACK			1
#define FIXED_COMM		8
#define ACK			0xff
struct dst_state ;
struct tuner_types ;
struct dst_types ;
struct dst_config
;
int rdc_reset_state(struct dst_state *state);
int dst_wait_dst_ready(struct dst_state *state, u8 delay_mode);
int dst_pio_disable(struct dst_state *state);
int dst_error_recovery(struct dst_state* state);
int dst_error_bailout(struct dst_state *state);
int dst_comm_init(struct dst_state* state);
int write_dst(struct dst_state *state, u8 * data, u8 len);
int read_dst(struct dst_state *state, u8 * ret, u8 len);
u8 dst_check_sum(u8 * buf, u32 len);
struct dst_state* dst_attach(struct dst_state* state, struct dvb_adapter *dvb_adapter);
struct dvb_device *dst_ca_attach(struct dst_state *state, struct dvb_adapter *dvb_adapter);
