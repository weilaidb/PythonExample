#define __SOUND_WAVEFRONT_H__
#if (!defined(__GNUC__) && !defined(__GNUG__))
You will not be able to compile this file correctly without gcc, because
it is necessary to pack the "wavefront_alias" structure to a size
of 22 bytes, corresponding to 16-bit alignment (as would have been
the case on the original platform, MS-DOS). If this is not done,
then WavePatch-format files cannot be read/written correctly.
The method used to do this here ("__attribute__((packed)") is
completely compiler dependent.
All other wavefront_* types end up aligned to 32 bit values and
still have the same (correct) size.
#define NUM_MIDIKEYS 128
#define NUM_MIDICHANNELS 16
typedef short s16;
typedef unsigned short u16;
typedef int s32;
typedef unsigned int u32;
typedef char s8;
typedef unsigned char u8;
typedef s16 INT16;
typedef u16 UINT16;
typedef s32 INT32;
typedef u32 UINT32;
typedef s8 CHAR8;
typedef u8 UCHAR8;
#define WFC_DEBUG_DRIVER                0
#define WFC_FX_IOCTL                    1
#define WFC_PATCH_STATUS                2
#define WFC_PROGRAM_STATUS              3
#define WFC_SAMPLE_STATUS               4
#define WFC_DISABLE_INTERRUPTS          5
#define WFC_ENABLE_INTERRUPTS           6
#define WFC_INTERRUPT_STATUS            7
#define WFC_ROMSAMPLES_RDONLY           8
#define WFC_IDENTIFY_SLOT_TYPE          9
#define WFC_DOWNLOAD_SAMPLE		0x80
#define WFC_DOWNLOAD_BLOCK		0x81
#define WFC_DOWNLOAD_MULTISAMPLE	0x82
#define WFC_DOWNLOAD_SAMPLE_ALIAS	0x83
#define WFC_DELETE_SAMPLE		0x84
#define WFC_REPORT_FREE_MEMORY		0x85
#define WFC_DOWNLOAD_PATCH		0x86
#define WFC_DOWNLOAD_PROGRAM		0x87
#define WFC_SET_SYNTHVOL		0x89
#define WFC_SET_NVOICES			0x8B
#define WFC_DOWNLOAD_DRUM		0x90
#define WFC_GET_SYNTHVOL		0x92
#define WFC_GET_NVOICES			0x94
#define WFC_DISABLE_CHANNEL		0x9A
#define WFC_ENABLE_CHANNEL		0x9B
#define WFC_MISYNTH_OFF			0x9D
#define WFC_MISYNTH_ON			0x9E
#define WFC_FIRMWARE_VERSION		0x9F
#define WFC_GET_NSAMPLES		0xA0
#define WFC_DISABLE_DRUM_PROGRAM	0xA2
#define WFC_UPLOAD_PATCH		0xA3
#define WFC_UPLOAD_PROGRAM		0xA4
#define WFC_SET_TUNING			0xA6
#define WFC_GET_TUNING			0xA7
#define WFC_VMIDI_ON			0xA8
#define WFC_VMIDI_OFF			0xA9
#define WFC_MIDI_STATUS			0xAA
#define WFC_GET_CHANNEL_STATUS		0xAB
#define WFC_DOWNLOAD_SAMPLE_HEADER	0xAC
#define WFC_UPLOAD_SAMPLE_HEADER	0xAD
#define WFC_UPLOAD_MULTISAMPLE		0xAE
#define WFC_UPLOAD_SAMPLE_ALIAS		0xAF
#define WFC_IDENTIFY_SAMPLE_TYPE	0xB0
#define WFC_DOWNLOAD_EDRUM_PROGRAM	0xB1
#define WFC_UPLOAD_EDRUM_PROGRAM	0xB2
#define WFC_SET_EDRUM_CHANNEL		0xB3
#define WFC_INSTOUT_LEVELS		0xB4
#define WFC_PEAKOUT_LEVELS		0xB5
#define WFC_REPORT_CHANNEL_PROGRAMS	0xB6
#define WFC_HARDWARE_VERSION		0xCF
#define WFC_UPLOAD_SAMPLE_PARAMS	0xD7
#define WFC_DOWNLOAD_OS			0xF1
#define WFC_NOOP                        0xFF
#define WF_MAX_SAMPLE   512
#define WF_MAX_PATCH    256
#define WF_MAX_PROGRAM  128
#define WF_SECTION_MAX  44
#define WF_PROGRAM_BYTES 32
#define WF_PATCH_BYTES 132
#define WF_SAMPLE_BYTES 27
#define WF_SAMPLE_HDR_BYTES 25
#define WF_ALIAS_BYTES 25
#define WF_DRUM_BYTES 9
#define WF_MSAMPLE_BYTES 259
#define WF_ACK     0x80
#define WF_DMA_ACK 0x81
#define WF_MIDI_VIRTUAL_ENABLED 0x1
#define WF_MIDI_VIRTUAL_IS_EXTERNAL 0x2
#define WF_MIDI_IN_TO_SYNTH_DISABLED 0x4
#define WF_SYNTH_SLOT         0
#define WF_INTERNAL_MIDI_SLOT 1
#define WF_EXTERNAL_MIDI_SLOT 2
#define WF_EXTERNAL_SWITCH  0xFD
#define WF_INTERNAL_SWITCH  0xF9
#define WF_DEBUG_CMD 0x1
#define WF_DEBUG_DATA 0x2
#define WF_DEBUG_LOAD_PATCH 0x4
#define WF_DEBUG_IO 0x8
#define WF_WAVEPATCH_VERSION     120;
#define WF_MAX_COMMENT           64
#define WF_NUM_LAYERS            4
#define WF_NAME_LENGTH           32
#define WF_SOURCE_LENGTH         260
#define BankFileID     "Bank"
#define DrumkitFileID  "DrumKit"
#define ProgramFileID  "Program"
struct wf_envelope
;
typedef struct wf_envelope wavefront_envelope;
struct wf_lfo
;
typedef struct wf_lfo wavefront_lfo;
struct wf_patch
;
typedef struct wf_patch wavefront_patch;
struct wf_layer
;
typedef struct wf_layer wavefront_layer;
struct wf_program
;
typedef struct wf_program wavefront_program;
struct wf_sample_offset
;
typedef struct wf_sample_offset wavefront_sample_offset;
#define WF_ST_SAMPLE      0
#define WF_ST_MULTISAMPLE 1
#define WF_ST_ALIAS       2
#define WF_ST_EMPTY       3
#define WF_ST_DRUM        4
#define WF_ST_PROGRAM     5
#define WF_ST_PATCH       6
#define WF_ST_SAMPLEHDR   7
#define WF_ST_MASK        0xf
#define WF_SLOT_USED      0x80
#define WF_SLOT_FILLED    0x40
#define WF_SLOT_ROM       0x20
#define WF_SLOT_MASK      0xf0
#define WF_CH_MONO  0
#define WF_CH_LEFT  1
#define WF_CH_RIGHT 2
#define LINEAR_16BIT 0
#define WHITE_NOISE  1
#define LINEAR_8BIT  2
#define MULAW_8BIT   3
#define WF_SAMPLE_IS_8BIT(smpl) ((smpl)->SampleResolution&2)
#define WF_SET_CHANNEL(samp,chn) \
(samp)->Unused1 = chn & 0x1; \
(samp)->Unused2 = chn & 0x2; \
(samp)->Unused3 = chn & 0x4
#define WF_GET_CHANNEL(samp) \
(((samp)->Unused3 << 2)|((samp)->Unused2<<1)|(samp)->Unused1)
typedef struct wf_sample  wavefront_sample;
typedef struct wf_multisample  wavefront_multisample;
typedef struct wf_alias  __attribute__((packed)) wavefront_alias;
typedef struct wf_drum  wavefront_drum;
typedef struct wf_drumkit  wavefront_drumkit;
typedef struct wf_channel_programs  wavefront_channel_programs;
#define WF_CHANNEL_STATUS(ch,wcp) (wcp)[(ch/7)] & (1<<((ch)%7))
typedef union wf_any  wavefront_any;
typedef struct wf_patch_info  wavefront_patch_info;
#define WF_MAX_READ sizeof(wavefront_multisample)
#define WF_MAX_WRITE sizeof(wavefront_multisample)
typedef struct wavefront_control  wavefront_control;
#define WFCTL_WFCMD    0x1
#define WFCTL_LOAD_SPP 0x2
#define WF_MOD_LFO1      0
#define WF_MOD_LFO2      1
#define WF_MOD_ENV1      2
#define WF_MOD_ENV2      3
#define WF_MOD_KEYBOARD  4
#define WF_MOD_LOGKEY    5
#define WF_MOD_VELOCITY  6
#define WF_MOD_LOGVEL    7
#define WF_MOD_RANDOM    8
#define WF_MOD_PRESSURE  9
#define WF_MOD_MOD_WHEEL 10
#define WF_MOD_1         WF_MOD_MOD_WHEEL
#define WF_MOD_BREATH    11
#define WF_MOD_2         WF_MOD_BREATH
#define WF_MOD_FOOT      12
#define WF_MOD_4         WF_MOD_FOOT
#define WF_MOD_VOLUME    13
#define WF_MOD_7         WF_MOD_VOLUME
#define WF_MOD_PAN       14
#define WF_MOD_10        WF_MOD_PAN
#define WF_MOD_EXPR      15
#define WF_MOD_11        WF_MOD_EXPR
typedef struct wf_fx_info  wavefront_fx_info;
#define WFFX_SETOUTGAIN		        0
#define WFFX_SETSTEREOOUTGAIN		1
#define WFFX_SETREVERBIN1GAIN		2
#define WFFX_SETREVERBIN2GAIN		3
#define WFFX_SETREVERBIN3GAIN		4
#define WFFX_SETCHORUSINPORT		5
#define WFFX_SETREVERBIN1PORT		6
#define WFFX_SETREVERBIN2PORT		7
#define WFFX_SETREVERBIN3PORT		8
#define WFFX_SETEFFECTPORT		9
#define WFFX_SETAUXPORT		        10
#define WFFX_SETREVERBTYPE		11
#define WFFX_SETREVERBDELAY		12
#define WFFX_SETCHORUSLFO		13
#define WFFX_SETCHORUSPMD		14
#define WFFX_SETCHORUSAMD		15
#define WFFX_SETEFFECT		        16
#define WFFX_SETBASEALL		        17
#define WFFX_SETREVERBALL		18
#define WFFX_SETCHORUSALL		20
#define WFFX_SETREVERBDEF		22
#define WFFX_SETCHORUSDEF		23
#define WFFX_DELAYSETINGAIN		24
#define WFFX_DELAYSETFBGAIN	        25
#define WFFX_DELAYSETFBLPF		26
#define WFFX_DELAYSETGAIN		27
#define WFFX_DELAYSETTIME		28
#define WFFX_DELAYSETFBTIME		29
#define WFFX_DELAYSETALL		30
#define WFFX_DELAYSETDEF		32
#define WFFX_SDELAYSETINGAIN		33
#define WFFX_SDELAYSETFBGAIN		34
#define WFFX_SDELAYSETFBLPF		35
#define WFFX_SDELAYSETGAIN		36
#define WFFX_SDELAYSETTIME		37
#define WFFX_SDELAYSETFBTIME		38
#define WFFX_SDELAYSETALL		39
#define WFFX_SDELAYSETDEF		41
#define WFFX_DEQSETINGAIN		42
#define WFFX_DEQSETFILTER		43
#define WFFX_DEQSETALL		        44
#define WFFX_DEQSETDEF		        46
#define WFFX_MUTE		        47
#define WFFX_FLANGESETBALANCE	        48
#define WFFX_FLANGESETDELAY		49
#define WFFX_FLANGESETDWFFX_TH		50
#define WFFX_FLANGESETFBGAIN		51
#define WFFX_FLANGESETINGAIN		52
#define WFFX_FLANGESETLFO		53
#define WFFX_FLANGESETALL		54
#define WFFX_FLANGESETDEF		56
#define WFFX_PITCHSETSHIFT		57
#define WFFX_PITCHSETBALANCE		58
#define WFFX_PITCHSETALL		59
#define WFFX_PITCHSETDEF		61
#define WFFX_SRSSETINGAIN		62
#define WFFX_SRSSETSPACE		63
#define WFFX_SRSSETCENTER		64
#define WFFX_SRSSETGAIN		        65
#define WFFX_SRSSETMODE	        	66
#define WFFX_SRSSETDEF		        68
#define WFFX_MEMSET              69
