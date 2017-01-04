#define VORTEX_EQ_BASE	 0x2b000
#define VORTEX_EQ_DEST   (VORTEX_EQ_BASE + 0x410)
#define VORTEX_EQ_SOURCE (VORTEX_EQ_BASE + 0x430)
#define VORTEX_EQ_CTRL   (VORTEX_EQ_BASE + 0x440)
#define VORTEX_BAND_COEFF_SIZE 0x30
static void vortex_EqHw_SetTimeConsts(vortex_t * vortex, u16 gain, u16 level)
static inline u16 sign_invert(u16 a)
static void vortex_EqHw_SetLeftCoefs(vortex_t * vortex, u16 coefs[])
static void vortex_EqHw_SetRightCoefs(vortex_t * vortex, u16 coefs[])
static void vortex_EqHw_SetLeftStates(vortex_t * vortex, u16 a[], u16 b[])
static void vortex_EqHw_SetRightStates(vortex_t * vortex, u16 a[], u16 b[])
static void vortex_EqHw_SetBypassGain(vortex_t * vortex, u16 a, u16 b)
static void vortex_EqHw_SetA3DBypassGain(vortex_t * vortex, u16 a, u16 b)
static void
vortex_EqHw_SetLeftGainsSingleTarget(vortex_t * vortex, u16 index, u16 b)
static void
vortex_EqHw_SetRightGainsSingleTarget(vortex_t * vortex, u16 index, u16 b)
static void vortex_EqHw_SetLeftGainsTarget(vortex_t * vortex, u16 a[])
static void vortex_EqHw_SetRightGainsTarget(vortex_t * vortex, u16 a[])
static void vortex_EqHw_SetLeftGainsCurrent(vortex_t * vortex, u16 a[])
static void vortex_EqHw_SetRightGainsCurrent(vortex_t * vortex, u16 a[])
static void vortex_EqHw_SetLevels(vortex_t * vortex, u16 peaks[])
static void vortex_EqHw_SetControlReg(vortex_t * vortex, u32 reg)
static void vortex_EqHw_SetSampleRate(vortex_t * vortex, u32 sr)
static void vortex_EqHw_Enable(vortex_t * vortex)
static void vortex_EqHw_Disable(vortex_t * vortex)
static void vortex_EqHw_ZeroIO(vortex_t * vortex)
static void vortex_EqHw_ZeroA3DIO(vortex_t * vortex)
static void vortex_EqHw_ZeroState(vortex_t * vortex)
static void vortex_EqHw_ProgramPipe(vortex_t * vortex)
static void
vortex_EqHw_Program10Band(vortex_t * vortex, auxxEqCoeffSet_t * coefset)
static void vortex_EqHw_GetTenBandLevels(vortex_t * vortex, u16 peaks[])
static int vortex_Eqlzr_GetLeftGain(vortex_t * vortex, u16 index, u16 * gain)
static void vortex_Eqlzr_SetLeftGain(vortex_t * vortex, u16 index, u16 gain)
static int vortex_Eqlzr_GetRightGain(vortex_t * vortex, u16 index, u16 * gain)
static void vortex_Eqlzr_SetRightGain(vortex_t * vortex, u16 index, u16 gain)
static int vortex_Eqlzr_SetAllBandsFromActiveCoeffSet(vortex_t * vortex)
static int
vortex_Eqlzr_SetAllBands(vortex_t * vortex, u16 gains[], s32 count)
static void
vortex_Eqlzr_SetA3dBypassGain(vortex_t * vortex, u32 a, u32 b)
static void vortex_Eqlzr_ProgramA3dBypassGain(vortex_t * vortex)
static void vortex_Eqlzr_ShutDownA3d(vortex_t * vortex)
static void vortex_Eqlzr_SetBypass(vortex_t * vortex, u32 bp)
static void vortex_Eqlzr_ReadAndSetActiveCoefSet(vortex_t * vortex)
static int vortex_Eqlzr_GetAllPeaks(vortex_t * vortex, u16 * peaks, int *count)
static void vortex_Eqlzr_init(vortex_t * vortex)
static void vortex_Eqlzr_shutdown(vortex_t * vortex)
#define snd_vortex_eqtoggle_info	snd_ctl_boolean_mono_info
static int
snd_vortex_eqtoggle_get(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int
snd_vortex_eqtoggle_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new vortex_eqtoggle_kcontrol __devinitdata = ;
static int
snd_vortex_eq_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int
snd_vortex_eq_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int
snd_vortex_eq_put(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new vortex_eq_kcontrol __devinitdata = ;
static int
snd_vortex_peaks_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int
snd_vortex_peaks_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new vortex_levels_kcontrol __devinitdata = ;
static char *EqBandLabels[10] __devinitdata = ;
static int __devinit vortex_eq_init(vortex_t * vortex)
static int vortex_eq_free(vortex_t * vortex)
