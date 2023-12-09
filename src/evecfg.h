#ifndef __EVECFG_H
# define __EVECFG_H

# ifdef _WIN32
#  ifdef __GNUC__
#   define __EVE_API_EXPORT __attribute__((dllexport))
#   define __EVE_API_IMPORT __attribute__((dllimport))
#  else
#   define __EVE_API_EXPORT __declspec(dllexport)
#   define __EVE_API_IMPORT __declspec(dllimport)
#  endif
# else
#  define __EVE_API_EXPORT __attribute__((visibility("default")))
#  define __EVE_API_IMPORT __attribute__((visibility("default")))
# endif

# ifdef __EVE_BUILD
#  define __EVE_API __EVE_API_EXPORT
# else
#  define __EVE_API __EVE_API_IMPORT
# endif

#endif
