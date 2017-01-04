static int index[SNDRV_CARDS] = SNDRV_DEFAULT_IDX;
static char *id[SNDRV_CARDS] = SNDRV_DEFAULT_STR;
static int enable[SNDRV_CARDS] = SNDRV_DEFAULT_ENABLE_PNP;
module_param_array(index, int, NULL, 0444);
MODULE_PARM_DESC(index, "Index value for RME Hammerfall DSP interface.");
module_param_array(id, charp, NULL, 0444);
MODULE_PARM_DESC(id, "ID string for RME Hammerfall DSP interface.");
module_param_array(enable, bool, NULL, 0444);
MODULE_PARM_DESC(enable, "Enable/disable specific Hammerfall DSP soundcards.");
MODULE_AUTHOR("Paul Davis <paul@linuxaudiosystems.com>, Marcus Andersson, Thomas Charbonnel <thomas@undata.org>");
MODULE_DESCRIPTION("RME Hammerfall DSP");
MODULE_LICENSE("GPL");
MODULE_SUPPORTED_DEVICE("");
MODULE_FIRMWARE("rpm_firmware.bin");
MODULE_FIRMWARE("multiface_firmware.bin");
MODULE_FIRMWARE("multiface_firmware_rev11.bin");
MODULE_FIRMWARE("digiface_firmware.bin");
MODULE_FIRMWARE("digiface_firmware_rev11.bin");
#define HDSP_MAX_CHANNELS        26
#define HDSP_MAX_DS_CHANNELS     14
#define HDSP_MAX_QS_CHANNELS     8
#define DIGIFACE_SS_CHANNELS     26
#define DIGIFACE_DS_CHANNELS     14
#define MULTIFACE_SS_CHANNELS    18
#define MULTIFACE_DS_CHANNELS    14
#define H9652_SS_CHANNELS        26
#define H9652_DS_CHANNELS        14
#define H9632_SS_CHANNELS	 12
#define H9632_DS_CHANNELS	 8
#define H9632_QS_CHANNELS	 4
#define RPM_CHANNELS             6
#define HDSP_resetPointer               0
#define HDSP_freqReg			0
#define HDSP_outputBufferAddress	32
#define HDSP_inputBufferAddress		36
#define HDSP_controlRegister		64
#define HDSP_interruptConfirmation	96
#define HDSP_outputEnable	  	128
#define HDSP_control2Reg		256
#define HDSP_midiDataOut0  		352
#define HDSP_midiDataOut1  		356
#define HDSP_fifoData  			368
#define HDSP_inputEnable	 	384
#define HDSP_statusRegister    0
#define HDSP_timecode        128
#define HDSP_status2Register 192
#define HDSP_midiDataIn0     360
#define HDSP_midiDataIn1     364
#define HDSP_midiStatusOut0  384
#define HDSP_midiStatusOut1  388
#define HDSP_midiStatusIn0   392
#define HDSP_midiStatusIn1   396
#define HDSP_fifoStatus      400
#define HDSP_playbackPeakLevel  4096
#define HDSP_inputPeakLevel     4224
#define HDSP_outputPeakLevel    4352
#define HDSP_playbackRmsLevel   4612
#define HDSP_inputRmsLevel      4868
#define HDSP_9652_peakBase	7164
#define HDSP_9652_rmsBase	4096
#define HDSP_9632_metersBase	4096
#define HDSP_IO_EXTENT     7168
#define HDSP_TMS                0x01
#define HDSP_TCK                0x02
#define HDSP_TDI                0x04
#define HDSP_JTAG               0x08
#define HDSP_PWDN               0x10
#define HDSP_PROGRAM	        0x020
#define HDSP_CONFIG_MODE_0	0x040
#define HDSP_CONFIG_MODE_1	0x080
#define HDSP_VERSION_BIT	0x100
#define HDSP_BIGENDIAN_MODE     0x200
#define HDSP_RD_MULTIPLE        0x400
#define HDSP_9652_ENABLE_MIXER  0x800
#define HDSP_TDO                0x10000000
#define HDSP_S_PROGRAM     	(HDSP_PROGRAM|HDSP_CONFIG_MODE_0)
#define HDSP_S_LOAD		(HDSP_PROGRAM|HDSP_CONFIG_MODE_1)
#define HDSP_Start                (1<<0)
#define HDSP_Latency0             (1<<1)
#define HDSP_Latency1             (1<<2)
#define HDSP_Latency2             (1<<3)
#define HDSP_ClockModeMaster      (1<<4)
#define HDSP_AudioInterruptEnable (1<<5)
#define HDSP_Frequency0           (1<<6)
#define HDSP_Frequency1           (1<<7)
#define HDSP_DoubleSpeed          (1<<8)
#define HDSP_SPDIFProfessional    (1<<9)
#define HDSP_SPDIFEmphasis        (1<<10)
#define HDSP_SPDIFNonAudio        (1<<11)
#define HDSP_SPDIFOpticalOut      (1<<12)
#define HDSP_SyncRef2             (1<<13)
#define HDSP_SPDIFInputSelect0    (1<<14)
#define HDSP_SPDIFInputSelect1    (1<<15)
#define HDSP_SyncRef0             (1<<16)
#define HDSP_SyncRef1             (1<<17)
#define HDSP_AnalogExtensionBoard (1<<18)
#define HDSP_XLRBreakoutCable     (1<<20)
#define HDSP_Midi0InterruptEnable (1<<22)
#define HDSP_Midi1InterruptEnable (1<<23)
#define HDSP_LineOut              (1<<24)
#define HDSP_ADGain0		  (1<<25)
#define HDSP_ADGain1		  (1<<26)
#define HDSP_DAGain0		  (1<<27)
#define HDSP_DAGain1		  (1<<28)
#define HDSP_PhoneGain0		  (1<<29)
#define HDSP_PhoneGain1		  (1<<30)
#define HDSP_QuadSpeed	  	  (1<<31)
#define HDSP_RPM_Inp12            0x04A00
#define HDSP_RPM_Inp12_Phon_6dB   0x00800
#define HDSP_RPM_Inp12_Phon_0dB   0x00000
#define HDSP_RPM_Inp12_Phon_n6dB  0x04000
#define HDSP_RPM_Inp12_Line_0dB   0x04200
#define HDSP_RPM_Inp12_Line_n6dB  0x00200
#define HDSP_RPM_Inp34            0x32000
#define HDSP_RPM_Inp34_Phon_6dB   0x20000
#define HDSP_RPM_Inp34_Phon_0dB   0x00000
#define HDSP_RPM_Inp34_Phon_n6dB  0x02000
#define HDSP_RPM_Inp34_Line_0dB   0x30000
#define HDSP_RPM_Inp34_Line_n6dB  0x10000
#define HDSP_RPM_Bypass           0x01000
#define HDSP_RPM_Disconnect       0x00001
#define HDSP_ADGainMask       (HDSP_ADGain0|HDSP_ADGain1)
#define HDSP_ADGainMinus10dBV  HDSP_ADGainMask
#define HDSP_ADGainPlus4dBu   (HDSP_ADGain0)
#define HDSP_ADGainLowGain     0
#define HDSP_DAGainMask         (HDSP_DAGain0|HDSP_DAGain1)
#define HDSP_DAGainHighGain      HDSP_DAGainMask
#define HDSP_DAGainPlus4dBu     (HDSP_DAGain0)
#define HDSP_DAGainMinus10dBV    0
#define HDSP_PhoneGainMask      (HDSP_PhoneGain0|HDSP_PhoneGain1)
#define HDSP_PhoneGain0dB        HDSP_PhoneGainMask
#define HDSP_PhoneGainMinus6dB  (HDSP_PhoneGain0)
#define HDSP_PhoneGainMinus12dB  0
#define HDSP_LatencyMask    (HDSP_Latency0|HDSP_Latency1|HDSP_Latency2)
#define HDSP_FrequencyMask  (HDSP_Frequency0|HDSP_Frequency1|HDSP_DoubleSpeed|HDSP_QuadSpeed)
#define HDSP_SPDIFInputMask    (HDSP_SPDIFInputSelect0|HDSP_SPDIFInputSelect1)
#define HDSP_SPDIFInputADAT1    0
#define HDSP_SPDIFInputCoaxial (HDSP_SPDIFInputSelect0)
#define HDSP_SPDIFInputCdrom   (HDSP_SPDIFInputSelect1)
#define HDSP_SPDIFInputAES     (HDSP_SPDIFInputSelect0|HDSP_SPDIFInputSelect1)
#define HDSP_SyncRefMask        (HDSP_SyncRef0|HDSP_SyncRef1|HDSP_SyncRef2)
#define HDSP_SyncRef_ADAT1       0
#define HDSP_SyncRef_ADAT2      (HDSP_SyncRef0)
#define HDSP_SyncRef_ADAT3      (HDSP_SyncRef1)
#define HDSP_SyncRef_SPDIF      (HDSP_SyncRef0|HDSP_SyncRef1)
#define HDSP_SyncRef_WORD       (HDSP_SyncRef2)
#define HDSP_SyncRef_ADAT_SYNC  (HDSP_SyncRef0|HDSP_SyncRef2)
#define HDSP_CLOCK_SOURCE_AUTOSYNC           0
#define HDSP_CLOCK_SOURCE_INTERNAL_32KHZ     1
#define HDSP_CLOCK_SOURCE_INTERNAL_44_1KHZ   2
#define HDSP_CLOCK_SOURCE_INTERNAL_48KHZ     3
#define HDSP_CLOCK_SOURCE_INTERNAL_64KHZ     4
#define HDSP_CLOCK_SOURCE_INTERNAL_88_2KHZ   5
#define HDSP_CLOCK_SOURCE_INTERNAL_96KHZ     6
#define HDSP_CLOCK_SOURCE_INTERNAL_128KHZ    7
#define HDSP_CLOCK_SOURCE_INTERNAL_176_4KHZ  8
#define HDSP_CLOCK_SOURCE_INTERNAL_192KHZ    9
#define HDSP_SYNC_FROM_WORD      0
#define HDSP_SYNC_FROM_SPDIF     1
#define HDSP_SYNC_FROM_ADAT1     2
#define HDSP_SYNC_FROM_ADAT_SYNC 3
#define HDSP_SYNC_FROM_ADAT2     4
#define HDSP_SYNC_FROM_ADAT3     5
#define HDSP_SYNC_CHECK_NO_LOCK 0
#define HDSP_SYNC_CHECK_LOCK    1
#define HDSP_SYNC_CHECK_SYNC	2
#define HDSP_AUTOSYNC_FROM_WORD      0
#define HDSP_AUTOSYNC_FROM_ADAT_SYNC 1
#define HDSP_AUTOSYNC_FROM_SPDIF     2
#define HDSP_AUTOSYNC_FROM_NONE	     3
#define HDSP_AUTOSYNC_FROM_ADAT1     4
#define HDSP_AUTOSYNC_FROM_ADAT2     5
#define HDSP_AUTOSYNC_FROM_ADAT3     6
#define HDSP_SPDIFIN_OPTICAL  0
#define HDSP_SPDIFIN_COAXIAL  1
#define HDSP_SPDIFIN_INTERNAL 2
#define HDSP_SPDIFIN_AES      3
#define HDSP_Frequency32KHz    HDSP_Frequency0
#define HDSP_Frequency44_1KHz  HDSP_Frequency1
#define HDSP_Frequency48KHz    (HDSP_Frequency1|HDSP_Frequency0)
#define HDSP_Frequency64KHz    (HDSP_DoubleSpeed|HDSP_Frequency0)
#define HDSP_Frequency88_2KHz  (HDSP_DoubleSpeed|HDSP_Frequency1)
#define HDSP_Frequency96KHz    (HDSP_DoubleSpeed|HDSP_Frequency1|HDSP_Frequency0)
#define HDSP_Frequency128KHz   (HDSP_QuadSpeed|HDSP_DoubleSpeed|HDSP_Frequency0)
#define HDSP_Frequency176_4KHz (HDSP_QuadSpeed|HDSP_DoubleSpeed|HDSP_Frequency1)
#define HDSP_Frequency192KHz   (HDSP_QuadSpeed|HDSP_DoubleSpeed|HDSP_Frequency1|HDSP_Frequency0)
#define DDS_NUMERATOR 104857600000000ULL;
#define hdsp_encode_latency(x)       (((x)<<1) & HDSP_LatencyMask)
#define hdsp_decode_latency(x)       (((x) & HDSP_LatencyMask)>>1)
#define hdsp_encode_spdif_in(x) (((x)&0x3)<<14)
#define hdsp_decode_spdif_in(x) (((x)>>14)&0x3)
#define HDSP_audioIRQPending    (1<<0)
#define HDSP_Lock2              (1<<1)
#define HDSP_spdifFrequency3	HDSP_Lock2
#define HDSP_Lock1              (1<<2)
#define HDSP_Lock0              (1<<3)
#define HDSP_SPDIFSync          (1<<4)
#define HDSP_TimecodeLock       (1<<5)
#define HDSP_BufferPositionMask 0x000FFC0
#define HDSP_Sync2              (1<<16)
#define HDSP_Sync1              (1<<17)
#define HDSP_Sync0              (1<<18)
#define HDSP_DoubleSpeedStatus  (1<<19)
#define HDSP_ConfigError        (1<<20)
#define HDSP_DllError           (1<<21)
#define HDSP_spdifFrequency0    (1<<22)
#define HDSP_spdifFrequency1    (1<<23)
#define HDSP_spdifFrequency2    (1<<24)
#define HDSP_SPDIFErrorFlag     (1<<25)
#define HDSP_BufferID           (1<<26)
#define HDSP_TimecodeSync       (1<<27)
#define HDSP_AEBO          	(1<<28)
#define HDSP_AEBI		(1<<29)
#define HDSP_midi0IRQPending    (1<<30)
#define HDSP_midi1IRQPending    (1<<31)
#define HDSP_spdifFrequencyMask    (HDSP_spdifFrequency0|HDSP_spdifFrequency1|HDSP_spdifFrequency2)
#define HDSP_spdifFrequencyMask_9632 (HDSP_spdifFrequency0|\
HDSP_spdifFrequency1|\
HDSP_spdifFrequency2|\
HDSP_spdifFrequency3)
#define HDSP_spdifFrequency32KHz   (HDSP_spdifFrequency0)
#define HDSP_spdifFrequency44_1KHz (HDSP_spdifFrequency1)
#define HDSP_spdifFrequency48KHz   (HDSP_spdifFrequency0|HDSP_spdifFrequency1)
#define HDSP_spdifFrequency64KHz   (HDSP_spdifFrequency2)
#define HDSP_spdifFrequency88_2KHz (HDSP_spdifFrequency0|HDSP_spdifFrequency2)
#define HDSP_spdifFrequency96KHz   (HDSP_spdifFrequency2|HDSP_spdifFrequency1)
#define HDSP_spdifFrequency128KHz   (HDSP_spdifFrequency0|\
HDSP_spdifFrequency1|\
HDSP_spdifFrequency2)
#define HDSP_spdifFrequency176_4KHz HDSP_spdifFrequency3
#define HDSP_spdifFrequency192KHz   (HDSP_spdifFrequency3|HDSP_spdifFrequency0)
#define HDSP_version0     (1<<0)
#define HDSP_version1     (1<<1)
#define HDSP_version2     (1<<2)
#define HDSP_wc_lock      (1<<3)
#define HDSP_wc_sync      (1<<4)
#define HDSP_inp_freq0    (1<<5)
#define HDSP_inp_freq1    (1<<6)
#define HDSP_inp_freq2    (1<<7)
#define HDSP_SelSyncRef0  (1<<8)
#define HDSP_SelSyncRef1  (1<<9)
#define HDSP_SelSyncRef2  (1<<10)
#define HDSP_wc_valid (HDSP_wc_lock|HDSP_wc_sync)
#define HDSP_systemFrequencyMask (HDSP_inp_freq0|HDSP_inp_freq1|HDSP_inp_freq2)
#define HDSP_systemFrequency32   (HDSP_inp_freq0)
#define HDSP_systemFrequency44_1 (HDSP_inp_freq1)
#define HDSP_systemFrequency48   (HDSP_inp_freq0|HDSP_inp_freq1)
#define HDSP_systemFrequency64   (HDSP_inp_freq2)
#define HDSP_systemFrequency88_2 (HDSP_inp_freq0|HDSP_inp_freq2)
#define HDSP_systemFrequency96   (HDSP_inp_freq1|HDSP_inp_freq2)
#define HDSP_SelSyncRefMask        (HDSP_SelSyncRef0|HDSP_SelSyncRef1|HDSP_SelSyncRef2)
#define HDSP_SelSyncRef_ADAT1      0
#define HDSP_SelSyncRef_ADAT2      (HDSP_SelSyncRef0)
#define HDSP_SelSyncRef_ADAT3      (HDSP_SelSyncRef1)
#define HDSP_SelSyncRef_SPDIF      (HDSP_SelSyncRef0|HDSP_SelSyncRef1)
#define HDSP_SelSyncRef_WORD       (HDSP_SelSyncRef2)
#define HDSP_SelSyncRef_ADAT_SYNC  (HDSP_SelSyncRef0|HDSP_SelSyncRef2)
#define HDSP_InitializationComplete  (1<<0)
#define HDSP_FirmwareLoaded	     (1<<1)
#define HDSP_FirmwareCached	     (1<<2)
#define HDSP_LONG_WAIT	 5000
#define HDSP_SHORT_WAIT  30
#define UNITY_GAIN                       32768
#define MINUS_INFINITY_GAIN              0
#define HDSP_CHANNEL_BUFFER_SAMPLES  (16*1024)
#define HDSP_CHANNEL_BUFFER_BYTES    (4*HDSP_CHANNEL_BUFFER_SAMPLES)
#define HDSP_DMA_AREA_BYTES ((HDSP_MAX_CHANNELS+1) * HDSP_CHANNEL_BUFFER_BYTES)
#define HDSP_DMA_AREA_KILOBYTES (HDSP_DMA_AREA_BYTES/1024)
#if defined(CONFIG_FW_LOADER) || defined(CONFIG_FW_LOADER_MODULE)
#if !defined(HDSP_USE_HWDEP_LOADER)
#define HDSP_FW_LOADER
struct hdsp_9632_meters ;
struct hdsp_midi ;
struct hdsp ;
static char channel_map_df_ss[HDSP_MAX_CHANNELS] = ;
static char channel_map_mf_ss[HDSP_MAX_CHANNELS] = ;
static char channel_map_ds[HDSP_MAX_CHANNELS] = ;
static char channel_map_H9632_ss[HDSP_MAX_CHANNELS] = ;
static char channel_map_H9632_ds[HDSP_MAX_CHANNELS] = ;
static char channel_map_H9632_qs[HDSP_MAX_CHANNELS] = ;
static int snd_hammerfall_get_buffer(struct pci_dev *pci, struct snd_dma_buffer *dmab, size_t size)
static void snd_hammerfall_free_buffer(struct snd_dma_buffer *dmab, struct pci_dev *pci)
static DEFINE_PCI_DEVICE_TABLE(snd_hdsp_ids) = ;
MODULE_DEVICE_TABLE(pci, snd_hdsp_ids);
static int snd_hdsp_create_alsa_devices(struct snd_card *card, struct hdsp *hdsp);
static int snd_hdsp_create_pcm(struct snd_card *card, struct hdsp *hdsp);
static int snd_hdsp_enable_io (struct hdsp *hdsp);
static void snd_hdsp_initialize_midi_flush (struct hdsp *hdsp);
static void snd_hdsp_initialize_channels (struct hdsp *hdsp);
static int hdsp_fifo_wait(struct hdsp *hdsp, int count, int timeout);
static int hdsp_autosync_ref(struct hdsp *hdsp);
static int snd_hdsp_set_defaults(struct hdsp *hdsp);
static void snd_hdsp_9652_enable_mixer (struct hdsp *hdsp);
static int hdsp_playback_to_output_key (struct hdsp *hdsp, int in, int out)
static int hdsp_input_to_output_key (struct hdsp *hdsp, int in, int out)
static void hdsp_write(struct hdsp *hdsp, int reg, int val)
static unsigned int hdsp_read(struct hdsp *hdsp, int reg)
static int hdsp_check_for_iobox (struct hdsp *hdsp)
static int hdsp_wait_for_iobox(struct hdsp *hdsp, unsigned int loops,
unsigned int delay)
static int snd_hdsp_load_firmware_from_cache(struct hdsp *hdsp)
static int hdsp_get_iobox_version (struct hdsp *hdsp)
static int hdsp_request_fw_loader(struct hdsp *hdsp);
static int hdsp_check_for_firmware (struct hdsp *hdsp, int load_on_demand)
static int hdsp_fifo_wait(struct hdsp *hdsp, int count, int timeout)
static int hdsp_read_gain (struct hdsp *hdsp, unsigned int addr)
static int hdsp_write_gain(struct hdsp *hdsp, unsigned int addr, unsigned short data)
static int snd_hdsp_use_is_exclusive(struct hdsp *hdsp)
static int hdsp_spdif_sample_rate(struct hdsp *hdsp)
static int hdsp_external_sample_rate(struct hdsp *hdsp)
static void hdsp_compute_period_size(struct hdsp *hdsp)
static snd_pcm_uframes_t hdsp_hw_pointer(struct hdsp *hdsp)
static void hdsp_reset_hw_pointer(struct hdsp *hdsp)
static void hdsp_start_audio(struct hdsp *s)
static void hdsp_stop_audio(struct hdsp *s)
static void hdsp_silence_playback(struct hdsp *hdsp)
static int hdsp_set_interrupt_interval(struct hdsp *s, unsigned int frames)
static void hdsp_set_dds_value(struct hdsp *hdsp, int rate)
static int hdsp_set_rate(struct hdsp *hdsp, int rate, int called_internally)
static unsigned char snd_hdsp_midi_read_byte (struct hdsp *hdsp, int id)
static void snd_hdsp_midi_write_byte (struct hdsp *hdsp, int id, int val)
static int snd_hdsp_midi_input_available (struct hdsp *hdsp, int id)
static int snd_hdsp_midi_output_possible (struct hdsp *hdsp, int id)
static void snd_hdsp_flush_midi_input (struct hdsp *hdsp, int id)
static int snd_hdsp_midi_output_write (struct hdsp_midi *hmidi)
static int snd_hdsp_midi_input_read (struct hdsp_midi *hmidi)
static void snd_hdsp_midi_input_trigger(struct snd_rawmidi_substream *substream, int up)
static void snd_hdsp_midi_output_timer(unsigned long data)
static void snd_hdsp_midi_output_trigger(struct snd_rawmidi_substream *substream, int up)
static int snd_hdsp_midi_input_open(struct snd_rawmidi_substream *substream)
static int snd_hdsp_midi_output_open(struct snd_rawmidi_substream *substream)
static int snd_hdsp_midi_input_close(struct snd_rawmidi_substream *substream)
static int snd_hdsp_midi_output_close(struct snd_rawmidi_substream *substream)
static struct snd_rawmidi_ops snd_hdsp_midi_output =
;
static struct snd_rawmidi_ops snd_hdsp_midi_input =
;
static int snd_hdsp_create_midi (struct snd_card *card, struct hdsp *hdsp, int id)
static u32 snd_hdsp_convert_from_aes(struct snd_aes_iec958 *aes)
static void snd_hdsp_convert_to_aes(struct snd_aes_iec958 *aes, u32 val)
static int snd_hdsp_control_spdif_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_control_spdif_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_control_spdif_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_control_spdif_stream_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_control_spdif_stream_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_control_spdif_stream_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_control_spdif_mask_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_control_spdif_mask_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_SPDIF_IN(xname, xindex) \
static unsigned int hdsp_spdif_in(struct hdsp *hdsp)
static int hdsp_set_spdif_input(struct hdsp *hdsp, int in)
static int snd_hdsp_info_spdif_in(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_get_spdif_in(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_spdif_in(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_SPDIF_OUT(xname, xindex) \
static int hdsp_spdif_out(struct hdsp *hdsp)
static int hdsp_set_spdif_output(struct hdsp *hdsp, int out)
#define snd_hdsp_info_spdif_bits	snd_ctl_boolean_mono_info
static int snd_hdsp_get_spdif_out(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_spdif_out(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_SPDIF_PROFESSIONAL(xname, xindex) \
static int hdsp_spdif_professional(struct hdsp *hdsp)
static int hdsp_set_spdif_professional(struct hdsp *hdsp, int val)
static int snd_hdsp_get_spdif_professional(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_spdif_professional(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_SPDIF_EMPHASIS(xname, xindex) \
static int hdsp_spdif_emphasis(struct hdsp *hdsp)
static int hdsp_set_spdif_emphasis(struct hdsp *hdsp, int val)
static int snd_hdsp_get_spdif_emphasis(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_spdif_emphasis(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_SPDIF_NON_AUDIO(xname, xindex) \
static int hdsp_spdif_nonaudio(struct hdsp *hdsp)
static int hdsp_set_spdif_nonaudio(struct hdsp *hdsp, int val)
static int snd_hdsp_get_spdif_nonaudio(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_spdif_nonaudio(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_SPDIF_SAMPLE_RATE(xname, xindex) \
static int snd_hdsp_info_spdif_sample_rate(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_get_spdif_sample_rate(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_SYSTEM_SAMPLE_RATE(xname, xindex) \
static int snd_hdsp_info_system_sample_rate(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_get_system_sample_rate(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_AUTOSYNC_SAMPLE_RATE(xname, xindex) \
static int snd_hdsp_info_autosync_sample_rate(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_get_autosync_sample_rate(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_SYSTEM_CLOCK_MODE(xname, xindex) \
static int hdsp_system_clock_mode(struct hdsp *hdsp)
static int snd_hdsp_info_system_clock_mode(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_get_system_clock_mode(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_CLOCK_SOURCE(xname, xindex) \
static int hdsp_clock_source(struct hdsp *hdsp)
static int hdsp_set_clock_source(struct hdsp *hdsp, int mode)
static int snd_hdsp_info_clock_source(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_get_clock_source(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_clock_source(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define snd_hdsp_info_clock_source_lock		snd_ctl_boolean_mono_info
static int snd_hdsp_get_clock_source_lock(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_clock_source_lock(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_DA_GAIN(xname, xindex) \
static int hdsp_da_gain(struct hdsp *hdsp)
static int hdsp_set_da_gain(struct hdsp *hdsp, int mode)
static int snd_hdsp_info_da_gain(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_get_da_gain(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_da_gain(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_AD_GAIN(xname, xindex) \
static int hdsp_ad_gain(struct hdsp *hdsp)
static int hdsp_set_ad_gain(struct hdsp *hdsp, int mode)
static int snd_hdsp_info_ad_gain(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_get_ad_gain(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_ad_gain(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_PHONE_GAIN(xname, xindex) \
static int hdsp_phone_gain(struct hdsp *hdsp)
static int hdsp_set_phone_gain(struct hdsp *hdsp, int mode)
static int snd_hdsp_info_phone_gain(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_get_phone_gain(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_phone_gain(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_XLR_BREAKOUT_CABLE(xname, xindex) \
static int hdsp_xlr_breakout_cable(struct hdsp *hdsp)
static int hdsp_set_xlr_breakout_cable(struct hdsp *hdsp, int mode)
#define snd_hdsp_info_xlr_breakout_cable	snd_ctl_boolean_mono_info
static int snd_hdsp_get_xlr_breakout_cable(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_xlr_breakout_cable(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_AEB(xname, xindex) \
static int hdsp_aeb(struct hdsp *hdsp)
static int hdsp_set_aeb(struct hdsp *hdsp, int mode)
#define snd_hdsp_info_aeb		snd_ctl_boolean_mono_info
static int snd_hdsp_get_aeb(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_aeb(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_PREF_SYNC_REF(xname, xindex) \
static int hdsp_pref_sync_ref(struct hdsp *hdsp)
static int hdsp_set_pref_sync_ref(struct hdsp *hdsp, int pref)
static int snd_hdsp_info_pref_sync_ref(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_get_pref_sync_ref(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_pref_sync_ref(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_AUTOSYNC_REF(xname, xindex) \
static int hdsp_autosync_ref(struct hdsp *hdsp)
static int snd_hdsp_info_autosync_ref(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_get_autosync_ref(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_LINE_OUT(xname, xindex) \
static int hdsp_line_out(struct hdsp *hdsp)
static int hdsp_set_line_output(struct hdsp *hdsp, int out)
#define snd_hdsp_info_line_out		snd_ctl_boolean_mono_info
static int snd_hdsp_get_line_out(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_line_out(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_PRECISE_POINTER(xname, xindex) \
static int hdsp_set_precise_pointer(struct hdsp *hdsp, int precise)
#define snd_hdsp_info_precise_pointer		snd_ctl_boolean_mono_info
static int snd_hdsp_get_precise_pointer(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_precise_pointer(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_USE_MIDI_TASKLET(xname, xindex) \
static int hdsp_set_use_midi_tasklet(struct hdsp *hdsp, int use_tasklet)
#define snd_hdsp_info_use_midi_tasklet		snd_ctl_boolean_mono_info
static int snd_hdsp_get_use_midi_tasklet(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_use_midi_tasklet(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_MIXER(xname, xindex) \
static int snd_hdsp_info_mixer(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_get_mixer(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_mixer(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_WC_SYNC_CHECK(xname, xindex) \
static int snd_hdsp_info_sync_check(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int hdsp_wc_sync_check(struct hdsp *hdsp)
static int snd_hdsp_get_wc_sync_check(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_SPDIF_SYNC_CHECK(xname, xindex) \
static int hdsp_spdif_sync_check(struct hdsp *hdsp)
static int snd_hdsp_get_spdif_sync_check(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_ADATSYNC_SYNC_CHECK(xname, xindex) \
static int hdsp_adatsync_sync_check(struct hdsp *hdsp)
static int snd_hdsp_get_adatsync_sync_check(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_ADAT_SYNC_CHECK \
static int hdsp_adat_sync_check(struct hdsp *hdsp, int idx)
static int snd_hdsp_get_adat_sync_check(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
#define HDSP_DDS_OFFSET(xname, xindex) \
static int hdsp_dds_offset(struct hdsp *hdsp)
static int hdsp_set_dds_offset(struct hdsp *hdsp, int offset_hz)
static int snd_hdsp_info_dds_offset(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int snd_hdsp_get_dds_offset(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_put_dds_offset(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new snd_hdsp_9632_controls[] = ;
static struct snd_kcontrol_new snd_hdsp_controls[] = ;
static int hdsp_rpm_input12(struct hdsp *hdsp)
static int snd_hdsp_get_rpm_input12(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int hdsp_set_rpm_input12(struct hdsp *hdsp, int mode)
static int snd_hdsp_put_rpm_input12(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_info_rpm_input(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int hdsp_rpm_input34(struct hdsp *hdsp)
static int snd_hdsp_get_rpm_input34(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int hdsp_set_rpm_input34(struct hdsp *hdsp, int mode)
static int snd_hdsp_put_rpm_input34(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int hdsp_rpm_bypass(struct hdsp *hdsp)
static int snd_hdsp_get_rpm_bypass(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int hdsp_set_rpm_bypass(struct hdsp *hdsp, int on)
static int snd_hdsp_put_rpm_bypass(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_info_rpm_bypass(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int hdsp_rpm_disconnect(struct hdsp *hdsp)
static int snd_hdsp_get_rpm_disconnect(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int hdsp_set_rpm_disconnect(struct hdsp *hdsp, int on)
static int snd_hdsp_put_rpm_disconnect(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int snd_hdsp_info_rpm_disconnect(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static struct snd_kcontrol_new snd_hdsp_rpm_controls[] = ;
static struct snd_kcontrol_new snd_hdsp_96xx_aeb = HDSP_AEB("Analog Extension Board", 0);
static struct snd_kcontrol_new snd_hdsp_adat_sync_check = HDSP_ADAT_SYNC_CHECK;
static int snd_hdsp_create_controls(struct snd_card *card, struct hdsp *hdsp)
static void
snd_hdsp_proc_read(struct snd_info_entry *entry, struct snd_info_buffer *buffer)
static void snd_hdsp_proc_init(struct hdsp *hdsp)
static void snd_hdsp_free_buffers(struct hdsp *hdsp)
static int __devinit snd_hdsp_initialize_memory(struct hdsp *hdsp)
static int snd_hdsp_set_defaults(struct hdsp *hdsp)
static void hdsp_midi_tasklet(unsigned long arg)
static irqreturn_t snd_hdsp_interrupt(int irq, void *dev_id)
static snd_pcm_uframes_t snd_hdsp_hw_pointer(struct snd_pcm_substream *substream)
static char *hdsp_channel_buffer_location(struct hdsp *hdsp,
int stream,
int channel)
static int snd_hdsp_playback_copy(struct snd_pcm_substream *substream, int channel,
snd_pcm_uframes_t pos, void __user *src, snd_pcm_uframes_t count)
static int snd_hdsp_capture_copy(struct snd_pcm_substream *substream, int channel,
snd_pcm_uframes_t pos, void __user *dst, snd_pcm_uframes_t count)
static int snd_hdsp_hw_silence(struct snd_pcm_substream *substream, int channel,
snd_pcm_uframes_t pos, snd_pcm_uframes_t count)
static int snd_hdsp_reset(struct snd_pcm_substream *substream)
static int snd_hdsp_hw_params(struct snd_pcm_substream *substream,
struct snd_pcm_hw_params *params)
static int snd_hdsp_channel_info(struct snd_pcm_substream *substream,
struct snd_pcm_channel_info *info)
static int snd_hdsp_ioctl(struct snd_pcm_substream *substream,
unsigned int cmd, void *arg)
static int snd_hdsp_trigger(struct snd_pcm_substream *substream, int cmd)
static int snd_hdsp_prepare(struct snd_pcm_substream *substream)
static struct snd_pcm_hardware snd_hdsp_playback_subinfo =
;
static struct snd_pcm_hardware snd_hdsp_capture_subinfo =
;
static unsigned int hdsp_period_sizes[] = ;
static struct snd_pcm_hw_constraint_list hdsp_hw_constraints_period_sizes = ;
static unsigned int hdsp_9632_sample_rates[] = ;
static struct snd_pcm_hw_constraint_list hdsp_hw_constraints_9632_sample_rates = ;
static int snd_hdsp_hw_rule_in_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_hdsp_hw_rule_out_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_hdsp_hw_rule_in_channels_rate(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_hdsp_hw_rule_out_channels_rate(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_hdsp_hw_rule_rate_out_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_hdsp_hw_rule_rate_in_channels(struct snd_pcm_hw_params *params,
struct snd_pcm_hw_rule *rule)
static int snd_hdsp_playback_open(struct snd_pcm_substream *substream)
static int snd_hdsp_playback_release(struct snd_pcm_substream *substream)
static int snd_hdsp_capture_open(struct snd_pcm_substream *substream)
static int snd_hdsp_capture_release(struct snd_pcm_substream *substream)
static inline int copy_u32_le(void __user *dest, void __iomem *src)
static inline int copy_u64_le(void __user *dest, void __iomem *src_low, void __iomem *src_high)
static inline int copy_u48_le(void __user *dest, void __iomem *src_low, void __iomem *src_high)
static int hdsp_9652_get_peak(struct hdsp *hdsp, struct hdsp_peak_rms __user *peak_rms)
static int hdsp_9632_get_peak(struct hdsp *hdsp, struct hdsp_peak_rms __user *peak_rms)
static int hdsp_get_peak(struct hdsp *hdsp, struct hdsp_peak_rms __user *peak_rms)
static int snd_hdsp_hwdep_ioctl(struct snd_hwdep *hw, struct file *file, unsigned int cmd, unsigned long arg)
static struct snd_pcm_ops snd_hdsp_playback_ops = ;
static struct snd_pcm_ops snd_hdsp_capture_ops = ;
static int snd_hdsp_create_hwdep(struct snd_card *card, struct hdsp *hdsp)
static int snd_hdsp_create_pcm(struct snd_card *card, struct hdsp *hdsp)
static void snd_hdsp_9652_enable_mixer (struct hdsp *hdsp)
static int snd_hdsp_enable_io (struct hdsp *hdsp)
static void snd_hdsp_initialize_channels(struct hdsp *hdsp)
static void snd_hdsp_initialize_midi_flush (struct hdsp *hdsp)
static int snd_hdsp_create_alsa_devices(struct snd_card *card, struct hdsp *hdsp)
static int hdsp_request_fw_loader(struct hdsp *hdsp)
static int __devinit snd_hdsp_create(struct snd_card *card,
struct hdsp *hdsp)
static int snd_hdsp_free(struct hdsp *hdsp)
static void snd_hdsp_card_free(struct snd_card *card)
static int __devinit snd_hdsp_probe(struct pci_dev *pci,
const struct pci_device_id *pci_id)
static void __devexit snd_hdsp_remove(struct pci_dev *pci)
static struct pci_driver driver = ;
static int __init alsa_card_hdsp_init(void)
static void __exit alsa_card_hdsp_exit(void)
module_init(alsa_card_hdsp_init)
module_exit(alsa_card_hdsp_exit)
