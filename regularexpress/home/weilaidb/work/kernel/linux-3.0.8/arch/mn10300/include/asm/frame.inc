#define _ASM_FRAME_INC
#error not for use in C files
#define pi break
#define fp a3
###############################################################################
#
# build a stack frame from the registers
# - the caller has subtracted 4 from SP before coming here
#
###############################################################################
.macro SAVE_ALL
add	-4,sp				# next exception frame ptr save area
movm	[other],(sp)
mov	usp,a1
mov	a1,(sp)				# USP in MOVM[other] dummy slot
movm	[d2,d3,a2,a3,exreg0,exreg1,exother],(sp)
mov	sp,fp				# FRAME pointer in A3
add	-12,sp				# allow for calls to be made
# push the exception frame onto the front of the list
GET_THREAD_INFO a1
mov	(TI_frame,a1),a0
mov	a0,(REG_NEXT,fp)
mov	fp,(TI_frame,a1)
# disable the FPU inside the kernel
and	~EPSW_FE,epsw
# we may be holding current in E2
mov	(__current),e2
.endm
###############################################################################
#
# restore the registers from a stack frame
#
###############################################################################
.macro RESTORE_ALL
# peel back the stack to the calling frame
# - this permits execve() to discard extra frames due to kernel syscalls
GET_THREAD_INFO a0
mov	(TI_frame,a0),fp
mov	fp,sp
mov	(REG_NEXT,fp),d0
mov	d0,(TI_frame,a0)                # userspace has regs->next == 0
mov	(REG_EPSW,fp),d0
btst	EPSW_T,d0
beq	99f
or	EPSW_NMID,epsw
movhu	(DCR),d1
or	0x0001, d1
movhu	d1,(DCR)
99:
movm	(sp),[d2,d3,a2,a3,exreg0,exreg1,exother]
# must restore usp even if returning to kernel space,
# when CONFIG_PREEMPT is enabled.
mov	(sp),a1				# USP in MOVM[other] dummy slot
mov	a1,usp
movm	(sp),[other]
add	8,sp
rti
.endm
