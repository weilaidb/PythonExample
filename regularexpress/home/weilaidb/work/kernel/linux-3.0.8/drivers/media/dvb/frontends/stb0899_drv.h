#define __STB0899_DRV_H
#define STB0899_TSMODE_SERIAL		1
#define STB0899_CLKPOL_FALLING		2
#define STB0899_CLKNULL_PARITY		3
#define STB0899_SYNC_FORCED		4
#define STB0899_FECMODE_DSS		5
struct stb0899_s1_reg ;
struct stb0899_s2_reg ;
enum stb0899_inversion ;
#define STB0899_GPIO00				0xf140
#define STB0899_GPIO01				0xf141
#define STB0899_GPIO02				0xf142
#define STB0899_GPIO03				0xf143
#define STB0899_GPIO04				0xf144
#define STB0899_GPIO05				0xf145
#define STB0899_GPIO06				0xf146
#define STB0899_GPIO07				0xf147
#define STB0899_GPIO08				0xf148
#define STB0899_GPIO09				0xf149
#define STB0899_GPIO10				0xf14a
#define STB0899_GPIO11				0xf14b
#define STB0899_GPIO12				0xf14c
#define STB0899_GPIO13				0xf14d
#define STB0899_GPIO14				0xf14e
#define STB0899_GPIO15				0xf14f
#define STB0899_GPIO16				0xf150
#define STB0899_GPIO17				0xf151
#define STB0899_GPIO18				0xf152
#define STB0899_GPIO19				0xf153
#define STB0899_GPIO20				0xf154
#define STB0899_GPIOPULLUP			0x01
#define STB0899_GPIOPULLDN			0x00
#define STB0899_POSTPROC_GPIO_POWER		0x00
#define STB0899_POSTPROC_GPIO_LOCK		0x01
struct stb0899_postproc ;
struct stb0899_config ;
#if defined(CONFIG_DVB_STB0899) || (defined(CONFIG_DVB_STB0899_MODULE) && defined(MODULE))
extern struct dvb_frontend *stb0899_attach(struct stb0899_config *config,
struct i2c_adapter *i2c);
static inline struct dvb_frontend *stb0899_attach(struct stb0899_config *config,
struct i2c_adapter *i2c)
