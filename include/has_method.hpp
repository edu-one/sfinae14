/* Copyright (C) Denys Valchuk - All Rights Reserved
 * ZHZhbGNodWtAZ21haWwuY29tCg==
 */

#ifndef __DV_INCLUDE_HASMETHOD_HPP__
#define __DV_INCLUDE_HASMETHOD_HPP__

/* @brief SFINAE (Substitution failure is not an error)
 * @see http://en.wikipedia.org/wiki/Substitution_failure_is_not_an_error
 **/

#define DV_HAS_METHOD(methodName, checkerName)                                      \
    template<typename T, typename Sign>                                             \
    struct checkerName {                                                            \
        typedef char yes[1];                                                        \
        typedef char no [2];                                                        \
        template <typename U, U> struct type_check;                                 \
        template <typename _1> static yes &chk(type_check<Sign, &_1::methodName> *);\
        template <typename   > static no  &chk(...);                                \
        static bool const value = sizeof(chk<T>(0)) == sizeof(yes);                 \
   }


#endif // __DV_INCLUDE_HASMETHOD_HPP__
