/**
 * @file Uri.cpp
 * 
 * This module contains the implementation of the Uri::Uri class
 * 
 * © 2021-2021 by wake-code
 */

#include <Uri/Uri.hpp>

namespace Uri {
    /**
     * This contains the private properties of an Uri instance.
     */
    struct Uri::Impl {

    };

    Uri::~Uri() = default;

    Uri::Uri() : impl_(new Impl) {
        
    }
}