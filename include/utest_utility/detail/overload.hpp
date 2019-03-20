#ifndef MITAMA_UTEST_UTILITY_COMMON_OVERLOAD_HPP
#define MITAMA_UTEST_UTILITY_COMMON_OVERLOAD_HPP
#include <type_traits>
#include <utility>
namespace mitama {
template <class T, class... Ts>
struct Overload : T, Overload<Ts...>
{
  Overload(T a, Ts... xs) : T{a}, Overload<Ts...>{xs...} {}
  using T::operator();
  using Overload<Ts...>::operator();
};

template <class T>
struct Overload<T> : T
{
  Overload(T a) : T{a} {}
  using T::operator();
};

template <class... F>
inline constexpr Overload<F...>
overload(F &&... f)
{
  return {{std::forward<F>(f)}...};
}
}

#endif