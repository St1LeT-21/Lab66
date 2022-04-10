// Copyright 2022 siruser agamesok@gmail.com

#ifndef TEMPLATE_LOGGING_H
#define TEMPLATE_LOGGING_H
#include <iostream>
#include <boost/log/exceptions.hpp>
#include <boost/log/sinks.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/utility/setup.hpp>

namespace logs = boost::log;
namespace keywords = boost::log::keywords;

void set_logs(size_t val);
#endif  // TEMPLATE_LOGGING_H
