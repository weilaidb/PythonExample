#define trace_eeprom(...) pvr2_trace(PVR2_TRACE_EEPROM,__VA_ARGS__)
#define EEPROM_SIZE 128
static u8 *pvr2_eeprom_fetch(struct pvr2_hdw *hdw)
int pvr2_eeprom_analyze(struct pvr2_hdw *hdw)
