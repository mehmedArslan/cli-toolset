#pragma once

#ifndef OPERATION_HPP
#define OPERATION_HPP

struct operation {
    virtual size_t execute(std::istream& in) = 0;
    virtual ~operation() = default;
};

#endif
