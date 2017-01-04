static DIVA_DI_PRINTF dprintf;
_DbgHandle_ myDriverDebugHandle = ;
DIVA_DI_PRINTF dprintf = no_printf;
#define DBG_FUNC(name) \
void  \
myDbgPrint_##name (char *format, ...) \
DBG_FUNC(LOG)
DBG_FUNC(FTL)
DBG_FUNC(ERR)
DBG_FUNC(TRC)
DBG_FUNC(MXLOG)
DBG_FUNC(FTL_MXLOG)
void
myDbgPrint_EVL (long msgID, ...)
DBG_FUNC(REG)
DBG_FUNC(MEM)
DBG_FUNC(SPL)
DBG_FUNC(IRP)
DBG_FUNC(TIM)
DBG_FUNC(BLK)
DBG_FUNC(TAPI)
DBG_FUNC(NDIS)
DBG_FUNC(CONN)
DBG_FUNC(STAT)
DBG_FUNC(SEND)
DBG_FUNC(RECV)
DBG_FUNC(PRV0)
DBG_FUNC(PRV1)
DBG_FUNC(PRV2)
DBG_FUNC(PRV3)
int
DbgRegister (char *drvName, char *drvTag, unsigned long dbgMask)
void
DbgSetLevel (unsigned long dbgMask)
void
DbgDeregister (void)
void  xdi_dbg_xlog (char* x, ...)
