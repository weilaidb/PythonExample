#define IDE_IN(a,b,c)   ( ((a)<(b)) ? (b) : ( (a)>(c) ? (c) : (a)) )
#define IDE_IMPLY(a,b)	((!(a)) || (b))
#define QD_TIM1_PORT		(base)
#define QD_CONFIG_PORT		(base+0x01)
#define QD_TIM2_PORT		(base+0x02)
#define QD_CONTROL_PORT		(base+0x03)
#define QD_CONFIG_IDE_BASEPORT	0x01
#define QD_CONFIG_BASEPORT	0x02
#define QD_CONFIG_ID3		0x04
#define QD_CONFIG_DISABLED	0x08
#define QD_CONFIG_QD6500	0xc0
#define QD_CONFIG_QD6580_A	0xa0
#define QD_CONFIG_QD6580_B	0x50
#define QD_CONTR_SEC_DISABLED	0x01
#define QD_ID3			((config & QD_CONFIG_ID3)!=0)
#define QD_CONFIG(hwif)		((hwif)->config_data & 0x00ff)
static inline u8 QD_TIMING(ide_drive_t *drive)
static inline u8 QD_TIMREG(ide_drive_t *drive)
#define QD6500_DEF_DATA		((QD_TIM1_PORT<<8) | (QD_ID3 ? 0x0c : 0x08))
#define QD6580_DEF_DATA		((QD_TIM1_PORT<<8) | (QD_ID3 ? 0x0a : 0x00))
#define QD6580_DEF_DATA2	((QD_TIM2_PORT<<8) | (QD_ID3 ? 0x0a : 0x00))
#define QD_DEF_CONTR		(0x40 | ((control & 0x02) ? 0x9f : 0x1f))
#define QD_TESTVAL		0x19
static struct qd65xx_timing_s  qd65xx_timing [] = ;
