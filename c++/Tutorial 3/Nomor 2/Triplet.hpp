/* Nama  : Muhammad Gilang Ramadhan */
/* NIM   : 13520137 */
/* Tutorial 3 */
/* Triplet.hpp */

#ifndef _TRIPLET_HPP_
#define _TRIPLET_HPP_

#include <bits/stdc++.h>

template<class a, class b, class c>
class Triplet {
private:
    a first;
    b second;
    c third;
public:
    Triplet() {}
    Triplet(a first, b second, c third) {
        this->first = first;
        this->second = second;
        this->third = third;
    }
    Triplet(const Triplet& tr) {
        this->first = first;
        this->second = second;
        this->third = third;
    }

    a getFirst() {
        return this->first;
    }
    b getSecond() {
        return this->second;
    }
    c getThird() {
        return this->third;
    }

    void setFirst(a first) {
        this->first = first;
    }
    void setSecond(b second) {
        this->second = second;
    }
    void setThird(c third) {
        this->third = third;
    }

    bool operator==(const Triplet& t) {
        return (this->first == t.first) && (this->second == t.second) && (this->third == t.third);
    }

    bool operator!=(const Triplet& t) {
        return (this->first != t.first) || (this->second != t.second) || (this->third != t.third);
    }
};

#endif