#ifndef AttrOpaque1_H
#define AttrOpaque1_H

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include "diplomat_runtime.h"

#include "AttrOpaque1.d.h"

#ifdef __cplusplus
namespace capi {
extern "C" {
#endif // __cplusplus


AttrOpaque1* namespace_AttrOpaque1_new();

uint8_t namespace_AttrOpaque1_method(const AttrOpaque1* self);

uint8_t renamed_on_abi_only(const AttrOpaque1* self);

void namespace_AttrOpaque1_destroy(AttrOpaque1* self);


#ifdef __cplusplus
} // extern "C"
} // namespace capi
#endif // __cplusplus

#endif // AttrOpaque1_H
