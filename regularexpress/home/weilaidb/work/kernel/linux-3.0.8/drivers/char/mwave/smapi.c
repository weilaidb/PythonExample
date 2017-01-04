static unsigned short g_usSmapiPort = 0;
static int smapi_request(unsigned short inBX, unsigned short inCX,
unsigned short inDI, unsigned short inSI,
unsigned short *outAX, unsigned short *outBX,
unsigned short *outCX, unsigned short *outDX,
unsigned short *outDI, unsigned short *outSI)
int smapi_query_DSP_cfg(SMAPI_DSP_SETTINGS * pSettings)
int smapi_set_DSP_cfg(void)
int smapi_set_DSP_power_state(BOOLEAN bOn)
int smapi_init(void)
