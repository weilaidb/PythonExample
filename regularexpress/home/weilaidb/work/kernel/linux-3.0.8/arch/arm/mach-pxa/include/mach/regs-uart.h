#define __ASM_ARCH_REGS_UART_H
#define FFUART		FFRBR
#define FFRBR		__REG(0x40100000)
#define FFTHR		__REG(0x40100000)
#define FFIER		__REG(0x40100004)
#define FFIIR		__REG(0x40100008)
#define FFFCR		__REG(0x40100008)
#define FFLCR		__REG(0x4010000C)
#define FFMCR		__REG(0x40100010)
#define FFLSR		__REG(0x40100014)
#define FFMSR		__REG(0x40100018)
#define FFSPR		__REG(0x4010001C)
#define FFISR		__REG(0x40100020)
#define FFDLL		__REG(0x40100000)
#define FFDLH		__REG(0x40100004)
#define BTUART		BTRBR
#define BTRBR		__REG(0x40200000)
#define BTTHR		__REG(0x40200000)
#define BTIER		__REG(0x40200004)
#define BTIIR		__REG(0x40200008)
#define BTFCR		__REG(0x40200008)
#define BTLCR		__REG(0x4020000C)
#define BTMCR		__REG(0x40200010)
#define BTLSR		__REG(0x40200014)
#define BTMSR		__REG(0x40200018)
#define BTSPR		__REG(0x4020001C)
#define BTISR		__REG(0x40200020)
#define BTDLL		__REG(0x40200000)
#define BTDLH		__REG(0x40200004)
#define STUART		STRBR
#define STRBR		__REG(0x40700000)
#define STTHR		__REG(0x40700000)
#define STIER		__REG(0x40700004)
#define STIIR		__REG(0x40700008)
#define STFCR		__REG(0x40700008)
#define STLCR		__REG(0x4070000C)
#define STMCR		__REG(0x40700010)
#define STLSR		__REG(0x40700014)
#define STMSR		__REG(0x40700018)
#define STSPR		__REG(0x4070001C)
#define STISR		__REG(0x40700020)
#define STDLL		__REG(0x40700000)
#define STDLH		__REG(0x40700004)
#define HWUART		HWRBR
#define HWRBR		__REG(0x41600000)
#define HWTHR		__REG(0x41600000)
#define HWIER		__REG(0x41600004)
#define HWIIR		__REG(0x41600008)
#define HWFCR		__REG(0x41600008)
#define HWLCR		__REG(0x4160000C)
#define HWMCR		__REG(0x41600010)
#define HWLSR		__REG(0x41600014)
#define HWMSR		__REG(0x41600018)
#define HWSPR		__REG(0x4160001C)
#define HWISR		__REG(0x41600020)
#define HWFOR		__REG(0x41600024)
#define HWABR		__REG(0x41600028)
#define HWACR		__REG(0x4160002C)
#define HWDLL		__REG(0x41600000)
#define HWDLH		__REG(0x41600004)
#define IER_DMAE	(1 << 7)
#define IER_UUE		(1 << 6)
#define IER_NRZE	(1 << 5)
#define IER_RTIOE	(1 << 4)
#define IER_MIE		(1 << 3)
#define IER_RLSE	(1 << 2)
#define IER_TIE		(1 << 1)
#define IER_RAVIE	(1 << 0)
#define IIR_FIFOES1	(1 << 7)
#define IIR_FIFOES0	(1 << 6)
#define IIR_TOD		(1 << 3)
#define IIR_IID2	(1 << 2)
#define IIR_IID1	(1 << 1)
#define IIR_IP		(1 << 0)
#define FCR_ITL2	(1 << 7)
#define FCR_ITL1	(1 << 6)
#define FCR_RESETTF	(1 << 2)
#define FCR_RESETRF	(1 << 1)
#define FCR_TRFIFOE	(1 << 0)
#define FCR_ITL_1	(0)
#define FCR_ITL_8	(FCR_ITL1)
#define FCR_ITL_16	(FCR_ITL2)
#define FCR_ITL_32	(FCR_ITL2|FCR_ITL1)
#define LCR_DLAB	(1 << 7)
#define LCR_SB		(1 << 6)
#define LCR_STKYP	(1 << 5)
#define LCR_EPS		(1 << 4)
#define LCR_PEN		(1 << 3)
#define LCR_STB		(1 << 2)
#define LCR_WLS1	(1 << 1)
#define LCR_WLS0	(1 << 0)
#define LSR_FIFOE	(1 << 7)
#define LSR_TEMT	(1 << 6)
#define LSR_TDRQ	(1 << 5)
#define LSR_BI		(1 << 4)
#define LSR_FE		(1 << 3)
#define LSR_PE		(1 << 2)
#define LSR_OE		(1 << 1)
#define LSR_DR		(1 << 0)
#define MCR_LOOP	(1 << 4)
#define MCR_OUT2	(1 << 3)
#define MCR_OUT1	(1 << 2)
#define MCR_RTS		(1 << 1)
#define MCR_DTR		(1 << 0)
#define MSR_DCD		(1 << 7)
#define MSR_RI		(1 << 6)
#define MSR_DSR		(1 << 5)
#define MSR_CTS		(1 << 4)
#define MSR_DDCD	(1 << 3)
#define MSR_TERI	(1 << 2)
#define MSR_DDSR	(1 << 1)
#define MSR_DCTS	(1 << 0)
#define STISR_RXPL      (1 << 4)
#define STISR_TXPL      (1 << 3)
#define STISR_XMODE     (1 << 2)
#define STISR_RCVEIR    (1 << 1)
#define STISR_XMITIR    (1 << 0)
