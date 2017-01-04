static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for RME HDSPM interface.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for RME HDSPM interface.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable/disable specific HDSPM soundcards.");
MODULE_AUTHOR
(
"Winfried Ritsch <ritsch_AT_iem.at>, "
"Paul Davis <paul@linuxaudiosystems.com>, "
"Marcus Andersson, Thomas Charbonnel <thomas@undata.org>, "
"Remy Bruno <remy.bruno@trinnov.com>, "
"Florian Faber <faberman@linuxproaudio.org>, "
"Adrian Knoth <adi@drcomp.erfurt.thur.de>"
);
MODULE_DESCRIPTION("RME HDSPM");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
#define HDSPM_WR_SETTINGS             0
#define HDSPM_outputBufferAddress    32
#define HDSPM_inputBufferAddress     36
#define HDSPM_controlRegister	     64
#define HDSPM_interruptConfirmation  96
#define HDSPM_control2Reg	     256
#define HDSPM_freqReg                256
#define HDSPM_midiDataOut0	     352
#define HDSPM_midiDataOut1	     356
#define HDSPM_eeprom_wr		     384
#define HDSPM_outputEnableBase       512
#define HDSPM_inputEnableBase        768
#define HDSPM_pageAddressBufferOut       8192
#define HDSPM_pageAddressBufferIn        (HDSPM_pageAddressBufferOut+64*16*4)
#define HDSPM_MADI_mixerBase    32768
#define HDSPM_MATRIX_MIXER_SIZE  8192
#define HDSPM_statusRegister    0
#define HDSPM_statusRegister2  192
#define HDSPM_timecodeRegister 128
#define HDSPM_RD_STATUS_0 0
#define HDSPM_RD_STATUS_1 64
#define HDSPM_RD_STATUS_2 128
#define HDSPM_RD_STATUS_3 192
#define HDSPM_RD_TCO           256
#define HDSPM_RD_PLL_FREQ      512
#define HDSPM_WR_TCO           128
#define HDSPM_TCO1_TCO_lock			0x00000001
#define HDSPM_TCO1_WCK_Input_Range_LSB		0x00000002
#define HDSPM_TCO1_WCK_Input_Range_MSB		0x00000004
#define HDSPM_TCO1_LTC_Input_valid		0x00000008
#define HDSPM_TCO1_WCK_Input_valid		0x00000010
#define HDSPM_TCO1_Video_Input_Format_NTSC	0x00000020
#define HDSPM_TCO1_Video_Input_Format_PAL	0x00000040
#define HDSPM_TCO1_set_TC			0x00000100
#define HDSPM_TCO1_set_drop_frame_flag		0x00000200
#define HDSPM_TCO1_LTC_Format_LSB		0x00000400
#define HDSPM_TCO1_LTC_Format_MSB		0x00000800
#define HDSPM_TCO2_TC_run			0x00010000
#define HDSPM_TCO2_WCK_IO_ratio_LSB		0x00020000
#define HDSPM_TCO2_WCK_IO_ratio_MSB		0x00040000
#define HDSPM_TCO2_set_num_drop_frames_LSB	0x00080000
#define HDSPM_TCO2_set_num_drop_frames_MSB	0x00100000
#define HDSPM_TCO2_set_jam_sync			0x00200000
#define HDSPM_TCO2_set_flywheel			0x00400000
#define HDSPM_TCO2_set_01_4			0x01000000
#define HDSPM_TCO2_set_pull_down		0x02000000
#define HDSPM_TCO2_set_pull_up			0x04000000
#define HDSPM_TCO2_set_freq			0x08000000
#define HDSPM_TCO2_set_term_75R			0x10000000
#define HDSPM_TCO2_set_input_LSB		0x20000000
#define HDSPM_TCO2_set_input_MSB		0x40000000
#define HDSPM_TCO2_set_freq_from_app		0x80000000
#define HDSPM_midiDataOut0    352
#define HDSPM_midiDataOut1    356
#define HDSPM_midiDataOut2    368
#define HDSPM_midiDataIn0     360
#define HDSPM_midiDataIn1     364
#define HDSPM_midiDataIn2     372
#define HDSPM_midiDataIn3     376
#define HDSPM_midiStatusOut0  384
#define HDSPM_midiStatusOut1  388
#define HDSPM_midiStatusOut2  400
#define HDSPM_midiStatusIn0   392
#define HDSPM_midiStatusIn1   396
#define HDSPM_midiStatusIn2   404
#define HDSPM_midiStatusIn3   408
#define HDSPM_MADI_INPUT_PEAK		4096
#define HDSPM_MADI_PLAYBACK_PEAK	4352
#define HDSPM_MADI_OUTPUT_PEAK		4608
#define HDSPM_MADI_INPUT_RMS_L		6144
#define HDSPM_MADI_PLAYBACK_RMS_L	6400
#define HDSPM_MADI_OUTPUT_RMS_L		6656
#define HDSPM_MADI_INPUT_RMS_H		7168
#define HDSPM_MADI_PLAYBACK_RMS_H	7424
#define HDSPM_MADI_OUTPUT_RMS_H		7680
#define HDSPM_Start                (1<<0)
#define HDSPM_Latency0             (1<<1)
#define HDSPM_Latency1             (1<<2)
#define HDSPM_Latency2             (1<<3)
#define HDSPM_ClockModeMaster      (1<<4)
#define HDSPM_c0Master		0x1
#define HDSPM_AudioInterruptEnable (1<<5)
#define HDSPM_Frequency0  (1<<6)
#define HDSPM_Frequency1  (1<<7)
#define HDSPM_DoubleSpeed (1<<8)
#define HDSPM_QuadSpeed   (1<<31)
#define HDSPM_Professional (1<<9)
#define HDSPM_TX_64ch     (1<<10)
#define HDSPM_Emphasis    (1<<10)
#define HDSPM_AutoInp     (1<<11)
#define HDSPM_Dolby       (1<<11)
#define HDSPM_InputSelect0 (1<<14)
#define HDSPM_InputSelect1 (1<<15)
#define HDSPM_SyncRef2     (1<<13)
#define HDSPM_SyncRef3     (1<<25)
#define HDSPM_SMUX         (1<<18)
#define HDSPM_clr_tms      (1<<19)
#define HDSPM_taxi_reset   (1<<20)
#define HDSPM_WCK48        (1<<20)
#define HDSPM_Midi0InterruptEnable 0x0400000
#define HDSPM_Midi1InterruptEnable 0x0800000
#define HDSPM_Midi2InterruptEnable 0x0200000
#define HDSPM_Midi3InterruptEnable 0x4000000
#define HDSPM_LineOut (1<<24)
#define HDSPe_FLOAT_FORMAT         0x2000000
#define HDSPM_DS_DoubleWire (1<<26)
#define HDSPM_QS_DoubleWire (1<<27)
#define HDSPM_QS_QuadWire   (1<<28)
#define HDSPM_wclk_sel (1<<30)
#define HDSPM_LatencyMask    (HDSPM_Latency0|HDSPM_Latency1|HDSPM_Latency2)
#define HDSPM_FrequencyMask  (HDSPM_Frequency0|HDSPM_Frequency1|\
HDSPM_DoubleSpeed|HDSPM_QuadSpeed)
#define HDSPM_InputMask      (HDSPM_InputSelect0|HDSPM_InputSelect1)
#define HDSPM_InputOptical   0
#define HDSPM_InputCoaxial   (HDSPM_InputSelect0)
#define HDSPM_SyncRefMask    (HDSPM_SyncRef0|HDSPM_SyncRef1|\
HDSPM_SyncRef2|HDSPM_SyncRef3)
#define HDSPM_c0_SyncRef0      0x2
#define HDSPM_c0_SyncRef1      0x4
#define HDSPM_c0_SyncRef2      0x8
#define HDSPM_c0_SyncRef3      0x10
#define HDSPM_c0_SyncRefMask   (HDSPM_c0_SyncRef0 | HDSPM_c0_SyncRef1 |\
HDSPM_c0_SyncRef2 | HDSPM_c0_SyncRef3)
#define HDSPM_SYNC_FROM_WORD    0
#define HDSPM_SYNC_FROM_MADI    1
#define HDSPM_SYNC_FROM_TCO     2
#define HDSPM_SYNC_FROM_SYNC_IN 3
#define HDSPM_Frequency32KHz    HDSPM_Frequency0
#define HDSPM_Frequency44_1KHz  HDSPM_Frequency1
#define HDSPM_Frequency48KHz   (HDSPM_Frequency1|HDSPM_Frequency0)
#define HDSPM_Frequency64KHz   (HDSPM_DoubleSpeed|HDSPM_Frequency0)
#define HDSPM_Frequency88_2KHz (HDSPM_DoubleSpeed|HDSPM_Frequency1)
#define HDSPM_Frequency96KHz   (HDSPM_DoubleSpeed|HDSPM_Frequency1|\
HDSPM_Frequency0)
#define HDSPM_Frequency128KHz   (HDSPM_QuadSpeed|HDSPM_Frequency0)
#define HDSPM_Frequency176_4KHz   (HDSPM_QuadSpeed|HDSPM_Frequency1)
#define HDSPM_Frequency192KHz   (HDSPM_QuadSpeed|HDSPM_Frequency1|\
HDSPM_Frequency0)
#define HDSPM_SYNC_CHECK_NO_LOCK 0
#define HDSPM_SYNC_CHECK_LOCK    1
#define HDSPM_SYNC_CHECK_SYNC	 2
#define HDSPM_AUTOSYNC_FROM_WORD      0
#define HDSPM_AUTOSYNC_FROM_MADI      1
#define HDSPM_AUTOSYNC_FROM_TCO       2
#define HDSPM_AUTOSYNC_FROM_SYNC_IN   3
#define HDSPM_AUTOSYNC_FROM_NONE      4
#define HDSPM_OPTICAL 0
#define HDSPM_COAXIAL 1
#define hdspm_encode_latency(x)       (((x)<<1) & HDSPM_LatencyMask)
#define hdspm_decode_latency(x)       ((((x) & HDSPM_LatencyMask)>>1))
#define hdspm_encode_in(x) (((x)&0x3)<<14)
#define hdspm_decode_in(x) (((x)>>14)&0x3)
#define HDSPM_TMS             (1<<0)
#define HDSPM_TCK             (1<<1)
#define HDSPM_TDI             (1<<2)
#define HDSPM_JTAG            (1<<3)
#define HDSPM_PWDN            (1<<4)
#define HDSPM_PROGRAM	      (1<<5)
#define HDSPM_CONFIG_MODE_0   (1<<6)
#define HDSPM_CONFIG_MODE_1   (1<<7)
#define HDSPM_BIGENDIAN_MODE  (1<<9)
#define HDSPM_RD_MULTIPLE     (1<<10)
#define HDSPM_audioIRQPending    (1<<0)
#define HDSPM_RX_64ch            (1<<1)
#define HDSPM_AB_int             (1<<2)
#define HDSPM_madiLock           (1<<3)
#define HDSPM_madiSync          (1<<18)
#define HDSPM_tcoLock    0x00000020
#define HDSPM_tcoSync    0x10000000
#define HDSPM_syncInLock 0x00010000
#define HDSPM_syncInSync 0x00020000
#define HDSPM_BufferPositionMask 0x000FFC0
#define HDSPM_DoubleSpeedStatus (1<<19)
#define HDSPM_madiFreq0         (1<<22)
#define HDSPM_madiFreq1         (1<<23)
#define HDSPM_madiFreq2         (1<<24)
#define HDSPM_madiFreq3         (1<<25)
#define HDSPM_BufferID          (1<<26)
#define HDSPM_tco_detect         0x08000000
#define HDSPM_tco_lock	         0x20000000
#define HDSPM_s2_tco_detect      0x00000040
#define HDSPM_s2_AEBO_D          0x00000080
#define HDSPM_s2_AEBI_D          0x00000100
#define HDSPM_midi0IRQPending    0x40000000
#define HDSPM_midi1IRQPending    0x80000000
#define HDSPM_midi2IRQPending    0x20000000
#define HDSPM_midi2IRQPendingAES 0x00000020
#define HDSPM_midi3IRQPending    0x00200000
#define HDSPM_madiFreqMask  (HDSPM_madiFreq0|HDSPM_madiFreq1|\
HDSPM_madiFreq2|HDSPM_madiFreq3)
#define HDSPM_madiFreq32    (HDSPM_madiFreq0)
#define HDSPM_madiFreq44_1  (HDSPM_madiFreq1)
#define HDSPM_madiFreq48    (HDSPM_madiFreq0|HDSPM_madiFreq1)
#define HDSPM_madiFreq64    (HDSPM_madiFreq2)
#define HDSPM_madiFreq88_2  (HDSPM_madiFreq0|HDSPM_madiFreq2)
#define HDSPM_madiFreq96    (HDSPM_madiFreq1|HDSPM_madiFreq2)
#define HDSPM_madiFreq128   (HDSPM_madiFreq0|HDSPM_madiFreq1|HDSPM_madiFreq2)
#define HDSPM_madiFreq176_4 (HDSPM_madiFreq3)
#define HDSPM_madiFreq192   (HDSPM_madiFreq3|HDSPM_madiFreq0)
#define HDSPM_version0 (1<<0)
#define HDSPM_version1 (1<<1)
#define HDSPM_version2 (1<<2)
#define HDSPM_wcLock (1<<3)
#define HDSPM_wcSync (1<<4)
#define HDSPM_wc_freq0 (1<<5)
#define HDSPM_wc_freq1 (1<<6)
#define HDSPM_wc_freq2 (1<<7)
#define HDSPM_SyncRef0 0x10000
#define HDSPM_SyncRef1 0x20000
#define HDSPM_SelSyncRef0 (1<<8)
#define HDSPM_SelSyncRef1 (1<<9)
#define HDSPM_SelSyncRef2 (1<<10)
#define HDSPM_wc_valid (HDSPM_wcLock|HDSPM_wcSync)
#define HDSPM_wcFreqMask  (HDSPM_wc_freq0|HDSPM_wc_freq1|HDSPM_wc_freq2)
#define HDSPM_wcFreq32    (HDSPM_wc_freq0)
#define HDSPM_wcFreq44_1  (HDSPM_wc_freq1)
#define HDSPM_wcFreq48    (HDSPM_wc_freq0|HDSPM_wc_freq1)
#define HDSPM_wcFreq64    (HDSPM_wc_freq2)
#define HDSPM_wcFreq88_2  (HDSPM_wc_freq0|HDSPM_wc_freq2)
#define HDSPM_wcFreq96    (HDSPM_wc_freq1|HDSPM_wc_freq2)
#define HDSPM_status1_F_0 0x0400000
#define HDSPM_status1_F_1 0x0800000
#define HDSPM_status1_F_2 0x1000000
#define HDSPM_status1_F_3 0x2000000
#define HDSPM_status1_freqMask (HDSPM_status1_F_0|HDSPM_status1_F_1|HDSPM_status1_F_2|HDSPM_status1_F_3)
#define HDSPM_SelSyncRefMask       (HDSPM_SelSyncRef0|HDSPM_SelSyncRef1|\
HDSPM_SelSyncRef2)
#define HDSPM_SelSyncRef_WORD      0
#define HDSPM_SelSyncRef_MADI      (HDSPM_SelSyncRef0)
#define HDSPM_SelSyncRef_TCO       (HDSPM_SelSyncRef1)
#define HDSPM_SelSyncRef_SyncIn    (HDSPM_SelSyncRef0|HDSPM_SelSyncRef1)
#define HDSPM_SelSyncRef_NVALID    (HDSPM_SelSyncRef0|HDSPM_SelSyncRef1|\
HDSPM_SelSyncRef2)
#define HDSPM_AES32_wcLock	0x0200000
#define HDSPM_AES32_wcFreq_bit  22
#define HDSPM_AES32_syncref_bit  16
#define HDSPM_AES32_AUTOSYNC_FROM_WORD 0
#define HDSPM_AES32_AUTOSYNC_FROM_AES1 1
#define HDSPM_AES32_AUTOSYNC_FROM_AES2 2
#define HDSPM_AES32_AUTOSYNC_FROM_AES3 3
#define HDSPM_AES32_AUTOSYNC_FROM_AES4 4
#define HDSPM_AES32_AUTOSYNC_FROM_AES5 5
#define HDSPM_AES32_AUTOSYNC_FROM_AES6 6
#define HDSPM_AES32_AUTOSYNC_FROM_AES7 7
#define HDSPM_AES32_AUTOSYNC_FROM_AES8 8
#define HDSPM_AES32_AUTOSYNC_FROM_NONE 9
#define HDSPM_LockAES   0x80
#define HDSPM_LockAES1  0x80
#define HDSPM_LockAES2  0x40
#define HDSPM_LockAES3  0x20
#define HDSPM_LockAES4  0x10
#define HDSPM_LockAES5  0x8
#define HDSPM_LockAES6  0x4
#define HDSPM_LockAES7  0x2
#define HDSPM_LockAES8  0x1
#define UNITY_GAIN          32768
#define MINUS_INFINITY_GAIN 0
#define MADI_SS_CHANNELS       64
#define MADI_DS_CHANNELS       32
#define MADI_QS_CHANNELS       16
#define RAYDAT_SS_CHANNELS     36
#define RAYDAT_DS_CHANNELS     20
#define RAYDAT_QS_CHANNELS     12
#define AIO_IN_SS_CHANNELS        14
#define AIO_IN_DS_CHANNELS        10
#define AIO_IN_QS_CHANNELS        8
#define AIO_OUT_SS_CHANNELS        16
#define AIO_OUT_DS_CHANNELS        12
#define AIO_OUT_QS_CHANNELS        10
#define AES32_CHANNELS		16
#define HDSPM_CHANNEL_BUFFER_SAMPLES  (16*1024)
#define HDSPM_CHANNEL_BUFFER_BYTES    (4*HDSPM_CHANNEL_BUFFER_SAMPLES)
#define HDSPM_DMA_AREA_BYTES (HDSPM_MAX_CHANNELS * HDSPM_CHANNEL_BUFFER_BYTES)
#define HDSPM_DMA_AREA_KILOBYTES (HDSPM_DMA_AREA_BYTES/1024)
#define HDSPM_MADI_OLD_REV	207
#define HDSPM_MADI_REV		210
#define HDSPM_RAYDAT_REV	211
#define HDSPM_AIO_REV		212
#define HDSPM_MADIFACE_REV	213
#define HDSPM_AES_REV		240
#define HDSPM_AES32_REV		234
#define HDSPM_AES32_OLD_REV	233
#define HDSPM_SPEED_SINGLE 0
#define HDSPM_SPEED_DOUBLE 1
#define HDSPM_SPEED_QUAD   2
static char *hdspm_speed_names[] = ;
static char *texts_autosync_aes_tco[] = ;
static char *texts_autosync_aes[] = ;
static char *texts_autosync_madi_tco[] = ;
static char *texts_autosync_madi[] = ;
static char *texts_autosync_raydat_tco[] = ;
static char *texts_autosync_raydat[] = ;
static char *texts_autosync_aio_tco[] = ;
static char *texts_autosync_aio[] = ;
static char *texts_freq[] = ;
static char *texts_ports_madi[] = ;
static char *texts_ports_raydat_ss[] = ;
static char *texts_ports_raydat_ds[] = ;
static char *texts_ports_raydat_qs[] = ;
static char *texts_ports_aio_in_ss[] = ;
static char *texts_ports_aio_out_ss[] = ;
static char *texts_ports_aio_in_ds[] = ;
static char *texts_ports_aio_out_ds[] = ;
static char *texts_ports_aio_in_qs[] = ;
static char *texts_ports_aio_out_qs[] = ;
static char *texts_ports_aes32[] = ;
static char channel_map_unity_ss[HDSPM_MAX_CHANNELS] = ;
static char channel_map_raydat_ss[HDSPM_MAX_CHANNELS] = ;
static char channel_map_raydat_ds[HDSPM_MAX_CHANNELS] = ;
static char channel_map_raydat_qs[HDSPM_MAX_CHANNELS] = ;
static char channel_map_aio_in_ss[HDSPM_MAX_CHANNELS] = ;
static char channel_map_aio_out_ss[HDSPM_MAX_CHANNELS] = ;
static char channel_map_aio_in_ds[HDSPM_MAX_CHANNELS] = ;
static char channel_map_aio_out_ds[HDSPM_MAX_CHANNELS] = ;
static char channel_map_aio_in_qs[HDSPM_MAX_CHANNELS] = ;
static char channel_map_aio_out_qs[HDSPM_MAX_CHANNELS] = ;
static char channel_map_aes32[HDSPM_MAX_CHANNELS] = ;
struct hdspm_midi ;
struct hdspm_tco ;
struct hdspm ;
static DEFINE_PCI_DEVICE_TABLE(snd_hdspm_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_hdspm_ids);
static int __devinit snd_hdspm_create_alsa_devices(struct snd_card *card,
struct hdspm * hdspm);
static int __devinit snd_hdspm_create_pcm(struct snd_card *card,
struct hdspm * hdspm);
static inline void snd_hdspm_initialize_midi_flush(struct hdspm *hdspm);
static int hdspm_update_simple_mixer_controls(struct hdspm *hdspm);
static int hdspm_autosync_ref(struct hdspm *hdspm);
static int snd_hdspm_set_defaults(struct hdspm *hdspm);
static void hdspm_set_sgbuf(struct hdspm *hdspm,
struct snd_pcm_substream *substream,
unsigned int reg, int channels);
static inline int HDSPM_bit2freq(int n)
static inline void hdspm_write(struct hdspm * hdspm, unsigned int reg,
unsigned int val)
static inline unsigned int hdspm_read(struct hdspm * hdspm, unsigned int reg)
static inline int hdspm_read_in_gain(struct hdspm * hdspm, unsigned int chan,
unsigned int in)
static inline int hdspm_read_pb_gain(struct hdspm * hdspm, unsigned int chan,
unsigned int pb)
static int hdspm_write_in_gain(struct hdspm *hdspm, unsigned int chan,
unsigned int in, unsigned short data)
static int hdspm_write_pb_gain(struct hdspm *hdspm, unsigned int chan,
unsigned int pb, unsigned short data)
static inline void snd_hdspm_enable_in(struct hdspm * hdspm, int i, int v)
static inline void snd_hdspm_enable_out(struct hdspm * hdspm, int i, int v)
static int snd_hdspm_use_is_exclusive(struct hdspm *hdspm)
static int hdspm_external_sample_rate(struct hdspm *hdspm)
static inline void hdspm_compute_period_size(struct hdspm *hdspm)
static snd_pcm_uframes_t hdspm_hw_pointer(struct hdspm *hdspm)
static inline void hdspm_start_audio(struct hdspm * s)
static inline void hdspm_stop_audio(struct hdspm * s)
static void hdspm_silence_playback(struct hdspm *hdspm)
static int hdspm_set_interrupt_interval(struct hdspm *s, unsigned int frames)
static u64 hdspm_calc_dds_value(struct hdspm *hdspm, u64 period)
static void hdspm_set_dds_value(struct hdspm *hdspm, int rate)
static int hdspm_set_rate(struct hdspm * hdspm, int rate, int called_internally)
static void all_in_all_mixer(struct hdspm * hdspm, int sgain)
static inline unsigned char snd_hdspm_midi_read_byte (struct hdspm *hdspm,
int id)
static inline void snd_hdspm_midi_write_byte (struct hdspm *hdspm, int id,
int val)
static inline int snd_hdspm_midi_input_available (struct hdspm *hdspm, int id)
static inline int snd_hdspm_midi_output_possible (struct hdspm *hdspm, int id)
static void snd_hdspm_flush_midi_input(struct hdspm *hdspm, int id)
static int snd_hdspm_midi_output_write (struct hdspm_midi *hmidi)
static int snd_hdspm_midi_input_read (struct hdspm_midi *hmidi)
static void
snd_hdspm_midi_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_hdspm_midi_output_timer(unsigned long data)
static void
snd_hdspm_midi_output_trigger(struct snd_rawmidi_substream *substream, int up)
static int snd_hdspm_midi_input_open(struct snd_rawmidi_substream *substream)
static int snd_hdspm_midi_output_open(struct snd_rawmidi_substream *substream)
static int snd_hdspm_midi_input_close(struct snd_rawmidi_substream *substream)
static int snd_hdspm_midi_output_close(struct snd_rawmidi_substream *substream)
static struct snd_rawmidi_ops snd_hdspm_midi_output =
;
static struct snd_rawmidi_ops snd_hdspm_midi_input =
;
static int __devinit snd_hdspm_create_midi (struct snd_card *card,
struct hdspm *hdspm, int id)
static void hdspm_midi_tasklet(unsigned long arg)
static int hdspm_get_system_sample_rate(struct hdspm *hdspm)
#define HDSPM_SYSTEM_SAMPLE_RATE(xname, xindex) \
static int snd_hdspm_info_system_sample_rate(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_system_sample_rate(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *
ucontrol)
static int hdspm_get_wc_sample_rate(struct hdspm *hdspm)
static int hdspm_get_tco_sample_rate(struct hdspm *hdspm)
static int hdspm_get_sync_in_sample_rate(struct hdspm *hdspm)
static int hdspm_get_s1_sample_rate(struct hdspm *hdspm, unsigned int idx)
#define HDSPM_AUTOSYNC_SAMPLE_RATE(xname, xindex) \
static int snd_hdspm_info_autosync_sample_rate(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_autosync_sample_rate(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *
ucontrol)
#define HDSPM_SYSTEM_CLOCK_MODE(xname, xindex) \
static int hdspm_system_clock_mode(struct hdspm *hdspm)
static void hdspm_set_system_clock_mode(struct hdspm *hdspm, int mode)
static int snd_hdspm_info_system_clock_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_system_clock_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_system_clock_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_INTERNAL_CLOCK(xname, xindex) \
static int hdspm_clock_source(struct hdspm * hdspm)
static int hdspm_set_clock_source(struct hdspm * hdspm, int mode)
static int snd_hdspm_info_clock_source(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_clock_source(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_clock_source(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_PREF_SYNC_REF(xname, xindex) \
static int hdspm_pref_sync_ref(struct hdspm * hdspm)
static int hdspm_set_pref_sync_ref(struct hdspm * hdspm, int pref)
static int snd_hdspm_info_pref_sync_ref(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_pref_sync_ref(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_pref_sync_ref(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_AUTOSYNC_REF(xname, xindex) \
static int hdspm_autosync_ref(struct hdspm *hdspm)
static int snd_hdspm_info_autosync_ref(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_autosync_ref(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_LINE_OUT(xname, xindex) \
static int hdspm_line_out(struct hdspm * hdspm)
static int hdspm_set_line_output(struct hdspm * hdspm, int out)
#define snd_hdspm_info_line_out		snd_ctl_boolean_mono_info
static int snd_hdspm_get_line_out(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_line_out(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_TX_64(xname, xindex) \
static int hdspm_tx_64(struct hdspm * hdspm)
static int hdspm_set_tx_64(struct hdspm * hdspm, int out)
#define snd_hdspm_info_tx_64		snd_ctl_boolean_mono_info
static int snd_hdspm_get_tx_64(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_tx_64(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_C_TMS(xname, xindex) \
static int hdspm_c_tms(struct hdspm * hdspm)
static int hdspm_set_c_tms(struct hdspm * hdspm, int out)
#define snd_hdspm_info_c_tms		snd_ctl_boolean_mono_info
static int snd_hdspm_get_c_tms(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_c_tms(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_SAFE_MODE(xname, xindex) \
static int hdspm_safe_mode(struct hdspm * hdspm)
static int hdspm_set_safe_mode(struct hdspm * hdspm, int out)
#define snd_hdspm_info_safe_mode	snd_ctl_boolean_mono_info
static int snd_hdspm_get_safe_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_safe_mode(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_EMPHASIS(xname, xindex) \
static int hdspm_emphasis(struct hdspm * hdspm)
static int hdspm_set_emphasis(struct hdspm * hdspm, int emp)
#define snd_hdspm_info_emphasis		snd_ctl_boolean_mono_info
static int snd_hdspm_get_emphasis(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_emphasis(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_DOLBY(xname, xindex) \
static int hdspm_dolby(struct hdspm * hdspm)
static int hdspm_set_dolby(struct hdspm * hdspm, int dol)
#define snd_hdspm_info_dolby		snd_ctl_boolean_mono_info
static int snd_hdspm_get_dolby(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_dolby(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_PROFESSIONAL(xname, xindex) \
static int hdspm_professional(struct hdspm * hdspm)
static int hdspm_set_professional(struct hdspm * hdspm, int dol)
#define snd_hdspm_info_professional	snd_ctl_boolean_mono_info
static int snd_hdspm_get_professional(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_professional(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_INPUT_SELECT(xname, xindex) \
static int hdspm_input_select(struct hdspm * hdspm)
static int hdspm_set_input_select(struct hdspm * hdspm, int out)
static int snd_hdspm_info_input_select(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_input_select(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_input_select(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_DS_WIRE(xname, xindex) \
static int hdspm_ds_wire(struct hdspm * hdspm)
static int hdspm_set_ds_wire(struct hdspm * hdspm, int ds)
static int snd_hdspm_info_ds_wire(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_ds_wire(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_ds_wire(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_QS_WIRE(xname, xindex) \
static int hdspm_qs_wire(struct hdspm * hdspm)
static int hdspm_set_qs_wire(struct hdspm * hdspm, int mode)
static int snd_hdspm_info_qs_wire(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_qs_wire(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_qs_wire(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_MIXER(xname, xindex) \
static int snd_hdspm_info_mixer(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_mixer(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_mixer(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_PLAYBACK_MIXER \
static int snd_hdspm_info_playback_mixer(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_playback_mixer(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_playback_mixer(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_SYNC_CHECK(xname, xindex) \
static int snd_hdspm_info_sync_check(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int hdspm_wc_sync_check(struct hdspm *hdspm)
static int hdspm_madi_sync_check(struct hdspm *hdspm)
static int hdspm_s1_sync_check(struct hdspm *hdspm, int idx)
static int hdspm_sync_in_sync_check(struct hdspm *hdspm)
static int hdspm_aes_sync_check(struct hdspm *hdspm, int idx)
static int hdspm_tco_sync_check(struct hdspm *hdspm)
static int snd_hdspm_get_sync_check(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static void hdspm_tco_write(struct hdspm *hdspm)
#define HDSPM_TCO_SAMPLE_RATE(xname, xindex) \
static int snd_hdspm_info_tco_sample_rate(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_tco_sample_rate(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_tco_sample_rate(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_TCO_PULL(xname, xindex) \
static int snd_hdspm_info_tco_pull(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_tco_pull(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_tco_pull(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_TCO_WCK_CONVERSION(xname, xindex) \
static int snd_hdspm_info_tco_wck_conversion(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_tco_wck_conversion(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_tco_wck_conversion(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_TCO_FRAME_RATE(xname, xindex) \
static int snd_hdspm_info_tco_frame_rate(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_tco_frame_rate(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_tco_frame_rate(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_TCO_SYNC_SOURCE(xname, xindex) \
static int snd_hdspm_info_tco_sync_source(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_tco_sync_source(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_tco_sync_source(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
#define HDSPM_TCO_WORD_TERM(xname, xindex) \
static int snd_hdspm_info_tco_word_term(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int snd_hdspm_get_tco_word_term(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int snd_hdspm_put_tco_word_term(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_hdspm_controls_madi[] = ;
static struct snd_kcontrol_new snd_hdspm_controls_madiface[] = ;
static struct snd_kcontrol_new snd_hdspm_controls_aio[] = ;
static struct snd_kcontrol_new snd_hdspm_controls_raydat[] = ;
static struct snd_kcontrol_new snd_hdspm_controls_aes32[] = ;
static struct snd_kcontrol_new snd_hdspm_controls_tco[] = ;
static struct snd_kcontrol_new snd_hdspm_playback_mixer = HDSPM_PLAYBACK_MIXER;
static int hdspm_update_simple_mixer_controls(struct hdspm * hdspm)
static int snd_hdspm_create_controls(struct snd_card *card,
struct hdspm *hdspm)
static void
snd_hdspm_proc_read_madi(struct snd_info_entry * entry,
struct snd_info_buffer *buffer)
static void
snd_hdspm_proc_read_aes32(struct snd_info_entry * entry,
struct snd_info_buffer *buffer)
static void
snd_hdspm_proc_read_raydat(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void
snd_hdspm_proc_read_debug(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_hdspm_proc_ports_in(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void snd_hdspm_proc_ports_out(struct snd_info_entry *entry,
struct snd_info_buffer *buffer)
static void __devinit snd_hdspm_proc_init(struct hdspm *hdspm)
static int snd_hdspm_set_defaults(struct hdspm * hdspm)
static irqreturn_t snd_hdspm_interrupt(int irq, void *dev_id)
static snd_pcm_uframes_t snd_hdspm_hw_pointer(struct snd_pcm_substream
*substream)
static int snd_hdspm_reset(struct snd_pcm_substream *substream)
static int snd_hdspm_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int snd_hdspm_hw_free(struct snd_pcm_substream *substream)
static int snd_hdspm_channel_info(struct snd_pcm_substream *substream,
struct snd_pcm_channel_info *info)
static int snd_hdspm_ioctl(struct snd_pcm_substream *substream,
unsigned int cmd, void *arg)
static int snd_hdspm_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_hdspm_prepare(struct snd_pcm_substream *substream)
static unsigned int period_sizes_old[] = ;
static unsigned int period_sizes_new[] = ;
static unsigned int raydat_aio_buffer_sizes[] = ;
static struct snd_pcm_hardware snd_hdspm_playback_subinfo = ;
static struct snd_pcm_hardware snd_hdspm_capture_subinfo = ;
static struct snd_pcm_hw_constraint_list hw_constraints_period_sizes_old = ;
static struct snd_pcm_hw_constraint_list hw_constraints_period_sizes_new = ;
static struct snd_pcm_hw_constraint_list hw_constraints_raydat_io_buffer = ;
static int snd_hdspm_hw_rule_in_channels_rate(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_hdspm_hw_rule_out_channels_rate(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule * rule)
static int snd_hdspm_hw_rule_rate_in_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule * rule)
static int snd_hdspm_hw_rule_rate_out_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_hdspm_hw_rule_in_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_hdspm_hw_rule_out_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static unsigned int hdspm_aes32_sample_rates[] = ;
static struct snd_pcm_hw_constraint_list
hdspm_hw_constraints_aes32_sample_rates = ;
static int snd_hdspm_playback_open(struct snd_pcm_substream *substream)
static int snd_hdspm_playback_release(struct snd_pcm_substream *substream)
static int snd_hdspm_capture_open(struct snd_pcm_substream *substream)
static int snd_hdspm_capture_release(struct snd_pcm_substream *substream)
static int snd_hdspm_hwdep_dummy_op(struct snd_hwdep *hw, struct file *file)
static inline int copy_u32_le(void __user *dest, void __iomem *src)
static int snd_hdspm_hwdep_ioctl(struct snd_hwdep *hw, struct file *file,
unsigned int cmd, unsigned long __user arg)
static struct snd_pcm_ops snd_hdspm_playback_ops = ;
static struct snd_pcm_ops snd_hdspm_capture_ops = ;
static int __devinit snd_hdspm_create_hwdep(struct snd_card *card,
struct hdspm * hdspm)
static int __devinit snd_hdspm_preallocate_memory(struct hdspm *hdspm)
static void hdspm_set_sgbuf(struct hdspm *hdspm,
struct snd_pcm_substream *substream,
unsigned int reg, int channels)
static int __devinit snd_hdspm_create_pcm(struct snd_card *card,
struct hdspm *hdspm)
static inline void snd_hdspm_initialize_midi_flush(struct hdspm * hdspm)
static int __devinit snd_hdspm_create_alsa_devices(struct snd_card *card,
struct hdspm * hdspm)
static int __devinit snd_hdspm_create(struct snd_card *card,
struct hdspm *hdspm)
static int snd_hdspm_free(struct hdspm * hdspm)
static void snd_hdspm_card_free(struct snd_card *card)
static int __devinit snd_hdspm_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_hdspm_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_hdspm_init(void)
static void __exit alsa_card_hdspm_exit(void)
module_init(alsa_card_hdspm_init)
module_exit(alsa_card_hdspm_exit)
