#ifndef MITAMA_UTEST_UTILITY_COMMON_PROTEAN_BOOL_HPP
#define MITAMA_UTEST_UTILITY_COMMON_PROTEAN_BOOL_HPP
#include <type_traits>
namespace mitama {
struct protean_bool
{
  constexpr operator std::true_type() const { return {}; }
  constexpr operator std::false_type() const { return {}; }
};
}

#endif