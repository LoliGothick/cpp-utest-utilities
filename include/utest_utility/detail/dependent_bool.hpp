#ifndef MITAMA_UTEST_UTILITY_COMMON_DEPENDENT_BOOL_HPP
#define MITAMA_UTEST_UTILITY_COMMON_DEPENDENT_BOOL_HPP
namespace mitama {
template <class...>
inline constexpr bool always_false_v = false;
template <class...>
inline constexpr bool always_true_v = true;
}

#endif