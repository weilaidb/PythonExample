static short const sXtalkWideKLeftEq = 0x269C;
static short const sXtalkWideKRightEq = 0x269C;
static short const sXtalkWideKLeftXt = 0xF25E;
static short const sXtalkWideKRightXt = 0xF25E;
static short const sXtalkWideShiftLeftEq = 1;
static short const sXtalkWideShiftRightEq = 1;
static short const sXtalkWideShiftLeftXt = 0;
static short const sXtalkWideShiftRightXt = 0;
static unsigned short const wXtalkWideLeftDelay = 0xd;
static unsigned short const wXtalkWideRightDelay = 0xd;
static short const sXtalkNarrowKLeftEq = 0x468D;
static short const sXtalkNarrowKRightEq = 0x468D;
static short const sXtalkNarrowKLeftXt = 0xF82E;
static short const sXtalkNarrowKRightXt = 0xF82E;
static short const sXtalkNarrowShiftLeftEq = 0x3;
static short const sXtalkNarrowShiftRightEq = 0x3;
static short const sXtalkNarrowShiftLeftXt = 0;
static short const sXtalkNarrowShiftRightXt = 0;
static unsigned short const wXtalkNarrowLeftDelay = 0x7;
static unsigned short const wXtalkNarrowRightDelay = 0x7;
static xtalk_gains_t const asXtalkGainsDefault = ;
static xtalk_gains_t const asXtalkGainsTest = ;
static xtalk_gains_t const asXtalkGains1Chan = ;
static xtalk_gains_t const asXtalkGainsAllChan = ;
static xtalk_gains_t const asXtalkGainsZeros;
static xtalk_dline_t const alXtalkDlineZeros;
static xtalk_dline_t const alXtalkDlineTest = ;
static xtalk_instate_t const asXtalkInStateZeros;
static xtalk_instate_t const asXtalkInStateTest =
;
static xtalk_state_t const asXtalkOutStateZeros;
static short const sDiamondKLeftEq = 0x401d;
static short const sDiamondKRightEq = 0x401d;
static short const sDiamondKLeftXt = 0xF90E;
static short const sDiamondKRightXt = 0xF90E;
static short const sDiamondShiftLeftEq = 1;
static short const sDiamondShiftRightEq = 1;
static short const sDiamondShiftLeftXt = 0;
static short const sDiamondShiftRightXt = 0;
static unsigned short const wDiamondLeftDelay = 0xb;
static unsigned short const wDiamondRightDelay = 0xb;
static xtalk_coefs_t const asXtalkWideCoefsLeftEq = ;
static xtalk_coefs_t const asXtalkWideCoefsRightEq = ;
static xtalk_coefs_t const asXtalkWideCoefsLeftXt = ;
static xtalk_coefs_t const asXtalkWideCoefsRightXt = ;
static xtalk_coefs_t const asXtalkNarrowCoefsLeftEq = ;
static xtalk_coefs_t const asXtalkNarrowCoefsRightEq = ;
static xtalk_coefs_t const asXtalkNarrowCoefsLeftXt = ;
static xtalk_coefs_t const asXtalkNarrowCoefsRightXt = ;
static xtalk_coefs_t const asXtalkCoefsZeros;
static xtalk_coefs_t const asXtalkCoefsPipe = ;
static xtalk_coefs_t const asXtalkCoefsNegPipe = ;
static xtalk_coefs_t const asXtalkCoefsNumTest = ;
static xtalk_coefs_t const asXtalkCoefsDenTest = ;
static xtalk_state_t const asXtalkOutStateTest = ;
static xtalk_coefs_t const asDiamondCoefsLeftEq = ;
static xtalk_coefs_t const asDiamondCoefsRightEq = ;
static xtalk_coefs_t const asDiamondCoefsLeftXt = ;
static xtalk_coefs_t const asDiamondCoefsRightXt = ;
static void
vortex_XtalkHw_SetLeftEQ(vortex_t * vortex, short arg_0, short arg_4,
xtalk_coefs_t const coefs)
static void
vortex_XtalkHw_SetRightEQ(vortex_t * vortex, short arg_0, short arg_4,
xtalk_coefs_t const coefs)
static void
vortex_XtalkHw_SetLeftXT(vortex_t * vortex, short arg_0, short arg_4,
xtalk_coefs_t const coefs)
static void
vortex_XtalkHw_SetRightXT(vortex_t * vortex, short arg_0, short arg_4,
xtalk_coefs_t const coefs)
static void
vortex_XtalkHw_SetLeftEQStates(vortex_t * vortex,
xtalk_instate_t const arg_0,
xtalk_state_t const coefs)
static void
vortex_XtalkHw_SetRightEQStates(vortex_t * vortex,
xtalk_instate_t const arg_0,
xtalk_state_t const coefs)
static void
vortex_XtalkHw_SetLeftXTStates(vortex_t * vortex,
xtalk_instate_t const arg_0,
xtalk_state_t const coefs)
static void
vortex_XtalkHw_SetRightXTStates(vortex_t * vortex,
xtalk_instate_t const arg_0,
xtalk_state_t const coefs)
static void
vortex_XtalkHw_SetGains(vortex_t * vortex, xtalk_gains_t const gains)
static void
vortex_XtalkHw_SetGainsAllChan(vortex_t * vortex)
static void
vortex_XtalkHw_SetDelay(vortex_t * vortex, unsigned short right,
unsigned short left)
static void
vortex_XtalkHw_SetLeftDline(vortex_t * vortex, xtalk_dline_t const dline)
static void
vortex_XtalkHw_SetRightDline(vortex_t * vortex, xtalk_dline_t const dline)
static void vortex_XtalkHw_SetSampleRate(vortex_t * vortex, u32 sr)
static void vortex_XtalkHw_Enable(vortex_t * vortex)
static void vortex_XtalkHw_Disable(vortex_t * vortex)
static void vortex_XtalkHw_ZeroIO(vortex_t * vortex)
static void vortex_XtalkHw_ZeroState(vortex_t * vortex)
static void vortex_XtalkHw_ProgramPipe(vortex_t * vortex)
static void vortex_XtalkHw_ProgramXtalkWide(vortex_t * vortex)
static void vortex_XtalkHw_ProgramXtalkNarrow(vortex_t * vortex)
static void vortex_XtalkHw_ProgramDiamondXtalk(vortex_t * vortex)
static void vortex_XtalkHw_init(vortex_t * vortex)
