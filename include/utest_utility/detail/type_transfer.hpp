#ifndef MITAMA_UTEST_UTILITY_COMMON_TYPE_TRANSFER_HPP
#define MITAMA_UTEST_UTILITY_COMMON_TYPE_TRANSFER_HPP
#include <tuple>

namespace mitama {
template <class... Ts> struct type_transfer { using type = std::tuple<Ts...>; };
}

#endif
