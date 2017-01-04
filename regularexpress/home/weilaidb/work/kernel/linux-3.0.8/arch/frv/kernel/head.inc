#if defined(CONFIG_MB93090_MB00)
#define LED_ADDR (0x21200000+4)
.macro LEDS val
sethi.p		%hi(0xFFC00030),gr3
setlo		%lo(0xFFC00030),gr3
lduh		@(gr3,gr0),gr3
andicc		gr3,#0x100,gr0,icc0
bne		icc0,0,999f
setlos		#~\val,gr3
st		gr3,@(gr30,gr0)
membar
dcf		@(gr30,gr0)
999:
.endm
#elif defined(CONFIG_MB93093_PDK)
#define LED_ADDR (0x20000023)
.macro LEDS val
setlos		#\val,gr3
stb		gr3,@(gr30,gr0)
membar
.endm
#define LED_ADDR 0
.macro LEDS val
.endm
__sdram_base = 0x00000000
__sdram_base = __page_offset
