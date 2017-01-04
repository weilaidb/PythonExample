#define HCFCFG_H 1
typedef unsigned char			hcf_8;
typedef unsigned short			hcf_16;
typedef unsigned long			hcf_32;
#define HCF_IO_MEM     			0x0001
#define HCF_IO_32BITS   	  	0x0002
#define HCF_TYPE_NONE			0x0000
#define HCF_TYPE_WPA			0x0001
#define HCF_TYPE_USB			0x0002
#define HCF_TYPE_WARP			0x0008
#define HCF_TYPE_PRELOADED		0x0040
#define HCF_TYPE_HII5			0x0080
#define HCF_TYPE_CCX			0x0100
#define HCF_TYPE_BEAGLE_HII5	0x0200
#define HCF_TYPE_TX_DELAY		0x4000
#define HCF_ASSERT_NONE			0x0000
#define HCF_ASSERT_PRINTF		0x0001
#define HCF_ASSERT_SW_SUP		0x0002
#define HCF_ASSERT_MB			0x0004
#define HCF_ASSERT_RT_MSF_RTN	0x4000
#define HCF_ASSERT_LNK_MSF_RTN	0x8000
#define HCF_ENC_NONE			0x0000
#define HCF_ENC					0x0001
#define HCF_ENC_SUP				0x0002
#define HCF_EXT_NONE			0x0000
#define HCF_EXT_INFO_LOG		0x0001
#define HCF_EXT_INT_TX_EX		0x0004
#define HCF_EXT_TALLIES_FW		0x0010
#define HCF_EXT_TALLIES_HCF		0x0020
#define HCF_EXT_NIC_ACCESS		0x0040
#define HCF_EXT_MB				0x0080
#define HCF_EXT_IFB_STRCT 		0x0100
#define HCF_EXT_DESC_STRCT 		0x0200
#define HCF_EXT_TX_CONT			0x4000
#define HCF_EXT_INT_TICK		0x8000
#define HCF_DDS					0x0001
#define HCF_CDS					0x0002
#define HCF_TALLIES_NONE		0x0000
#define HCF_TALLIES_NIC			0x0001
#define HCF_TALLIES_HCF			0x0002
#define HCF_TALLIES_RESET		0x8000
#if defined WVLAN_41 || defined WVLAN_48 || defined WVLAN_52 || defined _WIN32_WCE
#define HCF_EXT   (HCF_EXT_INFO_LOG | HCF_EXT_MB | HCF_EXT_NIC_ACCESS )
#define HCF_EXT ( HCF_EXT_TX_CONT | HCF_EXT_INFO_LOG | HCF_EXT_MB | HCF_EXT_NIC_ACCESS )
#define HCF_DLV 1
#define HCF_IO     HCF_IO_MEM
#define HCF_DMA		0
#if _VARIANT == 7
#define HCF_SLEEP HCF_CDS
#if _VARIANT == 5 || _VARIANT == 6
#define _WARP
#define _AES
#define HCF_SLEEP HCF_CDS
#if _VARIANT == 6
#define HCF_IO     HCF_IO_32BITS
#define HCF_DMA		1
#if defined WVLAN_48
#if _VARIANT == 4 || _VARIANT == 6
#define _CCX_OK		1
#if defined WVLAN_48
#if _VARIANT == 4 || _VARIANT == 6
#define _CCX
#define HCF_MAX_MSG_CKIP_PADDING    86
#define HCF_MAX_MSG					( 1514 + HCF_MAX_MSG_CKIP_PADDING  )
#if !defined WVLAN_46
#define _PEEK
#undef ASSERT
#define  ASSERT(x) ASSERTDEBUGMSG((x), (TEXT("SIMULATE ASSERT:")))
#if defined WVLAN_41
#define	MSF_COMPONENT_ID			COMP_ID_MINIPORT_NDIS_31
#if defined WVLAN_48 && !defined _WIN32_WCE
#define	MSF_COMPONENT_ID			COMP_ID_MINIPORT_NDIS_50
#if defined WVLAN_52 && !defined _WIN32_WCE
#define	MSF_COMPONENT_ID			COMP_ID_MINIPORT_NDIS_40
#if defined WVLAN_46
#define	MSF_COMPONENT_ID			COMP_ID_WIN_CE
#define	MSF_COMPONENT_VAR			_VARIANT
#define	T1__HCF_TYPE					(HCF_TYPE_NONE)
#define T2__HCF_TYPE					(T1__HCF_TYPE)
#define T3__HCF_TYPE					(T2__HCF_TYPE | HCF_TYPE_HII5 | HCF_TYPE_WARP )
#if _VARIANT == 7
#define T3__HCF_TYPE					(T2__HCF_TYPE | HCF_TYPE_HII5)
#define T3__HCF_TYPE					(T2__HCF_TYPE)
#define T4__HCF_TYPE					(T3__HCF_TYPE | HCF_TYPE_CCX)
#define T4__HCF_TYPE					(T3__HCF_TYPE)
#define T5__HCF_TYPE					(T4__HCF_TYPE)
#define T5__HCF_TYPE					(T4__HCF_TYPE | HCF_TYPE_WPA)
#define HCF_TYPE						(T5__HCF_TYPE)
#if (defined DBG && DBG != 0)
#define STATIC
#if !defined SOFTRONICS_CODE && !defined _APIDLL && !defined _WIN32_WCE
#if defined _WIN32_WCE
#define	MSF_COMPONENT_MAJOR_VER		TPI_MAJOR_VERSION
#define	MSF_COMPONENT_MINOR_VER		TPI_MINOR_VERSION
#if !defined _APIDLL && !defined _WIN32_WCE
__inline UCHAR NDIS_IN_BYTE( ULONG port )
__inline ULONG NDIS_IN_LONG( ULONG port )
__inline USHORT NDIS_IN_WORD( ULONG port )
#define IN_PORT_DWORD(port)			NDIS_IN_LONG( (ULONG) (port) )
#define IN_PORT_WORD(port)			NDIS_IN_WORD( (ULONG) (port) )
#define OUT_PORT_DWORD(port, value)	NdisRawWritePortUlong((ULONG) (port) , value)
#define OUT_PORT_WORD(port, value)	NdisRawWritePortUshort((ULONG) (port) , (USHORT) (value))
#define  IN_PORT_STRING_8_16(port, addr, len)	IN_PORT_STRING_16(port, addr, len)
#define  OUT_PORT_STRING_8_16(port, addr, len)	OUT_PORT_STRING_16(port, addr, len)
#define IN_PORT_STRING_32(port, addr, len)
#define OUT_PORT_STRING_32(port, addr, len)
#define IN_PORT_STRING_16(port, addr, len)	NdisRawReadPortBufferUshort(port, addr, (len));
#define OUT_PORT_STRING_16(port, addr, len)	NdisRawWritePortBufferUshort(port, addr, (len));
#if defined _WIN32_WCE
#define HCF_ALIGN 2
#define HCF_MEM_IO					1
#define HCF_PROT_TIME				49
#define  		IN_PORT_BYTE			CE_IN_PORT_BYTE
#define  		OUT_PORT_BYTE			CE_OUT_PORT_BYTE
#define  		IN_PORT_WORD			CE_IN_PORT_WORD
#define  		OUT_PORT_WORD			CE_OUT_PORT_WORD
#define  		IN_PORT_STRING_16		CE_IN_PORT_STRING
#define  		OUT_PORT_STRING_16		CE_OUT_PORT_STRING
extern hcf_8  CE_IN_PORT_BYTE(hcf_32 port);
extern void   CE_OUT_PORT_BYTE(hcf_32 port, hcf_8 value);
extern hcf_16 CE_IN_PORT_WORD(hcf_32 port);
extern void   CE_OUT_PORT_WORD(hcf_32 port, hcf_16 value);
extern void   CE_IN_PORT_STRING(hcf_32 port, void *addr, hcf_16 len);
extern void   CE_OUT_PORT_STRING(hcf_32 port, void *addr, hcf_16 len);
#if defined _DEBUG || (defined DBG && DBG != 0)
#define HCF_ASSERT ( HCF_ASSERT_LNK_MSF_RTN | HCF_ASSERT_RT_MSF_RTN | HCF_ASSERT_PRINTF )
#if defined DEBUG || defined _DEBUG || (defined DBG && DBG != 0)
#define DBGA2W(DBGSTR)	CeConvertAnsiToUnicodeLen((char*)DBGSTR)
#define OUTPUTDEBUGMSG(dprintf_exp)			((void)((! ZONE_DEBUG) ? 0:ce_debug_out dprintf_exp))
#define ASSERTDEBUGMSG(cond, dprintf_exp)			((void)((cond) ? 0:ce_debug_out dprintf_exp))
#define ZONE_ERROR      DEBUGZONE(0)
#define ZONE_WARN       DEBUGZONE(1)
#define ZONE_FUNCTION   DEBUGZONE(2)
#define ZONE_INIT       DEBUGZONE(3)
#define ZONE_INTR       DEBUGZONE(4)
#define ZONE_RCV        DEBUGZONE(5)
#define ZONE_XMIT		DEBUGZONE(6)
#define ZONE_ASSERT 	DEBUGZONE(7)
#define ZONE_DEBUG 		DEBUGZONE(8)
#define ZONE_OEM 		DEBUGZONE(9)
#define ZONE_HCF		DEBUGZONE(10)
#define ZONE_PORTIO		DEBUGZONE(11)
#define ZONE_LOGTOFILE	DEBUGZONE(15)
#define OUTPUTDEBUGMSG(dprintf_exp)					((void) (DbgPrint dprintf_exp))
#define ASSERTDEBUGMSG(cond, print)	((void)((cond) ? 0: (DbgPrint("%s %s:%d - ", print, __FILE__, __LINE__))))
#define ZONE_ERROR      1
#define ZONE_WARN       1
#define ZONE_FUNCTION   1
#define ZONE_INIT       1
#define ZONE_INTR       1
#define ZONE_RCV        1
#define ZONE_XMIT		1
#define ZONE_ASSERT 	1
#define ZONE_DEBUG 		1
#define ZONE_OEM 		1
#define ZONE_HCF		1
#define ZONE_PORTIO		1
#define ZONE_LOGTOFILE	1
#define DBGA2W
#define OUTPUTDEBUGMSG(dprintf_exp)
#define ASSERTDEBUGMSG(cond, dprintf_exp)
#if !defined HCF_MAX_MSG_CKIP_PADDING
#define HCF_MAX_MSG_CKIP_PADDING 0
#if !defined	HCF_MAX_MSG
#define			HCF_MAX_MSG				1514
#define			HCF_LEGACY			1
#if defined WVLAN_42 || defined WVLAN_43
#define FAR  __far
#define BASED __based(__segname("_CODE"))
#define	HCF_EXT						HCF_EXT_MB
#define HCF_PROT_TIME				49
#define	MSF_COMPONENT_ID			COMP_ID_PACKET
#define	MSF_COMPONENT_VAR			1
#define	MSF_COMPONENT_MAJOR_VER		6
#define	MSF_COMPONENT_MINOR_VER		12
#define	MSF_COMPONENT_ID			COMP_ID_ODI_16
#define	MSF_COMPONENT_VAR			1
#define	MSF_COMPONENT_MAJOR_VER		6
#define	MSF_COMPONENT_MINOR_VER		10
#if 1
#define IN_PORT_WORD(port)			((hcf_16)_inpw( (hcf_io)(port) ))
#define OUT_PORT_WORD(port, value)	((void)_outpw( (hcf_io)(port), value ))
#if 1
#define IN_PORT_STRING_8_16( port, addr, n)		while (n--) \
#define OUT_PORT_STRING_8_16( port, addr, n)	while (n--) \
#elif 0
#define IN_PORT_STRING_8_16( port, addr, n)		while ( n-- ) \
#define OUT_PORT_STRING_8_16( port, addr, n)	while ( n-- ) \
#define IN_PORT_STRING_8_16( port, addr, n) __asm	\
#define OUT_PORT_STRING_8_16( port, addr, n) __asm	\
#define IN_PORT_STRING_32( port, addr, n)
#define OUT_PORT_STRING_32( port, addr, n)
#if defined H0_LDR || defined H1_LDR || defined H2_LDR || defined H5_LDR
#if defined H0_LDR
#define HCF_DLV		0
#define HCF_DLNV	1
#if defined H1_LDR
#define HCF_DLV		1
#define HCF_DLNV	0
#define HCF_TYPE			(HCF_TYPE_HII5 | HCF_TYPE_WARP )
#define HCF_ASSERT			HCF_ASSERT_LNK_MSF_RTN
#define HCF_ENCAP			0
#define HCF_INT_ON			0
#define HCF_TALLIES			0
#define	MSF_COMPONENT_ID			COMP_ID_ODI_16
#define	MSF_COMPONENT_VAR			1
#define	MSF_COMPONENT_MAJOR_VER		0
#define	MSF_COMPONENT_MINOR_VER		0
#if defined NDEBUG
#if defined HCF_DEMO
#define HCF_DLV		1
#define HCF_ASSERT	HCF_ASSERT_LNK_MSF_RTN
#define HCF_ENCAP			0
#define HCF_INT_ON			0
#define HCF_TALLIES			( HCF_TALLIES_NIC | HCF_TALLIES_HCF )
#if defined NDEBUG
#if defined WVLAN_45
#define MSF_COMPONENT_ID            COMP_ID_MAC_OS
#define MSF_COMPONENT_VAR           VARIANT
#define MSF_COMPONENT_MAJOR_VER     VERSION_MAJOR
#define MSF_COMPONENT_MINOR_VER     VERSION_MINOR
#define MAC_OS                      1
#define HCF_BIG_ENDIAN 1
#if defined DEBUG
#define HCF_ASSERT	HCF_ASSERT_MB
extern volatile unsigned char *MacIOaddr;
extern hcf_16 IN_PORT_WORD(hcf_16 port);
extern void   OUT_PORT_WORD(hcf_16 port, hcf_16 value);
extern void   IN_PORT_STRING_16(hcf_16 port, void *addr, hcf_16 len);
extern void   OUT_PORT_STRING_16(hcf_16 port, void *addr, hcf_16 len);
#define SwapBytes(t)    (((t) >> 8) + (((t) & 0xff) << 8))
#define HCF_SLEEP (HCF_CDS)
#define HCF_TYPE    ( HCF_TYPE_WARP | HCF_TYPE_HII5 )
#define HCF_TYPE    HCF_TYPE_HII5
#define HCF_TYPE    HCF_TYPE_NONE
#define HCF_DMA		1
#define HCF_EXT ( HCF_EXT_MB | HCF_EXT_INFO_LOG | HCF_EXT_INT_TICK )
#define HCF_TYPE_HII 0x0004
#define HCF_TYPE_AP  0x0010
#define HCF_TYPE_STA 0x0020
#define HCF_ALIGN		2
#define CNV_INT_TO_LITTLE   CNV_SHORT_TO_LITTLE
#define CNV_LITTLE_TO_INT   CNV_LITTLE_TO_SHORT
#define	HCF_ERR_BUSY			0x06
#define UIL_SUCCESS					HCF_SUCCESS
#define UIL_ERR_TIME_OUT			HCF_ERR_TIME_OUT
#define UIL_ERR_NO_NIC				HCF_ERR_NO_NIC
#define UIL_ERR_LEN					HCF_ERR_LEN
#define UIL_ERR_MIN					HCF_ERR_MAX
#define UIL_ERR_IN_USE				0x44
#define UIL_ERR_WRONG_IFB			0x46
#define UIL_ERR_MAX					0x7F
#define UIL_ERR_BUSY			    HCF_ERR_BUSY
#define UIL_ERR_DIAG_1			    HCF_ERR_DIAG_1
#define UIL_FAILURE					0xFF
#define UIL_ERR_PIF_CONFLICT		0x40
#define UIL_ERR_INCOMP_DRV			0x41
#define UIL_ERR_DOS_CALL			0x43
#define UIL_ERR_NO_DRV				0x42
#define UIL_ERR_NSTL				0x45
#define HCF_MAX_PACKET_SIZE 2304
#define HCF_MAX_PACKET_SIZE 1514
#define	MSF_COMPONENT_ID	COMP_ID_LINUX
#define	MSF_COMPONENT_VAR			DRV_VARIANT
#define MSF_COMPONENT_MAJOR_VER     DRV_MAJOR_VERSION
#define MSF_COMPONENT_MINOR_VER     DRV_MINOR_VERSION
#define HCF_ASSERT			HCF_ASSERT_LNK_MSF_RTN
#define HCF_BIG_ENDIAN  1
#define HCF_BIG_ENDIAN  0
#define IN_PORT_BYTE(port)			((hcf_8)inb( (hcf_io)(port) ))
#define IN_PORT_WORD(port)			((hcf_16)inw( (hcf_io)(port) ))
#define OUT_PORT_BYTE(port, value)	(outb( (hcf_8) (value), (hcf_io)(port) ))
#define OUT_PORT_WORD(port, value)	(outw((hcf_16) (value), (hcf_io)(port) ))
#define IN_PORT_STRING_16(port, dst, n)    insw((hcf_io)(port), dst, n)
#define OUT_PORT_STRING_16(port, src, n)   outsw((hcf_io)(port), src, n)
#define IN_PORT_STRING_32(port, dst, n)   insl((port), (dst), (n))
#define OUT_PORT_STRING_32(port, src, n)  outsl((port), (src), (n))
#define IN_PORT_HCF32(port)          inl( (hcf_io)(port) )
#define OUT_PORT_HCF32(port, value)  outl((hcf_32)(value), (hcf_io)(port) )
#define IN_PORT_DWORD(port)          IN_PORT_HCF32(port)
#define OUT_PORT_DWORD(port, value)  OUT_PORT_HCF32(port, value)
#define  IN_PORT_STRING_8_16(port, addr, len)	IN_PORT_STRING_16(port, addr, len)
#define  OUT_PORT_STRING_8_16(port, addr, len)	OUT_PORT_STRING_16(port, addr, len)
#define OUTPUTDEBUGMSG(dprintf_exp)
#define ASSERTDEBUGMSG(cond, dprintf_exp)
#define CFG_SCAN_CHANNELS_2GHZ 0xFCC2
#define HCF_MAX_MSG 1600
#if defined  __QNX__ || defined WVLAN_50
#define MSF_COMPONENT_ID		0
#define MSF_COMPONENT_VAR		0
#define MSF_COMPONENT_MAJOR_VER	0
#define MSF_COMPONENT_MINOR_VER	0
#define IN_PORT_WORD(port)			((hcf_16)inpw( (hcf_io)(port) ))
#define OUT_PORT_WORD(port, value)	(outpw( (hcf_io)(port), (hcf_16) (value) ))
#if defined  __BEOS__
#define MSF_COMPONENT_ID		0
#define MSF_COMPONENT_VAR		0
#define MSF_COMPONENT_MAJOR_VER	0
#define MSF_COMPONENT_MINOR_VER	0
uint8 read_io_8 (int);
void write_io_8 (int, uint8);
uint16 read_io_16 (int);
void write_io_16 (int, uint16);
#define IN_PORT_WORD(port)			((hcf_16)read_io_16( (hcf_io)(port) ))
#define OUT_PORT_WORD(port, value)	(write_io_16( (hcf_io)(port), (hcf_16) (value) ))
#if defined USB
#define	MSF_COMPONENT_MAJOR_VER		0
#define	MSF_COMPONENT_MINOR_VER		1
#define IN_PORT_WORD(port)			(Hermes_IO_Read( (hcf_8)(port)))
#define OUT_PORT_WORD(port, value)	(Hermes_IO_Write( (hcf_8)port,(value) ) )
#define IN_PORT_STRING_16( port, dst, n)	while ( n-- )
#define OUT_PORT_STRING_16( port, src, n)	while ( n-- )
#define HCF_TYPE	HCF_TYPE_WPA
#if defined __FREE_BSD__
#define	MSF_COMPONENT_ID			COMP_ID_FreeBSD
#define	MSF_COMPONENT_VAR			1
#define	MSF_COMPONENT_MAJOR_VER		1
#define	MSF_COMPONENT_MINOR_VER		0
#define HCF_IO 						HCF_IO_MEM
#define IN_PORT_WORD(port)			((hcf_16)inw( (hcf_io)(port) ))
#define OUT_PORT_WORD(port, value)	(outw((hcf_io)(port), (hcf_16)(value)))
#if defined WVLAN_81
#define EXTERN_C  extern
#define	MSF_COMPONENT_ID	COMP_ID_AP1
#define	MSF_COMPONENT_VAR			1
#define	MSF_COMPONENT_MAJOR_VER		4
#define	MSF_COMPONENT_MINOR_VER		0
#define HCF_PROT_TIME				49
#if !defined FAR
#define FAR  far
#define IN_PORT_WORD(port)					(inport( (hcf_io)(port) ))
#define OUT_PORT_WORD(port, value)			(outport( (hcf_io)(port), value ))
#define IN_PORT_STRING_16(port, addr, len)	\
asm
#define OUT_PORT_STRING_16(port, addr, len)	\
asm
#if defined WVLAUNCH
extern HWDEVICE*	g_pDevice;
#define IN_PORT_WORD(port)	HwInpw( g_pDevice, port )
#define OUT_PORT_WORD(port, value)	HwOutpw( g_pDevice, port, value )
#if defined WCITST
#define MSF_COMPONENT_ID		0
#define MSF_COMPONENT_VAR		0
#define MSF_COMPONENT_MAJOR_VER	0
#define MSF_COMPONENT_MINOR_VER	0
#define HCF_TYPE (HCF_TYPE_WPA | HCF_TYPE_PRELOADED)
#define 		HCF_DMA				1
#if defined LLB && !((HCF_TYPE) & HCF_TYPE_WPA)
err: no LLB unless SSN;
#define HCF_DLV		1
#define HCF_ASSERT	HCF_ASSERT_SW_SUP
#if defined __GNUC__
#define extern
#define IN_PORT_WORD(port)			inw( (hcf_io)(port) )
#define IN_PORT_DWORD(port)			inl( (hcf_io)(port) )
#define OUT_PORT_WORD(port, value)	outw( (hcf_io)(port), (hcf_16)(value) )
#define OUT_PORT_DWORD(port, value)	outl( (hcf_io)(port), (hcf_16)(value) )
#define FAR  __far
extern FILE* utm_logfile;
hcf_16	ipw( hcf_16 port );
hcf_8	ipb( hcf_16 port );
void	opw( hcf_16 port, hcf_16 value );
void	opb( hcf_16 port, hcf_8 value );
#define IN_PORT_WORD(port)			ipw( (hcf_io)(port) )
#define OUT_PORT_WORD(port, value)	opw( (hcf_io)(port), (hcf_16)(value) )
#define IN_PORT_WORD(port)			((hcf_16)_inpw( (hcf_io)(port) ))
#define OUT_PORT_WORD(port, value)	((void)_outpw( (hcf_io)(port), value ))
#if 1
#define IN_PORT_STRING_16( port, addr, len) __asm		\
#define OUT_PORT_STRING_16( port, addr, len) __asm		\
#if ! defined IN_PORT_STRING_16
#define IN_PORT_STRING_16( port, addr, n)  while (n--) \
#define OUT_PORT_STRING_16( port, addr, n) while (n--) \
#if defined I_MPC8XX
#define MSF_COMPONENT_VAR		0
#define MSF_COMPONENT_ID		0
#define MSF_COMPONENT_MAJOR_VER	1
#define MSF_COMPONENT_MINOR_VER	0
#define HCF_HSI_VAR				1
#define HCF_BIG_ENDIAN			1
#define HCF_IO 					HCF_IO_MEM
typedef o_uint8_t  hcf_8;
typedef o_uint16_t hcf_16;
typedef o_uint32_t hcf_32;
asm hcf_16 IN_PORT_WORD(int port)
asm void OUT_PORT_WORD(int port, hcf_16 value)
#define IN_PORT_STRING_16(port, addr, len)               \
#define OUT_PORT_STRING_16(port, addr, len)           \
#if defined _AM29K
#define MSF_COMPONENT_VAR		0
#define MSF_COMPONENT_ID		COMP_ID_AP1
#define MSF_COMPONENT_MAJOR_VER	1
#define MSF_COMPONENT_MINOR_VER	0
#define HCF_BIG_ENDIAN			1
#define HCF_IO 					HCF_IO_MEM
#define SwapBytes(t)(((t) >> 8) + (((t) & 0xff) << 8))
#if defined __ppc
#define __asm__     asm
#if ! defined _lint
#define EIEIO()     __asm__(" eieio")
#define EIEIO()
static hcf_16 IN_PORT_WORD(int port)
#define OUT_PORT_WORD(port, value)      \
#define IN_PORT_WORD(port) (*(volatile hcf_16 *)(port))
#define OUT_PORT_WORD(port, value) (*(volatile hcf_16 *)(port) = (value))
#define IN_PORT_STRING_16( port, addr, len)
#define OUT_PORT_STRING_16( port, addr, len)
#if PRODUCT == 9150
#define HCF_ASSERT	HCF_ASSERT_MB
#undef MSF_COMPONENT_ID
#if defined CPU
#if CPU == PPC860
#define MSF_COMPONENT_VAR		0
#define MSF_COMPONENT_ID		0
#define MSF_COMPONENT_MAJOR_VER	1
#define MSF_COMPONENT_MINOR_VER	0
#define HCF_BIG_ENDIAN			1
#define HCF_IO 					HCF_IO_MEM
#define SwapBytes(t)(((t) >> 8) + (((t) & 0xff) << 8))
#define __asm__     asm
#if ! defined _lint
#define EIEIO()     __asm__(" eieio")
#define EIEIO()
static hcf_16 IN_PORT_WORD(int port)
#define OUT_PORT_WORD(port, value)      \
#define IN_PORT_STRING_16( port, addr, len)
#define OUT_PORT_STRING_16( port, addr, len)
#if PRODUCT == 9150
#define HCF_ASSERT	HCF_ASSERT_MB
#undef MSF_COMPONENT_ID
#define	MSF_COMPONENT_ID			COMP_ID_EC
#define	MSF_COMPONENT_VAR			1
#define	MSF_COMPONENT_MAJOR_VER		MAJOR_VERSION
#define	MSF_COMPONENT_MINOR_VER		MINOR_VERSION
#define HCF_BIG_ENDIAN				1
#define HCF_IO 						HCF_IO_MEM
#define SwapBytes(t)(((t) >> 8) + (((t) & 0xff) << 8))
#define PCMCIA_ADDRESS 0xc80000UL
#define IN_PORT_2BYTES(port)			 (*(hcf_16 *)(port))
#define OUT_PORT_2BYTES(port, value)	 (*(hcf_16 *)(port) = (hcf_16)(value))
#define OUT_PORT_WORD(port, value)		 OUT_PORT_2BYTES(port, SwapBytes(value))
#if defined __VX_WORKS__
#if defined WLC_STATION
#define MSF_COMPONENT_ID	COMP_ID_VX_WORKS_ENDSTA
#define MSF_COMPONENT_ID	COMP_ID_VX_WORKS_ENDAP
#define HCF_YIELD (taskDelay(0) == 0)
#define    MSF_COMPONENT_VAR              1
#define    MSF_COMPONENT_MAJOR_VER        1
#define    MSF_COMPONENT_MINOR_VER        0
#if defined PC486BSP
#define IN_PORT_WORD(port)            (sysInWord ((hcf_io)(port)))
#define OUT_PORT_WORD(port, value)        (sysOutWord ((hcf_io)(port), (hcf_16) (value)))
#define IN_PORT_STRING_16(port, addr, n)        (sysInWordString ((hcf_io)(port), addr, n))
#define OUT_PORT_STRING_16(port, addr, n)        (sysOutWordString ((hcf_io)(port), addr, n))
#elif defined AS2000BSP
#define HCF_IO 						HCF_IO_MEM
unsigned short sysRead16( unsigned short *port );
void sysWrite16( unsigned short *port, unsigned short value );
#define PCI_IN_BYTE( port ) \
*(unsigned char *)( port )
#define PCI_IN_WORD( port ) \
sysRead16( (unsigned short *)( port ) )
#define PCI_OUT_BYTE( port, value ) \
*(unsigned char *)( port ) = (unsigned char)( value )
#define PCI_OUT_WORD( port, value ) \
sysWrite16( (unsigned short *)( port ), (unsigned short)( value ) )
#define IN_PORT_WORD( port ) \
PCI_IN_WORD( port )
#define OUT_PORT_WORD( port, value ) \
PCI_OUT_WORD( port, value )
#define IN_PORT_STRING_16( port, buf, len ) \
do  while ( 0 )
#define OUT_PORT_STRING_16( port, buf, len ) \
do  while ( 0 )
#elif defined FADS860BSP
#define HCF_BIG_ENDIAN 1
#define HCF_IO 						HCF_IO_MEM
#define __asm__     asm
#if ! defined _lint
#define EIEIO()     __asm__(" eieio")
#define EIEIO()
static hcf_16 IN_PORT_WORD(int port)
#define OUT_PORT_WORD(port, value)                                      \
#define IN_PORT_STRING_16( port, addr, len)
#define OUT_PORT_STRING_16( port, addr, len)
#elif defined DAYTONABSP
#define HCF_BIG_ENDIAN 1
#define HCF_IO 						HCF_IO_MEM
#define __asm__     asm
#define IN_PORT_WORD(port)              (sysOrinocoInWord((unsigned long)(port)))
#define OUT_PORT_WORD(port,value)       (sysOrinocoOutWord((unsigned long)(port), (unsigned short)(value)))
#define IN_PORT_STRING_16(port,addr,len)   (sysOrinocoInString((port), (addr), (len)))
#define OUT_PORT_STRING_16(port,addr,len)   (sysOrinocoOutString((port), (addr), (len)))
extern unsigned char    sysOrinocoInByte    (unsigned long port);
extern unsigned short   sysOrinocoInWord    (unsigned long port);
extern void             sysOrinocoInString  (unsigned long port, void *addr, unsigned short len);
extern void             sysOrinocoOutByte   (unsigned long port, unsigned char value);
extern void             sysOrinocoOutWord   (unsigned long port, unsigned short value);
extern void             sysOrinocoOutString (unsigned long port, void *addr, unsigned short len);
#elif defined ALPHA_BSP
#define HCF_BIG_ENDIAN 1
#define HCF_IO 						HCF_IO_MEM
#define __asm__     asm
#define IN_PORT_WORD(port)              (sysOrinocoInWord((unsigned long)(port)))
#define OUT_PORT_WORD(port,value)       (sysOrinocoOutWord((unsigned long)(port), (unsigned short)(value)))
#define IN_PORT_STRING_16(port,addr,len)   (sysOrinocoInString((port), (addr), (len)))
#define OUT_PORT_STRING_16(port,addr,len)   (sysOrinocoOutString((port), (addr), (len)))
extern unsigned char    sysOrinocoInByte    (unsigned long port);
extern unsigned short   sysOrinocoInWord    (unsigned long port);
extern void             sysOrinocoInString  (unsigned long port, void *addr, unsigned short len);
extern void             sysOrinocoOutByte   (unsigned long port, unsigned char value);
extern void             sysOrinocoOutWord   (unsigned long port, unsigned short value);
extern void             sysOrinocoOutString (unsigned long port, void *addr, unsigned short len);
err:
#define	MSF_COMPONENT_ID            COMP_ID_VX_WORKS_ENDSTA
#define	MSF_COMPONENT_ID            COMP_ID_VX_WORKS_ENDAP
#define	MSF_COMPONENT_ID            COMP_ID_VX_WORKS_END
#if !defined MSF_COMPONENT_ID
#error "you must define an MSF component ID: WVLAN_53, WVLAN_54, WVLAN_56"
#define	MSF_COMPONENT_VAR			1
#define HCF_EXT                         HCF_EXT_INFO_LOG
#define HCF_SLEEP                       ( HCF_CDS | HCF_DDS )
#define HCF_ACT_WAKEUP                  0x1D
#if defined FATNIC | defined BEAGLE_H253
#define T1__HCF_TYPE                    HCF_TYPE_STA
#define T1__HCF_TYPE                    HCF_TYPE_AP | HCF_TYPE_STA
#define T2__HCF_TYPE					(T1__HCF_TYPE | HCF_TYPE_USB)
#define T2__HCF_TYPE					(T1__HCF_TYPE)
#define T3__HCF_TYPE					(T2__HCF_TYPE | HCF_TYPE_HII5)
#define T3__HCF_TYPE					(T2__HCF_TYPE | HCF_TYPE_WPA | HCF_TYPE_HII)
#define T4__HCF_TYPE					(T3__HCF_TYPE | HCF_TYPE_CCX)
#define T4__HCF_TYPE					(T3__HCF_TYPE)
#define T5__HCF_TYPE					(T4__HCF_TYPE)
#define HCF_TYPE						(T5__HCF_TYPE )
#define	MSF_COMPONENT_MAJOR_VER		2
#define	MSF_COMPONENT_MINOR_VER		0
#define HCF_IO                      HCF_IO_MEM
#define HCF_DMA                     0
#define HCF_MEM_IO                  1
#define HCF_BIG_ENDIAN              1
#define IN_PORT_WORD(port)			        (sysInWord( (hcf_io)(port) ))
#define OUT_PORT_WORD(port, value)	        (sysOutWord( (hcf_io)(port), (hcf_16)(value) ))
#define IN_PORT_DWORD(port)			        (sysInLong( (hcf_io)(port) ))
#define OUT_PORT_DWORD(port, value)	        (sysOutLong( (hcf_io)(port), (hcf_16)(value) ))
#define IN_PORT_STRING_16(port, dst, n)	    (sysInWordString((hcf_io)(port), (hcf_16 *)dst, n))
#define OUT_PORT_STRING_16(port, src, n)    (sysOutWordString((hcf_io)(port), (hcf_16 *)src, n))
#define DBG                         1
#define _DEBUG                      1
#define OUTPUTDEBUGMSG(dprintf_exp)
#define ASSERTDEBUGMSG(cond, dprintf_exp)
#define HCF_INTERFACE_CONNECT(ifbp)
#define HCF_INTERFACE_DISCONNECT(ifbp)
#define HCF_ENTER_INTERFACE_FUNCT(ibfb)
#define HCF_LEAVE_INTERFACE_FUNCT(ifbp)
#define CNV_END_INT(w)    ( ((hcf_16)(w) & 0x00FF) << 8 | ((hcf_16)(w) & 0xFF00) >> 8 )
#define CNV_LITTLE_TO_INT(w)	CNV_END_INT(w)
#define CNV_INT_TO_LITTLE(w)	CNV_LITTLE_TO_INT(w)
#if defined( IPT_T8300 ) || defined( IPT_T8307 )
#define HCF_ALIGN                   4
#define BEAGLE_H253
#define OOR_DDS
#define FATNIC
#define	MSF_COMPONENT_ID            COMP_ID_VX_WORKS_ENDSTA
#define	MSF_COMPONENT_ID            COMP_ID_VX_WORKS_ENDAP
#define	MSF_COMPONENT_ID            COMP_ID_VX_WORKS_END
#if !defined MSF_COMPONENT_ID
#error "you must define an MSF component ID: WVLAN_53, WVLAN_54, WVLAN_56"
#define	MSF_COMPONENT_VAR			1
#define HCF_EXT                         HCF_EXT_INFO_LOG
#define HCF_SLEEP                       ( HCF_CDS | HCF_DDS )
#define HCF_ACT_WAKEUP                  0x1D
#if defined FATNIC || defined BEAGLE_H253
#define T1__HCF_TYPE                    HCF_TYPE_STA
#define T1__HCF_TYPE                    HCF_TYPE_STA
#define T2__HCF_TYPE					(T1__HCF_TYPE | HCF_TYPE_USB)
#define T2__HCF_TYPE					(T1__HCF_TYPE)
#define T3__HCF_TYPE					(T2__HCF_TYPE | HCF_TYPE_HII5)
#define T3__HCF_TYPE					(T2__HCF_TYPE | HCF_TYPE_WPA | HCF_TYPE_HII)
#define T4__HCF_TYPE					(T3__HCF_TYPE | HCF_TYPE_CCX)
#define T4__HCF_TYPE					(T3__HCF_TYPE)
#define T5__HCF_TYPE					(T4__HCF_TYPE)
#define HCF_TYPE						(T5__HCF_TYPE )
#define	MSF_COMPONENT_MAJOR_VER		2
#define	MSF_COMPONENT_MINOR_VER		0
#define HCF_IO                      HCF_IO_MEM
#define HCF_DMA                     0
#define HCF_MEM_IO                  1
#if (_BYTE_ORDER == _BIG_ENDIAN)
#undef  HCF_LITTLE_ENDIAN
#define HCF_BIG_ENDIAN              1
#define CNV_END(w)    ( ((hcf_16)(w) & 0x00FF) << 8 | ((hcf_16)(w) & 0xFF00) >> 8 )
#if defined HCF_BIG_ENDIAN
#define CNV_LITTLE_TO_INT(w)    CNV_END(w)
#define CNV_BIG_TO_INT(w)		(w)
#define CNV_LITTLE_TO_INT(w) 	(w)
#define CNV_BIG_TO_INT(w)       CNV_END(w)
#define CNV_INT_TO_LITTLE(w)	CNV_LITTLE_TO_INT(w)
#define CNV_INT_TO_BIG(w)		CNV_BIG_TO_INT(w)
#define IN_PORT_WORD( port )            *((volatile hcf_16 *)( port ))
#define OUT_PORT_WORD( port, value )    *((volatile hcf_16 *)( port )) = ((hcf_16)( value ))
#define IN_PORT_STRING( port, addr, len)
#define OUT_PORT_STRING( port, addr, len)
#define IN_PORT_STRING_16(port, dst, n)
#define OUT_PORT_STRING_16(port, src, n)
#define DBG                         1
#define _DEBUG                      1
#define OUTPUTDEBUGMSG(dprintf_exp)
#define ASSERTDEBUGMSG(cond, dprintf_exp)
#define HCF_INTERFACE_CONNECT(ifbp)
#define HCF_INTERFACE_DISCONNECT(ifbp)
#define HCF_ENTER_INTERFACE_FUNCT(ibfb)
#define HCF_LEAVE_INTERFACE_FUNCT(ifbp)
#define sysInWord(offsetAddr)  IN_PORT_WORD(offsetAddr)
#define sysInByte(offsetAddr)  IN_PORT_BYTE(offsetAddr)
#define sysOutWord(addr, value) OUT_PORT_WORD(addr, value)
#if ! defined 	HCF_ALIGN
#define 		HCF_ALIGN			1
#if ! defined 	HCF_ASSERT
#define 		HCF_ASSERT			0
#if ! defined	HCF_BIG_ENDIAN
#define 		HCF_BIG_ENDIAN		0
#if ! defined	HCF_DL_ONLY
#define 		HCF_DL_ONLY			0
#if ! defined	HCF_DMA
#define 		HCF_DMA				0
#if ! defined	HCF_ENCAP
#define			HCF_ENCAP			HCF_ENC
#if ! defined	HCF_ENTRY
#define			HCF_ENTRY( ifbp )
#if ! defined	HCF_EXIT
#define			HCF_EXIT( ifbp )
#if ! defined	HCF_EXT
#define			HCF_EXT				0
#if ! defined	HCF_INT_ON
#define			HCF_INT_ON			1
#if ! defined	HCF_IO
#define			HCF_IO				0
#if ! defined	HCF_LEGACY
#define			HCF_LEGACY			0
#if ! defined	HCF_MAX_LTV
#define 		HCF_MAX_LTV			1200
#if ! defined	HCF_PROT_TIME
#define 		HCF_PROT_TIME		100
#if ! defined	HCF_SLEEP
#define			HCF_SLEEP			0
#if ! defined	HCF_TALLIES
#define			HCF_TALLIES			( HCF_TALLIES_NIC | HCF_TALLIES_HCF )
#if ! defined 	HCF_TYPE
#define 		HCF_TYPE 			0
#if				HCF_BIG_ENDIAN
#undef			HCF_BIG_ENDIAN
#define			HCF_BIG_ENDIAN		1
#if				HCF_DL_ONLY
#undef			HCF_DL_ONLY
#define			HCF_DL_ONLY			1
#if				HCF_DMA
#undef			HCF_DMA
#define			HCF_DMA				1
#if				HCF_INT_ON
#undef			HCF_INT_ON
#define			HCF_INT_ON			1
#if ! defined IN_PORT_STRING_8_16
#define  IN_PORT_STRING_8_16(port, addr, len)	IN_PORT_STRING_16(port, addr, len)
#define  OUT_PORT_STRING_8_16(port, addr, len)	OUT_PORT_STRING_16(port, addr, len)
#if ! defined	FAR
#define 		FAR
typedef hcf_8  FAR *wci_bufp;
typedef hcf_16 FAR *wci_recordp;
#if HCF_IO & HCF_IO_MEM
typedef hcf_32 hcf_io;
typedef hcf_16 hcf_io;
#if 	HCF_PROT_TIME > 128
#define HCF_PROT_TIME_SHFT	3
#define HCF_PROT_TIME_DIV	8
#elif 	HCF_PROT_TIME > 64
#define HCF_PROT_TIME_SHFT	2
#define HCF_PROT_TIME_DIV	4
#elif 	HCF_PROT_TIME > 32
#define HCF_PROT_TIME_SHFT	1
#define HCF_PROT_TIME_DIV	2
#define HCF_PROT_TIME_SHFT	0
#define HCF_PROT_TIME_DIV	1
#define HCF_PROT_TIME_CNT (HCF_PROT_TIME / HCF_PROT_TIME_DIV)
#if defined	MSF_COMPONENT_ID
#if ! defined	DUI_COMPAT_VAR
#define			DUI_COMPAT_VAR		MSF_COMPONENT_ID
#if ! defined	DUI_COMPAT_BOT
#define			DUI_COMPAT_BOT		8
#if ! defined	DUI_COMPAT_TOP
#define			DUI_COMPAT_TOP       8
#if (HCF_TYPE) & HCF_TYPE_HII5
#if ! defined	HCF_HSI_VAR_5
#define			HCF_HSI_VAR_5
#if ! defined	HCF_APF_VAR_4
#define			HCF_APF_VAR_4
#if (HCF_TYPE) & HCF_TYPE_WARP
#if ! defined	HCF_STA_VAR_4
#define			HCF_STA_VAR_4
#if ! defined	HCF_STA_VAR_2
#define			HCF_STA_VAR_2
#if defined HCF_HSI_VAR_4
err: HSI variants 4 correspond with HII;
#if ! defined	HCF_HSI_VAR_4
#define			HCF_HSI_VAR_4
#if ! defined	HCF_APF_VAR_2
#define 		HCF_APF_VAR_2
#if ! defined	HCF_STA_VAR_2
#define			HCF_STA_VAR_2
#if ! defined	HCF_PRI_VAR_3
#define		HCF_PRI_VAR_3
#if defined HCF_HSI_VAR_1 || defined HCF_HSI_VAR_2 || defined HCF_HSI_VAR_3
err: HSI variants 1, 2 and 3 correspond with H-I only;
#if defined HCF_PRI_VAR_1 || defined HCF_PRI_VAR_2
err: primary variants 1 and 2 correspond with H-I only;
#if ! defined	BASED
#define 		BASED
#if ! defined	EXTERN_C
#if ! defined	NULL
#define			NULL	((void *) 0)
#if ! defined	TEXT
#define			TEXT(x)	x
#if !defined	_TCHAR_DEFINED
#define 		TCHAR	char
#if defined HCF_LITTLE_ENDIAN
err: HCF_LITTLE_ENDIAN is obsolete;
#if defined HCF_INT_OFF
err: HCF_INT_OFF is obsolete;
#if HCF_ALIGN != 1 && HCF_ALIGN != 2 && HCF_ALIGN != 4 && HCF_ALIGN != 8
err: invalid value for HCF_ALIGN;
#if (HCF_ASSERT) & ~( HCF_ASSERT_PRINTF | HCF_ASSERT_SW_SUP | HCF_ASSERT_MB | HCF_ASSERT_RT_MSF_RTN | \
HCF_ASSERT_LNK_MSF_RTN )
err: invalid value for HCF_ASSERT;
#if (HCF_ASSERT) & HCF_ASSERT_MB && ! ( (HCF_EXT) & HCF_EXT_MB )
err: these macros are not used consistently;
#if HCF_BIG_ENDIAN != 0 && HCF_BIG_ENDIAN != 1
err: invalid value for HCF_BIG_ENDIAN;
#if HCF_DL_ONLY != 0 && HCF_DL_ONLY != 1
err: invalid value for HCF_DL_ONLY;
#if HCF_DMA != 0 && HCF_DMA != 1
err: invalid value for HCF_DMA;
#if (HCF_ENCAP) & ~( HCF_ENC | HCF_ENC_SUP )
err: invalid value for HCF_ENCAP;
#if (HCF_EXT) & ~( HCF_EXT_INFO_LOG | HCF_EXT_INT_TX_EX | HCF_EXT_TALLIES_FW | HCF_EXT_TALLIES_HCF	| \
HCF_EXT_NIC_ACCESS | HCF_EXT_MB | HCF_EXT_INT_TICK | \
HCF_EXT_IFB_STRCT | HCF_EXT_DESC_STRCT | HCF_EXT_TX_CONT )
err: invalid value for HCF_EXT;
#if HCF_INT_ON != 0 && HCF_INT_ON != 1
err: invalid value for HCF_INT_ON;
#if (HCF_IO) & ~( HCF_IO_MEM | HCF_IO_32BITS )
err: invalid value for HCF_IO;
#if HCF_LEGACY != 0 && HCF_LEGACY != 1
err: invalid value for HCF_LEGACY;
#if HCF_MAX_LTV < 16 || HCF_MAX_LTV > 2304
err: invalid value for HCF_MAX_LTV;
#if HCF_PROT_TIME != 0 && ( HCF_PROT_TIME < 19 || 256 < HCF_PROT_TIME )
err: below minimum .08 second required by Hermes or possibly above hcf_32 capacity;
#if (HCF_SLEEP) & ~( HCF_CDS | HCF_DDS )
err: invalid value for HCF_SLEEP;
#if (HCF_SLEEP) && ! (HCF_INT_ON)
err: these macros are not used consistently;
#if (HCF_SLEEP) && ! ( (HCF_EXT) & HCF_EXT_INT_TICK )
#if (HCF_TALLIES) & ~( HCF_TALLIES_HCF | HCF_TALLIES_NIC | HCF_TALLIES_RESET ) || \
(HCF_TALLIES) == HCF_TALLIES_RESET
err: invalid value for HCF_TALLIES;
#if (HCF_TYPE) & ~(HCF_TYPE_WPA | HCF_TYPE_USB | HCF_TYPE_PRELOADED | HCF_TYPE_HII5 | HCF_TYPE_WARP | \
HCF_TYPE_CCX )
err: invalid value for HCF_TYPE;
#if (HCF_TYPE) & HCF_TYPE_WARP && (HCF_TYPE) & HCF_TYPE_WPA
err: at most 1 of these macros should be defined;
