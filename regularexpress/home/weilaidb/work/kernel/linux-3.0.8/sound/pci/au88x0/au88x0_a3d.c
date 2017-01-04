static void
a3dsrc_SetTimeConsts(a3dsrc_t * a, short HrtfTrack, short ItdTrack,
short GTrack, short CTrack)
static void
a3dsrc_SetAtmosTarget(a3dsrc_t * a, short aa, short b, short c, short d,
short e)
static void
a3dsrc_SetAtmosCurrent(a3dsrc_t * a, short aa, short b, short c, short d,
short e)
static void
a3dsrc_SetAtmosState(a3dsrc_t * a, short x1, short x2, short y1, short y2)
static void
a3dsrc_SetHrtfTarget(a3dsrc_t * a, a3d_Hrtf_t const aa, a3d_Hrtf_t const b)
static void
a3dsrc_SetHrtfCurrent(a3dsrc_t * a, a3d_Hrtf_t const aa, a3d_Hrtf_t const b)
static void
a3dsrc_SetHrtfState(a3dsrc_t * a, a3d_Hrtf_t const aa, a3d_Hrtf_t const b)
static void a3dsrc_SetHrtfOutput(a3dsrc_t * a, short left, short right)
static void a3dsrc_SetItdTarget(a3dsrc_t * a, short litd, short ritd)
static void a3dsrc_SetItdCurrent(a3dsrc_t * a, short litd, short ritd)
static void a3dsrc_SetItdDline(a3dsrc_t * a, a3d_ItdDline_t const dline)
static void a3dsrc_SetGainTarget(a3dsrc_t * a, short left, short right)
static void a3dsrc_SetGainCurrent(a3dsrc_t * a, short left, short right)
static void a3dsrc_SetA3DSampleRate(a3dsrc_t * a, int sr)
static void a3dsrc_EnableA3D(a3dsrc_t * a)
static void a3dsrc_DisableA3D(a3dsrc_t * a)
static void a3dsrc_SetA3DControlReg(a3dsrc_t * a, unsigned long ctrl)
static void a3dsrc_SetA3DPointerReg(a3dsrc_t * a, unsigned long ptr)
static void a3dsrc_ZeroSliceIO(a3dsrc_t * a)
static void a3dsrc_ZeroState(a3dsrc_t * a)
static void a3dsrc_ZeroStateA3D(a3dsrc_t * a)
static void a3dsrc_ProgramPipe(a3dsrc_t * a)
static void vortex_A3dSourceHw_Initialize(vortex_t * v, int source, int slice)
static int Vort3DRend_Initialize(vortex_t * v, unsigned short mode)
static int vortex_a3d_register_controls(vortex_t * vortex);
static void vortex_a3d_unregister_controls(vortex_t * vortex);
static void __devinit vortex_Vort3D_enable(vortex_t * v)
static void vortex_Vort3D_disable(vortex_t * v)
static void vortex_Vort3D_connect(vortex_t * v, int en)
static void vortex_Vort3D_InitializeSource(a3dsrc_t * a, int en)
static void vortex_a3d_coord2hrtf(a3d_Hrtf_t hrtf, int *coord)
static void vortex_a3d_coord2itd(a3d_Itd_t itd, int *coord)
static void vortex_a3d_coord2ild(a3d_LRGains_t ild, int left, int right)
static void vortex_a3d_translate_filter(a3d_atmos_t filter, int *params)
static int
snd_vortex_a3d_hrtf_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int
snd_vortex_a3d_itd_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int
snd_vortex_a3d_ild_info(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_info *uinfo)
static int
snd_vortex_a3d_filter_info(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_info *uinfo)
static int
snd_vortex_a3d_get(struct snd_kcontrol *kcontrol, struct snd_ctl_elem_value *ucontrol)
static int
snd_vortex_a3d_hrtf_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int
snd_vortex_a3d_itd_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int
snd_vortex_a3d_ild_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static int
snd_vortex_a3d_filter_put(struct snd_kcontrol *kcontrol,
struct snd_ctl_elem_value *ucontrol)
static struct snd_kcontrol_new vortex_a3d_kcontrol __devinitdata = ;
static int __devinit vortex_a3d_register_controls(vortex_t * vortex)
static void vortex_a3d_unregister_controls(vortex_t * vortex)
