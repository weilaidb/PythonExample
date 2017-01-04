#define __SAA7146__
#define SAA7146_VERSION_CODE 0x000101
#define O_NONCAP	O_TRUNC
#define MAX_GBUFFERS	2
#define FBUF_SIZE	0x190000
struct saa7146_window
;
struct device_open
;
#define MAX_OPENS 3
struct saa7146
;
#define saawrite(dat,adr)    writel((dat), saa->saa7146_adr+(adr))
#define saaread(adr)         readl(saa->saa7146_adr+(adr))
#define saawrite(dat,adr)    writel((dat), saa->saa7146_mem+(adr))
#define saaread(adr)         readl(saa->saa7146_mem+(adr))
#define saaand(dat,adr)      saawrite((dat) & saaread(adr), adr)
#define saaor(dat,adr)       saawrite((dat) | saaread(adr), adr)
#define saaaor(dat,mask,adr) saawrite((dat) | ((mask) & saaread(adr)), adr)
#define SAA7146_UNKNOWN		0x00000000
#define SAA7146_SAA7111		0x00000001
#define SAA7146_SAA7121		0x00000002
#define SAA7146_IBMMPEG		0x00000004
