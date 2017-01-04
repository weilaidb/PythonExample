#define _XTENSA_ASMMACRO_H
.macro	__loopi ar, at, size, incr
#if XCHAL_HAVE_LOOPS
movi	\at, ((\size + \incr - 1) / (\incr))
loop	\at, 99f
addi	\at, \ar, \size
98:
.endm
.macro	__loops	ar, as, at, incr_log2, mask_log2, cond, ncond
#if XCHAL_HAVE_LOOPS
.ifgt \incr_log2 - 1
addi	\at, \as, (1 << \incr_log2) - 1
.ifnc \mask_log2,
extui	\at, \at, \incr_log2, \mask_log2
.else
srli	\at, \at, \incr_log2
.endif
.endif
loop\cond	\at, 99f
.ifnc \mask_log2,
extui	\at, \as, \incr_log2, \mask_log2
.else
.ifnc \ncond,
srli	\at, \as, \incr_log2
.endif
.endif
.ifnc \ncond,
b\ncond	\at, 99f
.endif
.ifnc \mask_log2,
slli	\at, \at, \incr_log2
add	\at, \ar, \at
.else
add	\at, \ar, \as
.endif
98:
.endm
.macro	__loopt	ar, as, at, incr_log2
#if XCHAL_HAVE_LOOPS
sub	\at, \as, \ar
.ifgt	\incr_log2 - 1
addi	\at, \at, (1 << \incr_log2) - 1
srli	\at, \at, \incr_log2
.endif
loop	\at, 99f
98:
.endm
.macro	__loop	as
#if XCHAL_HAVE_LOOPS
loop	\as, 99f
98:
.endm
.macro	__endl	ar, as
#if !XCHAL_HAVE_LOOPS
bltu	\ar, \as, 98b
99:
.endm
.macro	__endla	ar, as, incr
addi	\ar, \ar, \incr
__endl	\ar \as
.endm
