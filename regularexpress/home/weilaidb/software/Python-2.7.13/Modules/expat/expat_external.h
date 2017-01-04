#define Expat_External_INCLUDED 1
#if defined(_MSC_EXTENSIONS) && !defined(__BEOS__) && !defined(__CYGWIN__)
#define XML_USE_MSC_EXTENSIONS 1
#if defined(_MSC_VER)
#define XMLCALL __cdecl
#elif defined(__GNUC__) && defined(__i386) && !defined(__INTEL_COMPILER)
#define XMLCALL __attribute__((cdecl))
#define XMLCALL
#if !defined(XML_STATIC) && !defined(XMLIMPORT)
#define XMLIMPORT __declspec(dllimport)
#define XMLIMPORT
#define XMLPARSEAPI(type) XMLIMPORT type XMLCALL
#define XML_UNICODE
typedef wchar_t XML_Char;
typedef wchar_t XML_LChar;
typedef unsigned short XML_Char;
typedef char XML_LChar;
typedef char XML_Char;
typedef char XML_LChar;
#if defined(XML_USE_MSC_EXTENSIONS) && _MSC_VER < 1400
typedef __int64 XML_Index;
typedef unsigned __int64 XML_Size;
typedef long long XML_Index;
typedef unsigned long long XML_Size;
typedef long XML_Index;
typedef unsigned long XML_Size;
