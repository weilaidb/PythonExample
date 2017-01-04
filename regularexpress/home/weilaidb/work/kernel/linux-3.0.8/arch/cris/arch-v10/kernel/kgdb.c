static int kgdb_started = 0;
typedef
struct register_image
registers;
static char *gdb_cris_strcpy (char *s1, const char *s2);
static int gdb_cris_strlen (const char *s);
static void *gdb_cris_memchr (const void *s, int c, int n);
static int gdb_cris_strtol (const char *s, char **endptr, int base);
static void copy_registers (registers *dptr, registers *sptr, int n);
static void copy_registers_from_stack (int thread_id, registers *reg);
static void copy_registers_to_stack (int thread_id, registers *reg);
static int write_register (int regno, char *val);
static write_stack_register (int thread_id, int regno, char *valptr);
static int read_register (char regno, unsigned int *valptr);
int getDebugChar (void);
void putDebugChar (int val);
void enableDebugIRQ (void);
static int hex (char ch);
static char *mem2hex (char *buf, unsigned char *mem, int count);
static unsigned char *hex2mem (unsigned char *mem, char *buf, int count);
static unsigned char *bin2mem (unsigned char *mem, unsigned char *buf, int count);
static void getpacket (char *buffer);
static void putpacket (char *buffer);
static void stub_is_stopped (int sigval);
static void handle_exception (int sigval);
static void kill_restart (void);
void putDebugString (const unsigned char *str, int length);
void handle_breakpoint (void);
void handle_interrupt (void);
void breakpoint (void);
extern unsigned char executing_task;
#define HEXCHARS_IN_THREAD_ID 16
#define USEDVAR(name)
#define USEDFUN(name)
#define BUFMAX 512
#define RUNLENMAX 64
static char remcomInBuffer[BUFMAX];
static char remcomOutBuffer[BUFMAX];
enum error_type
;
static char *error_message[] =
;
enum register_name
;
static int register_size[] =
;
static registers reg;
static int consistency_status = SUCCESS;
static int current_thread_c = 0;
static int current_thread_g = 0;
static registers reg_g;
#define INTERNAL_STACK_SIZE 1024
static char internal_stack[INTERNAL_STACK_SIZE];
static unsigned char is_dyn_brkp = 0;
static char*
gdb_cris_strcpy (char *s1, const char *s2)
static int
gdb_cris_strlen (const char *s)
static void*
gdb_cris_memchr (const void *s, int c, int n)
static int
gdb_cris_strtol (const char *s, char **endptr, int base)
static void
copy_registers (registers *dptr, registers *sptr, int n)
static void
copy_registers_from_stack (int thread_id, registers *regptr)
static void
copy_registers_to_stack (int thread_id, registers *regptr)
static int
write_register (int regno, char *val)
static int
write_stack_register (int thread_id, int regno, char *valptr)
static int
read_register (char regno, unsigned int *valptr)
static int
hex (char ch)
static int do_printk = 0;
static char *
mem2hex(char *buf, unsigned char *mem, int count)
static unsigned char*
hex2mem (unsigned char *mem, char *buf, int count)
static unsigned char*
bin2mem (unsigned char *mem, unsigned char *buf, int count)
static void
getpacket (char *buffer)
static void
putpacket(char *buffer)
void
putDebugString (const unsigned char *str, int length)
static void
stub_is_stopped(int sigval)
static void
handle_exception (int sigval)
static void
kill_restart ()
void kgdb_handle_breakpoint(void);
asm ("
.global kgdb_handle_breakpoint
kgdb_handle_breakpoint:
;;
;; Response to the break-instruction
;;
;; Create a register image of the caller
;;
move     $dccr,[reg+0x5E] ; Save the flags in DCCR before disable interrupts
di                        ; Disable interrupts
move.d   $r0,[reg]        ; Save R0
move.d   $r1,[reg+0x04]   ; Save R1
move.d   $r2,[reg+0x08]   ; Save R2
move.d   $r3,[reg+0x0C]   ; Save R3
move.d   $r4,[reg+0x10]   ; Save R4
move.d   $r5,[reg+0x14]   ; Save R5
move.d   $r6,[reg+0x18]   ; Save R6
move.d   $r7,[reg+0x1C]   ; Save R7
move.d   $r8,[reg+0x20]   ; Save R8
move.d   $r9,[reg+0x24]   ; Save R9
move.d   $r10,[reg+0x28]  ; Save R10
move.d   $r11,[reg+0x2C]  ; Save R11
move.d   $r12,[reg+0x30]  ; Save R12
move.d   $r13,[reg+0x34]  ; Save R13
move.d   $sp,[reg+0x38]   ; Save SP (R14)
;; Due to the old assembler-versions BRP might not be recognized
.word 0xE670              ; move brp,$r0
subq     2,$r0             ; Set to address of previous instruction.
move.d   $r0,[reg+0x3c]   ; Save the address in PC (R15)
clear.b  [reg+0x40]      ; Clear P0
move     $vr,[reg+0x41]   ; Save special register P1
clear.w  [reg+0x42]      ; Clear P4
move     $ccr,[reg+0x44]  ; Save special register CCR
move     $mof,[reg+0x46]  ; P7
clear.d  [reg+0x4A]      ; Clear P8
move     $ibr,[reg+0x4E]  ; P9,
move     $irp,[reg+0x52]  ; P10,
move     $srp,[reg+0x56]  ; P11,
move     $dtp0,[reg+0x5A] ; P12, register BAR, assembler might not know BAR
; P13, register DCCR already saved
;; Due to the old assembler-versions BRP might not be recognized
.word 0xE670              ; move brp,r0
;; Static (compiled) breakpoints must return to the next instruction in order
;; to avoid infinite loops. Dynamic (gdb-invoked) must restore the instruction
;; in order to execute it when execution is continued.
test.b   [is_dyn_brkp]    ; Is this a dynamic breakpoint?
beq      is_static         ; No, a static breakpoint
nop
subq     2,$r0              ; rerun the instruction the break replaced
is_static:
moveq    1,$r1
move.b   $r1,[is_dyn_brkp] ; Set the state variable to dynamic breakpoint
move.d   $r0,[reg+0x62]    ; Save the return address in BRP
move     $usp,[reg+0x66]   ; USP
;;
;; Handle the communication
;;
move.d   internal_stack+1020,$sp ; Use the internal stack which grows upward
moveq    5,$r10                   ; SIGTRAP
jsr      handle_exception       ; Interactive routine
;;
;; Return to the caller
;;
move.d  [reg],$r0         ; Restore R0
move.d  [reg+0x04],$r1    ; Restore R1
move.d  [reg+0x08],$r2    ; Restore R2
move.d  [reg+0x0C],$r3    ; Restore R3
move.d  [reg+0x10],$r4    ; Restore R4
move.d  [reg+0x14],$r5    ; Restore R5
move.d  [reg+0x18],$r6    ; Restore R6
move.d  [reg+0x1C],$r7    ; Restore R7
move.d  [reg+0x20],$r8    ; Restore R8
move.d  [reg+0x24],$r9    ; Restore R9
move.d  [reg+0x28],$r10   ; Restore R10
move.d  [reg+0x2C],$r11   ; Restore R11
move.d  [reg+0x30],$r12   ; Restore R12
move.d  [reg+0x34],$r13   ; Restore R13
;;
;; FIXME: Which registers should be restored?
;;
move.d  [reg+0x38],$sp    ; Restore SP (R14)
move    [reg+0x56],$srp   ; Restore the subroutine return pointer.
move    [reg+0x5E],$dccr  ; Restore DCCR
move    [reg+0x66],$usp   ; Restore USP
jump    [reg+0x62]       ; A jump to the content in register BRP works.
nop                       ;
");
void kgdb_handle_serial(void);
asm ("
.global kgdb_handle_serial
kgdb_handle_serial:
;;
;; Response to a serial interrupt
;;
move     $dccr,[reg+0x5E] ; Save the flags in DCCR
di                        ; Disable interrupts
move.d   $r0,[reg]        ; Save R0
move.d   $r1,[reg+0x04]   ; Save R1
move.d   $r2,[reg+0x08]   ; Save R2
move.d   $r3,[reg+0x0C]   ; Save R3
move.d   $r4,[reg+0x10]   ; Save R4
move.d   $r5,[reg+0x14]   ; Save R5
move.d   $r6,[reg+0x18]   ; Save R6
move.d   $r7,[reg+0x1C]   ; Save R7
move.d   $r8,[reg+0x20]   ; Save R8
move.d   $r9,[reg+0x24]   ; Save R9
move.d   $r10,[reg+0x28]  ; Save R10
move.d   $r11,[reg+0x2C]  ; Save R11
move.d   $r12,[reg+0x30]  ; Save R12
move.d   $r13,[reg+0x34]  ; Save R13
move.d   $sp,[reg+0x38]   ; Save SP (R14)
move     $irp,[reg+0x3c]  ; Save the address in PC (R15)
clear.b  [reg+0x40]      ; Clear P0
move     $vr,[reg+0x41]   ; Save special register P1,
clear.w  [reg+0x42]      ; Clear P4
move     $ccr,[reg+0x44]  ; Save special register CCR
move     $mof,[reg+0x46]  ; P7
clear.d  [reg+0x4A]      ; Clear P8
move     $ibr,[reg+0x4E]  ; P9,
move     $irp,[reg+0x52]  ; P10,
move     $srp,[reg+0x56]  ; P11,
move     $dtp0,[reg+0x5A] ; P12, register BAR, assembler might not know BAR
; P13, register DCCR already saved
;; Due to the old assembler-versions BRP might not be recognized
.word 0xE670              ; move brp,r0
move.d   $r0,[reg+0x62]   ; Save the return address in BRP
move     $usp,[reg+0x66]  ; USP
;; get the serial character (from debugport.c) and check if it is a ctrl-c
jsr getDebugChar
cmp.b 3, $r10
bne goback
nop
move.d  [reg+0x5E], $r10		; Get DCCR
btstq	   8, $r10			; Test the U-flag.
bmi	   goback
nop
;;
;; Handle the communication
;;
move.d   internal_stack+1020,$sp ; Use the internal stack
moveq    2,$r10                   ; SIGINT
jsr      handle_exception       ; Interactive routine
goback:
;;
;; Return to the caller
;;
move.d  [reg],$r0         ; Restore R0
move.d  [reg+0x04],$r1    ; Restore R1
move.d  [reg+0x08],$r2    ; Restore R2
move.d  [reg+0x0C],$r3    ; Restore R3
move.d  [reg+0x10],$r4    ; Restore R4
move.d  [reg+0x14],$r5    ; Restore R5
move.d  [reg+0x18],$r6    ; Restore R6
move.d  [reg+0x1C],$r7    ; Restore R7
move.d  [reg+0x20],$r8    ; Restore R8
move.d  [reg+0x24],$r9    ; Restore R9
move.d  [reg+0x28],$r10   ; Restore R10
move.d  [reg+0x2C],$r11   ; Restore R11
move.d  [reg+0x30],$r12   ; Restore R12
move.d  [reg+0x34],$r13   ; Restore R13
;;
;; FIXME: Which registers should be restored?
;;
move.d  [reg+0x38],$sp    ; Restore SP (R14)
move    [reg+0x56],$srp   ; Restore the subroutine return pointer.
move    [reg+0x5E],$dccr  ; Restore DCCR
move    [reg+0x66],$usp   ; Restore USP
reti                      ; Return from the interrupt routine
nop
");
void
breakpoint(void)
void
kgdb_init(void)
