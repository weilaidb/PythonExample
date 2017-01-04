#define _PPP_DEFS_H_
#define PPP_HDRLEN	4
#define PPP_FCSLEN	2
#define PPP_MRU		1500
#define PPP_ADDRESS(p)	(((__u8 *)(p))[0])
#define PPP_CONTROL(p)	(((__u8 *)(p))[1])
#define PPP_PROTOCOL(p)	((((__u8 *)(p))[2] << 8) + ((__u8 *)(p))[3])
#define	PPP_ALLSTATIONS	0xff
#define	PPP_UI		0x03
#define	PPP_FLAG	0x7e
#define	PPP_ESCAPE	0x7d
#define	PPP_TRANS	0x20
#define PPP_IP		0x21
#define PPP_AT		0x29
#define PPP_IPX		0x2b
#define	PPP_VJC_COMP	0x2d
#define	PPP_VJC_UNCOMP	0x2f
#define PPP_MP		0x3d
#define PPP_IPV6	0x57
#define PPP_COMPFRAG	0xfb
#define PPP_COMP	0xfd
#define PPP_MPLS_UC	0x0281
#define PPP_MPLS_MC	0x0283
#define PPP_IPCP	0x8021
#define PPP_ATCP	0x8029
#define PPP_IPXCP	0x802b
#define PPP_IPV6CP	0x8057
#define PPP_CCPFRAG	0x80fb
#define PPP_CCP		0x80fd
#define PPP_MPLSCP	0x80fd
#define PPP_LCP		0xc021
#define PPP_PAP		0xc023
#define PPP_LQR		0xc025
#define PPP_CHAP	0xc223
#define PPP_CBCP	0xc029
#define PPP_INITFCS	0xffff
#define PPP_GOODFCS	0xf0b8
#define PPP_FCS(fcs, c) crc_ccitt_byte(fcs, c)
typedef __u32		ext_accm[8];
enum NPmode ;
struct pppstat	;
struct vjstat ;
struct compstat ;
struct ppp_stats ;
struct ppp_comp_stats ;
struct ppp_idle ;
