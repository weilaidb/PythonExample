#define __LINUX_IXJUSER_H
#define IXJCTL_DSP_RESET 		_IO  ('q', 0xC0)
#define IXJCTL_RING                     PHONE_RING
#define IXJCTL_HOOKSTATE                PHONE_HOOKSTATE
#define IXJCTL_MAXRINGS			PHONE_MAXRINGS
#define IXJCTL_RING_CADENCE		PHONE_RING_CADENCE
#define IXJCTL_RING_START		PHONE_RING_START
#define IXJCTL_RING_STOP		PHONE_RING_STOP
#define IXJCTL_CARDTYPE			_IOR ('q', 0xC1, int)
#define IXJCTL_SERIAL			_IOR ('q', 0xC2, int)
#define IXJCTL_DSP_TYPE                 _IOR ('q', 0xC3, int)
#define IXJCTL_DSP_VERSION              _IOR ('q', 0xC4, int)
#define IXJCTL_VERSION              	_IOR ('q', 0xDA, char *)
#define IXJCTL_DSP_IDLE			_IO  ('q', 0xC5)
#define IXJCTL_TESTRAM			_IO  ('q', 0xC6)
#define IXJCTL_REC_CODEC                PHONE_REC_CODEC
#define IXJCTL_REC_START                PHONE_REC_START
#define IXJCTL_REC_STOP                 PHONE_REC_STOP
#define IXJCTL_REC_DEPTH		PHONE_REC_DEPTH
#define IXJCTL_FRAME			PHONE_FRAME
#define IXJCTL_REC_VOLUME		PHONE_REC_VOLUME
#define IXJCTL_REC_LEVEL		PHONE_REC_LEVEL
typedef enum  IXJ_FILTER_FREQ;
typedef struct  IXJ_FILTER;
typedef struct  IXJ_FILTER_CADENCE;
#define IXJCTL_SET_FILTER		_IOW ('q', 0xC7, IXJ_FILTER *)
#define IXJCTL_SET_FILTER_RAW		_IOW ('q', 0xDD, IXJ_FILTER_RAW *)
#define IXJCTL_GET_FILTER_HIST		_IOW ('q', 0xC8, int)
#define IXJCTL_FILTER_CADENCE		_IOW ('q', 0xD6, IXJ_FILTER_CADENCE *)
#define IXJCTL_PLAY_CID			_IO  ('q', 0xD7)
typedef enum  IXJ_FREQ;
typedef enum  IXJ_NOTE;
typedef struct  IXJ_TONE;
#define IXJCTL_INIT_TONE		_IOW ('q', 0xC9, IXJ_TONE *)
typedef struct  IXJ_CADENCE_ELEMENT;
typedef enum  IXJ_CADENCE_TERM;
typedef struct  IXJ_CADENCE;
#define IXJCTL_TONE_CADENCE		_IOW ('q', 0xCA, IXJ_CADENCE *)
#define IXJCTL_PLAY_CODEC               PHONE_PLAY_CODEC
#define IXJCTL_PLAY_START               PHONE_PLAY_START
#define IXJCTL_PLAY_STOP                PHONE_PLAY_STOP
#define IXJCTL_PLAY_DEPTH		PHONE_PLAY_DEPTH
#define IXJCTL_PLAY_VOLUME		PHONE_PLAY_VOLUME
#define IXJCTL_PLAY_LEVEL		PHONE_PLAY_LEVEL
#define IXJCTL_AEC_START		_IOW ('q', 0xCB, int)
#define IXJCTL_AEC_STOP			_IO  ('q', 0xCC)
#define IXJCTL_AEC_GET_LEVEL		_IO  ('q', 0xCD)
#define AEC_OFF   0
#define AEC_LOW   1
#define AEC_MED   2
#define AEC_HIGH  3
#define AEC_AUTO  4
#define AEC_AGC   5
#define IXJCTL_DTMF_READY		PHONE_DTMF_READY
#define IXJCTL_GET_DTMF                 PHONE_GET_DTMF
#define IXJCTL_GET_DTMF_ASCII           PHONE_GET_DTMF_ASCII
#define IXJCTL_DTMF_OOB			PHONE_DTMF_OOB
#define IXJCTL_EXCEPTION		PHONE_EXCEPTION
#define IXJCTL_PLAY_TONE		PHONE_PLAY_TONE
#define IXJCTL_SET_TONE_ON_TIME		PHONE_SET_TONE_ON_TIME
#define IXJCTL_SET_TONE_OFF_TIME	PHONE_SET_TONE_OFF_TIME
#define IXJCTL_GET_TONE_ON_TIME		PHONE_GET_TONE_ON_TIME
#define IXJCTL_GET_TONE_OFF_TIME	PHONE_GET_TONE_OFF_TIME
#define IXJCTL_GET_TONE_STATE		PHONE_GET_TONE_STATE
#define IXJCTL_BUSY			PHONE_BUSY
#define IXJCTL_RINGBACK			PHONE_RINGBACK
#define IXJCTL_DIALTONE			PHONE_DIALTONE
#define IXJCTL_CPT_STOP			PHONE_CPT_STOP
#define IXJCTL_SET_LED			_IOW ('q', 0xCE, int)
#define IXJCTL_MIXER			_IOW ('q', 0xCF, int)
#define MIXER_MASTER_L		0x0000
#define MIXER_MASTER_R		0x0100
#define ATT00DB			0x00
#define ATT02DB			0x01
#define ATT04DB			0x02
#define ATT06DB			0x03
#define ATT08DB			0x04
#define ATT10DB			0x05
#define ATT12DB			0x06
#define ATT14DB			0x07
#define ATT16DB			0x08
#define ATT18DB			0x09
#define ATT20DB			0x0A
#define ATT22DB			0x0B
#define ATT24DB			0x0C
#define ATT26DB			0x0D
#define ATT28DB			0x0E
#define ATT30DB			0x0F
#define ATT32DB			0x10
#define ATT34DB			0x11
#define ATT36DB			0x12
#define ATT38DB			0x13
#define ATT40DB			0x14
#define ATT42DB			0x15
#define ATT44DB			0x16
#define ATT46DB			0x17
#define ATT48DB			0x18
#define ATT50DB			0x19
#define ATT52DB			0x1A
#define ATT54DB			0x1B
#define ATT56DB			0x1C
#define ATT58DB			0x1D
#define ATT60DB			0x1E
#define ATT62DB			0x1F
#define MASTER_MUTE		0x80
#define MIXER_PORT_CD_L		0x0600
#define MIXER_PORT_CD_R		0x0700
#define MIXER_PORT_LINE_IN_L	0x0800
#define MIXER_PORT_LINE_IN_R	0x0900
#define MIXER_PORT_POTS_REC	0x0C00
#define MIXER_PORT_MIC		0x0E00
#define GAIN12DB		0x00
#define GAIN10DB		0x01
#define GAIN08DB		0x02
#define GAIN06DB		0x03
#define GAIN04DB		0x04
#define GAIN02DB		0x05
#define GAIN00DB		0x06
#define GAIN_02DB		0x07
#define GAIN_04DB		0x08
#define GAIN_06DB		0x09
#define GAIN_08DB		0x0A
#define GAIN_10DB		0x0B
#define GAIN_12DB		0x0C
#define GAIN_14DB		0x0D
#define GAIN_16DB		0x0E
#define GAIN_18DB		0x0F
#define GAIN_20DB		0x10
#define GAIN_22DB		0x11
#define GAIN_24DB		0x12
#define GAIN_26DB		0x13
#define GAIN_28DB		0x14
#define GAIN_30DB		0x15
#define GAIN_32DB		0x16
#define GAIN_34DB		0x17
#define GAIN_36DB		0x18
#define GAIN_38DB		0x19
#define GAIN_40DB		0x1A
#define GAIN_42DB		0x1B
#define GAIN_44DB		0x1C
#define GAIN_46DB		0x1D
#define GAIN_48DB		0x1E
#define GAIN_50DB		0x1F
#define INPUT_MUTE		0x80
#define MIXER_PORT_POTS_PLAY	0x0F00
#define POTS_ATT_00DB		0x00
#define POTS_ATT_04DB		0x01
#define POTS_ATT_08DB		0x02
#define POTS_ATT_12DB		0x03
#define POTS_ATT_16DB		0x04
#define POTS_ATT_20DB		0x05
#define POTS_ATT_24DB		0x06
#define POTS_ATT_28DB		0x07
#define POTS_MUTE		0x80
#define IXJCTL_DAA_COEFF_SET		_IOW ('q', 0xD0, int)
#define DAA_US 		1
#define DAA_UK 		2
#define DAA_FRANCE 	3
#define DAA_GERMANY	4
#define DAA_AUSTRALIA	5
#define DAA_JAPAN	6
#define IXJCTL_PORT			_IOW ('q', 0xD1, int)
#define PORT_QUERY	0
#define PORT_POTS	1
#define PORT_PSTN	2
#define PORT_SPEAKER	3
#define PORT_HANDSET	4
#define IXJCTL_PSTN_SET_STATE		PHONE_PSTN_SET_STATE
#define IXJCTL_PSTN_GET_STATE		PHONE_PSTN_GET_STATE
#define PSTN_ON_HOOK	0
#define PSTN_RINGING	1
#define PSTN_OFF_HOOK	2
#define PSTN_PULSE_DIAL	3
#define IXJCTL_DAA_AGAIN		_IOW ('q', 0xD2, int)
#define AGRR00DB	0x00
#define AGRR3_5DB	0x10
#define AGRR06DB	0x30
#define AGX00DB		0x00
#define AGX_6DB		0x04
#define AGX3_5DB	0x08
#define AGX_2_5B	0x0C
#define IXJCTL_PSTN_LINETEST		_IO  ('q', 0xD3)
#define IXJCTL_CID			_IOR ('q', 0xD4, PHONE_CID *)
#define IXJCTL_VMWI			_IOR ('q', 0xD8, int)
#define IXJCTL_CIDCW			_IOW ('q', 0xD9, PHONE_CID *)
#define IXJCTL_WINK_DURATION		PHONE_WINK_DURATION
#define IXJCTL_POTS_PSTN		_IOW ('q', 0xD5, int)
#define IXJCTL_HZ                       _IOW ('q', 0xE0, int)
#define IXJCTL_RATE                     _IOW ('q', 0xE1, int)
#define IXJCTL_FRAMES_READ		_IOR ('q', 0xE2, unsigned long)
#define IXJCTL_FRAMES_WRITTEN		_IOR ('q', 0xE3, unsigned long)
#define IXJCTL_READ_WAIT		_IOR ('q', 0xE4, unsigned long)
#define IXJCTL_WRITE_WAIT		_IOR ('q', 0xE5, unsigned long)
#define IXJCTL_DRYBUFFER_READ		_IOR ('q', 0xE6, unsigned long)
#define IXJCTL_DRYBUFFER_CLEAR		_IO  ('q', 0xE7)
#define IXJCTL_DTMF_PRESCALE		_IOW ('q', 0xE8, int)
typedef enum  IXJ_SIGEVENT;
typedef struct  IXJ_SIGDEF;
#define IXJCTL_SIGCTL			_IOW ('q', 0xE9, IXJ_SIGDEF *)
#define IXJCTL_SC_RXG			_IOW ('q', 0xEA, int)
#define IXJCTL_SC_TXG			_IOW ('q', 0xEB, int)
#define IXJCTL_INTERCOM_START 		_IOW ('q', 0xFD, int)
#define IXJCTL_INTERCOM_STOP  		_IOW ('q', 0xFE, int)
typedef struct  IXJ_FILTER_RAW;
