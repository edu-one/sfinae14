/* Copyright (C) Denys Valchuk - All Rights Reserved
 * ZHZhbGNodWtAZ21haWwuY29tCg==
 */

#ifndef __DV_INCLUDE_CALL_FOO_IF_EXIST_HPP__
#define __DV_INCLUDE_CALL_FOO_IF_EXIST_HPP__

#include "has_method.hpp"

template<bool C, typename T = void>
struct enableIf {
  typedef T type;
};

template<typename T>
struct enableIf<false, T> { };

DV_HAS_METHOD(foo, hasFoo);

template<typename R, typename T>
typename enableIf<hasFoo<T, R(T::*)()>::value, R>::type
processObject(T& o) {
   return o.foo();
}

template<typename R, typename T>
typename enableIf<!hasFoo<T, R(T::*)()>::value, R>::type
processObject(T&/* o*/) {
    return 0;
}


#endif // __DV_INCLUDE_CALL_FOO_IF_EXIST_HPP__
