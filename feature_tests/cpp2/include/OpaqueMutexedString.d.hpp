#ifndef OpaqueMutexedString_D_HPP
#define OpaqueMutexedString_D_HPP

#include <stdio.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>
#include <memory>
#include <optional>
#include "diplomat_runtime.hpp"

class Utf16Wrap;


namespace capi {
    typedef struct OpaqueMutexedString OpaqueMutexedString;
}

class OpaqueMutexedString {
public:

  inline static std::unique_ptr<OpaqueMutexedString> from_usize(size_t number);

  inline void change(size_t number) const;

  inline const OpaqueMutexedString& borrow() const;

  inline static const OpaqueMutexedString& borrow_other(const OpaqueMutexedString& other);

  inline const OpaqueMutexedString& borrow_self_or_other(const OpaqueMutexedString& other) const;

  inline size_t get_len_and_add(size_t other) const;

  inline std::string_view dummy_str() const;

  inline std::unique_ptr<Utf16Wrap> wrapper() const;

  inline const capi::OpaqueMutexedString* AsFFI() const;
  inline capi::OpaqueMutexedString* AsFFI();
  inline static const OpaqueMutexedString* FromFFI(const capi::OpaqueMutexedString* ptr);
  inline static OpaqueMutexedString* FromFFI(capi::OpaqueMutexedString* ptr);
  inline static void operator delete(void* ptr);
private:
  OpaqueMutexedString() = delete;
  OpaqueMutexedString(const OpaqueMutexedString&) = delete;
  OpaqueMutexedString(OpaqueMutexedString&&) noexcept = delete;
  OpaqueMutexedString operator=(const OpaqueMutexedString&) = delete;
  OpaqueMutexedString operator=(OpaqueMutexedString&&) noexcept = delete;
  static void operator delete[](void*, size_t) = delete;
};


#endif // OpaqueMutexedString_D_HPP
