#define _LINUX_SMAPI_H
#define TRUE 1
#define FALSE 0
#define BOOLEAN int
typedef struct  SMAPI_DSP_SETTINGS;
int smapi_init(void);
int smapi_query_DSP_cfg(SMAPI_DSP_SETTINGS * pSettings);
int smapi_set_DSP_cfg(void);
int smapi_set_DSP_power_state(BOOLEAN bOn);
