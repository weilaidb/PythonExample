#define _COMEDI_H
#define COMEDI_MAJORVERSION	0
#define COMEDI_MINORVERSION	7
#define COMEDI_MICROVERSION	76
#define VERSION	"0.7.76"
#define COMEDI_MAJOR 98
#define COMEDI_NDEVICES 16
#define COMEDI_NDEVCONFOPTS 32
#define COMEDI_DEVCONF_AUX_DATA3_LENGTH		25
#define COMEDI_DEVCONF_AUX_DATA2_LENGTH		26
#define COMEDI_DEVCONF_AUX_DATA1_LENGTH		27
#define COMEDI_DEVCONF_AUX_DATA0_LENGTH		28
#define COMEDI_DEVCONF_AUX_DATA_HI		29
#define COMEDI_DEVCONF_AUX_DATA_LO		30
#define COMEDI_DEVCONF_AUX_DATA_LENGTH		31
#define COMEDI_NAMELEN 20
#define CR_PACK(chan, rng, aref)					\
((((aref)&0x3)<<24) | (((rng)&0xff)<<16) | (chan))
#define CR_PACK_FLAGS(chan, range, aref, flags)				\
(CR_PACK(chan, range, aref) | ((flags) & CR_FLAGS_MASK))
#define CR_CHAN(a)	((a)&0xffff)
#define CR_RANGE(a)	(((a)>>16)&0xff)
#define CR_AREF(a)	(((a)>>24)&0x03)
#define CR_FLAGS_MASK	0xfc000000
#define CR_ALT_FILTER	(1<<26)
#define CR_DITHER	CR_ALT_FILTER
#define CR_DEGLITCH	CR_ALT_FILTER
#define CR_ALT_SOURCE	(1<<27)
#define CR_EDGE		(1<<30)
#define CR_INVERT	(1<<31)
#define AREF_GROUND	0x00
#define AREF_COMMON	0x01
#define AREF_DIFF	0x02
#define AREF_OTHER	0x03
#define GPCT_RESET		0x0001
#define GPCT_SET_SOURCE		0x0002
#define GPCT_SET_GATE		0x0004
#define GPCT_SET_DIRECTION	0x0008
#define GPCT_SET_OPERATION	0x0010
#define GPCT_ARM		0x0020
#define GPCT_DISARM		0x0040
#define GPCT_GET_INT_CLK_FRQ	0x0080
#define GPCT_INT_CLOCK		0x0001
#define GPCT_EXT_PIN		0x0002
#define GPCT_NO_GATE		0x0004
#define GPCT_UP			0x0008
#define GPCT_DOWN		0x0010
#define GPCT_HWUD		0x0020
#define GPCT_SIMPLE_EVENT	0x0040
#define GPCT_SINGLE_PERIOD	0x0080
#define GPCT_SINGLE_PW		0x0100
#define GPCT_CONT_PULSE_OUT	0x0200
#define GPCT_SINGLE_PULSE_OUT	0x0400
#define INSN_MASK_WRITE		0x8000000
#define INSN_MASK_READ		0x4000000
#define INSN_MASK_SPECIAL	0x2000000
#define INSN_READ		(0 | INSN_MASK_READ)
#define INSN_WRITE		(1 | INSN_MASK_WRITE)
#define INSN_BITS		(2 | INSN_MASK_READ|INSN_MASK_WRITE)
#define INSN_CONFIG		(3 | INSN_MASK_READ|INSN_MASK_WRITE)
#define INSN_GTOD		(4 | INSN_MASK_READ|INSN_MASK_SPECIAL)
#define INSN_WAIT		(5 | INSN_MASK_WRITE|INSN_MASK_SPECIAL)
#define INSN_INTTRIG		(6 | INSN_MASK_WRITE|INSN_MASK_SPECIAL)
#define TRIG_BOGUS	0x0001
#define TRIG_DITHER	0x0002
#define TRIG_DEGLITCH	0x0004
#define TRIG_WAKE_EOS	0x0020
#define CMDF_PRIORITY		0x00000008
#define TRIG_RT		CMDF_PRIORITY
#define CMDF_WRITE		0x00000040
#define TRIG_WRITE	CMDF_WRITE
#define CMDF_RAWDATA		0x00000080
#define COMEDI_EV_START		0x00040000
#define COMEDI_EV_SCAN_BEGIN	0x00080000
#define COMEDI_EV_CONVERT	0x00100000
#define COMEDI_EV_SCAN_END	0x00200000
#define COMEDI_EV_STOP		0x00400000
#define TRIG_ROUND_MASK		0x00030000
#define TRIG_ROUND_NEAREST	0x00000000
#define TRIG_ROUND_DOWN		0x00010000
#define TRIG_ROUND_UP		0x00020000
#define TRIG_ROUND_UP_NEXT	0x00030000
#define TRIG_ANY	0xffffffff
#define TRIG_INVALID	0x00000000
#define TRIG_NONE	0x00000001
#define TRIG_NOW	0x00000002
#define TRIG_FOLLOW	0x00000004
#define TRIG_TIME	0x00000008
#define TRIG_TIMER	0x00000010
#define TRIG_COUNT	0x00000020
#define TRIG_EXT	0x00000040
#define TRIG_INT	0x00000080
#define TRIG_OTHER	0x00000100
#define SDF_BUSY	0x0001
#define SDF_BUSY_OWNER	0x0002
#define SDF_LOCKED	0x0004
#define SDF_LOCK_OWNER	0x0008
#define SDF_MAXDATA	0x0010
#define SDF_FLAGS	0x0020
#define SDF_RANGETYPE	0x0040
#define SDF_MODE0	0x0080
#define SDF_MODE1	0x0100
#define SDF_MODE2	0x0200
#define SDF_MODE3	0x0400
#define SDF_MODE4	0x0800
#define SDF_CMD		0x1000
#define SDF_SOFT_CALIBRATED	0x2000
#define SDF_CMD_WRITE		0x4000
#define SDF_CMD_READ		0x8000
#define SDF_READABLE	0x00010000
#define SDF_WRITABLE	0x00020000
#define SDF_WRITEABLE	SDF_WRITABLE
#define SDF_INTERNAL	0x00040000
#define SDF_GROUND	0x00100000
#define SDF_COMMON	0x00200000
#define SDF_DIFF	0x00400000
#define SDF_OTHER	0x00800000
#define SDF_DITHER	0x01000000
#define SDF_DEGLITCH	0x02000000
#define SDF_MMAP	0x04000000
#define SDF_RUNNING	0x08000000
#define SDF_LSAMPL	0x10000000
#define SDF_PACKED	0x20000000
#define SDF_PWM_COUNTER SDF_MODE0
#define SDF_PWM_HBRIDGE SDF_MODE1
enum comedi_subdevice_type ;
enum configuration_ids ;
enum comedi_io_direction ;
enum comedi_support_level ;
#define CIO 'd'
#define COMEDI_DEVCONFIG _IOW(CIO, 0, struct comedi_devconfig)
#define COMEDI_DEVINFO _IOR(CIO, 1, struct comedi_devinfo)
#define COMEDI_SUBDINFO _IOR(CIO, 2, struct comedi_subdinfo)
#define COMEDI_CHANINFO _IOR(CIO, 3, struct comedi_chaninfo)
#define COMEDI_TRIG _IOWR(CIO, 4, comedi_trig)
#define COMEDI_LOCK _IO(CIO, 5)
#define COMEDI_UNLOCK _IO(CIO, 6)
#define COMEDI_CANCEL _IO(CIO, 7)
#define COMEDI_RANGEINFO _IOR(CIO, 8, struct comedi_rangeinfo)
#define COMEDI_CMD _IOR(CIO, 9, struct comedi_cmd)
#define COMEDI_CMDTEST _IOR(CIO, 10, struct comedi_cmd)
#define COMEDI_INSNLIST _IOR(CIO, 11, struct comedi_insnlist)
#define COMEDI_INSN _IOR(CIO, 12, struct comedi_insn)
#define COMEDI_BUFCONFIG _IOR(CIO, 13, struct comedi_bufconfig)
#define COMEDI_BUFINFO _IOWR(CIO, 14, struct comedi_bufinfo)
#define COMEDI_POLL _IO(CIO, 15)
struct comedi_trig ;
struct comedi_insn ;
struct comedi_insnlist ;
struct comedi_cmd ;
struct comedi_chaninfo ;
struct comedi_rangeinfo ;
struct comedi_krange ;
struct comedi_subdinfo ;
struct comedi_devinfo ;
struct comedi_devconfig ;
struct comedi_bufconfig ;
struct comedi_bufinfo ;
#define __RANGE(a, b)	((((a)&0xffff)<<16)|((b)&0xffff))
#define RANGE_OFFSET(a)		(((a)>>16)&0xffff)
#define RANGE_LENGTH(b)		((b)&0xffff)
#define RF_UNIT(flags)		((flags)&0xff)
#define RF_EXTERNAL		(1<<8)
#define UNIT_volt		0
#define UNIT_mA			1
#define UNIT_none		2
#define COMEDI_MIN_SPEED	((unsigned int)0xffffffff)
#define COMEDI_CB_EOS		1
#define COMEDI_CB_EOA		2
#define COMEDI_CB_BLOCK		4
#define COMEDI_CB_EOBUF		8
#define COMEDI_CB_ERROR		16
#define COMEDI_CB_OVERFLOW	32
enum i8254_mode ;
static inline unsigned NI_USUAL_PFI_SELECT(unsigned pfi_channel)
static inline unsigned NI_USUAL_RTSI_SELECT(unsigned rtsi_channel)
#define NI_GPCT_COUNTING_MODE_SHIFT 16
#define NI_GPCT_INDEX_PHASE_BITSHIFT 20
#define NI_GPCT_COUNTING_DIRECTION_SHIFT 24
enum ni_gpct_mode_bits ;
enum ni_gpct_clock_source_bits ;
static inline unsigned NI_GPCT_SOURCE_PIN_CLOCK_SRC_BITS(unsigned n)
static inline unsigned NI_GPCT_RTSI_CLOCK_SRC_BITS(unsigned n)
static inline unsigned NI_GPCT_PFI_CLOCK_SRC_BITS(unsigned n)
enum ni_gpct_gate_select ;
static inline unsigned NI_GPCT_GATE_PIN_GATE_SELECT(unsigned n)
static inline unsigned NI_GPCT_RTSI_GATE_SELECT(unsigned n)
static inline unsigned NI_GPCT_PFI_GATE_SELECT(unsigned n)
static inline unsigned NI_GPCT_UP_DOWN_PIN_GATE_SELECT(unsigned n)
enum ni_gpct_other_index ;
enum ni_gpct_other_select ;
static inline unsigned NI_GPCT_PFI_OTHER_SELECT(unsigned n)
enum ni_gpct_arm_source ;
enum ni_gpct_filter_select ;
enum ni_pfi_filter_select ;
enum ni_mio_clock_source ;
static inline unsigned NI_MIO_PLL_RTSI_CLOCK(unsigned rtsi_channel)
enum ni_rtsi_routing ;
static inline unsigned NI_RTSI_OUTPUT_RTSI_BRD(unsigned n)
enum ni_pfi_routing ;
static inline unsigned NI_PFI_OUTPUT_RTSI(unsigned rtsi_channel)
enum ni_660x_pfi_routing ;
static inline unsigned NI_EXT_PFI(unsigned pfi_channel)
static inline unsigned NI_EXT_RTSI(unsigned rtsi_channel)
enum comedi_counter_status_flags ;
enum ni_m_series_cdio_scan_begin_src ;
static inline unsigned NI_CDIO_SCAN_BEGIN_SRC_PFI(unsigned pfi_channel)
static inline unsigned
NI_CDIO_SCAN_BEGIN_SRC_RTSI(unsigned rtsi_channel)
static inline unsigned NI_AO_SCAN_BEGIN_SRC_PFI(unsigned pfi_channel)
static inline unsigned NI_AO_SCAN_BEGIN_SRC_RTSI(unsigned rtsi_channel)
enum ni_freq_out_clock_source_bits ;
enum amplc_dio_clock_source ;
enum amplc_dio_gate_source ;
