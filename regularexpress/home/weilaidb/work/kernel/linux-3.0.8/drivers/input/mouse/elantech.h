#define _ELANTECH_H
#define ETP_FW_VERSION_QUERY		0x01
#define ETP_CAPABILITIES_QUERY		0x02
#define ETP_REGISTER_READ		0x10
#define ETP_REGISTER_WRITE		0x11
#define ETP_PS2_CUSTOM_COMMAND		0xf8
#define ETP_PS2_COMMAND_TRIES		3
#define ETP_PS2_COMMAND_DELAY		500
#define ETP_READ_BACK_TRIES		5
#define ETP_READ_BACK_DELAY		2000
#define ETP_R10_ABSOLUTE_MODE		0x04
#define ETP_R11_4_BYTE_MODE		0x02
#define ETP_CAP_HAS_ROCKER		0x04
#define ETP_EDGE_FUZZ_V1		32
#define ETP_XMIN_V1			(  0 + ETP_EDGE_FUZZ_V1)
#define ETP_XMAX_V1			(576 - ETP_EDGE_FUZZ_V1)
#define ETP_YMIN_V1			(  0 + ETP_EDGE_FUZZ_V1)
#define ETP_YMAX_V1			(384 - ETP_EDGE_FUZZ_V1)
#define ETP_EDGE_FUZZ_V2		8
#define ETP_XMIN_V2			(   0 + ETP_EDGE_FUZZ_V2)
#define ETP_XMAX_V2			(1152 - ETP_EDGE_FUZZ_V2)
#define ETP_YMIN_V2			(   0 + ETP_EDGE_FUZZ_V2)
#define ETP_YMAX_V2			( 768 - ETP_EDGE_FUZZ_V2)
#define ETP_PMIN_V2			0
#define ETP_PMAX_V2			255
#define ETP_WMIN_V2			0
#define ETP_WMAX_V2			15
#define ETP_2FT_FUZZ			4
#define ETP_2FT_XMIN			(  0 + ETP_2FT_FUZZ)
#define ETP_2FT_XMAX			(288 - ETP_2FT_FUZZ)
#define ETP_2FT_YMIN			(  0 + ETP_2FT_FUZZ)
#define ETP_2FT_YMAX			(192 - ETP_2FT_FUZZ)
struct elantech_data ;
int elantech_detect(struct psmouse *psmouse, bool set_properties);
int elantech_init(struct psmouse *psmouse);
static inline int elantech_detect(struct psmouse *psmouse, bool set_properties)
static inline int elantech_init(struct psmouse *psmouse)
