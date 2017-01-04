#define _SND_AT73C213_H
#define DAC_CTRL		0x00
#define DAC_CTRL_ONPADRV	7
#define DAC_CTRL_ONAUXIN	6
#define DAC_CTRL_ONDACR		5
#define DAC_CTRL_ONDACL		4
#define DAC_CTRL_ONLNOR		3
#define DAC_CTRL_ONLNOL		2
#define DAC_CTRL_ONLNIR		1
#define DAC_CTRL_ONLNIL		0
#define DAC_LLIG		0x01
#define DAC_LLIG_LLIG		0
#define DAC_RLIG		0x02
#define DAC_RLIG_RLIG		0
#define DAC_LMPG		0x03
#define DAC_LMPG_LMPG		0
#define DAC_RMPG		0x04
#define DAC_RMPG_RMPG		0
#define DAC_LLOG		0x05
#define DAC_LLOG_LLOG		0
#define DAC_RLOG		0x06
#define DAC_RLOG_RLOG		0
#define DAC_OLC			0x07
#define DAC_OLC_RSHORT		7
#define DAC_OLC_ROLC		4
#define DAC_OLC_LSHORT		3
#define DAC_OLC_LOLC		0
#define DAC_MC			0x08
#define DAC_MC_INVR		5
#define DAC_MC_INVL		4
#define DAC_MC_RMSMIN2		3
#define DAC_MC_RMSMIN1		2
#define DAC_MC_LMSMIN2		1
#define DAC_MC_LMSMIN1		0
#define DAC_CSFC		0x09
#define DAC_CSFC_OVRSEL		4
#define DAC_MISC		0x0A
#define DAC_MISC_VCMCAPSEL	7
#define DAC_MISC_DINTSEL	4
#define DAC_MISC_DITHEN		3
#define DAC_MISC_DEEMPEN	2
#define DAC_MISC_NBITS		0
#define DAC_PRECH		0x0C
#define DAC_PRECH_PRCHGPDRV	7
#define DAC_PRECH_PRCHGAUX1	6
#define DAC_PRECH_PRCHGLNOR	5
#define DAC_PRECH_PRCHGLNOL	4
#define DAC_PRECH_PRCHGLNIR	3
#define DAC_PRECH_PRCHGLNIL	2
#define DAC_PRECH_PRCHG		1
#define DAC_PRECH_ONMSTR	0
#define DAC_AUXG		0x0D
#define DAC_AUXG_AUXG		0
#define DAC_RST			0x10
#define DAC_RST_RESMASK		2
#define DAC_RST_RESFILZ		1
#define DAC_RST_RSTZ		0
#define PA_CTRL			0x11
#define PA_CTRL_APAON		6
#define PA_CTRL_APAPRECH	5
#define PA_CTRL_APALP		4
#define PA_CTRL_APAGAIN		0