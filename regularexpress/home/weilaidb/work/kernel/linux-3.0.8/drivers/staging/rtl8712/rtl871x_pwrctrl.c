#define _RTL871X_PWRCTRL_C_
#define RTL8712_SDIO_LOCAL_BASE 0X10100000
#define SDIO_HCPWM (RTL8712_SDIO_LOCAL_BASE + 0x0081)
void r8712_set_rpwm(struct _adapter *padapter, u8 val8)
void r8712_set_ps_mode(struct _adapter *padapter, uint ps_mode, uint smart_ps)
void r8712_cpwm_int_hdl(struct _adapter *padapter,
struct reportpwrstate_parm *preportpwrstate)
static inline void register_task_alive(struct pwrctrl_priv *pwrctrl, uint tag)
static inline void unregister_task_alive(struct pwrctrl_priv *pwrctrl, uint tag)
static void _rpwm_check_handler (struct _adapter *padapter)
static void SetPSModeWorkItemCallback(struct work_struct *work)
static void rpwm_workitem_callback(struct work_struct *work)
static void rpwm_check_handler (void *FunctionContext)
void r8712_init_pwrctrl_priv(struct _adapter *padapter)
sint r8712_register_cmd_alive(struct _adapter *padapter)
void r8712_unregister_cmd_alive(struct _adapter *padapter)
