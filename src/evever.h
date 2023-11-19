#ifndef __EVEVER_H
# define __EVEVER_H

# define __EVE_VERSION_MAJOR U_WORD(0x00)
# define __EVE_VERSION_MINOR U_WORD(0x00)
# define __EVE_VERSION_PATCH U_WORD(0x0000)

# define __EVE_VERSION              \
  (                                 \
    ( __EVE_VERSION_MAJOR << 24 ) | \
    ( __EVE_VERSION_MINOR << 16 ) | \
    ( __EVE_VERSION_PATCH <<  0 )   \
  )

#endif