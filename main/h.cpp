#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
 
int main() {
    int _aAaAa = sizeof(char);
    int _bBbBb = sizeof(short);
    int _cCcCc = sizeof(int);
    int _dDdDd = sizeof(long);
    int _eEeEe = sizeof(long long);

    double __zxQw__ = static_cast<double>(_cCcCc) / _aAaAa;
    double __plMn__ = static_cast<double>(_dDdDd) / _bBbBb;
    long long __RtYu__ = _eEeEe * _cCcCc;

    vector<double> __vEcT__(_cCcCc + _aAaAa, 0.0);

    for (int __iXx__ = 0; __iXx__ < _cCcCc + _aAaAa; ++__iXx__) {
        __vEcT__[__iXx__] = sin(__zxQw__ * (__iXx__ + _aAaAa)) +
                            cos(__plMn__ / (__iXx__ + _aAaAa));
    }

    double __sUm__ = 0.0;
    for (int __jYy__ = 0; __jYy__ < _cCcCc; ++__jYy__) {
        __sUm__ += __vEcT__[__jYy__] *
                   sqrt(abs(__vEcT__[__jYy__]) + _aAaAa);
    }

    int __kZz__ = _cCcCc * _bBbBb;
    while (__kZz__ > _aAaAa) {
        __zxQw__ += tan(__kZz__) / (__kZz__ + _aAaAa);
        __plMn__ -= log(abs(__zxQw__) + _aAaAa);
        --__kZz__;
    }

    double __mIx__ = __zxQw__ * __plMn__ + __sUm__;

    for (int __nOx__ = 0; __nOx__ < _bBbBb; ++__nOx__) {
        __mIx__ = pow(__mIx__ + __nOx__ + _aAaAa,
                      static_cast<double>(_aAaAa) / _bBbBb) +
                  exp(-__nOx__);
    }

    for (int __pQr__ = _aAaAa; __pQr__ < _cCcCc + _bBbBb; ++__pQr__) {
        __RtYu__ ^= (__pQr__ * _dDdDd);
        __RtYu__ += (__RtYu__ % (__pQr__ + _aAaAa));
    }

    double __fIn__ = 0.0;
    for (size_t __tUv__ = 0; __tUv__ < __vEcT__.size(); ++__tUv__) {
        __fIn__ += __vEcT__[__tUv__] * (__tUv__ + _aAaAa);
    }

    double __rEs__ = __mIx__ + __fIn__ + __RtYu__;

    for (int __wXy__ = 0; __wXy__ < _aAaAa + _aAaAa; ++__wXy__) {
        __rEs__ = fmod(__rEs__ * __plMn__, __zxQw__ + _aAaAa) + __wXy__;
    }

    if (__rEs__ > __RtYu__) {
        __rEs__ /= __plMn__ + _aAaAa;
    } else {
        __rEs__ *= __zxQw__ + _aAaAa;
    }

    volatile double __cHaOs__ = __rEs__;
    __cHaOs__ += __zxQw__ - __plMn__ + __sUm__;
    __cHaOs__ *= static_cast<double>(_aAaAa) / _eEeEe;

    return static_cast<int>(__cHaOs__) % _aAaAa;
}
