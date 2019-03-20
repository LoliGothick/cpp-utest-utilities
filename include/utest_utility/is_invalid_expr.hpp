#ifndef MITAMA_UTEST_UTILITY_IS_INVALID_EXPR_HPP
#define MITAMA_UTEST_UTILITY_IS_INVALID_EXPR_HPP
#include "detail/dependent_bool.hpp"
#include "detail/overload.hpp"
#include "detail/protean_bool.hpp"
#include "detail/type_transfer.hpp"

#define IS_INVALID_EXPR(...)                                     \
  IS_INVALID_EXPR_IMPL1(__VA_ARGS__)                             \
  IS_INVALID_EXPR_IMPL2

#define IS_INVALID_EXPR_IMPL1(...) bool(false ? ::mitama::overload([](auto x)->decltype(__VA_ARGS__, std::false_type{}){return{};},[](...)->std::true_type{return{};})
#define IS_INVALID_EXPR_IMPL2(...) (::mitama::type_transfer<__VA_ARGS__>{}): ::mitama::protean_bool{})
#define DECLVAL(N) std::declval<std::tuple_element_t<N,typename decltype(x)::type>>()
#define DECLTYPE(N) std::tuple_element_t<N,typename decltype(x)::type>


#endif