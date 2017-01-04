#define _ASM_XTALK_XWIDGET_H
#define WIDGET_ID			0x04
#define WIDGET_STATUS			0x0c
#define WIDGET_ERR_UPPER_ADDR		0x14
#define WIDGET_ERR_LOWER_ADDR		0x1c
#define WIDGET_CONTROL			0x24
#define WIDGET_REQ_TIMEOUT		0x2c
#define WIDGET_INTDEST_UPPER_ADDR	0x34
#define WIDGET_INTDEST_LOWER_ADDR	0x3c
#define WIDGET_ERR_CMD_WORD		0x44
#define WIDGET_LLP_CFG			0x4c
#define WIDGET_TFLUSH			0x54
#define WIDGET_REV_NUM			0xf0000000
#define WIDGET_PART_NUM			0x0ffff000
#define WIDGET_MFG_NUM			0x00000ffe
#define WIDGET_REV_NUM_SHFT		28
#define WIDGET_PART_NUM_SHFT		12
#define WIDGET_MFG_NUM_SHFT		1
#define XWIDGET_PART_NUM(widgetid) (((widgetid) & WIDGET_PART_NUM) >> WIDGET_PART_NUM_SHFT)
#define XWIDGET_REV_NUM(widgetid) (((widgetid) & WIDGET_REV_NUM) >> WIDGET_REV_NUM_SHFT)
#define XWIDGET_MFG_NUM(widgetid) (((widgetid) & WIDGET_MFG_NUM) >> WIDGET_MFG_NUM_SHFT)
#define WIDGET_LLP_REC_CNT		0xff000000
#define WIDGET_LLP_TX_CNT		0x00ff0000
#define WIDGET_PENDING			0x0000001f
#define	WIDGET_ERR_UPPER_ADDR_ONLY	0x0000ffff
#define WIDGET_F_BAD_PKT		0x00010000
#define WIDGET_LLP_XBAR_CRD		0x0000f000
#define	WIDGET_LLP_XBAR_CRD_SHFT	12
#define WIDGET_CLR_RLLP_CNT		0x00000800
#define WIDGET_CLR_TLLP_CNT		0x00000400
#define WIDGET_SYS_END			0x00000200
#define WIDGET_MAX_TRANS		0x000001f0
#define WIDGET_WIDGET_ID		0x0000000f
#define WIDGET_INT_VECTOR		0xff000000
#define WIDGET_INT_VECTOR_SHFT		24
#define WIDGET_TARGET_ID		0x000f0000
#define WIDGET_TARGET_ID_SHFT		16
#define WIDGET_UPP_ADDR			0x0000ffff
#define WIDGET_DIDN			0xf0000000
#define WIDGET_SIDN			0x0f000000
#define WIDGET_PACTYP			0x00f00000
#define WIDGET_TNUM			0x000f8000
#define WIDGET_COHERENT			0x00004000
#define WIDGET_DS			0x00003000
#define WIDGET_GBR			0x00000800
#define WIDGET_VBPM			0x00000400
#define WIDGET_ERROR			0x00000200
#define WIDGET_BARRIER			0x00000100
#define WIDGET_LLP_MAXRETRY		0x03ff0000
#define WIDGET_LLP_MAXRETRY_SHFT	16
#define WIDGET_LLP_NULLTIMEOUT		0x0000fc00
#define WIDGET_LLP_NULLTIMEOUT_SHFT	10
#define WIDGET_LLP_MAXBURST		0x000003ff
#define WIDGET_LLP_MAXBURST_SHFT	0
typedef u32 widgetreg_t;
typedef volatile struct widget_cfg  widget_cfg_t;
typedef struct  w_err_cmd_word_f;
typedef union  w_err_cmd_word_u;
typedef struct xwidget_info_s *xwidget_info_t;
typedef struct xwidget_hwid_s  *xwidget_hwid_t;
#define XWIDGET_HARDWARE_ID_MATCH(hwid1, hwid2) \
(((hwid1)->part_num == (hwid2)->part_num) && \
(((hwid1)->mfg_num == XWIDGET_MFG_NUM_NONE) || \
((hwid2)->mfg_num == XWIDGET_MFG_NUM_NONE) || \
((hwid1)->mfg_num == (hwid2)->mfg_num)))
