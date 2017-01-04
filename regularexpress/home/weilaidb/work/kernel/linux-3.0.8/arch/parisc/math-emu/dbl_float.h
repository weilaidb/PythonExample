PA header file -- do not include this header file for non-PA builds.
#define Dbl_firstword(value) Dallp1(value)
#define Dbl_secondword(value) Dallp2(value)
#define Dbl_thirdword(value) dummy_location
#define Dbl_fourthword(value) dummy_location
#define Dbl_sign(object) Dsign(object)
#define Dbl_exponent(object) Dexponent(object)
#define Dbl_signexponent(object) Dsignexponent(object)
#define Dbl_mantissap1(object) Dmantissap1(object)
#define Dbl_mantissap2(object) Dmantissap2(object)
#define Dbl_exponentmantissap1(object) Dexponentmantissap1(object)
#define Dbl_allp1(object) Dallp1(object)
#define Dbl_allp2(object) Dallp2(object)
#define Dbl_and_signs( src1dst, src2)		\
Dallp1(src1dst) = (Dallp1(src2)|~((unsigned int)1<<31)) & Dallp1(src1dst)
#define Dbl_or_signs( src1dst, src2)		\
Dallp1(src1dst) = (Dallp1(src2)&((unsigned int)1<<31)) | Dallp1(src1dst)
#define Dbl_clear_exponent_set_hidden(srcdst) Deposit_dexponent(srcdst,1)
#define Dbl_clear_signexponent_set_hidden(srcdst) \
Deposit_dsignexponent(srcdst,1)
#define Dbl_clear_sign(srcdst) Dallp1(srcdst) &= ~((unsigned int)1<<31)
#define Dbl_clear_signexponent(srcdst) \
Dallp1(srcdst) &= Dmantissap1((unsigned int)-1)
#define Dbl_rightshift(srcdstA, srcdstB, varamount)			\
#define Dbl_rightshift_exponentmantissa(srcdstA, srcdstB, varamount)	\
#define Dbl_leftshift(srcdstA, srcdstB, varamount)			\
#define Dbl_leftshiftby1_withextent(lefta,leftb,right,resulta,resultb)	\
Shiftdouble(Dallp1(lefta), Dallp2(leftb), 31, Dallp1(resulta));	\
Shiftdouble(Dallp2(leftb), Extall(right), 31, Dallp2(resultb))
#define Dbl_rightshiftby1_withextent(leftb,right,dst)		\
Extall(dst) = (Dallp2(leftb) << 31) | ((unsigned int)Extall(right) >> 1) | \
Extlow(right)
#define Dbl_arithrightshiftby1(srcdstA,srcdstB)			\
Shiftdouble(Dallp1(srcdstA),Dallp2(srcdstB),1,Dallp2(srcdstB));\
Dallp1(srcdstA) = (int)Dallp1(srcdstA) >> 1
#define Dbl_signextendedsign(value)  Dsignedsign(value)
#define Dbl_isone_hidden(dbl_value) (Is_dhidden(dbl_value)!=0)
#define Dbl_increment(dbl_valueA,dbl_valueB) \
if( (Dallp2(dbl_valueB) += 1) == 0 )  Dallp1(dbl_valueA) += 1
#define Dbl_increment_mantissa(dbl_valueA,dbl_valueB) \
if( (Dmantissap2(dbl_valueB) += 1) == 0 )  \
Deposit_dmantissap1(dbl_valueA,dbl_valueA+1)
#define Dbl_decrement(dbl_valueA,dbl_valueB) \
if( Dallp2(dbl_valueB) == 0 )  Dallp1(dbl_valueA) -= 1; \
Dallp2(dbl_valueB) -= 1
#define Dbl_isone_sign(dbl_value) (Is_dsign(dbl_value)!=0)
#define Dbl_isone_hiddenoverflow(dbl_value) (Is_dhiddenoverflow(dbl_value)!=0)
#define Dbl_isone_lowmantissap1(dbl_valueA) (Is_dlowp1(dbl_valueA)!=0)
#define Dbl_isone_lowmantissap2(dbl_valueB) (Is_dlowp2(dbl_valueB)!=0)
#define Dbl_isone_signaling(dbl_value) (Is_dsignaling(dbl_value)!=0)
#define Dbl_is_signalingnan(dbl_value) (Dsignalingnan(dbl_value)==0xfff)
#define Dbl_isnotzero(dbl_valueA,dbl_valueB) \
(Dallp1(dbl_valueA) || Dallp2(dbl_valueB))
#define Dbl_isnotzero_hiddenhigh7mantissa(dbl_value) \
(Dhiddenhigh7mantissa(dbl_value)!=0)
#define Dbl_isnotzero_exponent(dbl_value) (Dexponent(dbl_value)!=0)
#define Dbl_isnotzero_mantissa(dbl_valueA,dbl_valueB) \
(Dmantissap1(dbl_valueA) || Dmantissap2(dbl_valueB))
#define Dbl_isnotzero_mantissap1(dbl_valueA) (Dmantissap1(dbl_valueA)!=0)
#define Dbl_isnotzero_mantissap2(dbl_valueB) (Dmantissap2(dbl_valueB)!=0)
#define Dbl_isnotzero_exponentmantissa(dbl_valueA,dbl_valueB) \
(Dexponentmantissap1(dbl_valueA) || Dmantissap2(dbl_valueB))
#define Dbl_isnotzero_low4p2(dbl_value) (Dlow4p2(dbl_value)!=0)
#define Dbl_iszero(dbl_valueA,dbl_valueB) (Dallp1(dbl_valueA)==0 && \
Dallp2(dbl_valueB)==0)
#define Dbl_iszero_allp1(dbl_value) (Dallp1(dbl_value)==0)
#define Dbl_iszero_allp2(dbl_value) (Dallp2(dbl_value)==0)
#define Dbl_iszero_hidden(dbl_value) (Is_dhidden(dbl_value)==0)
#define Dbl_iszero_hiddenoverflow(dbl_value) (Is_dhiddenoverflow(dbl_value)==0)
#define Dbl_iszero_hiddenhigh3mantissa(dbl_value) \
(Dhiddenhigh3mantissa(dbl_value)==0)
#define Dbl_iszero_hiddenhigh7mantissa(dbl_value) \
(Dhiddenhigh7mantissa(dbl_value)==0)
#define Dbl_iszero_sign(dbl_value) (Is_dsign(dbl_value)==0)
#define Dbl_iszero_exponent(dbl_value) (Dexponent(dbl_value)==0)
#define Dbl_iszero_mantissa(dbl_valueA,dbl_valueB) \
(Dmantissap1(dbl_valueA)==0 && Dmantissap2(dbl_valueB)==0)
#define Dbl_iszero_exponentmantissa(dbl_valueA,dbl_valueB) \
(Dexponentmantissap1(dbl_valueA)==0 && Dmantissap2(dbl_valueB)==0)
#define Dbl_isinfinity_exponent(dbl_value)		\
(Dexponent(dbl_value)==DBL_INFINITY_EXPONENT)
#define Dbl_isnotinfinity_exponent(dbl_value)		\
(Dexponent(dbl_value)!=DBL_INFINITY_EXPONENT)
#define Dbl_isinfinity(dbl_valueA,dbl_valueB)			\
(Dexponent(dbl_valueA)==DBL_INFINITY_EXPONENT &&	\
Dmantissap1(dbl_valueA)==0 && Dmantissap2(dbl_valueB)==0)
#define Dbl_isnan(dbl_valueA,dbl_valueB)		\
(Dexponent(dbl_valueA)==DBL_INFINITY_EXPONENT &&	\
(Dmantissap1(dbl_valueA)!=0 || Dmantissap2(dbl_valueB)!=0))
#define Dbl_isnotnan(dbl_valueA,dbl_valueB)		\
(Dexponent(dbl_valueA)!=DBL_INFINITY_EXPONENT ||	\
(Dmantissap1(dbl_valueA)==0 && Dmantissap2(dbl_valueB)==0))
#define Dbl_islessthan(dbl_op1a,dbl_op1b,dbl_op2a,dbl_op2b)	\
(Dallp1(dbl_op1a) < Dallp1(dbl_op2a) ||			\
(Dallp1(dbl_op1a) == Dallp1(dbl_op2a) &&			\
Dallp2(dbl_op1b) < Dallp2(dbl_op2b)))
#define Dbl_isgreaterthan(dbl_op1a,dbl_op1b,dbl_op2a,dbl_op2b)	\
(Dallp1(dbl_op1a) > Dallp1(dbl_op2a) ||			\
(Dallp1(dbl_op1a) == Dallp1(dbl_op2a) &&			\
Dallp2(dbl_op1b) > Dallp2(dbl_op2b)))
#define Dbl_isnotlessthan(dbl_op1a,dbl_op1b,dbl_op2a,dbl_op2b)	\
(Dallp1(dbl_op1a) > Dallp1(dbl_op2a) ||			\
(Dallp1(dbl_op1a) == Dallp1(dbl_op2a) &&			\
Dallp2(dbl_op1b) >= Dallp2(dbl_op2b)))
#define Dbl_isnotgreaterthan(dbl_op1a,dbl_op1b,dbl_op2a,dbl_op2b) \
(Dallp1(dbl_op1a) < Dallp1(dbl_op2a) ||			\
(Dallp1(dbl_op1a) == Dallp1(dbl_op2a) &&			\
Dallp2(dbl_op1b) <= Dallp2(dbl_op2b)))
#define Dbl_isequal(dbl_op1a,dbl_op1b,dbl_op2a,dbl_op2b)	\
((Dallp1(dbl_op1a) == Dallp1(dbl_op2a)) &&			\
(Dallp2(dbl_op1b) == Dallp2(dbl_op2b)))
#define Dbl_leftshiftby8(dbl_valueA,dbl_valueB) \
Shiftdouble(Dallp1(dbl_valueA),Dallp2(dbl_valueB),24,Dallp1(dbl_valueA)); \
Dallp2(dbl_valueB) <<= 8
#define Dbl_leftshiftby7(dbl_valueA,dbl_valueB) \
Shiftdouble(Dallp1(dbl_valueA),Dallp2(dbl_valueB),25,Dallp1(dbl_valueA)); \
Dallp2(dbl_valueB) <<= 7
#define Dbl_leftshiftby4(dbl_valueA,dbl_valueB) \
Shiftdouble(Dallp1(dbl_valueA),Dallp2(dbl_valueB),28,Dallp1(dbl_valueA)); \
Dallp2(dbl_valueB) <<= 4
#define Dbl_leftshiftby3(dbl_valueA,dbl_valueB) \
Shiftdouble(Dallp1(dbl_valueA),Dallp2(dbl_valueB),29,Dallp1(dbl_valueA)); \
Dallp2(dbl_valueB) <<= 3
#define Dbl_leftshiftby2(dbl_valueA,dbl_valueB) \
Shiftdouble(Dallp1(dbl_valueA),Dallp2(dbl_valueB),30,Dallp1(dbl_valueA)); \
Dallp2(dbl_valueB) <<= 2
#define Dbl_leftshiftby1(dbl_valueA,dbl_valueB) \
Shiftdouble(Dallp1(dbl_valueA),Dallp2(dbl_valueB),31,Dallp1(dbl_valueA)); \
Dallp2(dbl_valueB) <<= 1
#define Dbl_rightshiftby8(dbl_valueA,dbl_valueB) \
Shiftdouble(Dallp1(dbl_valueA),Dallp2(dbl_valueB),8,Dallp2(dbl_valueB)); \
Dallp1(dbl_valueA) >>= 8
#define Dbl_rightshiftby4(dbl_valueA,dbl_valueB) \
Shiftdouble(Dallp1(dbl_valueA),Dallp2(dbl_valueB),4,Dallp2(dbl_valueB)); \
Dallp1(dbl_valueA) >>= 4
#define Dbl_rightshiftby2(dbl_valueA,dbl_valueB) \
Shiftdouble(Dallp1(dbl_valueA),Dallp2(dbl_valueB),2,Dallp2(dbl_valueB)); \
Dallp1(dbl_valueA) >>= 2
#define Dbl_rightshiftby1(dbl_valueA,dbl_valueB) \
Shiftdouble(Dallp1(dbl_valueA),Dallp2(dbl_valueB),1,Dallp2(dbl_valueB)); \
Dallp1(dbl_valueA) >>= 1
#define Dbl_ismagnitudeless(leftB,rightB,signlessleft,signlessright)	\
((signlessleft <= signlessright) &&				\
( (signlessleft < signlessright) || (Dallp2(leftB)<Dallp2(rightB)) ))
#define Dbl_copytoint_exponentmantissap1(src,dest) \
dest = Dexponentmantissap1(src)
#define Dbl_set_quiet(dbl_value) Deposit_dhigh2mantissa(dbl_value,1)
#define Dbl_set_exponent(dbl_value, exp) Deposit_dexponent(dbl_value,exp)
#define Dbl_set_mantissa(desta,destb,valuea,valueb)	\
Deposit_dmantissap1(desta,valuea);			\
Dmantissap2(destb) = Dmantissap2(valueb)
#define Dbl_set_mantissap1(desta,valuea)		\
Deposit_dmantissap1(desta,valuea)
#define Dbl_set_mantissap2(destb,valueb)		\
Dmantissap2(destb) = Dmantissap2(valueb)
#define Dbl_set_exponentmantissa(desta,destb,valuea,valueb)	\
Deposit_dexponentmantissap1(desta,valuea);			\
Dmantissap2(destb) = Dmantissap2(valueb)
#define Dbl_set_exponentmantissap1(dest,value)			\
Deposit_dexponentmantissap1(dest,value)
#define Dbl_copyfromptr(src,desta,destb) \
Dallp1(desta) = src->wd0;		\
Dallp2(destb) = src->wd1
#define Dbl_copytoptr(srca,srcb,dest)	\
dest->wd0 = Dallp1(srca);		\
dest->wd1 = Dallp2(srcb)
#define Dbl_setinfinity_exponent(dbl_value) \
Deposit_dexponent(dbl_value,DBL_INFINITY_EXPONENT)
#define Dbl_setinfinity_exponentmantissa(dbl_valueA,dbl_valueB)	\
Deposit_dexponentmantissap1(dbl_valueA, 			\
(DBL_INFINITY_EXPONENT << (32-(1+DBL_EXP_LENGTH))));	\
Dmantissap2(dbl_valueB) = 0
#define Dbl_setinfinitypositive(dbl_valueA,dbl_valueB)		\
Dallp1(dbl_valueA) 						\
= (DBL_INFINITY_EXPONENT << (32-(1+DBL_EXP_LENGTH)));	\
Dmantissap2(dbl_valueB) = 0
#define Dbl_setinfinitynegative(dbl_valueA,dbl_valueB)		\
Dallp1(dbl_valueA) = ((unsigned int)1<<31) |		\
(DBL_INFINITY_EXPONENT << (32-(1+DBL_EXP_LENGTH)));	\
Dmantissap2(dbl_valueB) = 0
#define Dbl_setinfinity(dbl_valueA,dbl_valueB,sign)		\
Dallp1(dbl_valueA) = ((unsigned int)sign << 31) | 		\
(DBL_INFINITY_EXPONENT << (32-(1+DBL_EXP_LENGTH)));	\
Dmantissap2(dbl_valueB) = 0
#define Dbl_sethigh4bits(dbl_value, extsign) Deposit_dhigh4p1(dbl_value,extsign)
#define Dbl_set_sign(dbl_value,sign) Deposit_dsign(dbl_value,sign)
#define Dbl_invert_sign(dbl_value) Deposit_dsign(dbl_value,~Dsign(dbl_value))
#define Dbl_setone_sign(dbl_value) Deposit_dsign(dbl_value,1)
#define Dbl_setone_lowmantissap2(dbl_value) Deposit_dlowp2(dbl_value,1)
#define Dbl_setzero_sign(dbl_value) Dallp1(dbl_value) &= 0x7fffffff
#define Dbl_setzero_exponent(dbl_value) 		\
Dallp1(dbl_value) &= 0x800fffff
#define Dbl_setzero_mantissa(dbl_valueA,dbl_valueB)	\
Dallp1(dbl_valueA) &= 0xfff00000; 			\
Dallp2(dbl_valueB) = 0
#define Dbl_setzero_mantissap1(dbl_value) Dallp1(dbl_value) &= 0xfff00000
#define Dbl_setzero_mantissap2(dbl_value) Dallp2(dbl_value) = 0
#define Dbl_setzero_exponentmantissa(dbl_valueA,dbl_valueB)	\
Dallp1(dbl_valueA) &= 0x80000000;		\
Dallp2(dbl_valueB) = 0
#define Dbl_setzero_exponentmantissap1(dbl_valueA)	\
Dallp1(dbl_valueA) &= 0x80000000
#define Dbl_setzero(dbl_valueA,dbl_valueB) \
Dallp1(dbl_valueA) = 0; Dallp2(dbl_valueB) = 0
#define Dbl_setzerop1(dbl_value) Dallp1(dbl_value) = 0
#define Dbl_setzerop2(dbl_value) Dallp2(dbl_value) = 0
#define Dbl_setnegativezero(dbl_value) \
Dallp1(dbl_value) = (unsigned int)1 << 31; Dallp2(dbl_value) = 0
#define Dbl_setnegativezerop1(dbl_value) Dallp1(dbl_value) = (unsigned int)1<<31
#define ovfl -
#define unfl +
#define Dbl_setwrapped_exponent(dbl_value,exponent,op) \
Deposit_dexponent(dbl_value,(exponent op DBL_WRAP))
#define Dbl_setlargestpositive(dbl_valueA,dbl_valueB) 			\
Dallp1(dbl_valueA) = ((DBL_EMAX+DBL_BIAS) << (32-(1+DBL_EXP_LENGTH))) \
| ((1<<(32-(1+DBL_EXP_LENGTH))) - 1 );		\
Dallp2(dbl_valueB) = 0xFFFFFFFF
#define Dbl_setlargestnegative(dbl_valueA,dbl_valueB) 			\
Dallp1(dbl_valueA) = ((DBL_EMAX+DBL_BIAS) << (32-(1+DBL_EXP_LENGTH))) \
| ((1<<(32-(1+DBL_EXP_LENGTH))) - 1 )		\
| ((unsigned int)1<<31);			\
Dallp2(dbl_valueB) = 0xFFFFFFFF
#define Dbl_setlargest_exponentmantissa(dbl_valueA,dbl_valueB)		\
Deposit_dexponentmantissap1(dbl_valueA,				\
(((DBL_EMAX+DBL_BIAS) << (32-(1+DBL_EXP_LENGTH)))		\
| ((1<<(32-(1+DBL_EXP_LENGTH))) - 1 )));	\
Dallp2(dbl_valueB) = 0xFFFFFFFF
#define Dbl_setnegativeinfinity(dbl_valueA,dbl_valueB) 			\
Dallp1(dbl_valueA) = ((1<<DBL_EXP_LENGTH) | DBL_INFINITY_EXPONENT) 	\
<< (32-(1+DBL_EXP_LENGTH)) ; 			\
Dallp2(dbl_valueB) = 0
#define Dbl_setlargest(dbl_valueA,dbl_valueB,sign)			\
Dallp1(dbl_valueA) = ((unsigned int)sign << 31) |			\
((DBL_EMAX+DBL_BIAS) << (32-(1+DBL_EXP_LENGTH))) |	 	\
((1 << (32-(1+DBL_EXP_LENGTH))) - 1 );				\
Dallp2(dbl_valueB) = 0xFFFFFFFF
#define Dbl_right_align(srcdstA,srcdstB,shift,extent)			\
if( shift >= 32 ) 							\
\
else								\
#define Dbl_fix_overshift(srcdstA,srcdstB,shift,extent)			\
Extall(extent) = Dallp2(srcdstB) << 32 - (shift);		\
Dallp2(srcdstB) = (Dallp1(srcdstA) << 32 - (shift)) |	\
(Dallp2(srcdstB) >> (shift));				\
Dallp1(srcdstA) = Dallp1(srcdstA) >> shift
#define Dbl_hiddenhigh3mantissa(dbl_value) Dhiddenhigh3mantissa(dbl_value)
#define Dbl_hidden(dbl_value) Dhidden(dbl_value)
#define Dbl_lowmantissap2(dbl_value) Dlowp2(dbl_value)
#define Dbl_subtract(lefta,leftb,righta,rightb,resulta,resultb)			\
if( Dallp2(rightb) > Dallp2(leftb) ) Dallp1(lefta)--;	\
Dallp2(resultb) = Dallp2(leftb) - Dallp2(rightb);		\
Dallp1(resulta) = Dallp1(lefta) - Dallp1(righta)
#define Dbl_subtract_withextension(lefta,leftb,righta,rightb,extent,resulta,resultb)	\
Dbl_subtract(lefta,leftb,righta,rightb,resulta,resultb);		\
if( (Extall(extent) = 0-Extall(extent)) )				\
#define Dbl_addition(lefta,leftb,righta,rightb,resulta,resultb)		\			\
Dallp1(resulta) = Dallp1(lefta) + Dallp1(righta);			\
if((Dallp2(resultb) = Dallp2(leftb) + Dallp2(rightb)) < Dallp2(rightb)) \
Dallp1(resulta)++
#define Dbl_xortointp1(left,right,result)			\
result = Dallp1(left) XOR Dallp1(right)
#define Dbl_xorfromintp1(left,right,result)			\
Dallp1(result) = left XOR Dallp1(right)
#define Dbl_swap_lower(left,right)				\
Dallp2(left)  = Dallp2(left) XOR Dallp2(right);		\
Dallp2(right) = Dallp2(left) XOR Dallp2(right);		\
Dallp2(left)  = Dallp2(left) XOR Dallp2(right)
#define Dbl_makequietnan(desta,destb)					\
Dallp1(desta) = ((DBL_EMAX+DBL_BIAS)+1)<< (32-(1+DBL_EXP_LENGTH))	\
| (1<<(32-(1+DBL_EXP_LENGTH+2)));			\
Dallp2(destb) = 0
#define Dbl_makesignalingnan(desta,destb)				\
Dallp1(desta) = ((DBL_EMAX+DBL_BIAS)+1)<< (32-(1+DBL_EXP_LENGTH))	\
| (1<<(32-(1+DBL_EXP_LENGTH+1)));			\
Dallp2(destb) = 0
#define Dbl_normalize(dbl_opndA,dbl_opndB,exponent)			\
while(Dbl_iszero_hiddenhigh7mantissa(dbl_opndA)) 								\
if(Dbl_iszero_hiddenhigh3mantissa(dbl_opndA)) 								\
while(Dbl_iszero_hidden(dbl_opndA))
#define Twoword_add(src1dstA,src1dstB,src2A,src2B)		\							\
if ((src1dstB) + (src2B) < (src1dstB)) Dallp1(src1dstA)++; \
Dallp1(src1dstA) += (src2A);				\
Dallp2(src1dstB) += (src2B)
#define Twoword_subtract(src1dstA,src1dstB,src2A,src2B)		\							\
if ((src1dstB) < (src2B)) Dallp1(src1dstA)--;		\
Dallp1(src1dstA) -= (src2A);				\
Dallp2(src1dstB) -= (src2B)
#define Dbl_setoverflow(resultA,resultB)				\			\
switch (Rounding_mode())
#define Dbl_denormalize(opndp1,opndp2,exponent,guard,sticky,inexact)	\
Dbl_clear_signexponent_set_hidden(opndp1);				\
if (exponent >= (1-DBL_P)) 									\
else
#define DBLEXT_THRESHOLD 106
#define Dblext_setzero(valA,valB,valC,valD)	\
Dextallp1(valA) = 0; Dextallp2(valB) = 0;	\
Dextallp3(valC) = 0; Dextallp4(valD) = 0
#define Dblext_isnotzero_mantissap3(valC) (Dextallp3(valC)!=0)
#define Dblext_isnotzero_mantissap4(valD) (Dextallp3(valD)!=0)
#define Dblext_isone_lowp2(val) (Dextlowp2(val)!=0)
#define Dblext_isone_highp3(val) (Dexthighp3(val)!=0)
#define Dblext_isnotzero_low31p3(val) (Dextlow31p3(val)!=0)
#define Dblext_iszero(valA,valB,valC,valD) (Dextallp1(valA)==0 && \
Dextallp2(valB)==0 && Dextallp3(valC)==0 && Dextallp4(valD)==0)
#define Dblext_copy(srca,srcb,srcc,srcd,desta,destb,destc,destd) \
Dextallp1(desta) = Dextallp4(srca);	\
Dextallp2(destb) = Dextallp4(srcb);	\
Dextallp3(destc) = Dextallp4(srcc);	\
Dextallp4(destd) = Dextallp4(srcd)
#define Dblext_swap_lower(leftp2,leftp3,leftp4,rightp2,rightp3,rightp4)  \
Dextallp2(leftp2)  = Dextallp2(leftp2) XOR Dextallp2(rightp2);  \
Dextallp2(rightp2) = Dextallp2(leftp2) XOR Dextallp2(rightp2);  \
Dextallp2(leftp2)  = Dextallp2(leftp2) XOR Dextallp2(rightp2);  \
Dextallp3(leftp3)  = Dextallp3(leftp3) XOR Dextallp3(rightp3);  \
Dextallp3(rightp3) = Dextallp3(leftp3) XOR Dextallp3(rightp3);  \
Dextallp3(leftp3)  = Dextallp3(leftp3) XOR Dextallp3(rightp3);  \
Dextallp4(leftp4)  = Dextallp4(leftp4) XOR Dextallp4(rightp4);  \
Dextallp4(rightp4) = Dextallp4(leftp4) XOR Dextallp4(rightp4);  \
Dextallp4(leftp4)  = Dextallp4(leftp4) XOR Dextallp4(rightp4)
#define Dblext_setone_lowmantissap4(dbl_value) Deposit_dextlowp4(dbl_value,1)
#define Dblext_right_align(srcdstA,srcdstB,srcdstC,srcdstD,shift) \
#define Dblext_subtract(lefta,leftb,leftc,leftd,righta,rightb,rightc,rightd,resulta,resultb,resultc,resultd) \
if( Dextallp4(rightd) > Dextallp4(leftd) ) 			\
if( (Dextallp3(leftc)--) == 0)				\
if( (Dextallp2(leftb)--) == 0) Dextallp1(lefta)--;	\
Dextallp4(resultd) = Dextallp4(leftd) - Dextallp4(rightd);	\
if( Dextallp3(rightc) > Dextallp3(leftc) ) 			\
if( (Dextallp2(leftb)--) == 0) Dextallp1(lefta)--;	\
Dextallp3(resultc) = Dextallp3(leftc) - Dextallp3(rightc);	\
if( Dextallp2(rightb) > Dextallp2(leftb) ) Dextallp1(lefta)--; \
Dextallp2(resultb) = Dextallp2(leftb) - Dextallp2(rightb);	\
Dextallp1(resulta) = Dextallp1(lefta) - Dextallp1(righta)
#define Dblext_addition(lefta,leftb,leftc,leftd,righta,rightb,rightc,rightd,resulta,resultb,resultc,resultd) \ \
if ((Dextallp4(resultd) = Dextallp4(leftd)+Dextallp4(rightd)) < \
Dextallp4(rightd)) \
if((Dextallp3(resultc) = Dextallp3(leftc)+Dextallp3(rightc)+1) <= \
Dextallp3(rightc)) \
if((Dextallp2(resultb) = Dextallp2(leftb)+Dextallp2(rightb)+1) \
<= Dextallp2(rightb))  \
Dextallp1(resulta) = Dextallp1(lefta)+Dextallp1(righta)+1; \
else Dextallp1(resulta) = Dextallp1(lefta)+Dextallp1(righta); \
else \
if ((Dextallp2(resultb) = Dextallp2(leftb)+Dextallp2(rightb)) < \
Dextallp2(rightb)) \
Dextallp1(resulta) = Dextallp1(lefta)+Dextallp1(righta)+1; \
else Dextallp1(resulta) = Dextallp1(lefta)+Dextallp1(righta); \
else \
if ((Dextallp3(resultc) = Dextallp3(leftc)+Dextallp3(rightc)) < \
Dextallp3(rightc))  \
if ((Dextallp2(resultb) = Dextallp2(leftb)+Dextallp2(rightb)+1) \
<= Dextallp2(rightb)) \
Dextallp1(resulta) = Dextallp1(lefta)+Dextallp1(righta)+1; \
else Dextallp1(resulta) = Dextallp1(lefta)+Dextallp1(righta); \
else \
if ((Dextallp2(resultb) = Dextallp2(leftb)+Dextallp2(rightb)) < \
Dextallp2(rightb)) \
Dextallp1(resulta) = Dextallp1(lefta)+Dextallp1(righta)+1; \
else Dextallp1(resulta) = Dextallp1(lefta)+Dextallp1(righta)
#define Dblext_arithrightshiftby1(srcdstA,srcdstB,srcdstC,srcdstD)	\
Shiftdouble(Dextallp3(srcdstC),Dextallp4(srcdstD),1,Dextallp4(srcdstD)); \
Shiftdouble(Dextallp2(srcdstB),Dextallp3(srcdstC),1,Dextallp3(srcdstC)); \
Shiftdouble(Dextallp1(srcdstA),Dextallp2(srcdstB),1,Dextallp2(srcdstB)); \
Dextallp1(srcdstA) = (int)Dextallp1(srcdstA) >> 1
#define Dblext_leftshiftby8(valA,valB,valC,valD) \
Shiftdouble(Dextallp1(valA),Dextallp2(valB),24,Dextallp1(valA)); \
Shiftdouble(Dextallp2(valB),Dextallp3(valC),24,Dextallp2(valB)); \
Shiftdouble(Dextallp3(valC),Dextallp4(valD),24,Dextallp3(valC)); \
Dextallp4(valD) <<= 8
#define Dblext_leftshiftby4(valA,valB,valC,valD) \
Shiftdouble(Dextallp1(valA),Dextallp2(valB),28,Dextallp1(valA)); \
Shiftdouble(Dextallp2(valB),Dextallp3(valC),28,Dextallp2(valB)); \
Shiftdouble(Dextallp3(valC),Dextallp4(valD),28,Dextallp3(valC)); \
Dextallp4(valD) <<= 4
#define Dblext_leftshiftby3(valA,valB,valC,valD) \
Shiftdouble(Dextallp1(valA),Dextallp2(valB),29,Dextallp1(valA)); \
Shiftdouble(Dextallp2(valB),Dextallp3(valC),29,Dextallp2(valB)); \
Shiftdouble(Dextallp3(valC),Dextallp4(valD),29,Dextallp3(valC)); \
Dextallp4(valD) <<= 3
#define Dblext_leftshiftby2(valA,valB,valC,valD) \
Shiftdouble(Dextallp1(valA),Dextallp2(valB),30,Dextallp1(valA)); \
Shiftdouble(Dextallp2(valB),Dextallp3(valC),30,Dextallp2(valB)); \
Shiftdouble(Dextallp3(valC),Dextallp4(valD),30,Dextallp3(valC)); \
Dextallp4(valD) <<= 2
#define Dblext_leftshiftby1(valA,valB,valC,valD) \
Shiftdouble(Dextallp1(valA),Dextallp2(valB),31,Dextallp1(valA)); \
Shiftdouble(Dextallp2(valB),Dextallp3(valC),31,Dextallp2(valB)); \
Shiftdouble(Dextallp3(valC),Dextallp4(valD),31,Dextallp3(valC)); \
Dextallp4(valD) <<= 1
#define Dblext_rightshiftby4(valueA,valueB,valueC,valueD) \
Shiftdouble(Dextallp3(valueC),Dextallp4(valueD),4,Dextallp4(valueD)); \
Shiftdouble(Dextallp2(valueB),Dextallp3(valueC),4,Dextallp3(valueC)); \
Shiftdouble(Dextallp1(valueA),Dextallp2(valueB),4,Dextallp2(valueB)); \
Dextallp1(valueA) >>= 4
#define Dblext_rightshiftby1(valueA,valueB,valueC,valueD) \
Shiftdouble(Dextallp3(valueC),Dextallp4(valueD),1,Dextallp4(valueD)); \
Shiftdouble(Dextallp2(valueB),Dextallp3(valueC),1,Dextallp3(valueC)); \
Shiftdouble(Dextallp1(valueA),Dextallp2(valueB),1,Dextallp2(valueB)); \
Dextallp1(valueA) >>= 1
#define Dblext_xortointp1(left,right,result) Dbl_xortointp1(left,right,result)
#define Dblext_xorfromintp1(left,right,result) \
Dbl_xorfromintp1(left,right,result)
#define Dblext_copytoint_exponentmantissap1(src,dest) \
Dbl_copytoint_exponentmantissap1(src,dest)
#define Dblext_ismagnitudeless(leftB,rightB,signlessleft,signlessright) \
Dbl_ismagnitudeless(leftB,rightB,signlessleft,signlessright)
#define Dbl_copyto_dblext(src1,src2,dest1,dest2,dest3,dest4) \
Dextallp1(dest1) = Dallp1(src1); Dextallp2(dest2) = Dallp2(src2); \
Dextallp3(dest3) = 0; Dextallp4(dest4) = 0
#define Dblext_set_sign(dbl_value,sign)  Dbl_set_sign(dbl_value,sign)
#define Dblext_clear_signexponent_set_hidden(srcdst) \
Dbl_clear_signexponent_set_hidden(srcdst)
#define Dblext_clear_signexponent(srcdst) Dbl_clear_signexponent(srcdst)
#define Dblext_clear_sign(srcdst) Dbl_clear_sign(srcdst)
#define Dblext_isone_hidden(dbl_value) Dbl_isone_hidden(dbl_value)
#define Fourword_add(src1dstA,src1dstB,src1dstC,src1dstD,src2A,src2B,src2C,src2D) \								\
if ((unsigned int)(src1dstD += (src2D)) < (unsigned int)(src2D)) 								\
else 								\
src1dstA += (src2A)
#define Dblext_denormalize(opndp1,opndp2,opndp3,opndp4,exponent,is_tiny) \
