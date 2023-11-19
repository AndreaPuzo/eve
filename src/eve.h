#ifndef __EVE_H
# define __EVE_H

# include <stdint.h>

typedef uint8_t  u_byte_t ;
typedef uint16_t u_half_t ;
typedef uint32_t u_word_t ;
typedef uint64_t u_long_t ;

# define U_BYTE(n)  UINT8_C(n)
# define U_HALF(n)  UINT16_C(n)
# define U_WORD(n)  UINT32_C(n)
# define U_LONG(n)  UINT64_C(n)

# define U_BYTE_MIN U_BYTE(0)
# define U_BYTE_MAX UINT8_MAX
# define U_HALF_MIN U_HALF(0)
# define U_HALF_MAX UINT16_MAX
# define U_WORD_MIN U_WORD(0)
# define U_WORD_MAX UINT32_MAX
# define U_LONG_MIN U_LONG(0)
# define U_LONG_MAX UINT64_MAX

typedef int8_t   s_byte_t ;
typedef int16_t  s_half_t ;
typedef int32_t  s_word_t ;
typedef int64_t  s_long_t ;

# define S_BYTE(n)  INT8_C(n)
# define S_HALF(n)  INT16_C(n)
# define S_WORD(n)  INT32_C(n)
# define S_LONG(n)  INT64_C(n)

# define U_BYTE_MIN INT8_MIN
# define U_BYTE_MAX INT8_MAX
# define U_HALF_MIN INT16_MIN
# define U_HALF_MAX INT16_MAX
# define U_WORD_MIN INT32_MIN
# define U_WORD_MAX INT32_MAX
# define U_LONG_MIN INT64_MIN
# define U_LONG_MAX INT64_MAX

# include "evever.h"
# include "evecfg.h"
# include "evelib.h"
# include "eveenv.h"

# define __EVE__ __EVE_VERSION

#endif