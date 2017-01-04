#define GETBATTERYDATA		0xc0
#define GETSCANKEYCODE		0x90
#define GETTOUCHSAMPLES		0xa0
#define GETCONTRAST		0xD0
#define SETCONTRAST		0xD1
#define GETBRIGHTNESS		0xD2
#define SETBRIGHTNESS		0xD3
#define CONTRASTOFF		0xD8
#define BRIGHTNESSOFF		0xD9
#define PWMOFF			0xDF
#define TXDUMMY			0x11
#define ERRORCODE		0x00
extern void jornada_ssp_start(void);
extern void jornada_ssp_end(void);
extern int jornada_ssp_inout(u8 byte);
extern int jornada_ssp_byte(u8 byte);
