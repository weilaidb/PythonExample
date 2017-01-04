#if ! defined offsetof
#define offsetof(s,m)   ((unsigned int)&(((s *)0)->m))
HCF_STATIC int			cmd_exe( IFBP ifbp, hcf_16 cmd_code, hcf_16 par_0 );
HCF_STATIC int			init( IFBP ifbp );
HCF_STATIC int			put_info( IFBP ifbp, LTVP ltvp );
#if (HCF_EXT) & HCF_EXT_MB
HCF_STATIC int			put_info_mb( IFBP ifbp, CFG_MB_INFO_STRCT FAR * ltvp );
#if (HCF_TYPE) & HCF_TYPE_WPA
HCF_STATIC void			calc_mic( hcf_32* p, hcf_32 M );
void 					calc_mic_rx_frag( IFBP ifbp, wci_bufp p, int len );
void 					calc_mic_tx_frag( IFBP ifbp, wci_bufp p, int len );
HCF_STATIC int			check_mic( IFBP ifbp );
HCF_STATIC void			calibrate( IFBP ifbp );
HCF_STATIC int			cmd_cmpl( IFBP ifbp );
HCF_STATIC hcf_16		get_fid( IFBP ifbp );
HCF_STATIC void			isr_info( IFBP ifbp );
#if HCF_DMA
HCF_STATIC DESC_STRCT*	get_frame_lst(IFBP ifbp, int tx_rx_flag);
HCF_STATIC void			get_frag( IFBP ifbp, wci_bufp bufp, int len BE_PAR( int word_len ) );
#if HCF_DMA
HCF_STATIC void			put_frame_lst( IFBP ifbp, DESC_STRCT *descp, int tx_rx_flag );
HCF_STATIC void			put_frag( IFBP ifbp, wci_bufp bufp, int len BE_PAR( int word_len ) );
HCF_STATIC void			put_frag_finalize( IFBP ifbp );
HCF_STATIC int			setup_bap( IFBP ifbp, hcf_16 fid, int offset, int type );
#if (HCF_ASSERT) & HCF_ASSERT_PRINTF
static int fw_printf(IFBP ifbp, CFG_FW_PRINTF_STRCT FAR *ltvp);
HCF_STATIC int			download( IFBP ifbp, CFG_PROG_STRCT FAR *ltvp );
#if (HCF_ENCAP) & HCF_ENC
HCF_STATIC hcf_8		hcf_encap( wci_bufp type );
HCF_STATIC hcf_8		null_addr[4] = ;
#if ! defined IN_PORT_WORD
extern FILE *log_file;
#define IN_PORT_WORD(port)			in_port_word( (hcf_io)(port) )
static hcf_16 in_port_word( hcf_io port )
#define OUT_PORT_WORD(port, value)	out_port_word( (hcf_io)(port), (hcf_16)(value) )
static void out_port_word( hcf_io port, hcf_16 value )
void IN_PORT_STRING_32( hcf_io prt, hcf_32 FAR * dst, int n)
void IN_PORT_STRING_8_16( hcf_io prt, hcf_8 FAR * dst, int n)
void OUT_PORT_STRING_32( hcf_io prt, hcf_32 FAR * src, int n)
void OUT_PORT_STRING_8_16( hcf_io prt, hcf_8 FAR * src, int n)
#if HCF_ASSERT
IFBP BASED assert_ifbp = NULL;
#if HCF_ENCAP
HCF_STATIC  hcf_8 BASED snap_header[] = ;
#if (HCF_TYPE) & HCF_TYPE_WPA
HCF_STATIC hcf_8 BASED mic_pad[8] = ;
#if defined MSF_COMPONENT_ID
CFG_IDENTITY_STRCT BASED cfg_drv_identity =  ;
CFG_RANGES_STRCT BASED cfg_drv_sup_range =  ;
struct CFG_RANGE3_STRCT BASED cfg_drv_act_ranges_pri =  ;
struct CFG_RANGE4_STRCT BASED cfg_drv_act_ranges_sta =  ;
struct CFG_RANGE6_STRCT BASED cfg_drv_act_ranges_hsi =  ;
CFG_RANGE4_STRCT BASED cfg_drv_act_ranges_apf =  ;
#define HCF_VERSION  TEXT( "HCF$Revision: 1.10 $" )
static struct  BASED cfg_hcf_opt = ;
#if defined HCF_TALLIES_EXTRA
replaced by HCF_EXT_TALLIES_FW ;
#if defined MSF_COMPONENT_ID || (HCF_EXT) & HCF_EXT_MB
#if (HCF_EXT) & HCF_EXT_MB
HCF_STATIC LTV_STRCT BASED cfg_null = ;
HCF_STATIC hcf_16* BASED xxxx[ ] = ;
#define xxxx_PRI_IDENTITY_OFFSET	(ARRAY_SIZE(xxxx) - 3)
#if (HCF_DL_ONLY) == 0
#if ( (HCF_TYPE) & HCF_TYPE_HII5 ) == 0
#if CFG_SCAN != CFG_TALLIES - HCF_ACT_TALLIES + HCF_ACT_SCAN
err: "maintenance" apparently inviolated the underlying assumption about the numerical values of these macros
#if CFG_PRS_SCAN != CFG_TALLIES - HCF_ACT_TALLIES + HCF_ACT_PRS_SCAN
err: "maintenance" apparently inviolated the underlying assumption about the numerical values of these macros
int
hcf_action( IFBP ifbp, hcf_16 action )
int
hcf_cntl( IFBP ifbp, hcf_16 cmd )
int
hcf_connect( IFBP ifbp, hcf_io io_base )
#if HCF_DMA
HCF_STATIC DESC_STRCT*
get_frame_lst( IFBP ifbp, int tx_rx_flag )
HCF_STATIC void
put_frame_lst( IFBP ifbp, DESC_STRCT *descp, int tx_rx_flag )
DESC_STRCT*
hcf_dma_rx_get (IFBP ifbp)
void
hcf_dma_rx_put( IFBP ifbp, DESC_STRCT *descp )
DESC_STRCT*
hcf_dma_tx_get( IFBP ifbp )
void
hcf_dma_tx_put( IFBP ifbp, DESC_STRCT *descp, hcf_16 tx_cntl )
#if (HCF_DL_ONLY) == 0
#if HCF_ENCAP
#if ! ( (HCF_ENCAP) & HCF_ENC_SUP )
HCF_STATIC
hcf_8
hcf_encap( wci_bufp type )
int
hcf_get_info( IFBP ifbp, LTVP ltvp )
int
hcf_put_info( IFBP ifbp, LTVP ltvp )
#if (HCF_DL_ONLY) == 0
int
hcf_rcv_msg( IFBP ifbp, DESC_STRCT *descp, unsigned int offset )
#if (HCF_DL_ONLY) == 0
int
hcf_send_msg( IFBP ifbp, DESC_STRCT *descp, hcf_16 tx_cntl )
#if (HCF_DL_ONLY) == 0
int
hcf_service_nic( IFBP ifbp, wci_bufp bufp, unsigned int len )
#if (HCF_TYPE) & HCF_TYPE_WPA
#define ROL32( A, n ) ( ((A) << (n)) | ( ((A)>>(32-(n)))  & ( (1UL << (n)) - 1 ) ) )
#define ROR32( A, n ) ROL32( (A), 32-(n) )
#define L	*p
#define R	*(p+1)
void
calc_mic( hcf_32* p, hcf_32 m )
#undef R
#undef L
#if (HCF_TYPE) & HCF_TYPE_WPA
void
calc_mic_rx_frag( IFBP ifbp, wci_bufp p, int len )
#if (HCF_TYPE) & HCF_TYPE_WPA
void
calc_mic_tx_frag( IFBP ifbp, wci_bufp p, int len )
#if HCF_PROT_TIME
HCF_STATIC void
calibrate( IFBP ifbp )
#if (HCF_DL_ONLY) == 0
#if (HCF_TYPE) & HCF_TYPE_WPA
int
check_mic( IFBP ifbp )
HCF_STATIC int
cmd_cmpl( IFBP ifbp )
HCF_STATIC int
cmd_exe( IFBP ifbp, hcf_16 cmd_code, hcf_16 par_0 )
HCF_STATIC int
download( IFBP ifbp, CFG_PROG_STRCT FAR *ltvp )
#if (HCF_ASSERT) & HCF_ASSERT_PRINTF
HCF_STATIC int
fw_printf(IFBP ifbp, CFG_FW_PRINTF_STRCT FAR *ltvp)
;
#if (HCF_DL_ONLY) == 0
HCF_STATIC hcf_16
get_fid( IFBP ifbp )
HCF_STATIC void
get_frag( IFBP ifbp, wci_bufp bufp, int len BE_PAR( int word_len ) )
HCF_STATIC int
init( IFBP ifbp )
#if (HCF_DL_ONLY) == 0
HCF_STATIC void
isr_info( IFBP ifbp )
#if HCF_ASSERT
void
mdd_assert( IFBP ifbp, unsigned int line_number, hcf_32 q )
HCF_STATIC void
put_frag( IFBP ifbp, wci_bufp bufp, int len BE_PAR( int word_len ) )
HCF_STATIC void
put_frag_finalize( IFBP ifbp )
HCF_STATIC int
put_info( IFBP ifbp, LTVP ltvp	)
#if (HCF_DL_ONLY) == 0
#if (HCF_EXT) & HCF_EXT_MB
HCF_STATIC int
put_info_mb( IFBP ifbp, CFG_MB_INFO_STRCT FAR * ltvp )
HCF_STATIC int
setup_bap( IFBP ifbp, hcf_16 fid, int offset, int type )
