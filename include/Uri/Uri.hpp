#ifndef _BELL_URI_HPP_
#define _BELL_URI_HPP_

/**
 * @file Uri.hpp
 * 
 * This module declares the Uri:Uri class.
 * 
 * © 2021-2021 by wake-code
 */

#include <memory>

namespace Uri {
    /**
     * This class represents a Uniform Resource Identifier (URI),
     * as defined in RFC 3986 (https://tools.ietf.org/html/rfc3986).
     */
    class Uri {
        // Lifecycle Management
    public:
        ~Uri();

        Uri(const Uri&) = delete;
        Uri(Uri&&) = delete;

        Uri& operator=(const Uri&) = delete;
        Uri& operator=(Uri&) = delete;
        
        // Public Methods
    public:
        /**
         * Default Constructor
         */
        Uri();

        // Private Properties
    private:
        /**
         * The structure that contains the private properties of the instance.
         * It is defined in the implementation and declared here to ensure that
         * it is scoped inside the class.
         */
        struct Impl;

        /**
         * Contains the private properties of the instance.
         */
        std::unique_ptr<struct Impl> impl_;
    };
}

#endif /* _BELL_URI_HPP_ */