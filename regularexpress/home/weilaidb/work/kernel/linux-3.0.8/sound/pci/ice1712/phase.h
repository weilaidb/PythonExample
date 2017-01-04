#define __SOUND_PHASE_H
#define PHASE_DEVICE_DESC	","\
","\
","
#define VT1724_SUBDEVICE_PHASE22	0x3b155011
#define VT1724_SUBDEVICE_PHASE28	0x3b154911
#define VT1724_SUBDEVICE_TS22		0x3b157b11
extern struct snd_ice1712_card_info snd_vt1724_phase_cards[];
#define PHASE28_SPI_MISO	(1 << 21)
#define PHASE28_WM_RESET	(1 << 20)
#define PHASE28_SPI_CLK		(1 << 19)
#define PHASE28_SPI_MOSI	(1 << 18)
#define PHASE28_WM_RW		(1 << 17)
#define PHASE28_AC97_RESET	(1 << 16)
#define PHASE28_DIGITAL_SEL1	(1 << 15)
#define PHASE28_HP_SEL		(1 << 14)
#define PHASE28_WM_CS		(1 << 12)
#define PHASE28_AC97_COMMIT	(1 << 11)
#define PHASE28_AC97_ADDR	(1 << 10)
#define PHASE28_AC97_DATA_LOW	(1 << 9)
#define PHASE28_AC97_DATA_HIGH	(1 << 8)
#define PHASE28_AC97_DATA_MASK	0xFF
