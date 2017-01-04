#define X264_MIPS_MACROS_H
#define LD_B( RTYPE, p_src ) *( ( RTYPE * )( p_src ) )
#define LD_UB( ... ) LD_B( v16u8, __VA_ARGS__ )
#define LD_SB( ... ) LD_B( v16i8, __VA_ARGS__ )
#define LD_H( RTYPE, p_src ) *( ( RTYPE * )( p_src ) )
#define LD_SH( ... ) LD_H( v8i16, __VA_ARGS__ )
#define LD_W( RTYPE, p_src ) *( ( RTYPE * )( p_src ) )
#define LD_SW( ... ) LD_W( v4i32, __VA_ARGS__ )
#define ST_B( RTYPE, in, p_dst ) *( ( RTYPE * )( p_dst ) ) = ( in )
#define ST_UB( ... ) ST_B( v16u8, __VA_ARGS__ )
#define ST_SB( ... ) ST_B( v16i8, __VA_ARGS__ )
#define ST_H( RTYPE, in, p_dst ) *( ( RTYPE * )( p_dst ) ) = ( in )
#define ST_UH( ... ) ST_H( v8u16, __VA_ARGS__ )
#define ST_SH( ... ) ST_H( v8i16, __VA_ARGS__ )
#if ( __mips_isa_rev >= 6 )
#define LH( p_src )                              \
(  )
#define LW( p_src )                              \
(  )
#if ( __mips == 64 )
#define LD( p_src )                              \
(  )
#define LD( p_src )                                                  \
(  )
#define SH( u_val, p_dst )                       \
#define SW( u_val, p_dst )                       \
#define SD( u_val, p_dst )                       \
#define LH( p_src )                              \
(  )
#define LW( p_src )                              \
(  )
#if ( __mips == 64 )
#define LD( p_src )                              \
(  )
#define LD( p_src )                                                  \
(  )
#define SH( u_val, p_dst )                       \
#define SW( u_val, p_dst )                       \
#define SD( u_val, p_dst )                                                 \
#define LW4( p_src, stride, out0, out1, out2, out3 )  \
#define SW4( in0, in1, in2, in3, p_dst, stride )  \
#define SD4( in0, in1, in2, in3, p_dst, stride )  \
#define LD_B2( RTYPE, p_src, stride, out0, out1 )  \
#define LD_UB2( ... ) LD_B2( v16u8, __VA_ARGS__ )
#define LD_SB2( ... ) LD_B2( v16i8, __VA_ARGS__ )
#define LD_B3( RTYPE, p_src, stride, out0, out1, out2 )  \
#define LD_UB3( ... ) LD_B3( v16u8, __VA_ARGS__ )
#define LD_SB3( ... ) LD_B3( v16i8, __VA_ARGS__ )
#define LD_B4( RTYPE, p_src, stride, out0, out1, out2, out3 )     \
#define LD_UB4( ... ) LD_B4( v16u8, __VA_ARGS__ )
#define LD_SB4( ... ) LD_B4( v16i8, __VA_ARGS__ )
#define LD_B5( RTYPE, p_src, stride, out0, out1, out2, out3, out4 )  \
#define LD_UB5( ... ) LD_B5( v16u8, __VA_ARGS__ )
#define LD_SB5( ... ) LD_B5( v16i8, __VA_ARGS__ )
#define LD_B8( RTYPE, p_src, stride,                                         \
out0, out1, out2, out3, out4, out5, out6, out7 )              \
#define LD_UB8( ... ) LD_B8( v16u8, __VA_ARGS__ )
#define LD_SB8( ... ) LD_B8( v16i8, __VA_ARGS__ )
#define LD_H2( RTYPE, p_src, stride, out0, out1 )  \
#define LD_SH2( ... ) LD_H2( v8i16, __VA_ARGS__ )
#define LD_H4( RTYPE, p_src, stride, out0, out1, out2, out3 )    \
#define LD_SH4( ... ) LD_H4( v8i16, __VA_ARGS__ )
#define LD_H8( RTYPE, p_src, stride,                                         \
out0, out1, out2, out3, out4, out5, out6, out7 )              \
#define LD_SH8( ... ) LD_H8( v8i16, __VA_ARGS__ )
#define LD4x4_SH( p_src, out0, out1, out2, out3 )                     \
#define LD_SW2( p_src, stride, out0, out1 )    \
#define ST_B2( RTYPE, in0, in1, p_dst, stride )  \
#define ST_UB2( ... ) ST_B2( v16u8, __VA_ARGS__ )
#define ST_B4( RTYPE, in0, in1, in2, in3, p_dst, stride )      \
#define ST_UB4( ... ) ST_B4( v16u8, __VA_ARGS__ )
#define ST_SB4( ... ) ST_B4( v16i8, __VA_ARGS__ )
#define ST_B8( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,            \
p_dst, stride )                                           \
#define ST_UB8( ... ) ST_B8( v16u8, __VA_ARGS__ )
#define ST_H2( RTYPE, in0, in1, p_dst, stride )  \
#define ST_SH2( ... ) ST_H2( v8i16, __VA_ARGS__ )
#define ST_H4( RTYPE, in0, in1, in2, in3, p_dst, stride )      \
#define ST_SH4( ... ) ST_H4( v8i16, __VA_ARGS__ )
#define ST_H8( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7, p_dst, stride )  \
#define ST_SH8( ... ) ST_H8( v8i16, __VA_ARGS__ )
#define ST2x4_UB( in, stidx, p_dst, stride )                   \
#define ST4x4_UB( in0, in1, idx0, idx1, idx2, idx3, p_dst, stride )     \
#define ST4x8_UB( in0, in1, p_dst, stride )                           \
#define ST8x1_UB( in, p_dst )                      \
#define ST8x4_UB( in0, in1, p_dst, stride )                             \
#define AVER_UB2( RTYPE, in0, in1, in2, in3, out0, out1 )             \
#define AVER_UB2_UB( ... ) AVER_UB2( v16u8, __VA_ARGS__ )
#define AVER_UB4( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                        \
#define AVER_UB4_UB( ... ) AVER_UB4( v16u8, __VA_ARGS__ )
#define SLDI_B2_0( RTYPE, in0, in1, out0, out1, slide_val )     \
#define SLDI_B2_0_UB( ... ) SLDI_B2_0( v16u8, __VA_ARGS__ )
#define SLDI_B2( RTYPE, in0_0, in0_1, in1_0, in1_1, out0, out1, slide_val )  \
#define SLDI_B2_UB( ... ) SLDI_B2( v16u8, __VA_ARGS__ )
#define VSHF_B2( RTYPE, in0, in1, in2, in3, mask0, mask1, out0, out1 )  \
#define VSHF_B2_UB( ... ) VSHF_B2( v16u8, __VA_ARGS__ )
#define VSHF_B2_SB( ... ) VSHF_B2( v16i8, __VA_ARGS__ )
#define VSHF_H2( RTYPE, in0, in1, in2, in3, mask0, mask1, out0, out1 )  \
#define VSHF_H2_SH( ... ) VSHF_H2( v8i16, __VA_ARGS__ )
#define DOTP_UB2( RTYPE, mult0, mult1, cnst0, cnst1, out0, out1 )         \
#define DOTP_UB2_UH( ... ) DOTP_UB2( v8u16, __VA_ARGS__ )
#define DOTP_UB4( RTYPE, mult0, mult1, mult2, mult3,            \
cnst0, cnst1, cnst2, cnst3,                   \
out0, out1, out2, out3 )                      \
#define DOTP_UB4_UH( ... ) DOTP_UB4( v8u16, __VA_ARGS__ )
#define DPADD_SB2( RTYPE, mult0, mult1, cnst0, cnst1, out0, out1 )         \
#define DPADD_SB2_SH( ... ) DPADD_SB2( v8i16, __VA_ARGS__ )
#define DPADD_SB4( RTYPE, mult0, mult1, mult2, mult3,                    \
cnst0, cnst1, cnst2, cnst3, out0, out1, out2, out3 )  \
#define DPADD_SB4_SH( ... ) DPADD_SB4( v8i16, __VA_ARGS__ )
#define DPADD_SH2( RTYPE, mult0, mult1, cnst0, cnst1, out0, out1 )         \
#define DPADD_SH2_SW( ... ) DPADD_SH2( v4i32, __VA_ARGS__ )
#define CLIP_SH( in, min, max )                               \
(  )
#define CLIP_SH_0_255( in )                                     \
(  )
#define CLIP_SH2_0_255( in0, in1 )  \
#define CLIP_SH4_0_255( in0, in1, in2, in3 )  \
#define HADD_SW_S32( in )                                   \
(  )
#define HADD_UH_U32( in )                                      \
(  )
#define HADD_SB2( RTYPE, in0, in1, out0, out1 )                       \
#define HADD_SB4( RTYPE, in0, in1, in2, in3, out0, out1, out2, out3 )  \
#define HADD_SB4_SH( ... ) HADD_SB4( v8i16, __VA_ARGS__ )
#define HADD_UB2( RTYPE, in0, in1, out0, out1 )                       \
#define HADD_UB2_UH( ... ) HADD_UB2( v8u16, __VA_ARGS__ )
#define HADD_UB4( RTYPE, in0, in1, in2, in3, out0, out1, out2, out3 )  \
#define HADD_UB4_UH( ... ) HADD_UB4( v8u16, __VA_ARGS__ )
#define HSUB_UB2( RTYPE, in0, in1, out0, out1 )                       \
#define HSUB_UB2_SH( ... ) HSUB_UB2( v8i16, __VA_ARGS__ )
#define HSUB_UB4( RTYPE, in0, in1, in2, in3, out0, out1, out2, out3 )  \
#define HSUB_UB4_SH( ... ) HSUB_UB4( v8i16, __VA_ARGS__ )
#define SAD_UB2_UH( in0, in1, ref0, ref1 )                            \
(  )
#define INSERT_W2( RTYPE, in0, in1, out )                     \
#define INSERT_W2_SB( ... ) INSERT_W2( v16i8, __VA_ARGS__ )
#define INSERT_W4( RTYPE, in0, in1, in2, in3, out )           \
#define INSERT_W4_UB( ... ) INSERT_W4( v16u8, __VA_ARGS__ )
#define INSERT_W4_SB( ... ) INSERT_W4( v16i8, __VA_ARGS__ )
#define INSERT_D2( RTYPE, in0, in1, out )                     \
#define INSERT_D2_UB( ... ) INSERT_D2( v16u8, __VA_ARGS__ )
#define ILVEV_H2( RTYPE, in0, in1, in2, in3, out0, out1 )            \
#define ILVEV_H2_UB( ... ) ILVEV_H2( v16u8, __VA_ARGS__ )
#define ILVEV_D2( RTYPE, in0, in1, in2, in3, out0, out1 )            \
#define ILVEV_D2_UB( ... ) ILVEV_D2( v16u8, __VA_ARGS__ )
#define ILVL_B2( RTYPE, in0, in1, in2, in3, out0, out1 )            \
#define ILVL_B2_UH( ... ) ILVL_B2( v8u16, __VA_ARGS__ )
#define ILVL_B2_SH( ... ) ILVL_B2( v8i16, __VA_ARGS__ )
#define ILVL_B4( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                        \
#define ILVL_B4_UB( ... ) ILVL_B4( v16u8, __VA_ARGS__ )
#define ILVL_B4_SB( ... ) ILVL_B4( v16i8, __VA_ARGS__ )
#define ILVL_B4_UH( ... ) ILVL_B4( v8u16, __VA_ARGS__ )
#define ILVL_B4_SH( ... ) ILVL_B4( v8i16, __VA_ARGS__ )
#define ILVL_H2( RTYPE, in0, in1, in2, in3, out0, out1 )            \
#define ILVL_H2_SH( ... ) ILVL_H2( v8i16, __VA_ARGS__ )
#define ILVL_H2_SW( ... ) ILVL_H2( v4i32, __VA_ARGS__ )
#define ILVL_H4( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                        \
#define ILVL_H4_SW( ... ) ILVL_H4( v4i32, __VA_ARGS__ )
#define ILVL_W2( RTYPE, in0, in1, in2, in3, out0, out1 )            \
#define ILVL_W2_SH( ... ) ILVL_W2( v8i16, __VA_ARGS__ )
#define ILVR_B2( RTYPE, in0, in1, in2, in3, out0, out1 )            \
#define ILVR_B2_SB( ... ) ILVR_B2( v16i8, __VA_ARGS__ )
#define ILVR_B2_UH( ... ) ILVR_B2( v8u16, __VA_ARGS__ )
#define ILVR_B2_SH( ... ) ILVR_B2( v8i16, __VA_ARGS__ )
#define ILVR_B4( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                        \
#define ILVR_B4_UB( ... ) ILVR_B4( v16u8, __VA_ARGS__ )
#define ILVR_B4_SB( ... ) ILVR_B4( v16i8, __VA_ARGS__ )
#define ILVR_B4_UH( ... ) ILVR_B4( v8u16, __VA_ARGS__ )
#define ILVR_B4_SH( ... ) ILVR_B4( v8i16, __VA_ARGS__ )
#define ILVR_H2( RTYPE, in0, in1, in2, in3, out0, out1 )            \
#define ILVR_H2_SH( ... ) ILVR_H2( v8i16, __VA_ARGS__ )
#define ILVR_H2_SW( ... ) ILVR_H2( v4i32, __VA_ARGS__ )
#define ILVR_H4( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                        \
#define ILVR_H4_SH( ... ) ILVR_H4( v8i16, __VA_ARGS__ )
#define ILVR_H4_SW( ... ) ILVR_H4( v4i32, __VA_ARGS__ )
#define ILVR_W2( RTYPE, in0, in1, in2, in3, out0, out1 )            \
#define ILVR_W2_SH( ... ) ILVR_W2( v8i16, __VA_ARGS__ )
#define ILVR_D2( RTYPE, in0, in1, in2, in3, out0, out1 )                    \
#define ILVR_D2_UB( ... ) ILVR_D2( v16u8, __VA_ARGS__ )
#define ILVR_D2_SB( ... ) ILVR_D2( v16i8, __VA_ARGS__ )
#define ILVR_D2_SH( ... ) ILVR_D2( v8i16, __VA_ARGS__ )
#define ILVR_D4( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                        \
#define ILVR_D4_UB( ... ) ILVR_D4( v16u8, __VA_ARGS__ )
#define ILVRL_B2( RTYPE, in0, in1, out0, out1 )                     \
#define ILVRL_B2_UB( ... ) ILVRL_B2( v16u8, __VA_ARGS__ )
#define ILVRL_B2_SB( ... ) ILVRL_B2( v16i8, __VA_ARGS__ )
#define ILVRL_B2_UH( ... ) ILVRL_B2( v8u16, __VA_ARGS__ )
#define ILVRL_B2_SH( ... ) ILVRL_B2( v8i16, __VA_ARGS__ )
#define ILVRL_B2_SW( ... ) ILVRL_B2( v4i32, __VA_ARGS__ )
#define ILVRL_H2( RTYPE, in0, in1, out0, out1 )                     \
#define ILVRL_H2_SH( ... ) ILVRL_H2( v8i16, __VA_ARGS__ )
#define ILVRL_H2_SW( ... ) ILVRL_H2( v4i32, __VA_ARGS__ )
#define ILVRL_W2( RTYPE, in0, in1, out0, out1 )                     \
#define ILVRL_W2_SH( ... ) ILVRL_W2( v8i16, __VA_ARGS__ )
#define ILVRL_W2_SW( ... ) ILVRL_W2( v4i32, __VA_ARGS__ )
#define MAXI_SH2( RTYPE, in0, in1, max_val )                       \
#define MAXI_SH2_UH( ... ) MAXI_SH2( v8u16, __VA_ARGS__ )
#define MAXI_SH2_SH( ... ) MAXI_SH2( v8i16, __VA_ARGS__ )
#define MAXI_SH4( RTYPE, in0, in1, in2, in3, max_val )  \
#define MAXI_SH4_UH( ... ) MAXI_SH4( v8u16, __VA_ARGS__ )
#define SAT_UH2( RTYPE, in0, in1, sat_val )                   \
#define SAT_UH2_UH( ... ) SAT_UH2( v8u16, __VA_ARGS__ )
#define SAT_UH4( RTYPE, in0, in1, in2, in3, sat_val )  \
#define SAT_UH4_UH( ... ) SAT_UH4( v8u16, __VA_ARGS__ )
#define SAT_SH2( RTYPE, in0, in1, sat_val )                   \
#define SAT_SH2_SH( ... ) SAT_SH2( v8i16, __VA_ARGS__ )
#define SAT_SH4( RTYPE, in0, in1, in2, in3, sat_val )  \
#define SAT_SH4_SH( ... ) SAT_SH4( v8i16, __VA_ARGS__ )
#define SAT_SW2( RTYPE, in0, in1, sat_val )                   \
#define SAT_SW2_SW( ... ) SAT_SW2( v4i32, __VA_ARGS__ )
#define PCKEV_B2( RTYPE, in0, in1, in2, in3, out0, out1 )            \
#define PCKEV_B2_SB( ... ) PCKEV_B2( v16i8, __VA_ARGS__ )
#define PCKEV_B2_UB( ... ) PCKEV_B2( v16u8, __VA_ARGS__ )
#define PCKEV_B2_SH( ... ) PCKEV_B2( v8i16, __VA_ARGS__ )
#define PCKEV_B2_SW( ... ) PCKEV_B2( v4i32, __VA_ARGS__ )
#define PCKEV_B3( RTYPE, in0, in1, in2, in3, in4, in5, out0, out1, out2 ) \
#define PCKEV_B3_UB( ... ) PCKEV_B3( v16u8, __VA_ARGS__ )
#define PCKEV_B4( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                        \
#define PCKEV_B4_SB( ... ) PCKEV_B4( v16i8, __VA_ARGS__ )
#define PCKEV_B4_UB( ... ) PCKEV_B4( v16u8, __VA_ARGS__ )
#define PCKEV_H2( RTYPE, in0, in1, in2, in3, out0, out1 )            \
#define PCKEV_H2_SH( ... ) PCKEV_H2( v8i16, __VA_ARGS__ )
#define PCKEV_H4( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                        \
#define PCKEV_H4_SH( ... ) PCKEV_H4( v8i16, __VA_ARGS__ )
#define PCKEV_D2( RTYPE, in0, in1, in2, in3, out0, out1 )            \
#define PCKEV_D2_UB( ... ) PCKEV_D2( v16u8, __VA_ARGS__ )
#define PCKEV_D4( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                        \
#define PCKEV_D4_UB( ... ) PCKEV_D4( v16u8, __VA_ARGS__ )
#define PCKOD_B2( RTYPE, in0, in1, in2, in3, out0, out1 )            \
#define PCKOD_B2_UB( ... ) PCKOD_B2( v16u8, __VA_ARGS__ )
#define PCKOD_B4( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                        \
#define PCKOD_B4_UB( ... ) PCKOD_B4( v16u8, __VA_ARGS__ )
#define PCKOD_D2( RTYPE, in0, in1, in2, in3, out0, out1 )            \
#define PCKOD_D2_SH( ... ) PCKOD_D2( v8i16, __VA_ARGS__ )
#define PCKOD_D2_SD( ... ) PCKOD_D2( v2i64, __VA_ARGS__ )
#define XORI_B2_128( RTYPE, in0, in1 )                   \
#define XORI_B2_128_UB( ... ) XORI_B2_128( v16u8, __VA_ARGS__ )
#define XORI_B2_128_SB( ... ) XORI_B2_128( v16i8, __VA_ARGS__ )
#define XORI_B3_128( RTYPE, in0, in1, in2 )              \
#define XORI_B3_128_SB( ... ) XORI_B3_128( v16i8, __VA_ARGS__ )
#define XORI_B4_128( RTYPE, in0, in1, in2, in3 )  \
#define XORI_B4_128_UB( ... ) XORI_B4_128( v16u8, __VA_ARGS__ )
#define XORI_B4_128_SB( ... ) XORI_B4_128( v16i8, __VA_ARGS__ )
#define XORI_B5_128( RTYPE, in0, in1, in2, in3, in4 )  \
#define XORI_B5_128_SB( ... ) XORI_B5_128( v16i8, __VA_ARGS__ )
#define ADDS_SH2( RTYPE, in0, in1, in2, in3, out0, out1 )             \
#define ADDS_SH2_SH( ... ) ADDS_SH2( v8i16, __VA_ARGS__ )
#define ADDS_SH4( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                        \
#define ADDS_SH4_UH( ... ) ADDS_SH4( v8u16, __VA_ARGS__ )
#define SLLI_4V( in0, in1, in2, in3, shift )  \
#define SRA_4V( in0, in1, in2, in3, shift )  \
#define SRAR_H2( RTYPE, in0, in1, shift )                            \
#define SRAR_H2_SH( ... ) SRAR_H2( v8i16, __VA_ARGS__ )
#define SRAR_H4( RTYPE, in0, in1, in2, in3, shift )  \
#define SRAR_H4_SH( ... ) SRAR_H4( v8i16, __VA_ARGS__ )
#define SRL_H4( RTYPE, in0, in1, in2, in3, shift )                  \
#define SRL_H4_UH( ... ) SRL_H4( v8u16, __VA_ARGS__ )
#define SRARI_H2( RTYPE, in0, in1, shift )                  \
#define SRARI_H2_UH( ... ) SRARI_H2( v8u16, __VA_ARGS__ )
#define SRARI_H2_SH( ... ) SRARI_H2( v8i16, __VA_ARGS__ )
#define SRARI_H4( RTYPE, in0, in1, in2, in3, shift )    \
#define SRARI_H4_UH( ... ) SRARI_H4( v8u16, __VA_ARGS__ )
#define SRARI_H4_SH( ... ) SRARI_H4( v8i16, __VA_ARGS__ )
#define SRARI_W2( RTYPE, in0, in1, shift )                  \
#define SRARI_W2_SW( ... ) SRARI_W2( v4i32, __VA_ARGS__ )
#define SRARI_W4( RTYPE, in0, in1, in2, in3, shift )  \
#define SRARI_W4_SW( ... ) SRARI_W4( v4i32, __VA_ARGS__ )
#define MUL2( in0, in1, in2, in3, out0, out1 )  \
#define MUL4( in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                 \
#define ADD2( in0, in1, in2, in3, out0, out1 )  \
#define ADD4( in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                 \
#define SUB4( in0, in1, in2, in3, in4, in5, in6, in7,  \
out0, out1, out2, out3 )                 \
#define UNPCK_R_SH_SW( in, out )                           \
#define UNPCK_UB_SH( in, out0, out1 )       \
#define UNPCK_SH_SW( in, out0, out1 )           \
#define BUTTERFLY_4( in0, in1, in2, in3, out0, out1, out2, out3 )  \
#define BUTTERFLY_8( in0, in1, in2, in3, in4, in5, in6, in7,           \
out0, out1, out2, out3, out4, out5, out6, out7 )  \
#define TRANSPOSE8x8_UB( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,    \
out0, out1, out2, out3, out4, out5, out6, out7 )  \
#define TRANSPOSE8x8_UB_UB( ... ) TRANSPOSE8x8_UB( v16u8, __VA_ARGS__ )
#define TRANSPOSE16x8_UB_UB( in0, in1, in2, in3, in4, in5, in6, in7,           \
in8, in9, in10, in11, in12, in13, in14, in15,     \
out0, out1, out2, out3, out4, out5, out6, out7 )  \
#define TRANSPOSE4x4_SH_SH( in0, in1, in2, in3, out0, out1, out2, out3 )  \
#define TRANSPOSE4X8_SH_SH( in0, in1, in2, in3, in4, in5, in6, in7,           \
out0, out1, out2, out3, out4, out5, out6, out7 )  \
#define TRANSPOSE8X4_SH_SH( in0, in1, in2, in3, out0, out1, out2, out3 )  \
#define TRANSPOSE8x8_H( RTYPE, in0, in1, in2, in3, in4, in5, in6, in7,     \
out0, out1, out2, out3, out4, out5, out6, out7 )   \
#define TRANSPOSE8x8_SH_SH( ... ) TRANSPOSE8x8_H( v8i16, __VA_ARGS__ )
#define TRANSPOSE4x4_SW_SW( in0, in1, in2, in3, out0, out1, out2, out3 )  \
#define ADDBLK_ST4x4_UB( in0, in1, in2, in3, p_dst, stride )        \
#define DPADD_SH3_SH( in0, in1, in2, coeff0, coeff1, coeff2 )             \
(  )
#define PCKEV_XORI128_UB( in0, in1 )                                  \
(  )
#define PCKEV_ST4x4_UB( in0, in1, in2, in3, p_dst, stride )  \
#define PCKEV_ST_SB( in0, in1, p_dst )                      \
#define AVC_CALC_DPADD_H_6PIX_2COEFF_SH( in0, in1, in2, in3, in4, in5 )    \
(  )
#define AVC_HORZ_FILTER_SH( in, mask0, mask1, mask2 )      \
(  )
