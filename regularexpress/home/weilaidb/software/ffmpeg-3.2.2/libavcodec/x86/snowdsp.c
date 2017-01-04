#if HAVE_INLINE_ASM
static void ff_snow_horizontal_compose97i_sse2(IDWTELEM *b, IDWTELEM *temp, int width)
static void ff_snow_horizontal_compose97i_mmx(IDWTELEM *b, IDWTELEM *temp, int width)
#if HAVE_7REGS
#define snow_vertical_compose_sse2_load_add(op,r,t0,t1,t2,t3)\
""op" ("r",%%"FF_REG_d"), %%"t0"      \n\t"\
""op" 16("r",%%"FF_REG_d"), %%"t1"    \n\t"\
""op" 32("r",%%"FF_REG_d"), %%"t2"    \n\t"\
""op" 48("r",%%"FF_REG_d"), %%"t3"    \n\t"
#define snow_vertical_compose_sse2_load(r,t0,t1,t2,t3)\
snow_vertical_compose_sse2_load_add("movdqa",r,t0,t1,t2,t3)
#define snow_vertical_compose_sse2_add(r,t0,t1,t2,t3)\
snow_vertical_compose_sse2_load_add("paddw",r,t0,t1,t2,t3)
#define snow_vertical_compose_r2r_sub(s0,s1,s2,s3,t0,t1,t2,t3)\
"psubw %%"s0", %%"t0" \n\t"\
"psubw %%"s1", %%"t1" \n\t"\
"psubw %%"s2", %%"t2" \n\t"\
"psubw %%"s3", %%"t3" \n\t"
#define snow_vertical_compose_sse2_store(w,s0,s1,s2,s3)\
"movdqa %%"s0", ("w",%%"FF_REG_d")    \n\t"\
"movdqa %%"s1", 16("w",%%"FF_REG_d")  \n\t"\
"movdqa %%"s2", 32("w",%%"FF_REG_d")  \n\t"\
"movdqa %%"s3", 48("w",%%"FF_REG_d")  \n\t"
#define snow_vertical_compose_sra(n,t0,t1,t2,t3)\
"psraw $"n", %%"t0" \n\t"\
"psraw $"n", %%"t1" \n\t"\
"psraw $"n", %%"t2" \n\t"\
"psraw $"n", %%"t3" \n\t"
#define snow_vertical_compose_r2r_add(s0,s1,s2,s3,t0,t1,t2,t3)\
"paddw %%"s0", %%"t0" \n\t"\
"paddw %%"s1", %%"t1" \n\t"\
"paddw %%"s2", %%"t2" \n\t"\
"paddw %%"s3", %%"t3" \n\t"
#define snow_vertical_compose_r2r_pmulhw(s0,s1,s2,s3,t0,t1,t2,t3)\
"pmulhw %%"s0", %%"t0" \n\t"\
"pmulhw %%"s1", %%"t1" \n\t"\
"pmulhw %%"s2", %%"t2" \n\t"\
"pmulhw %%"s3", %%"t3" \n\t"
#define snow_vertical_compose_sse2_move(s0,s1,s2,s3,t0,t1,t2,t3)\
"movdqa %%"s0", %%"t0" \n\t"\
"movdqa %%"s1", %%"t1" \n\t"\
"movdqa %%"s2", %%"t2" \n\t"\
"movdqa %%"s3", %%"t3" \n\t"
static void ff_snow_vertical_compose97i_sse2(IDWTELEM *b0, IDWTELEM *b1, IDWTELEM *b2, IDWTELEM *b3, IDWTELEM *b4, IDWTELEM *b5, int width)
#define snow_vertical_compose_mmx_load_add(op,r,t0,t1,t2,t3)\
""op" ("r",%%"FF_REG_d"), %%"t0"   \n\t"\
""op" 8("r",%%"FF_REG_d"), %%"t1"  \n\t"\
""op" 16("r",%%"FF_REG_d"), %%"t2" \n\t"\
""op" 24("r",%%"FF_REG_d"), %%"t3" \n\t"
#define snow_vertical_compose_mmx_load(r,t0,t1,t2,t3)\
snow_vertical_compose_mmx_load_add("movq",r,t0,t1,t2,t3)
#define snow_vertical_compose_mmx_add(r,t0,t1,t2,t3)\
snow_vertical_compose_mmx_load_add("paddw",r,t0,t1,t2,t3)
#define snow_vertical_compose_mmx_store(w,s0,s1,s2,s3)\
"movq %%"s0", ("w",%%"FF_REG_d")   \n\t"\
"movq %%"s1", 8("w",%%"FF_REG_d")  \n\t"\
"movq %%"s2", 16("w",%%"FF_REG_d") \n\t"\
"movq %%"s3", 24("w",%%"FF_REG_d") \n\t"
#define snow_vertical_compose_mmx_move(s0,s1,s2,s3,t0,t1,t2,t3)\
"movq %%"s0", %%"t0" \n\t"\
"movq %%"s1", %%"t1" \n\t"\
"movq %%"s2", %%"t2" \n\t"\
"movq %%"s3", %%"t3" \n\t"
static void ff_snow_vertical_compose97i_mmx(IDWTELEM *b0, IDWTELEM *b1, IDWTELEM *b2, IDWTELEM *b3, IDWTELEM *b4, IDWTELEM *b5, int width)
#if HAVE_6REGS
#define snow_inner_add_yblock_sse2_header \
IDWTELEM * * dst_array = sb->line + src_y;\
x86_reg tmp;\
__asm__ volatile(\
"mov  %7, %%"FF_REG_c"          \n\t"\
"mov  %6, %2                    \n\t"\
"mov  %4, %%"FF_REG_S"          \n\t"\
"pxor %%xmm7, %%xmm7            \n\t"\
"pcmpeqd %%xmm3, %%xmm3         \n\t"\
"psllw $15, %%xmm3              \n\t"\
"psrlw $12, %%xmm3              \n\t"\
"1:                             \n\t"\
"mov %1, %%"FF_REG_D"           \n\t"\
"mov (%%"FF_REG_D"), %%"FF_REG_D" \n\t"\
"add %3, %%"FF_REG_D"           \n\t"
#define snow_inner_add_yblock_sse2_start_8(out_reg1, out_reg2, ptr_offset, s_offset)\
"mov "FF_PTR_SIZE"*"ptr_offset"(%%"FF_REG_a"), %%"FF_REG_d"; \n\t"\
"movq (%%"FF_REG_d"), %%"out_reg1"                           \n\t"\
"movq (%%"FF_REG_d", %%"FF_REG_c"), %%"out_reg2"             \n\t"\
"punpcklbw %%xmm7, %%"out_reg1" \n\t"\
"punpcklbw %%xmm7, %%"out_reg2" \n\t"\
"movq "s_offset"(%%"FF_REG_S"), %%xmm0    \n\t"\
"movq "s_offset"+16(%%"FF_REG_S"), %%xmm4 \n\t"\
"punpcklbw %%xmm7, %%xmm0       \n\t"\
"punpcklbw %%xmm7, %%xmm4       \n\t"\
"pmullw %%xmm0, %%"out_reg1"    \n\t"\
"pmullw %%xmm4, %%"out_reg2"    \n\t"
#define snow_inner_add_yblock_sse2_start_16(out_reg1, out_reg2, ptr_offset, s_offset)\
"mov "FF_PTR_SIZE"*"ptr_offset"(%%"FF_REG_a"), %%"FF_REG_d"; \n\t"\
"movq (%%"FF_REG_d"), %%"out_reg1"                           \n\t"\
"movq 8(%%"FF_REG_d"), %%"out_reg2"                          \n\t"\
"punpcklbw %%xmm7, %%"out_reg1" \n\t"\
"punpcklbw %%xmm7, %%"out_reg2" \n\t"\
"movq "s_offset"(%%"FF_REG_S"), %%xmm0   \n\t"\
"movq "s_offset"+8(%%"FF_REG_S"), %%xmm4 \n\t"\
"punpcklbw %%xmm7, %%xmm0       \n\t"\
"punpcklbw %%xmm7, %%xmm4       \n\t"\
"pmullw %%xmm0, %%"out_reg1"    \n\t"\
"pmullw %%xmm4, %%"out_reg2"    \n\t"
#define snow_inner_add_yblock_sse2_accum_8(ptr_offset, s_offset) \
snow_inner_add_yblock_sse2_start_8("xmm2", "xmm6", ptr_offset, s_offset)\
"paddusw %%xmm2, %%xmm1         \n\t"\
"paddusw %%xmm6, %%xmm5         \n\t"
#define snow_inner_add_yblock_sse2_accum_16(ptr_offset, s_offset) \
snow_inner_add_yblock_sse2_start_16("xmm2", "xmm6", ptr_offset, s_offset)\
"paddusw %%xmm2, %%xmm1         \n\t"\
"paddusw %%xmm6, %%xmm5         \n\t"
#define snow_inner_add_yblock_sse2_end_common1\
"add $32, %%"FF_REG_S"                            \n\t"\
"add %%"FF_REG_c", %0                             \n\t"\
"add %%"FF_REG_c", "FF_PTR_SIZE"*3(%%"FF_REG_a"); \n\t"\
"add %%"FF_REG_c", "FF_PTR_SIZE"*2(%%"FF_REG_a"); \n\t"\
"add %%"FF_REG_c", "FF_PTR_SIZE"*1(%%"FF_REG_a"); \n\t"\
"add %%"FF_REG_c", (%%"FF_REG_a")                 \n\t"
#define snow_inner_add_yblock_sse2_end_common2\
"jnz 1b                         \n\t"\
:"+m"(dst8),"+m"(dst_array),"=&r"(tmp)\
:\
"rm"((x86_reg)(src_x<<1)),"m"(obmc),"a"(block),"m"(b_h),"m"(src_stride):\
XMM_CLOBBERS("%xmm0", "%xmm1", "%xmm2", "%xmm3", "%xmm4", "%xmm5", "%xmm6", "%xmm7", )\
"%"FF_REG_c"","%"FF_REG_S"","%"FF_REG_D"","%"FF_REG_d"");
#define snow_inner_add_yblock_sse2_end_8\
"sal $1, %%"FF_REG_c"                \n\t"\
"add"FF_OPSIZE" $"FF_PTR_SIZE"*2, %1 \n\t"\
snow_inner_add_yblock_sse2_end_common1\
"sar $1, %%"FF_REG_c"           \n\t"\
"sub $2, %2                     \n\t"\
snow_inner_add_yblock_sse2_end_common2
#define snow_inner_add_yblock_sse2_end_16\
"add"FF_OPSIZE" $"FF_PTR_SIZE"*1, %1 \n\t"\
snow_inner_add_yblock_sse2_end_common1\
"dec %2                         \n\t"\
snow_inner_add_yblock_sse2_end_common2
static void inner_add_yblock_bw_8_obmc_16_bh_even_sse2(const uint8_t *obmc, const x86_reg obmc_stride, uint8_t * * block, int b_w, x86_reg b_h,
int src_x, int src_y, x86_reg src_stride, slice_buffer * sb, int add, uint8_t * dst8)
static void inner_add_yblock_bw_16_obmc_32_sse2(const uint8_t *obmc, const x86_reg obmc_stride, uint8_t * * block, int b_w, x86_reg b_h,
int src_x, int src_y, x86_reg src_stride, slice_buffer * sb, int add, uint8_t * dst8)
#define snow_inner_add_yblock_mmx_header \
IDWTELEM * * dst_array = sb->line + src_y;\
x86_reg tmp;\
__asm__ volatile(\
"mov  %7, %%"FF_REG_c"          \n\t"\
"mov  %6, %2                    \n\t"\
"mov  %4, %%"FF_REG_S"          \n\t"\
"pxor %%mm7, %%mm7              \n\t"\
"pcmpeqd %%mm3, %%mm3           \n\t"\
"psllw $15, %%mm3               \n\t"\
"psrlw $12, %%mm3               \n\t"\
"1:                             \n\t"\
"mov %1, %%"FF_REG_D"           \n\t"\
"mov (%%"FF_REG_D"), %%"FF_REG_D" \n\t"\
"add %3, %%"FF_REG_D"           \n\t"
#define snow_inner_add_yblock_mmx_start(out_reg1, out_reg2, ptr_offset, s_offset, d_offset)\
"mov "FF_PTR_SIZE"*"ptr_offset"(%%"FF_REG_a"), %%"FF_REG_d"; \n\t"\
"movd "d_offset"(%%"FF_REG_d"), %%"out_reg1"                 \n\t"\
"movd "d_offset"+4(%%"FF_REG_d"), %%"out_reg2"               \n\t"\
"punpcklbw %%mm7, %%"out_reg1" \n\t"\
"punpcklbw %%mm7, %%"out_reg2" \n\t"\
"movd "s_offset"(%%"FF_REG_S"), %%mm0   \n\t"\
"movd "s_offset"+4(%%"FF_REG_S"), %%mm4 \n\t"\
"punpcklbw %%mm7, %%mm0       \n\t"\
"punpcklbw %%mm7, %%mm4       \n\t"\
"pmullw %%mm0, %%"out_reg1"   \n\t"\
"pmullw %%mm4, %%"out_reg2"   \n\t"
#define snow_inner_add_yblock_mmx_accum(ptr_offset, s_offset, d_offset) \
snow_inner_add_yblock_mmx_start("mm2", "mm6", ptr_offset, s_offset, d_offset)\
"paddusw %%mm2, %%mm1         \n\t"\
"paddusw %%mm6, %%mm5         \n\t"
#define snow_inner_add_yblock_mmx_mix(read_offset, write_offset)\
"mov %0, %%"FF_REG_d"           \n\t"\
"psrlw $4, %%mm1                \n\t"\
"psrlw $4, %%mm5                \n\t"\
"paddw "read_offset"(%%"FF_REG_D"), %%mm1   \n\t"\
"paddw "read_offset"+8(%%"FF_REG_D"), %%mm5 \n\t"\
"paddw %%mm3, %%mm1             \n\t"\
"paddw %%mm3, %%mm5             \n\t"\
"psraw $4, %%mm1                \n\t"\
"psraw $4, %%mm5                \n\t"\
"packuswb %%mm5, %%mm1          \n\t"\
"movq %%mm1, "write_offset"(%%"FF_REG_d") \n\t"
#define snow_inner_add_yblock_mmx_end(s_step)\
"add $"s_step", %%"FF_REG_S"                      \n\t"\
"add %%"FF_REG_c", "FF_PTR_SIZE"*3(%%"FF_REG_a"); \n\t"\
"add %%"FF_REG_c", "FF_PTR_SIZE"*2(%%"FF_REG_a"); \n\t"\
"add %%"FF_REG_c", "FF_PTR_SIZE"*1(%%"FF_REG_a"); \n\t"\
"add %%"FF_REG_c", (%%"FF_REG_a")                 \n\t"\
"add"FF_OPSIZE " $"FF_PTR_SIZE"*1, %1             \n\t"\
"add %%"FF_REG_c", %0                             \n\t"\
"dec %2                         \n\t"\
"jnz 1b                         \n\t"\
:"+m"(dst8),"+m"(dst_array),"=&r"(tmp)\
:\
"rm"((x86_reg)(src_x<<1)),"m"(obmc),"a"(block),"m"(b_h),"m"(src_stride):\
"%"FF_REG_c"","%"FF_REG_S"","%"FF_REG_D"","%"FF_REG_d"");
static void inner_add_yblock_bw_8_obmc_16_mmx(const uint8_t *obmc, const x86_reg obmc_stride, uint8_t * * block, int b_w, x86_reg b_h,
int src_x, int src_y, x86_reg src_stride, slice_buffer * sb, int add, uint8_t * dst8)
static void inner_add_yblock_bw_16_obmc_32_mmx(const uint8_t *obmc, const x86_reg obmc_stride, uint8_t * * block, int b_w, x86_reg b_h,
int src_x, int src_y, x86_reg src_stride, slice_buffer * sb, int add, uint8_t * dst8)
static void ff_snow_inner_add_yblock_sse2(const uint8_t *obmc, const int obmc_stride, uint8_t * * block, int b_w, int b_h,
int src_x, int src_y, int src_stride, slice_buffer * sb, int add, uint8_t * dst8)
static void ff_snow_inner_add_yblock_mmx(const uint8_t *obmc, const int obmc_stride, uint8_t * * block, int b_w, int b_h,
int src_x, int src_y, int src_stride, slice_buffer * sb, int add, uint8_t * dst8)
av_cold void ff_dwt_init_x86(SnowDWTContext *c)
