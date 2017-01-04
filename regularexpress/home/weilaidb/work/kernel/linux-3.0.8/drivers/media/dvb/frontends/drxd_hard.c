#define DRX_FW_FILENAME_A2 "drxd-a2-1.1.fw"
#define DRX_FW_FILENAME_B1 "drxd-b1-1.1.fw"
#define CHUNK_SIZE 48
#define DRX_I2C_RMW           0x10
#define DRX_I2C_BROADCAST     0x20
#define DRX_I2C_CLEARCRC      0x80
#define DRX_I2C_SINGLE_MASTER 0xC0
#define DRX_I2C_MODEFLAGS     0xC0
#define DRX_I2C_FLAGS         0xF0
#define SIZEOF_ARRAY(array) (sizeof((array))/sizeof((array)[0]))
#define DEFAULT_LOCK_TIMEOUT    1100
#define DRX_CHANNEL_AUTO 0
#define DRX_CHANNEL_HIGH 1
#define DRX_CHANNEL_LOW  2
#define DRX_LOCK_MPEG  1
#define DRX_LOCK_FEC   2
#define DRX_LOCK_DEMOD 4
enum CSCDState ;
enum CDrxdState ;
enum AGC_CTRL_MODE ;
enum OperationMode ;
struct SCfgAgc ;
struct SNoiseCal ;
enum app_env ;
enum EIFFilter ;
struct drxd_state ;
static int i2c_write(struct i2c_adapter *adap, u8 adr, u8 * data, int len)
static int i2c_read(struct i2c_adapter *adap,
u8 adr, u8 *msg, int len, u8 *answ, int alen)
inline u32 MulDiv32(u32 a, u32 b, u32 c)
static int Read16(struct drxd_state *state, u32 reg, u16 *data, u8 flags)
static int Read32(struct drxd_state *state, u32 reg, u32 *data, u8 flags)
static int Write16(struct drxd_state *state, u32 reg, u16 data, u8 flags)
static int Write32(struct drxd_state *state, u32 reg, u32 data, u8 flags)
static int write_chunk(struct drxd_state *state,
u32 reg, u8 *data, u32 len, u8 flags)
static int WriteBlock(struct drxd_state *state,
u32 Address, u16 BlockSize, u8 *pBlock, u8 Flags)
static int WriteTable(struct drxd_state *state, u8 * pTable)
static int ResetCEFR(struct drxd_state *state)
static int InitCP(struct drxd_state *state)
static int InitCE(struct drxd_state *state)
static int StopOC(struct drxd_state *state)
static int StartOC(struct drxd_state *state)
static int InitEQ(struct drxd_state *state)
static int InitEC(struct drxd_state *state)
static int InitSC(struct drxd_state *state)
static int InitAtomicRead(struct drxd_state *state)
static int CorrectSysClockDeviation(struct drxd_state *state);
static int DRX_GetLockStatus(struct drxd_state *state, u32 * pLockStatus)
static int SetCfgIfAgc(struct drxd_state *state, struct SCfgAgc *cfg)
static int SetCfgRfAgc(struct drxd_state *state, struct SCfgAgc *cfg)
static int ReadIFAgc(struct drxd_state *state, u32 * pValue)
static int load_firmware(struct drxd_state *state, const char *fw_name)
static int DownloadMicrocode(struct drxd_state *state,
const u8 *pMCImage, u32 Length)
static int HI_Command(struct drxd_state *state, u16 cmd, u16 * pResult)
static int HI_CfgCommand(struct drxd_state *state)
static int InitHI(struct drxd_state *state)
static int HI_ResetCommand(struct drxd_state *state)
static int DRX_ConfigureI2CBridge(struct drxd_state *state, int bEnableBridge)
#define HI_TR_WRITE      0x9
#define HI_TR_READ       0xA
#define HI_TR_READ_WRITE 0xB
#define HI_TR_BROADCAST  0x4
static int StopAllProcessors(struct drxd_state *state)
static int EnableAndResetMB(struct drxd_state *state)
static int InitCC(struct drxd_state *state)
static int ResetECOD(struct drxd_state *state)
static int SetCfgPga(struct drxd_state *state, int pgaSwitch)
static int InitFE(struct drxd_state *state)
static int InitFT(struct drxd_state *state)
static int SC_WaitForReady(struct drxd_state *state)
static int SC_SendCommand(struct drxd_state *state, u16 cmd)
static int SC_ProcStartCommand(struct drxd_state *state,
u16 subCmd, u16 param0, u16 param1)
static int SC_SetPrefParamCommand(struct drxd_state *state,
u16 subCmd, u16 param0, u16 param1)
static int ConfigureMPEGOutput(struct drxd_state *state, int bEnableOutput)
static int SetDeviceTypeId(struct drxd_state *state)
static int CorrectSysClockDeviation(struct drxd_state *state)
static int DRX_Stop(struct drxd_state *state)
int SetOperationMode(struct drxd_state *state, int oMode)
static int StartDiversity(struct drxd_state *state)
static int SetFrequencyShift(struct drxd_state *state,
u32 offsetFreq, int channelMirrored)
static int SetCfgNoiseCalibration(struct drxd_state *state,
struct SNoiseCal *noiseCal)
static int DRX_Start(struct drxd_state *state, s32 off)
static int CDRXD(struct drxd_state *state, u32 IntermediateFrequency)
int DRXD_init(struct drxd_state *state, const u8 * fw, u32 fw_size)
int DRXD_status(struct drxd_state *state, u32 * pLockStatus)
static int drxd_read_signal_strength(struct dvb_frontend *fe, u16 * strength)
static int drxd_read_status(struct dvb_frontend *fe, fe_status_t * status)
static int drxd_init(struct dvb_frontend *fe)
int drxd_config_i2c(struct dvb_frontend *fe, int onoff)
EXPORT_SYMBOL(drxd_config_i2c);
static int drxd_get_tune_settings(struct dvb_frontend *fe,
struct dvb_frontend_tune_settings *sets)
static int drxd_read_ber(struct dvb_frontend *fe, u32 * ber)
static int drxd_read_snr(struct dvb_frontend *fe, u16 * snr)
static int drxd_read_ucblocks(struct dvb_frontend *fe, u32 * ucblocks)
static int drxd_sleep(struct dvb_frontend *fe)
static int drxd_get_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *param)
static int drxd_i2c_gate_ctrl(struct dvb_frontend *fe, int enable)
static int drxd_set_frontend(struct dvb_frontend *fe,
struct dvb_frontend_parameters *param)
static void drxd_release(struct dvb_frontend *fe)
static struct dvb_frontend_ops drxd_ops = ;
struct dvb_frontend *drxd_attach(const struct drxd_config *config,
void *priv, struct i2c_adapter *i2c,
struct device *dev)
EXPORT_SYMBOL(drxd_attach);
MODULE_DESCRIPTION("DRXD driver");
MODULE_AUTHOR("Micronas");
MODULE_LICENSE("GPL");
