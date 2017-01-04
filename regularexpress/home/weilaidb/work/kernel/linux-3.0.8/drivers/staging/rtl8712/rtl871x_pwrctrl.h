#define __RTL871X_PWRCTRL_H_
#define FW_PWR0	0
#define FW_PWR1		1
#define FW_PWR2		2
#define FW_PWR3		3
#define HW_PWR0	7
#define HW_PWR1		6
#define HW_PWR2		2
#define HW_PWR3	0
#define HW_PWR4	8
#define FW_PWRMSK	0x7
#define XMIT_ALIVE	BIT(0)
#define RECV_ALIVE	BIT(1)
#define CMD_ALIVE	BIT(2)
#define EVT_ALIVE	BIT(3)
enum Power_Mgnt ;
#define		PS_DPS				BIT(0)
#define		PS_LCLK				(PS_DPS)
#define	PS_RF_OFF			BIT(1)
#define	PS_ALL_ON			BIT(2)
#define	PS_ST_ACTIVE		BIT(3)
#define	PS_LP				BIT(4)
#define	PS_STATE_MASK		(0x0F)
#define	PS_STATE_HW_MASK	(0x07)
#define		PS_SEQ_MASK		(0xc0)
#define	PS_STATE(x)			(PS_STATE_MASK & (x))
#define	PS_STATE_HW(x)	(PS_STATE_HW_MASK & (x))
#define	PS_SEQ(x)			(PS_SEQ_MASK & (x))
#define	PS_STATE_S0		(PS_DPS)
#define		PS_STATE_S1		(PS_LCLK)
#define	PS_STATE_S2		(PS_RF_OFF)
#define		PS_STATE_S3		(PS_ALL_ON)
#define	PS_STATE_S4		((PS_ST_ACTIVE) | (PS_ALL_ON))
#define		PS_IS_RF_ON(x)		((x) & (PS_ALL_ON))
#define		PS_IS_ACTIVE(x)		((x) & (PS_ST_ACTIVE))
#define		CLR_PS_STATE(x)	((x) = ((x) & (0xF0)))
struct reportpwrstate_parm ;
static inline void _enter_pwrlock(struct semaphore *plock)
struct	pwrctrl_priv ;
void r8712_init_pwrctrl_priv(struct _adapter *adapter);
sint r8712_register_cmd_alive(struct _adapter *padapter);
void r8712_unregister_cmd_alive(struct _adapter *padapter);
void r8712_cpwm_int_hdl(struct _adapter *padapter,
struct reportpwrstate_parm *preportpwrstate);
void r8712_set_ps_mode(struct _adapter *padapter, uint ps_mode,
uint smart_ps);
void r8712_set_rpwm(struct _adapter *padapter, u8 val8);
