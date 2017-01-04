#define _P_P_PORTABILITY_H_
#   ifndef __PATCHLEVEL_H_INCLUDED__
#       include "patchlevel.h"
#   endif
#   ifndef PERL_REVISION
#	define PERL_REVISION	(5)
#       define PERL_VERSION	PATCHLEVEL
#       define PERL_SUBVERSION	SUBVERSION
#   endif
#define PERL_BCDVERSION ((PERL_REVISION * 0x1000000L) + (PERL_VERSION * 0x1000L) + PERL_SUBVERSION)
#	define ERRSV perl_get_sv("@",FALSE)
#if (PERL_VERSION < 4) || ((PERL_VERSION == 4) && (PERL_SUBVERSION <= 5))
#	define PL_Sv		Sv
#	define PL_compiling	compiling
#	define PL_copline	copline
#	define PL_curcop	curcop
#	define PL_curstash	curstash
#	define PL_defgv		defgv
#	define PL_dirty		dirty
#	define PL_hints		hints
#	define PL_na		na
#	define PL_perldb	perldb
#	define PL_rsfp_filters	rsfp_filters
#	define PL_rsfp		rsfp
#	define PL_stdingv	stdingv
#	define PL_sv_no		sv_no
#	define PL_sv_undef	sv_undef
#	define PL_sv_yes	sv_yes
#    define pTHX
#    define pTHX_
#    define aTHX
#    define aTHX_
#    define PTR2IV(d)   (IV)(d)
#    define INT2PTR(any,d)      (any)(d)
#  ifdef WIN32
#	define dTHR extern int Perl___notused
#  else
#	define dTHR extern int errno
#  endif
#	define boolSV(b) ((b) ? &PL_sv_yes : &PL_sv_no)
#	define gv_stashpvn(str,len,flags) gv_stashpv(str,flags)
#	define newSVpvn(data,len) ((len) ? newSVpv ((data), (len)) : newSVpv ("", 0))
#	define newRV_inc(sv) newRV(sv)
#  define SvGETMAGIC(x)                  STMT_START  STMT_END
#  define DEFSV	GvSV(PL_defgv)
#    define SAVE_DEFSV SAVESPTR(GvSV(PL_defgv))
#  ifdef __GNUC__
#    define newRV_noinc(sv)               \
()
#  else
#    if defined(CRIPPLED_CC) || defined(USE_THREADS)
static SV * newRV_noinc (SV * sv)
#    else
#      define newRV_noinc(sv)    \
((PL_Sv=(SV*)newRV(sv), SvREFCNT_dec(sv), (SV*)PL_Sv)
#    endif
#  endif
#if (PERL_VERSION < 4) || ((PERL_VERSION == 4) && (PERL_SUBVERSION < 63))
#if defined(NEED_newCONSTSUB)
static
extern void newCONSTSUB _((HV * stash, char * name, SV *sv));
#if defined(NEED_newCONSTSUB) || defined(NEED_newCONSTSUB_GLOBAL)
void
newCONSTSUB(stash,name,sv)
HV *stash;
char *name;
SV *sv;
#if defined(MULTIPLICITY) || defined(PERL_OBJECT) || \
defined(PERL_CAPI)    || defined(PERL_IMPLICIT_CONTEXT)
#define START_MY_CXT
#if PERL_REVISION == 5 && \
(PERL_VERSION < 4 || (PERL_VERSION == 4 && PERL_SUBVERSION < 68 ))
#define dMY_CXT_SV \
SV *my_cxt_sv = perl_get_sv(MY_CXT_KEY, FALSE)
#define dMY_CXT_SV \
SV *my_cxt_sv = *hv_fetch(PL_modglobal, MY_CXT_KEY,		\
sizeof(MY_CXT_KEY)-1, TRUE)
#define dMY_CXT	\
dMY_CXT_SV;							\
my_cxt_t *my_cxtp = INT2PTR(my_cxt_t*,SvUV(my_cxt_sv))
#define MY_CXT_INIT \
dMY_CXT_SV;							\			\
my_cxt_t *my_cxtp = (my_cxt_t*)SvPVX(newSV(sizeof(my_cxt_t)-1));\
Zero(my_cxtp, 1, my_cxt_t);					\
sv_setuv(my_cxt_sv, PTR2UV(my_cxtp))
#define MY_CXT		(*my_cxtp)
#define pMY_CXT		my_cxt_t *my_cxtp
#define pMY_CXT_	pMY_CXT,
#define _pMY_CXT	,pMY_CXT
#define aMY_CXT		my_cxtp
#define aMY_CXT_	aMY_CXT,
#define _aMY_CXT	,aMY_CXT
#  define NOOP (void)0
#  define PERL_UNUSED_DECL __attribute__((unused))
#  define PERL_UNUSED_DECL
#  define dNOOP extern int Perl___notused PERL_UNUSED_DECL
#define START_MY_CXT	static my_cxt_t my_cxt;
#define dMY_CXT_SV	dNOOP
#define dMY_CXT		dNOOP
#define MY_CXT_INIT	NOOP
#define MY_CXT		my_cxt
#define pMY_CXT		void
#define pMY_CXT_
#define _pMY_CXT
#define aMY_CXT
#define aMY_CXT_
#define _aMY_CXT
#if 1
#undef DBM_setFilter
#undef DBM_ckFilter
#define DBM_setFilter(db_type,code)				\
#define DBM_ckFilter(arg,type,name)				\
if (db->type)
