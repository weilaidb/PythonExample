#define _P_P_PORTABILITY_H_
#  define DPPP_NAMESPACE DPPP_
#define DPPP_CAT2(x,y) CAT2(x,y)
#define DPPP_(name) DPPP_CAT2(DPPP_NAMESPACE, name)
#  if !defined(__PATCHLEVEL_H_INCLUDED__) && !(defined(PATCHLEVEL) && defined(SUBVERSION))
#    define PERL_PATCHLEVEL_H_IMPLICIT
#    include <patchlevel.h>
#  endif
#  if !(defined(PERL_VERSION) || (defined(SUBVERSION) && defined(PATCHLEVEL)))
#    include <could_not_find_Perl_patchlevel.h>
#  endif
#  ifndef PERL_REVISION
#    define PERL_REVISION       (5)
#    define PERL_VERSION        PATCHLEVEL
#    define PERL_SUBVERSION     SUBVERSION
#  endif
#define _dpppDEC2BCD(dec) ((((dec)/100)<<8)|((((dec)%100)/10)<<4)|((dec)%10))
#define PERL_BCDVERSION ((_dpppDEC2BCD(PERL_REVISION)<<24)|(_dpppDEC2BCD(PERL_VERSION)<<12)|_dpppDEC2BCD(PERL_SUBVERSION))
#if PERL_REVISION != 5
#  error ppport.h only works with Perl version 5
#  define dTHR                           dNOOP
#  define dTHX                           dNOOP
#  define dTHXa(x)                       dNOOP
#  define pTHX                           void
#  define pTHX_
#  define aTHX
#  define aTHX_
#if (PERL_BCDVERSION < 0x5006000)
#  ifdef USE_THREADS
#    define aTHXR  thr
#    define aTHXR_ thr,
#  else
#    define aTHXR
#    define aTHXR_
#  endif
#  define dTHXR  dTHR
#  define aTHXR  aTHX
#  define aTHXR_ aTHX_
#  define dTHXR  dTHX
#  define dTHXoa(x)                      dTHXa(x)
#  include <limits.h>
#  define PERL_UCHAR_MIN ((unsigned char)0)
#  ifdef UCHAR_MAX
#    define PERL_UCHAR_MAX ((unsigned char)UCHAR_MAX)
#  else
#    ifdef MAXUCHAR
#      define PERL_UCHAR_MAX ((unsigned char)MAXUCHAR)
#    else
#      define PERL_UCHAR_MAX ((unsigned char)~(unsigned)0)
#    endif
#  endif
#  define PERL_USHORT_MIN ((unsigned short)0)
#  ifdef USHORT_MAX
#    define PERL_USHORT_MAX ((unsigned short)USHORT_MAX)
#  else
#    ifdef MAXUSHORT
#      define PERL_USHORT_MAX ((unsigned short)MAXUSHORT)
#    else
#      ifdef USHRT_MAX
#        define PERL_USHORT_MAX ((unsigned short)USHRT_MAX)
#      else
#        define PERL_USHORT_MAX ((unsigned short)~(unsigned)0)
#      endif
#    endif
#  endif
#  ifdef SHORT_MAX
#    define PERL_SHORT_MAX ((short)SHORT_MAX)
#  else
#    ifdef MAXSHORT
#      define PERL_SHORT_MAX ((short)MAXSHORT)
#    else
#      ifdef SHRT_MAX
#        define PERL_SHORT_MAX ((short)SHRT_MAX)
#      else
#        define PERL_SHORT_MAX ((short) (PERL_USHORT_MAX >> 1))
#      endif
#    endif
#  endif
#  ifdef SHORT_MIN
#    define PERL_SHORT_MIN ((short)SHORT_MIN)
#  else
#    ifdef MINSHORT
#      define PERL_SHORT_MIN ((short)MINSHORT)
#    else
#      ifdef SHRT_MIN
#        define PERL_SHORT_MIN ((short)SHRT_MIN)
#      else
#        define PERL_SHORT_MIN (-PERL_SHORT_MAX - ((3 & -1) == 3))
#      endif
#    endif
#  endif
#  ifdef UINT_MAX
#    define PERL_UINT_MAX ((unsigned int)UINT_MAX)
#  else
#    ifdef MAXUINT
#      define PERL_UINT_MAX ((unsigned int)MAXUINT)
#    else
#      define PERL_UINT_MAX (~(unsigned int)0)
#    endif
#  endif
#  define PERL_UINT_MIN ((unsigned int)0)
#  ifdef INT_MAX
#    define PERL_INT_MAX ((int)INT_MAX)
#  else
#    ifdef MAXINT
#      define PERL_INT_MAX ((int)MAXINT)
#    else
#      define PERL_INT_MAX ((int)(PERL_UINT_MAX >> 1))
#    endif
#  endif
#  ifdef INT_MIN
#    define PERL_INT_MIN ((int)INT_MIN)
#  else
#    ifdef MININT
#      define PERL_INT_MIN ((int)MININT)
#    else
#      define PERL_INT_MIN (-PERL_INT_MAX - ((3 & -1) == 3))
#    endif
#  endif
#  ifdef ULONG_MAX
#    define PERL_ULONG_MAX ((unsigned long)ULONG_MAX)
#  else
#    ifdef MAXULONG
#      define PERL_ULONG_MAX ((unsigned long)MAXULONG)
#    else
#      define PERL_ULONG_MAX (~(unsigned long)0)
#    endif
#  endif
#  define PERL_ULONG_MIN ((unsigned long)0L)
#  ifdef LONG_MAX
#    define PERL_LONG_MAX ((long)LONG_MAX)
#  else
#    ifdef MAXLONG
#      define PERL_LONG_MAX ((long)MAXLONG)
#    else
#      define PERL_LONG_MAX ((long) (PERL_ULONG_MAX >> 1))
#    endif
#  endif
#  ifdef LONG_MIN
#    define PERL_LONG_MIN ((long)LONG_MIN)
#  else
#    ifdef MINLONG
#      define PERL_LONG_MIN ((long)MINLONG)
#    else
#      define PERL_LONG_MIN (-PERL_LONG_MAX - ((3 & -1) == 3))
#    endif
#  endif
#if defined(HAS_QUAD) && (defined(convex) || defined(uts))
#  ifndef PERL_UQUAD_MAX
#    ifdef ULONGLONG_MAX
#      define PERL_UQUAD_MAX ((unsigned long long)ULONGLONG_MAX)
#    else
#      ifdef MAXULONGLONG
#        define PERL_UQUAD_MAX ((unsigned long long)MAXULONGLONG)
#      else
#        define PERL_UQUAD_MAX (~(unsigned long long)0)
#      endif
#    endif
#  endif
#  ifndef PERL_UQUAD_MIN
#    define PERL_UQUAD_MIN ((unsigned long long)0L)
#  endif
#  ifndef PERL_QUAD_MAX
#    ifdef LONGLONG_MAX
#      define PERL_QUAD_MAX ((long long)LONGLONG_MAX)
#    else
#      ifdef MAXLONGLONG
#        define PERL_QUAD_MAX ((long long)MAXLONGLONG)
#      else
#        define PERL_QUAD_MAX ((long long) (PERL_UQUAD_MAX >> 1))
#      endif
#    endif
#  endif
#  ifndef PERL_QUAD_MIN
#    ifdef LONGLONG_MIN
#      define PERL_QUAD_MIN ((long long)LONGLONG_MIN)
#    else
#      ifdef MINLONGLONG
#        define PERL_QUAD_MIN ((long long)MINLONGLONG)
#      else
#        define PERL_QUAD_MIN (-PERL_QUAD_MAX - ((3 & -1) == 3))
#      endif
#    endif
#  endif
#  ifdef cray
#  define IVTYPE                         int
#  define IV_MIN                         PERL_INT_MIN
#  define IV_MAX                         PERL_INT_MAX
#  define UV_MIN                         PERL_UINT_MIN
#  define UV_MAX                         PERL_UINT_MAX
#    ifdef INTSIZE
#  define IVSIZE                         INTSIZE
#    endif
#  else
#    if defined(convex) || defined(uts)
#  define IVTYPE                         long long
#  define IV_MIN                         PERL_QUAD_MIN
#  define IV_MAX                         PERL_QUAD_MAX
#  define UV_MIN                         PERL_UQUAD_MIN
#  define UV_MAX                         PERL_UQUAD_MAX
#      ifdef LONGLONGSIZE
#  define IVSIZE                         LONGLONGSIZE
#      endif
#    else
#  define IVTYPE                         long
#  define IV_MIN                         PERL_LONG_MIN
#  define IV_MAX                         PERL_LONG_MAX
#  define UV_MIN                         PERL_ULONG_MIN
#  define UV_MAX                         PERL_ULONG_MAX
#      ifdef LONGSIZE
#  define IVSIZE                         LONGSIZE
#      endif
#    endif
#  endif
#  define IVSIZE                         8
#  define LONGSIZE                       8
#  define PERL_QUAD_MIN                  IV_MIN
#  define PERL_QUAD_MAX                  IV_MAX
#  define PERL_UQUAD_MIN                 UV_MIN
#  define PERL_UQUAD_MAX                 UV_MAX
#  define IVTYPE                         long
#  define LONGSIZE                       4
#  define IV_MIN                         PERL_LONG_MIN
#  define IV_MAX                         PERL_LONG_MAX
#  define UV_MIN                         PERL_ULONG_MIN
#  define UV_MAX                         PERL_ULONG_MAX
#  ifdef LONGSIZE
#    define IVSIZE LONGSIZE
#  else
#    define IVSIZE 4
#  endif
#  define UVTYPE                         unsigned IVTYPE
#  define UVSIZE                         IVSIZE
#  define sv_setuv(sv, uv)               \
STMT_START  STMT_END
#  define newSVuv(uv)                    ((uv) <= IV_MAX ? newSViv((IV)uv) : newSVnv((NV)uv))
#  define sv_2uv(sv)                     ((PL_Sv = (sv)), (UV) (SvNOK(PL_Sv) ? SvNV(PL_Sv) : sv_2nv(PL_Sv)))
#  define SvUVX(sv)                      ((UV)SvIVX(sv))
#  define SvUVXx(sv)                     SvUVX(sv)
#  define SvUV(sv)                       (SvIOK(sv) ? SvUVX(sv) : sv_2uv(sv))
#  define SvUVx(sv)                      ((PL_Sv = (sv)), SvUV(PL_Sv))
#  define sv_uv(sv)                      SvUVx(sv)
#if !defined(SvUOK) && defined(SvIOK_UV)
#  define SvUOK(sv) SvIOK_UV(sv)
#  define XST_mUV(i,v)                   (ST(i) = sv_2mortal(newSVuv(v))  )
#  define XSRETURN_UV(v)                 STMT_START  STMT_END
#  define PUSHu(u)                       STMT_START  STMT_END
#  define XPUSHu(u)                      STMT_START  STMT_END
#  define memNE(s1,s2,l)                 (memcmp(s1,s2,l))
#  define memEQ(s1,s2,l)                 (!memcmp(s1,s2,l))
#  define memNE(s1,s2,l)                 (bcmp(s1,s2,l))
#  define memEQ(s1,s2,l)                 (!bcmp(s1,s2,l))
#  define memEQs(s1, l, s2)              \
(sizeof(s2)-1 == l && memEQ(s1, (s2 ""), (sizeof(s2)-1)))
#  define memNEs(s1, l, s2)              !memEQs(s1, l, s2)
#  define MoveD(s,d,n,t)                 memmove((char*)(d),(char*)(s), (n) * sizeof(t))
#  define CopyD(s,d,n,t)                 memcpy((char*)(d),(char*)(s), (n) * sizeof(t))
#  define ZeroD(d,n,t)                   memzero((char*)(d), (n) * sizeof(t))
#  define ZeroD(d,n,t)                   ((void)memzero((char*)(d), (n) * sizeof(t)), d)
#  define PoisonWith(d,n,t,b)            (void)memset((char*)(d), (U8)(b), (n) * sizeof(t))
#  define PoisonNew(d,n,t)               PoisonWith(d,n,t,0xAB)
#  define PoisonFree(d,n,t)              PoisonWith(d,n,t,0xEF)
#  define Poison(d,n,t)                  PoisonFree(d,n,t)
#  define Newx(v,n,t)                    New(0,v,n,t)
#  define Newxc(v,n,t,c)                 Newc(0,v,n,t,c)
#  define Newxz(v,n,t)                   Newz(0,v,n,t)
#  ifdef HASATTRIBUTE
#    if (defined(__GNUC__) && defined(__cplusplus)) || defined(__INTEL_COMPILER)
#      define PERL_UNUSED_DECL
#    else
#      define PERL_UNUSED_DECL __attribute__((unused))
#    endif
#  else
#    define PERL_UNUSED_DECL
#  endif
#  if defined(lint) && defined(S_SPLINT_S)
#    include <note.h>
#    define PERL_UNUSED_ARG(x) NOTE(ARGUNUSED(x))
#  else
#    define PERL_UNUSED_ARG(x) ((void)x)
#  endif
#  define PERL_UNUSED_VAR(x) ((void)x)
#  ifdef USE_ITHREADS
#    define PERL_UNUSED_CONTEXT PERL_UNUSED_ARG(my_perl)
#  else
#    define PERL_UNUSED_CONTEXT
#  endif
#  define NOOP(void)0
#  define dNOOP                          extern int Perl___notused PERL_UNUSED_DECL
#  if defined(USE_LONG_DOUBLE) && defined(HAS_LONG_DOUBLE)
#    define NVTYPE long double
#  else
#    define NVTYPE double
#  endif
typedef NVTYPE NV;
#  if (IVSIZE == PTRSIZE) && (UVSIZE == PTRSIZE)
#    define PTRV                  UV
#    define INT2PTR(any,d)        (any)(d)
#  else
#    if PTRSIZE == LONGSIZE
#      define PTRV                unsigned long
#    else
#      define PTRV                unsigned
#    endif
#    define INT2PTR(any,d)        (any)(PTRV)(d)
#  endif
#  if PTRSIZE == LONGSIZE
#    define PTR2ul(p)     (unsigned long)(p)
#  else
#    define PTR2ul(p)     INT2PTR(unsigned long,p)
#  endif
#  define PTR2nat(p)                     (PTRV)(p)
#  define NUM2PTR(any,d)                 (any)PTR2nat(d)
#  define PTR2IV(p)                      INT2PTR(IV,p)
#  define PTR2UV(p)                      INT2PTR(UV,p)
#  define PTR2NV(p)                      NUM2PTR(NV,p)
#undef START_EXTERN_C
#undef END_EXTERN_C
#undef EXTERN_C
#if defined(PERL_GCC_PEDANTIC)
#  ifndef PERL_GCC_BRACE_GROUPS_FORBIDDEN
#    define PERL_GCC_BRACE_GROUPS_FORBIDDEN
#  endif
#if defined(__GNUC__) && !defined(PERL_GCC_BRACE_GROUPS_FORBIDDEN) && !defined(__cplusplus)
#  ifndef PERL_USE_GCC_BRACE_GROUPS
#    define PERL_USE_GCC_BRACE_GROUPS
#  endif
#undef STMT_START
#undef STMT_END
#  define STMT_START    (void)(
#  define STMT_END      )
#  if defined(VOIDFLAGS) && (VOIDFLAGS) && (defined(sun) || defined(__sun__)) && !defined(__GNUC__)
#    define STMT_START  if (1)
#    define STMT_END    else (void)0
#  else
#    define STMT_START  do
#    define STMT_END    while (0)
#  endif
#  define boolSV(b)                      ((b) ? &PL_sv_yes : &PL_sv_no)
#  define DEFSV                          GvSV(PL_defgv)
#  define SAVE_DEFSV                     SAVESPTR(GvSV(PL_defgv))
#  define DEFSV_set(sv)                  (DEFSV = (sv))
#  define AvFILLp                        AvFILL
#  define ERRSV                          get_sv("@",FALSE)
#  define gv_stashpvn(str,len,create)    gv_stashpv(str,create)
#  define get_cv                         perl_get_cv
#  define get_sv                         perl_get_sv
#  define get_av                         perl_get_av
#  define get_hv                         perl_get_hv
#  define dUNDERBAR                      dNOOP
#  define UNDERBAR                       DEFSV
#  define dAX                            I32 ax = MARK - PL_stack_base + 1
#  define dITEMS                         I32 items = SP - MARK
#  define dXSTARG                        SV * targ = sv_newmortal()
#  define dAXMARK                        I32 ax = POPMARK; \
register SV ** const mark = PL_stack_base + ax++
#  define XSprePUSH                      (sp = PL_stack_base + ax - 1)
#if (PERL_BCDVERSION < 0x5005000)
#  undef XSRETURN
#  define XSRETURN(off)                                   \
STMT_START  STMT_END
#  define XSPROTO(name)                  void name(pTHX_ CV* cv)
#  define SVfARG(p)                      ((void*)(p))
#  define PERL_ABS(x)                    ((x) < 0 ? -(x) : (x))
#  define dVAR                           dNOOP
#  define SVf                            "_"
#  define UTF8_MAXBYTES                  UTF8_MAXLEN
#  define CPERLscope(x)                  x
#  define PERL_HASH(hash,str,len)        \
STMT_START  STMT_END
# ifdef PERLIO_FUNCS_CONST
#  define PERLIO_FUNCS_DECL(funcs) const PerlIO_funcs funcs
#  define PERLIO_FUNCS_CAST(funcs) (PerlIO_funcs*)(funcs)
# else
#  define PERLIO_FUNCS_DECL(funcs) PerlIO_funcs funcs
#  define PERLIO_FUNCS_CAST(funcs) (funcs)
# endif
#if (PERL_BCDVERSION < 0x5009003)
# ifdef ARGSproto
typedef OP* (CPERLscope(*Perl_ppaddr_t))(ARGSproto);
# else
typedef OP* (CPERLscope(*Perl_ppaddr_t))(pTHX);
# endif
typedef OP* (CPERLscope(*Perl_check_t)) (pTHX_ OP*);
#  define isPSXSPC(c)                    (isSPACE(c) || (c) == '\v')
#  define isBLANK(c)                     ((c) == ' ' || (c) == '\t')
#  define isALNUMC(c)                    isalnum(c)
#  define isASCII(c)                     isascii(c)
#  define isCNTRL(c)                     iscntrl(c)
#  define isGRAPH(c)                     isgraph(c)
#  define isPRINT(c)                     isprint(c)
#  define isPUNCT(c)                     ispunct(c)
#  define isXDIGIT(c)                    isxdigit(c)
# if (PERL_BCDVERSION < 0x5010000)
#  undef isPRINT
# endif
# define WIDEST_UTYPE U64TYPE
# define WIDEST_UTYPE U32
#  define isALNUMC(c)                    (isALPHA(c) || isDIGIT(c))
#  define isASCII(c)                     ((WIDEST_UTYPE) (c) <= 127)
#  define isCNTRL(c)                     ((WIDEST_UTYPE) (c) < ' ' || (c) == 127)
#  define isGRAPH(c)                     (isALNUM(c) || isPUNCT(c))
#  define isPRINT(c)                     (((c) >= 32 && (c) < 127))
#  define isPUNCT(c)                     (((c) >= 33 && (c) <= 47) || ((c) >= 58 && (c) <= 64)  || ((c) >= 91 && (c) <= 96) || ((c) >= 123 && (c) <= 126))
#  define isXDIGIT(c)                    (isDIGIT(c) || ((c) >= 'a' && (c) <= 'f') || ((c) >= 'A' && (c) <= 'F'))
#if (PERL_BCDVERSION >= 0x5008000)
#  define HeUTF8(he)                     ((HeKLEN(he) == HEf_SVKEY) ?            \
SvUTF8(HeKEY_sv(he)) :                 \
(U32)HeKUTF8(he))
#define PERL_SIGNALS_UNSAFE_FLAG 0x0001
#if (PERL_BCDVERSION < 0x5008000)
#  define D_PPP_PERL_SIGNALS_INIT   PERL_SIGNALS_UNSAFE_FLAG
#  define D_PPP_PERL_SIGNALS_INIT   0
#if defined(NEED_PL_signals)
static U32 DPPP_(my_PL_signals) = D_PPP_PERL_SIGNALS_INIT;
#elif defined(NEED_PL_signals_GLOBAL)
U32 DPPP_(my_PL_signals) = D_PPP_PERL_SIGNALS_INIT;
extern U32 DPPP_(my_PL_signals);
#define PL_signals DPPP_(my_PL_signals)
#if (PERL_BCDVERSION <= 0x5005005)
#  define PL_ppaddr                 ppaddr
#  define PL_no_modify              no_modify
#if (PERL_BCDVERSION <= 0x5004005)
#  define PL_DBsignal               DBsignal
#  define PL_DBsingle               DBsingle
#  define PL_DBsub                  DBsub
#  define PL_DBtrace                DBtrace
#  define PL_Sv                     Sv
#  define PL_bufend                 bufend
#  define PL_bufptr                 bufptr
#  define PL_compiling              compiling
#  define PL_copline                copline
#  define PL_curcop                 curcop
#  define PL_curstash               curstash
#  define PL_debstash               debstash
#  define PL_defgv                  defgv
#  define PL_diehook                diehook
#  define PL_dirty                  dirty
#  define PL_dowarn                 dowarn
#  define PL_errgv                  errgv
#  define PL_error_count            error_count
#  define PL_expect                 expect
#  define PL_hexdigit               hexdigit
#  define PL_hints                  hints
#  define PL_in_my                  in_my
#  define PL_laststatval            laststatval
#  define PL_lex_state              lex_state
#  define PL_lex_stuff              lex_stuff
#  define PL_linestr                linestr
#  define PL_na                     na
#  define PL_perl_destruct_level    perl_destruct_level
#  define PL_perldb                 perldb
#  define PL_rsfp_filters           rsfp_filters
#  define PL_rsfp                   rsfp
#  define PL_stack_base             stack_base
#  define PL_stack_sp               stack_sp
#  define PL_statcache              statcache
#  define PL_stdingv                stdingv
#  define PL_sv_arenaroot           sv_arenaroot
#  define PL_sv_no                  sv_no
#  define PL_sv_undef               sv_undef
#  define PL_sv_yes                 sv_yes
#  define PL_tainted                tainted
#  define PL_tainting               tainting
#  define PL_tokenbuf               tokenbuf
#if (PERL_BCDVERSION >= 0x5009005)
# ifdef DPPP_PL_parser_NO_DUMMY
#  define D_PPP_my_PL_parser_var(var) ((PL_parser ? PL_parser : \
(croak("panic: PL_parser == NULL in %s:%d", \
__FILE__, __LINE__), (yy_parser *) NULL))->var)
# else
#  ifdef DPPP_PL_parser_NO_DUMMY_WARNING
#   define D_PPP_parser_dummy_warning(var)
#  else
#   define D_PPP_parser_dummy_warning(var) \
warn("warning: dummy PL_" #var " used in %s:%d", __FILE__, __LINE__),
#  endif
#  define D_PPP_my_PL_parser_var(var) ((PL_parser ? PL_parser : \
(D_PPP_parser_dummy_warning(var) &DPPP_(dummy_PL_parser)))->var)
#if defined(NEED_PL_parser)
static yy_parser DPPP_(dummy_PL_parser);
#elif defined(NEED_PL_parser_GLOBAL)
yy_parser DPPP_(dummy_PL_parser);
extern yy_parser DPPP_(dummy_PL_parser);
# endif
# define PL_expect         D_PPP_my_PL_parser_var(expect)
# define PL_copline        D_PPP_my_PL_parser_var(copline)
# define PL_rsfp           D_PPP_my_PL_parser_var(rsfp)
# define PL_rsfp_filters   D_PPP_my_PL_parser_var(rsfp_filters)
# define PL_linestr        D_PPP_my_PL_parser_var(linestr)
# define PL_bufptr         D_PPP_my_PL_parser_var(bufptr)
# define PL_bufend         D_PPP_my_PL_parser_var(bufend)
# define PL_lex_state      D_PPP_my_PL_parser_var(lex_state)
# define PL_lex_stuff      D_PPP_my_PL_parser_var(lex_stuff)
# define PL_tokenbuf       D_PPP_my_PL_parser_var(tokenbuf)
# define PL_in_my          D_PPP_my_PL_parser_var(in_my)
# define PL_in_my_stash    D_PPP_my_PL_parser_var(in_my_stash)
# define PL_error_count    D_PPP_my_PL_parser_var(error_count)
# define PL_parser         ((void *) 1)
#  define mPUSHs(s)                      PUSHs(sv_2mortal(s))
#  define PUSHmortal                     PUSHs(sv_newmortal())
#  define mPUSHp(p,l)                    sv_setpvn(PUSHmortal, (p), (l))
#  define mPUSHn(n)                      sv_setnv(PUSHmortal, (NV)(n))
#  define mPUSHi(i)                      sv_setiv(PUSHmortal, (IV)(i))
#  define mPUSHu(u)                      sv_setuv(PUSHmortal, (UV)(u))
#  define mXPUSHs(s)                     XPUSHs(sv_2mortal(s))
#  define XPUSHmortal                    XPUSHs(sv_newmortal())
#  define mXPUSHp(p,l)                   STMT_START  STMT_END
#  define mXPUSHn(n)                     STMT_START  STMT_END
#  define mXPUSHi(i)                     STMT_START  STMT_END
#  define mXPUSHu(u)                     STMT_START  STMT_END
#  define call_sv                        perl_call_sv
#  define call_pv                        perl_call_pv
#  define call_argv                      perl_call_argv
#  define call_method                    perl_call_method
#  define eval_sv                        perl_eval_sv
#  define PERL_LOADMOD_DENY              0x1
#  define PERL_LOADMOD_NOIMPORT          0x2
#  define PERL_LOADMOD_IMPORT_OPS        0x4
# define G_METHOD               64
# ifdef call_sv
#  undef call_sv
# endif
# if (PERL_BCDVERSION < 0x5006000)
#  define call_sv(sv, flags)  ((flags) & G_METHOD ? perl_call_method((char *) SvPV_nolen_const(sv), \
(flags) & ~G_METHOD) : perl_call_sv(sv, flags))
# else
#  define call_sv(sv, flags)  ((flags) & G_METHOD ? Perl_call_method(aTHX_ (char *) SvPV_nolen_const(sv), \
(flags) & ~G_METHOD) : Perl_call_sv(aTHX_ sv, flags))
# endif
#if defined(NEED_eval_pv)
static SV* DPPP_(my_eval_pv)(char *p, I32 croak_on_error);
static
extern SV* DPPP_(my_eval_pv)(char *p, I32 croak_on_error);
#  undef eval_pv
#define eval_pv(a,b) DPPP_(my_eval_pv)(aTHX_ a,b)
#define Perl_eval_pv DPPP_(my_eval_pv)
#if defined(NEED_eval_pv) || defined(NEED_eval_pv_GLOBAL)
SV*
DPPP_(my_eval_pv)(char *p, I32 croak_on_error)
#if defined(NEED_vload_module)
static void DPPP_(my_vload_module)(U32 flags, SV *name, SV *ver, va_list *args);
static
extern void DPPP_(my_vload_module)(U32 flags, SV *name, SV *ver, va_list *args);
#  undef vload_module
#define vload_module(a,b,c,d) DPPP_(my_vload_module)(aTHX_ a,b,c,d)
#define Perl_vload_module DPPP_(my_vload_module)
#if defined(NEED_vload_module) || defined(NEED_vload_module_GLOBAL)
void
DPPP_(my_vload_module)(U32 flags, SV *name, SV *ver, va_list *args)
#if defined(NEED_load_module)
static void DPPP_(my_load_module)(U32 flags, SV *name, SV *ver, ...);
static
extern void DPPP_(my_load_module)(U32 flags, SV *name, SV *ver, ...);
#  undef load_module
#define load_module DPPP_(my_load_module)
#define Perl_load_module DPPP_(my_load_module)
#if defined(NEED_load_module) || defined(NEED_load_module_GLOBAL)
void
DPPP_(my_load_module)(U32 flags, SV *name, SV *ver, ...)
#  define newRV_inc(sv)                  newRV(sv)
#if defined(NEED_newRV_noinc)
static SV * DPPP_(my_newRV_noinc)(SV *sv);
static
extern SV * DPPP_(my_newRV_noinc)(SV *sv);
#  undef newRV_noinc
#define newRV_noinc(a) DPPP_(my_newRV_noinc)(aTHX_ a)
#define Perl_newRV_noinc DPPP_(my_newRV_noinc)
#if defined(NEED_newRV_noinc) || defined(NEED_newRV_noinc_GLOBAL)
SV *
DPPP_(my_newRV_noinc)(SV *sv)
#if (PERL_BCDVERSION < 0x5004063) && (PERL_BCDVERSION != 0x5004005)
#if defined(NEED_newCONSTSUB)
static void DPPP_(my_newCONSTSUB)(HV *stash, const char *name, SV *sv);
static
extern void DPPP_(my_newCONSTSUB)(HV *stash, const char *name, SV *sv);
#  undef newCONSTSUB
#define newCONSTSUB(a,b,c) DPPP_(my_newCONSTSUB)(aTHX_ a,b,c)
#define Perl_newCONSTSUB DPPP_(my_newCONSTSUB)
#if defined(NEED_newCONSTSUB) || defined(NEED_newCONSTSUB_GLOBAL)
#define D_PPP_PL_copline PL_copline
void
DPPP_(my_newCONSTSUB)(HV *stash, const char *name, SV *sv)
#if defined(MULTIPLICITY) || defined(PERL_OBJECT) || \
defined(PERL_CAPI)    || defined(PERL_IMPLICIT_CONTEXT)
#define START_MY_CXT
#if (PERL_BCDVERSION < 0x5004068)
#define dMY_CXT_SV \
SV *my_cxt_sv = get_sv(MY_CXT_KEY, FALSE)
#define dMY_CXT_SV \
SV *my_cxt_sv = *hv_fetch(PL_modglobal, MY_CXT_KEY,             \
sizeof(MY_CXT_KEY)-1, TRUE)
#define dMY_CXT \
dMY_CXT_SV;                                                     \
my_cxt_t *my_cxtp = INT2PTR(my_cxt_t*,SvUV(my_cxt_sv))
#define MY_CXT_INIT \
dMY_CXT_SV;                                                     \                    \
my_cxt_t *my_cxtp = (my_cxt_t*)SvPVX(newSV(sizeof(my_cxt_t)-1));\
Zero(my_cxtp, 1, my_cxt_t);                                     \
sv_setuv(my_cxt_sv, PTR2UV(my_cxtp))
#define MY_CXT          (*my_cxtp)
#define pMY_CXT         my_cxt_t *my_cxtp
#define pMY_CXT_        pMY_CXT,
#define _pMY_CXT        ,pMY_CXT
#define aMY_CXT         my_cxtp
#define aMY_CXT_        aMY_CXT,
#define _aMY_CXT        ,aMY_CXT
#define MY_CXT_CLONE \
dMY_CXT_SV;                                                     \
my_cxt_t *my_cxtp = (my_cxt_t*)SvPVX(newSV(sizeof(my_cxt_t)-1));\
Copy(INT2PTR(my_cxt_t*, SvUV(my_cxt_sv)), my_cxtp, 1, my_cxt_t);\
sv_setuv(my_cxt_sv, PTR2UV(my_cxtp))
#define START_MY_CXT    static my_cxt_t my_cxt;
#define dMY_CXT_SV      dNOOP
#define dMY_CXT         dNOOP
#define MY_CXT_INIT     NOOP
#define MY_CXT          my_cxt
#define pMY_CXT         void
#define pMY_CXT_
#define _pMY_CXT
#define aMY_CXT
#define aMY_CXT_
#define _aMY_CXT
#define MY_CXT_CLONE    NOOP
#  if IVSIZE == LONGSIZE
#    define     IVdf      "ld"
#    define     UVuf      "lu"
#    define     UVof      "lo"
#    define     UVxf      "lx"
#    define     UVXf      "lX"
#  elif IVSIZE == INTSIZE
#    define   IVdf      "d"
#    define   UVuf      "u"
#    define   UVof      "o"
#    define   UVxf      "x"
#    define   UVXf      "X"
#  else
#    error "cannot define IV/UV formats"
#  endif
#  if defined(USE_LONG_DOUBLE) && defined(HAS_LONG_DOUBLE) && \
defined(PERL_PRIfldbl) && (PERL_BCDVERSION != 0x5006000)
#    define NVef          PERL_PRIeldbl
#    define NVff          PERL_PRIfldbl
#    define NVgf          PERL_PRIgldbl
#  else
#    define NVef          "e"
#    define NVff          "f"
#    define NVgf          "g"
#  endif
#  ifdef PERL_USE_GCC_BRACE_GROUPS
#    define SvREFCNT_inc(sv)            \
()
#  else
#    define SvREFCNT_inc(sv)    \
((PL_Sv=(SV*)(sv)) ? (++(SvREFCNT(PL_Sv)),PL_Sv) : NULL)
#  endif
#  ifdef PERL_USE_GCC_BRACE_GROUPS
#    define SvREFCNT_inc_simple(sv)     \
()
#  else
#    define SvREFCNT_inc_simple(sv) \
((sv) ? (SvREFCNT(sv)++,(SV*)(sv)) : NULL)
#  endif
#  ifdef PERL_USE_GCC_BRACE_GROUPS
#    define SvREFCNT_inc_NN(sv)         \
()
#  else
#    define SvREFCNT_inc_NN(sv) \
(PL_Sv=(SV*)(sv),++(SvREFCNT(PL_Sv)),PL_Sv)
#  endif
#  ifdef PERL_USE_GCC_BRACE_GROUPS
#    define SvREFCNT_inc_void(sv)               \
()
#  else
#    define SvREFCNT_inc_void(sv) \
(void)((PL_Sv=(SV*)(sv)) ? ++(SvREFCNT(PL_Sv)) : 0)
#  endif
#  define SvREFCNT_inc_simple_void(sv)   STMT_START  STMT_END
#  define SvREFCNT_inc_simple_NN(sv)     (++SvREFCNT(sv), (SV*)(sv))
#  define SvREFCNT_inc_void_NN(sv)       (void)(++SvREFCNT((SV*)(sv)))
#  define SvREFCNT_inc_simple_void_NN(sv) (void)(++SvREFCNT((SV*)(sv)))
#if defined(NEED_newSV_type)
static SV* DPPP_(my_newSV_type)(pTHX_ svtype const t);
static
extern SV* DPPP_(my_newSV_type)(pTHX_ svtype const t);
#  undef newSV_type
#define newSV_type(a) DPPP_(my_newSV_type)(aTHX_ a)
#define Perl_newSV_type DPPP_(my_newSV_type)
#if defined(NEED_newSV_type) || defined(NEED_newSV_type_GLOBAL)
SV*
DPPP_(my_newSV_type)(pTHX_ svtype const t)
#if (PERL_BCDVERSION < 0x5006000)
# define D_PPP_CONSTPV_ARG(x)  ((char *) (x))
# define D_PPP_CONSTPV_ARG(x)  (x)
#  define newSVpvn(data,len)             ((data)                                              \
? ((len) ? newSVpv((data), (len)) : newSVpv("", 0)) \
: newSV(0))
#  define newSVpvn_utf8(s, len, u)       newSVpvn_flags((s), (len), (u) ? SVf_UTF8 : 0)
#  define SVf_UTF8                       0
#if defined(NEED_newSVpvn_flags)
static SV * DPPP_(my_newSVpvn_flags)(pTHX_ const char *s, STRLEN len, U32 flags);
static
extern SV * DPPP_(my_newSVpvn_flags)(pTHX_ const char *s, STRLEN len, U32 flags);
#  undef newSVpvn_flags
#define newSVpvn_flags(a,b,c) DPPP_(my_newSVpvn_flags)(aTHX_ a,b,c)
#define Perl_newSVpvn_flags DPPP_(my_newSVpvn_flags)
#if defined(NEED_newSVpvn_flags) || defined(NEED_newSVpvn_flags_GLOBAL)
SV *
DPPP_(my_newSVpvn_flags)(pTHX_ const char *s, STRLEN len, U32 flags)
#if !defined(NEED_sv_2pv_flags) && defined(NEED_sv_2pv_nolen)
#  define NEED_sv_2pv_flags
#if !defined(NEED_sv_2pv_flags_GLOBAL) && defined(NEED_sv_2pv_nolen_GLOBAL)
#  define NEED_sv_2pv_flags_GLOBAL
#  define sv_2pv_nolen(sv)               SvPV_nolen(sv)
#if (PERL_BCDVERSION < 0x5007000)
#if defined(NEED_sv_2pvbyte)
static char * DPPP_(my_sv_2pvbyte)(pTHX_ SV *sv, STRLEN *lp);
static
extern char * DPPP_(my_sv_2pvbyte)(pTHX_ SV *sv, STRLEN *lp);
#  undef sv_2pvbyte
#define sv_2pvbyte(a,b) DPPP_(my_sv_2pvbyte)(aTHX_ a,b)
#define Perl_sv_2pvbyte DPPP_(my_sv_2pvbyte)
#if defined(NEED_sv_2pvbyte) || defined(NEED_sv_2pvbyte_GLOBAL)
char *
DPPP_(my_sv_2pvbyte)(pTHX_ SV *sv, STRLEN *lp)
#undef SvPVbyte
#define SvPVbyte(sv, lp)                                                \
((SvFLAGS(sv) & (SVf_POK|SVf_UTF8)) == (SVf_POK)                \
? ((lp = SvCUR(sv)), SvPVX(sv)) : sv_2pvbyte(sv, &lp))
#  define SvPVbyte          SvPV
#  define sv_2pvbyte        sv_2pv
#  define sv_2pvbyte_nolen(sv)           sv_2pv_nolen(sv)
#  define SV_IMMEDIATE_UNREF             0
#  define SV_GMAGIC                      0
#  define SV_COW_DROP_PV                 0
#  define SV_UTF8_NO_ENCODING            0
#  define SV_NOSTEAL                     0
#  define SV_CONST_RETURN                0
#  define SV_MUTABLE_RETURN              0
#  define SV_SMAGIC                      0
#  define SV_HAS_TRAILING_NUL            0
#  define SV_COW_SHARED_HASH_KEYS        0
#if (PERL_BCDVERSION < 0x5007002)
#if defined(NEED_sv_2pv_flags)
static char * DPPP_(my_sv_2pv_flags)(pTHX_ SV *sv, STRLEN *lp, I32 flags);
static
extern char * DPPP_(my_sv_2pv_flags)(pTHX_ SV *sv, STRLEN *lp, I32 flags);
#  undef sv_2pv_flags
#define sv_2pv_flags(a,b,c) DPPP_(my_sv_2pv_flags)(aTHX_ a,b,c)
#define Perl_sv_2pv_flags DPPP_(my_sv_2pv_flags)
#if defined(NEED_sv_2pv_flags) || defined(NEED_sv_2pv_flags_GLOBAL)
char *
DPPP_(my_sv_2pv_flags)(pTHX_ SV *sv, STRLEN *lp, I32 flags)
#if defined(NEED_sv_pvn_force_flags)
static char * DPPP_(my_sv_pvn_force_flags)(pTHX_ SV *sv, STRLEN *lp, I32 flags);
static
extern char * DPPP_(my_sv_pvn_force_flags)(pTHX_ SV *sv, STRLEN *lp, I32 flags);
#  undef sv_pvn_force_flags
#define sv_pvn_force_flags(a,b,c) DPPP_(my_sv_pvn_force_flags)(aTHX_ a,b,c)
#define Perl_sv_pvn_force_flags DPPP_(my_sv_pvn_force_flags)
#if defined(NEED_sv_pvn_force_flags) || defined(NEED_sv_pvn_force_flags_GLOBAL)
char *
DPPP_(my_sv_pvn_force_flags)(pTHX_ SV *sv, STRLEN *lp, I32 flags)
#if (PERL_BCDVERSION < 0x5008008) || ( (PERL_BCDVERSION >= 0x5009000) && (PERL_BCDVERSION < 0x5009003) )
# define DPPP_SVPV_NOLEN_LP_ARG &PL_na
# define DPPP_SVPV_NOLEN_LP_ARG 0
#  define SvPV_const(sv, lp)             SvPV_flags_const(sv, lp, SV_GMAGIC)
#  define SvPV_mutable(sv, lp)           SvPV_flags_mutable(sv, lp, SV_GMAGIC)
#  define SvPV_flags(sv, lp, flags)      \
((SvFLAGS(sv) & (SVf_POK)) == SVf_POK \
? ((lp = SvCUR(sv)), SvPVX(sv)) : sv_2pv_flags(sv, &lp, flags))
#  define SvPV_flags_const(sv, lp, flags) \
((SvFLAGS(sv) & (SVf_POK)) == SVf_POK \
? ((lp = SvCUR(sv)), SvPVX_const(sv)) : \
(const char*) sv_2pv_flags(sv, &lp, flags|SV_CONST_RETURN))
#  define SvPV_flags_const_nolen(sv, flags) \
((SvFLAGS(sv) & (SVf_POK)) == SVf_POK \
? SvPVX_const(sv) : \
(const char*) sv_2pv_flags(sv, DPPP_SVPV_NOLEN_LP_ARG, flags|SV_CONST_RETURN))
#  define SvPV_flags_mutable(sv, lp, flags) \
((SvFLAGS(sv) & (SVf_POK)) == SVf_POK \
? ((lp = SvCUR(sv)), SvPVX_mutable(sv)) : \
sv_2pv_flags(sv, &lp, flags|SV_MUTABLE_RETURN))
#  define SvPV_force(sv, lp)             SvPV_force_flags(sv, lp, SV_GMAGIC)
#  define SvPV_force_nolen(sv)           SvPV_force_flags_nolen(sv, SV_GMAGIC)
#  define SvPV_force_mutable(sv, lp)     SvPV_force_flags_mutable(sv, lp, SV_GMAGIC)
#  define SvPV_force_nomg(sv, lp)        SvPV_force_flags(sv, lp, 0)
#  define SvPV_force_nomg_nolen(sv)      SvPV_force_flags_nolen(sv, 0)
#  define SvPV_force_flags(sv, lp, flags) \
((SvFLAGS(sv) & (SVf_POK|SVf_THINKFIRST)) == SVf_POK \
? ((lp = SvCUR(sv)), SvPVX(sv)) : sv_pvn_force_flags(sv, &lp, flags))
#  define SvPV_force_flags_nolen(sv, flags) \
((SvFLAGS(sv) & (SVf_POK|SVf_THINKFIRST)) == SVf_POK \
? SvPVX(sv) : sv_pvn_force_flags(sv, DPPP_SVPV_NOLEN_LP_ARG, flags))
#  define SvPV_force_flags_mutable(sv, lp, flags) \
((SvFLAGS(sv) & (SVf_POK|SVf_THINKFIRST)) == SVf_POK \
? ((lp = SvCUR(sv)), SvPVX_mutable(sv)) \
: sv_pvn_force_flags(sv, &lp, flags|SV_MUTABLE_RETURN))
#  define SvPV_nolen(sv)                 \
((SvFLAGS(sv) & (SVf_POK)) == SVf_POK \
? SvPVX(sv) : sv_2pv_flags(sv, DPPP_SVPV_NOLEN_LP_ARG, SV_GMAGIC))
#  define SvPV_nolen_const(sv)           \
((SvFLAGS(sv) & (SVf_POK)) == SVf_POK \
? SvPVX_const(sv) : sv_2pv_flags(sv, DPPP_SVPV_NOLEN_LP_ARG, SV_GMAGIC|SV_CONST_RETURN))
#  define SvPV_nomg(sv, lp)              SvPV_flags(sv, lp, 0)
#  define SvPV_nomg_const(sv, lp)        SvPV_flags_const(sv, lp, 0)
#  define SvPV_nomg_const_nolen(sv)      SvPV_flags_const_nolen(sv, 0)
#  define SvPV_nomg_nolen(sv)            ((SvFLAGS(sv) & (SVf_POK)) == SVf_POK \
? SvPVX(sv) : sv_2pv_flags(sv, DPPP_SVPV_NOLEN_LP_ARG, 0))
#  define SvPV_renew(sv,n)               STMT_START  STMT_END
#  define SvMAGIC_set(sv, val)           \
STMT_START  STMT_END
#if (PERL_BCDVERSION < 0x5009003)
#  define SvPVX_const(sv)                ((const char*) (0 + SvPVX(sv)))
#  define SvPVX_mutable(sv)              (0 + SvPVX(sv))
#  define SvRV_set(sv, val)              \
STMT_START  STMT_END
#  define SvPVX_const(sv)                ((const char*)((sv)->sv_u.svu_pv))
#  define SvPVX_mutable(sv)              ((sv)->sv_u.svu_pv)
#  define SvRV_set(sv, val)              \
STMT_START  STMT_END
#  define SvSTASH_set(sv, val)           \
STMT_START  STMT_END
#if (PERL_BCDVERSION < 0x5004000)
#  define SvUV_set(sv, val)              \
STMT_START  STMT_END
#  define SvUV_set(sv, val)              \
STMT_START  STMT_END
#if (PERL_BCDVERSION >= 0x5004000) && !defined(vnewSVpvf)
#if defined(NEED_vnewSVpvf)
static SV * DPPP_(my_vnewSVpvf)(pTHX_ const char *pat, va_list *args);
static
extern SV * DPPP_(my_vnewSVpvf)(pTHX_ const char *pat, va_list *args);
#  undef vnewSVpvf
#define vnewSVpvf(a,b) DPPP_(my_vnewSVpvf)(aTHX_ a,b)
#define Perl_vnewSVpvf DPPP_(my_vnewSVpvf)
#if defined(NEED_vnewSVpvf) || defined(NEED_vnewSVpvf_GLOBAL)
SV *
DPPP_(my_vnewSVpvf)(pTHX_ const char *pat, va_list *args)
#if (PERL_BCDVERSION >= 0x5004000) && !defined(sv_vcatpvf)
#  define sv_vcatpvf(sv, pat, args)  sv_vcatpvfn(sv, pat, strlen(pat), args, Null(SV**), 0, Null(bool*))
#if (PERL_BCDVERSION >= 0x5004000) && !defined(sv_vsetpvf)
#  define sv_vsetpvf(sv, pat, args)  sv_vsetpvfn(sv, pat, strlen(pat), args, Null(SV**), 0, Null(bool*))
#if (PERL_BCDVERSION >= 0x5004000) && !defined(sv_catpvf_mg)
#if defined(NEED_sv_catpvf_mg)
static void DPPP_(my_sv_catpvf_mg)(pTHX_ SV *sv, const char *pat, ...);
static
extern void DPPP_(my_sv_catpvf_mg)(pTHX_ SV *sv, const char *pat, ...);
#define Perl_sv_catpvf_mg DPPP_(my_sv_catpvf_mg)
#if defined(NEED_sv_catpvf_mg) || defined(NEED_sv_catpvf_mg_GLOBAL)
void
DPPP_(my_sv_catpvf_mg)(pTHX_ SV *sv, const char *pat, ...)
#if (PERL_BCDVERSION >= 0x5004000) && !defined(sv_catpvf_mg_nocontext)
#if defined(NEED_sv_catpvf_mg_nocontext)
static void DPPP_(my_sv_catpvf_mg_nocontext)(SV *sv, const char *pat, ...);
static
extern void DPPP_(my_sv_catpvf_mg_nocontext)(SV *sv, const char *pat, ...);
#define sv_catpvf_mg_nocontext DPPP_(my_sv_catpvf_mg_nocontext)
#define Perl_sv_catpvf_mg_nocontext DPPP_(my_sv_catpvf_mg_nocontext)
#if defined(NEED_sv_catpvf_mg_nocontext) || defined(NEED_sv_catpvf_mg_nocontext_GLOBAL)
void
DPPP_(my_sv_catpvf_mg_nocontext)(SV *sv, const char *pat, ...)
#  ifdef PERL_IMPLICIT_CONTEXT
#    define sv_catpvf_mg   Perl_sv_catpvf_mg_nocontext
#  else
#    define sv_catpvf_mg   Perl_sv_catpvf_mg
#  endif
#if (PERL_BCDVERSION >= 0x5004000) && !defined(sv_vcatpvf_mg)
#  define sv_vcatpvf_mg(sv, pat, args)                                     \
STMT_START  STMT_END
#if (PERL_BCDVERSION >= 0x5004000) && !defined(sv_setpvf_mg)
#if defined(NEED_sv_setpvf_mg)
static void DPPP_(my_sv_setpvf_mg)(pTHX_ SV *sv, const char *pat, ...);
static
extern void DPPP_(my_sv_setpvf_mg)(pTHX_ SV *sv, const char *pat, ...);
#define Perl_sv_setpvf_mg DPPP_(my_sv_setpvf_mg)
#if defined(NEED_sv_setpvf_mg) || defined(NEED_sv_setpvf_mg_GLOBAL)
void
DPPP_(my_sv_setpvf_mg)(pTHX_ SV *sv, const char *pat, ...)
#if (PERL_BCDVERSION >= 0x5004000) && !defined(sv_setpvf_mg_nocontext)
#if defined(NEED_sv_setpvf_mg_nocontext)
static void DPPP_(my_sv_setpvf_mg_nocontext)(SV *sv, const char *pat, ...);
static
extern void DPPP_(my_sv_setpvf_mg_nocontext)(SV *sv, const char *pat, ...);
#define sv_setpvf_mg_nocontext DPPP_(my_sv_setpvf_mg_nocontext)
#define Perl_sv_setpvf_mg_nocontext DPPP_(my_sv_setpvf_mg_nocontext)
#if defined(NEED_sv_setpvf_mg_nocontext) || defined(NEED_sv_setpvf_mg_nocontext_GLOBAL)
void
DPPP_(my_sv_setpvf_mg_nocontext)(SV *sv, const char *pat, ...)
#  ifdef PERL_IMPLICIT_CONTEXT
#    define sv_setpvf_mg   Perl_sv_setpvf_mg_nocontext
#  else
#    define sv_setpvf_mg   Perl_sv_setpvf_mg
#  endif
#if (PERL_BCDVERSION >= 0x5004000) && !defined(sv_vsetpvf_mg)
#  define sv_vsetpvf_mg(sv, pat, args)                                     \
STMT_START  STMT_END
#if defined(NEED_newSVpvn_share)
static SV * DPPP_(my_newSVpvn_share)(pTHX_ const char *src, I32 len, U32 hash);
static
extern SV * DPPP_(my_newSVpvn_share)(pTHX_ const char *src, I32 len, U32 hash);
#  undef newSVpvn_share
#define newSVpvn_share(a,b,c) DPPP_(my_newSVpvn_share)(aTHX_ a,b,c)
#define Perl_newSVpvn_share DPPP_(my_newSVpvn_share)
#if defined(NEED_newSVpvn_share) || defined(NEED_newSVpvn_share_GLOBAL)
SV *
DPPP_(my_newSVpvn_share)(pTHX_ const char *src, I32 len, U32 hash)
#  define SvSHARED_HASH(sv)              (0 + SvUVX(sv))
#  define HvNAME_get(hv)                 HvNAME(hv)
#  define HvNAMELEN_get(hv)              (HvNAME_get(hv) ? (I32)strlen(HvNAME_get(hv)) : 0)
#  define GvSVn(gv)                      GvSV(gv)
#  define isGV_with_GP(gv)               isGV(gv)
#  define gv_fetchpvn_flags(name, len, flags, svt) gv_fetchpv(name, flags, svt)
#  define gv_fetchsv(name, flags, svt)   gv_fetchpv(SvPV_nolen_const(name), flags, svt)
#  define get_cvn_flags(name, namelen, flags) get_cv(name, flags)
#  define WARN_ALL                       0
#  define WARN_CLOSURE                   1
#  define WARN_DEPRECATED                2
#  define WARN_EXITING                   3
#  define WARN_GLOB                      4
#  define WARN_IO                        5
#  define WARN_CLOSED                    6
#  define WARN_EXEC                      7
#  define WARN_LAYER                     8
#  define WARN_NEWLINE                   9
#  define WARN_PIPE                      10
#  define WARN_UNOPENED                  11
#  define WARN_MISC                      12
#  define WARN_NUMERIC                   13
#  define WARN_ONCE                      14
#  define WARN_OVERFLOW                  15
#  define WARN_PACK                      16
#  define WARN_PORTABLE                  17
#  define WARN_RECURSION                 18
#  define WARN_REDEFINE                  19
#  define WARN_REGEXP                    20
#  define WARN_SEVERE                    21
#  define WARN_DEBUGGING                 22
#  define WARN_INPLACE                   23
#  define WARN_INTERNAL                  24
#  define WARN_MALLOC                    25
#  define WARN_SIGNAL                    26
#  define WARN_SUBSTR                    27
#  define WARN_SYNTAX                    28
#  define WARN_AMBIGUOUS                 29
#  define WARN_BAREWORD                  30
#  define WARN_DIGIT                     31
#  define WARN_PARENTHESIS               32
#  define WARN_PRECEDENCE                33
#  define WARN_PRINTF                    34
#  define WARN_PROTOTYPE                 35
#  define WARN_QW                        36
#  define WARN_RESERVED                  37
#  define WARN_SEMICOLON                 38
#  define WARN_TAINT                     39
#  define WARN_THREADS                   40
#  define WARN_UNINITIALIZED             41
#  define WARN_UNPACK                    42
#  define WARN_UNTIE                     43
#  define WARN_UTF8                      44
#  define WARN_VOID                      45
#  define WARN_ASSERTIONS                46
#  define packWARN(a)                    (a)
#  ifdef G_WARN_ON
#    define  ckWARN(a)                  (PL_dowarn & G_WARN_ON)
#  else
#    define  ckWARN(a)                  PL_dowarn
#  endif
#if (PERL_BCDVERSION >= 0x5004000) && !defined(warner)
#if defined(NEED_warner)
static void DPPP_(my_warner)(U32 err, const char *pat, ...);
static
extern void DPPP_(my_warner)(U32 err, const char *pat, ...);
#define Perl_warner DPPP_(my_warner)
#if defined(NEED_warner) || defined(NEED_warner_GLOBAL)
void
DPPP_(my_warner)(U32 err, const char *pat, ...)
#define warner  Perl_warner
#define Perl_warner_nocontext  Perl_warner
#  define STR_WITH_LEN(s)                (s ""), (sizeof(s)-1)
#  define newSVpvs(str)                  newSVpvn(str "", sizeof(str) - 1)
#  define newSVpvs_flags(str, flags)     newSVpvn_flags(str "", sizeof(str) - 1, flags)
#  define newSVpvs_share(str)            newSVpvn_share(str "", sizeof(str) - 1, 0)
#  define sv_catpvs(sv, str)             sv_catpvn(sv, str "", sizeof(str) - 1)
#  define sv_setpvs(sv, str)             sv_setpvn(sv, str "", sizeof(str) - 1)
#  define hv_fetchs(hv, key, lval)       hv_fetch(hv, key "", sizeof(key) - 1, lval)
#  define hv_stores(hv, key, val)        hv_store(hv, key "", sizeof(key) - 1, val, 0)
#  define gv_fetchpvs(name, flags, svt)  gv_fetchpvn_flags(name "", sizeof(name) - 1, flags, svt)
#  define gv_stashpvs(name, flags)       gv_stashpvn(name "", sizeof(name) - 1, flags)
#  define get_cvs(name, flags)           get_cvn_flags(name "", sizeof(name)-1, flags)
#  define SvGETMAGIC(x)                  STMT_START  STMT_END
#  define HEf_SVKEY                      -2
#if defined(__GNUC__) && !defined(PERL_GCC_BRACE_GROUPS_FORBIDDEN)
#  define MUTABLE_PTR(p) ()
#  define MUTABLE_PTR(p) ((void *) (p))
#define MUTABLE_SV(p)   ((SV *)MUTABLE_PTR(p))
#  define PERL_MAGIC_sv                  '\0'
#  define PERL_MAGIC_overload            'A'
#  define PERL_MAGIC_overload_elem       'a'
#  define PERL_MAGIC_overload_table      'c'
#  define PERL_MAGIC_bm                  'B'
#  define PERL_MAGIC_regdata             'D'
#  define PERL_MAGIC_regdatum            'd'
#  define PERL_MAGIC_env                 'E'
#  define PERL_MAGIC_envelem             'e'
#  define PERL_MAGIC_fm                  'f'
#  define PERL_MAGIC_regex_global        'g'
#  define PERL_MAGIC_isa                 'I'
#  define PERL_MAGIC_isaelem             'i'
#  define PERL_MAGIC_nkeys               'k'
#  define PERL_MAGIC_dbfile              'L'
#  define PERL_MAGIC_dbline              'l'
#  define PERL_MAGIC_mutex               'm'
#  define PERL_MAGIC_shared              'N'
#  define PERL_MAGIC_shared_scalar       'n'
#  define PERL_MAGIC_collxfrm            'o'
#  define PERL_MAGIC_tied                'P'
#  define PERL_MAGIC_tiedelem            'p'
#  define PERL_MAGIC_tiedscalar          'q'
#  define PERL_MAGIC_qr                  'r'
#  define PERL_MAGIC_sig                 'S'
#  define PERL_MAGIC_sigelem             's'
#  define PERL_MAGIC_taint               't'
#  define PERL_MAGIC_uvar                'U'
#  define PERL_MAGIC_uvar_elem           'u'
#  define PERL_MAGIC_vstring             'V'
#  define PERL_MAGIC_vec                 'v'
#  define PERL_MAGIC_utf8                'w'
#  define PERL_MAGIC_substr              'x'
#  define PERL_MAGIC_defelem             'y'
#  define PERL_MAGIC_glob                '*'
#  define PERL_MAGIC_arylen              '#'
#  define PERL_MAGIC_pos                 '.'
#  define PERL_MAGIC_backref             '<'
#  define PERL_MAGIC_ext                 '~'
#  define sv_catpvn_nomg                 sv_catpvn
#  define sv_catsv_nomg                  sv_catsv
#  define sv_setsv_nomg                  sv_setsv
#  define sv_pvn_nomg                    sv_pvn
#  define SvIV_nomg                      SvIV
#  define SvUV_nomg                      SvUV
#  define sv_catpv_mg(sv, ptr)          \
STMT_START  STMT_END
#  define sv_catpvn_mg(sv, ptr, len)    \
STMT_START  STMT_END
#  define sv_catsv_mg(dsv, ssv)         \
STMT_START  STMT_END
#  define sv_setiv_mg(sv, i)            \
STMT_START  STMT_END
#  define sv_setnv_mg(sv, num)          \
STMT_START  STMT_END
#  define sv_setpv_mg(sv, ptr)          \
STMT_START  STMT_END
#  define sv_setpvn_mg(sv, ptr, len)    \
STMT_START  STMT_END
#  define sv_setsv_mg(dsv, ssv)         \
STMT_START  STMT_END
#  define sv_setuv_mg(sv, i)            \
STMT_START  STMT_END
#  define sv_usepvn_mg(sv, ptr, len)    \
STMT_START  STMT_END
#  define SvVSTRING_mg(sv)               (SvMAGICAL(sv) ? mg_find(sv, PERL_MAGIC_vstring) : NULL)
#if (PERL_BCDVERSION < 0x5004000)
#elif (PERL_BCDVERSION < 0x5008000)
#  define sv_magic_portable(sv, obj, how, name, namlen)     \
STMT_START  STMT_END
#  define sv_magic_portable(a, b, c, d, e)  sv_magic(a, b, c, d, e)
#if !defined(mg_findext)
#if defined(NEED_mg_findext)
static MAGIC * DPPP_(my_mg_findext)(pTHX_ SV * sv, int type, const MGVTBL *vtbl);
static
extern MAGIC * DPPP_(my_mg_findext)(pTHX_ SV * sv, int type, const MGVTBL *vtbl);
#  undef mg_findext
#define mg_findext(a,b,c) DPPP_(my_mg_findext)(aTHX_ a,b,c)
#define Perl_mg_findext DPPP_(my_mg_findext)
#if defined(NEED_mg_findext) || defined(NEED_mg_findext_GLOBAL)
MAGIC *
DPPP_(my_mg_findext)(pTHX_ SV * sv, int type, const MGVTBL *vtbl)
#if !defined(sv_unmagicext)
#if defined(NEED_sv_unmagicext)
static int DPPP_(my_sv_unmagicext)(pTHX_ SV * const sv, const int type, MGVTBL * vtbl);
static
extern int DPPP_(my_sv_unmagicext)(pTHX_ SV * const sv, const int type, MGVTBL * vtbl);
#  undef sv_unmagicext
#define sv_unmagicext(a,b,c) DPPP_(my_sv_unmagicext)(aTHX_ a,b,c)
#define Perl_sv_unmagicext DPPP_(my_sv_unmagicext)
#if defined(NEED_sv_unmagicext) || defined(NEED_sv_unmagicext_GLOBAL)
int
DPPP_(my_sv_unmagicext)(pTHX_ SV *const sv, const int type, MGVTBL *vtbl)
#  define CopFILE(c)                     ((c)->cop_file)
#  define CopFILEGV(c)                   (CopFILE(c) ? gv_fetchfile(CopFILE(c)) : Nullgv)
#  define CopFILE_set(c,pv)              ((c)->cop_file = savepv(pv))
#  define CopFILESV(c)                   (CopFILE(c) ? GvSV(gv_fetchfile(CopFILE(c))) : Nullsv)
#  define CopFILEAV(c)                   (CopFILE(c) ? GvAV(gv_fetchfile(CopFILE(c))) : Nullav)
#  define CopSTASHPV(c)                  ((c)->cop_stashpv)
#  define CopSTASHPV_set(c,pv)           ((c)->cop_stashpv = ((pv) ? savepv(pv) : Nullch))
#  define CopSTASH(c)                    (CopSTASHPV(c) ? gv_stashpv(CopSTASHPV(c),GV_ADD) : Nullhv)
#  define CopSTASH_set(c,hv)             CopSTASHPV_set(c, (hv) ? HvNAME(hv) : Nullch)
#  define CopSTASH_eq(c,hv)              ((hv) && (CopSTASHPV(c) == HvNAME(hv) \
|| (CopSTASHPV(c) && HvNAME(hv) \
&& strEQ(CopSTASHPV(c), HvNAME(hv)))))
#  define CopFILEGV(c)                   ((c)->cop_filegv)
#  define CopFILEGV_set(c,gv)            ((c)->cop_filegv = (GV*)SvREFCNT_inc(gv))
#  define CopFILE_set(c,pv)              CopFILEGV_set((c), gv_fetchfile(pv))
#  define CopFILESV(c)                   (CopFILEGV(c) ? GvSV(CopFILEGV(c)) : Nullsv)
#  define CopFILEAV(c)                   (CopFILEGV(c) ? GvAV(CopFILEGV(c)) : Nullav)
#  define CopFILE(c)                     (CopFILESV(c) ? SvPVX(CopFILESV(c)) : Nullch)
#  define CopSTASH(c)                    ((c)->cop_stash)
#  define CopSTASH_set(c,hv)             ((c)->cop_stash = (hv))
#  define CopSTASHPV(c)                  (CopSTASH(c) ? HvNAME(CopSTASH(c)) : Nullch)
#  define CopSTASHPV_set(c,pv)           CopSTASH_set((c), gv_stashpv(pv,GV_ADD))
#  define CopSTASH_eq(c,hv)              (CopSTASH(c) == (hv))
#if (PERL_BCDVERSION >= 0x5006000)
# if defined(NEED_caller_cx) || defined(NEED_caller_cx_GLOBAL)
static I32
DPPP_dopoptosub_at(const PERL_CONTEXT *cxstk, I32 startingblock)
# endif
# if defined(NEED_caller_cx)
static const PERL_CONTEXT * DPPP_(my_caller_cx)(pTHX_ I32 count, const PERL_CONTEXT **dbcxp);
static
extern const PERL_CONTEXT * DPPP_(my_caller_cx)(pTHX_ I32 count, const PERL_CONTEXT **dbcxp);
#  undef caller_cx
#define caller_cx(a,b) DPPP_(my_caller_cx)(aTHX_ a,b)
#define Perl_caller_cx DPPP_(my_caller_cx)
#if defined(NEED_caller_cx) || defined(NEED_caller_cx_GLOBAL)
const PERL_CONTEXT *
DPPP_(my_caller_cx)(pTHX_ I32 count, const PERL_CONTEXT **dbcxp)
# endif
#  define IN_PERL_COMPILETIME            (PL_curcop == &PL_compiling)
#  define IN_LOCALE_RUNTIME              (PL_curcop->op_private & HINT_LOCALE)
#  define IN_LOCALE_COMPILETIME          (PL_hints & HINT_LOCALE)
#  define IN_LOCALE                      (IN_PERL_COMPILETIME ? IN_LOCALE_COMPILETIME : IN_LOCALE_RUNTIME)
#  define IS_NUMBER_IN_UV                0x01
#  define IS_NUMBER_GREATER_THAN_UV_MAX  0x02
#  define IS_NUMBER_NOT_INT              0x04
#  define IS_NUMBER_NEG                  0x08
#  define IS_NUMBER_INFINITY             0x10
#  define IS_NUMBER_NAN                  0x20
#  define GROK_NUMERIC_RADIX(sp, send)   grok_numeric_radix(sp, send)
#  define PERL_SCAN_GREATER_THAN_UV_MAX  0x02
#  define PERL_SCAN_SILENT_ILLDIGIT      0x04
#  define PERL_SCAN_ALLOW_UNDERSCORES    0x01
#  define PERL_SCAN_DISALLOW_PREFIX      0x02
#if defined(NEED_grok_numeric_radix)
static bool DPPP_(my_grok_numeric_radix)(pTHX_ const char ** sp, const char * send);
static
extern bool DPPP_(my_grok_numeric_radix)(pTHX_ const char ** sp, const char * send);
#  undef grok_numeric_radix
#define grok_numeric_radix(a,b) DPPP_(my_grok_numeric_radix)(aTHX_ a,b)
#define Perl_grok_numeric_radix DPPP_(my_grok_numeric_radix)
#if defined(NEED_grok_numeric_radix) || defined(NEED_grok_numeric_radix_GLOBAL)
bool
DPPP_(my_grok_numeric_radix)(pTHX_ const char **sp, const char *send)
#if defined(NEED_grok_number)
static int DPPP_(my_grok_number)(pTHX_ const char * pv, STRLEN len, UV * valuep);
static
extern int DPPP_(my_grok_number)(pTHX_ const char * pv, STRLEN len, UV * valuep);
#  undef grok_number
#define grok_number(a,b,c) DPPP_(my_grok_number)(aTHX_ a,b,c)
#define Perl_grok_number DPPP_(my_grok_number)
#if defined(NEED_grok_number) || defined(NEED_grok_number_GLOBAL)
int
DPPP_(my_grok_number)(pTHX_ const char *pv, STRLEN len, UV *valuep)
{
const char *s = pv;
const char *send = pv + len;
const UV max_div_10 = UV_MAX / 10;
const char max_mod_10 = UV_MAX % 10;
int numtype = 0;
int sawinf = 0;
int sawnan = 0;
while (s < send && isSPACE(*s))
s++;
if (s == send)  else if (*s == '-')
else if (*s == '+')
s++;
if (s == send)
return 0;
if (isDIGIT(*s)) {
UV value = *s - '0';
if (++s < send) {
int digit = *s - '0';
if (digit >= 0 && digit <= 9) {
value = value * 10 + digit;
if (++s < send) {
digit = *s - '0';
if (digit >= 0 && digit <= 9) {
value = value * 10 + digit;
if (++s < send) {
digit = *s - '0';
if (digit >= 0 && digit <= 9)
}
}
}
}
}
numtype |= IS_NUMBER_IN_UV;
if (valuep)
*valuep = value;
skip_value:
if (GROK_NUMERIC_RADIX(&s, send))
}
else if (GROK_NUMERIC_RADIX(&s, send))  else if (*s == 'I' || *s == 'i')  else if (*s == 'N' || *s == 'n')  else
return 0;
if (sawinf)  else if (sawnan)  else if (s < send)
while (s < send && isSPACE(*s))
s++;
if (s >= send)
return numtype;
if (len == 10 && memEQ(pv, "0 but true", 10))
return 0;
}
#if defined(NEED_grok_bin)
static UV DPPP_(my_grok_bin)(pTHX_ const char * start, STRLEN * len_p, I32 * flags, NV * result);
static
extern UV DPPP_(my_grok_bin)(pTHX_ const char * start, STRLEN * len_p, I32 * flags, NV * result);
#  undef grok_bin
#define grok_bin(a,b,c,d) DPPP_(my_grok_bin)(aTHX_ a,b,c,d)
#define Perl_grok_bin DPPP_(my_grok_bin)
#if defined(NEED_grok_bin) || defined(NEED_grok_bin_GLOBAL)
UV
DPPP_(my_grok_bin)(pTHX_ const char *start, STRLEN *len_p, I32 *flags, NV *result)
#if defined(NEED_grok_hex)
static UV DPPP_(my_grok_hex)(pTHX_ const char * start, STRLEN * len_p, I32 * flags, NV * result);
static
extern UV DPPP_(my_grok_hex)(pTHX_ const char * start, STRLEN * len_p, I32 * flags, NV * result);
#  undef grok_hex
#define grok_hex(a,b,c,d) DPPP_(my_grok_hex)(aTHX_ a,b,c,d)
#define Perl_grok_hex DPPP_(my_grok_hex)
#if defined(NEED_grok_hex) || defined(NEED_grok_hex_GLOBAL)
UV
DPPP_(my_grok_hex)(pTHX_ const char *start, STRLEN *len_p, I32 *flags, NV *result)
#if defined(NEED_grok_oct)
static UV DPPP_(my_grok_oct)(pTHX_ const char * start, STRLEN * len_p, I32 * flags, NV * result);
static
extern UV DPPP_(my_grok_oct)(pTHX_ const char * start, STRLEN * len_p, I32 * flags, NV * result);
#  undef grok_oct
#define grok_oct(a,b,c,d) DPPP_(my_grok_oct)(aTHX_ a,b,c,d)
#define Perl_grok_oct DPPP_(my_grok_oct)
#if defined(NEED_grok_oct) || defined(NEED_grok_oct_GLOBAL)
UV
DPPP_(my_grok_oct)(pTHX_ const char *start, STRLEN *len_p, I32 *flags, NV *result)
#if !defined(my_snprintf)
#if defined(NEED_my_snprintf)
static int DPPP_(my_my_snprintf)(char * buffer, const Size_t len, const char * format, ...);
static
extern int DPPP_(my_my_snprintf)(char * buffer, const Size_t len, const char * format, ...);
#define my_snprintf DPPP_(my_my_snprintf)
#define Perl_my_snprintf DPPP_(my_my_snprintf)
#if defined(NEED_my_snprintf) || defined(NEED_my_snprintf_GLOBAL)
int
DPPP_(my_my_snprintf)(char *buffer, const Size_t len, const char *format, ...)
#if !defined(my_sprintf)
#if defined(NEED_my_sprintf)
static int DPPP_(my_my_sprintf)(char * buffer, const char * pat, ...);
static
extern int DPPP_(my_my_sprintf)(char * buffer, const char * pat, ...);
#define my_sprintf DPPP_(my_my_sprintf)
#define Perl_my_sprintf DPPP_(my_my_sprintf)
#if defined(NEED_my_sprintf) || defined(NEED_my_sprintf_GLOBAL)
int
DPPP_(my_my_sprintf)(char *buffer, const char* pat, ...)
#  ifdef dJMPENV
#    define dXCPT             dJMPENV; int rEtV = 0
#    define XCPT_TRY_START    JMPENV_PUSH(rEtV); if (rEtV == 0)
#    define XCPT_TRY_END      JMPENV_POP;
#    define XCPT_CATCH        if (rEtV != 0)
#    define XCPT_RETHROW      JMPENV_JUMP(rEtV)
#  else
#    define dXCPT             Sigjmp_buf oldTOP; int rEtV = 0
#    define XCPT_TRY_START    Copy(top_env, oldTOP, 1, Sigjmp_buf); rEtV = Sigsetjmp(top_env, 1); if (rEtV == 0)
#    define XCPT_TRY_END      Copy(oldTOP, top_env, 1, Sigjmp_buf);
#    define XCPT_CATCH        if (rEtV != 0)
#    define XCPT_RETHROW      Siglongjmp(top_env, rEtV)
#  endif
#if !defined(my_strlcat)
#if defined(NEED_my_strlcat)
static Size_t DPPP_(my_my_strlcat)(char * dst, const char * src, Size_t size);
static
extern Size_t DPPP_(my_my_strlcat)(char * dst, const char * src, Size_t size);
#define my_strlcat DPPP_(my_my_strlcat)
#define Perl_my_strlcat DPPP_(my_my_strlcat)
#if defined(NEED_my_strlcat) || defined(NEED_my_strlcat_GLOBAL)
Size_t
DPPP_(my_my_strlcat)(char *dst, const char *src, Size_t size)
#if !defined(my_strlcpy)
#if defined(NEED_my_strlcpy)
static Size_t DPPP_(my_my_strlcpy)(char * dst, const char * src, Size_t size);
static
extern Size_t DPPP_(my_my_strlcpy)(char * dst, const char * src, Size_t size);
#define my_strlcpy DPPP_(my_my_strlcpy)
#define Perl_my_strlcpy DPPP_(my_my_strlcpy)
#if defined(NEED_my_strlcpy) || defined(NEED_my_strlcpy_GLOBAL)
Size_t
DPPP_(my_my_strlcpy)(char *dst, const char *src, Size_t size)
#  define PERL_PV_ESCAPE_QUOTE           0x0001
#  define PERL_PV_PRETTY_QUOTE           PERL_PV_ESCAPE_QUOTE
#  define PERL_PV_PRETTY_ELLIPSES        0x0002
#  define PERL_PV_PRETTY_LTGT            0x0004
#  define PERL_PV_ESCAPE_FIRSTCHAR       0x0008
#  define PERL_PV_ESCAPE_UNI             0x0100
#  define PERL_PV_ESCAPE_UNI_DETECT      0x0200
#  define PERL_PV_ESCAPE_ALL             0x1000
#  define PERL_PV_ESCAPE_NOBACKSLASH     0x2000
#  define PERL_PV_ESCAPE_NOCLEAR         0x4000
#  define PERL_PV_ESCAPE_RE              0x8000
#  define PERL_PV_PRETTY_NOCLEAR         PERL_PV_ESCAPE_NOCLEAR
#  define PERL_PV_PRETTY_DUMP            PERL_PV_PRETTY_ELLIPSES|PERL_PV_PRETTY_QUOTE
#  define PERL_PV_PRETTY_REGPROP         PERL_PV_PRETTY_ELLIPSES|PERL_PV_PRETTY_LTGT|PERL_PV_ESCAPE_RE
#if defined(NEED_pv_escape)
static char * DPPP_(my_pv_escape)(pTHX_ SV * dsv, char const * const str, const STRLEN count, const STRLEN max, STRLEN * const escaped, const U32 flags);
static
extern char * DPPP_(my_pv_escape)(pTHX_ SV * dsv, char const * const str, const STRLEN count, const STRLEN max, STRLEN * const escaped, const U32 flags);
#  undef pv_escape
#define pv_escape(a,b,c,d,e,f) DPPP_(my_pv_escape)(aTHX_ a,b,c,d,e,f)
#define Perl_pv_escape DPPP_(my_pv_escape)
#if defined(NEED_pv_escape) || defined(NEED_pv_escape_GLOBAL)
char *
DPPP_(my_pv_escape)(pTHX_ SV *dsv, char const * const str,
const STRLEN count, const STRLEN max,
STRLEN * const escaped, const U32 flags)
#if defined(NEED_pv_pretty)
static char * DPPP_(my_pv_pretty)(pTHX_ SV * dsv, char const * const str, const STRLEN count, const STRLEN max, char const * const start_color, char const * const end_color, const U32 flags);
static
extern char * DPPP_(my_pv_pretty)(pTHX_ SV * dsv, char const * const str, const STRLEN count, const STRLEN max, char const * const start_color, char const * const end_color, const U32 flags);
#  undef pv_pretty
#define pv_pretty(a,b,c,d,e,f,g) DPPP_(my_pv_pretty)(aTHX_ a,b,c,d,e,f,g)
#define Perl_pv_pretty DPPP_(my_pv_pretty)
#if defined(NEED_pv_pretty) || defined(NEED_pv_pretty_GLOBAL)
char *
DPPP_(my_pv_pretty)(pTHX_ SV *dsv, char const * const str, const STRLEN count,
const STRLEN max, char const * const start_color, char const * const end_color,
const U32 flags)
#if defined(NEED_pv_display)
static char * DPPP_(my_pv_display)(pTHX_ SV * dsv, const char * pv, STRLEN cur, STRLEN len, STRLEN pvlim);
static
extern char * DPPP_(my_pv_display)(pTHX_ SV * dsv, const char * pv, STRLEN cur, STRLEN len, STRLEN pvlim);
#  undef pv_display
#define pv_display(a,b,c,d,e) DPPP_(my_pv_display)(aTHX_ a,b,c,d,e)
#define Perl_pv_display DPPP_(my_pv_display)
#if defined(NEED_pv_display) || defined(NEED_pv_display_GLOBAL)
char *
DPPP_(my_pv_display)(pTHX_ SV *dsv, const char *pv, STRLEN cur, STRLEN len, STRLEN pvlim)
