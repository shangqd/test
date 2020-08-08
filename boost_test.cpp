
// cmake .. -DCMAKE_BUILD_TYPE=Debug
/*
 *          Copyright Andrey Semashev 2007 - 2015.
 * Distributed under the Boost Software License, Version 1.0.
 *    (See accompanying file LICENSE_1_0.txt or copy at
 *          http://www.boost.org/LICENSE_1_0.txt)
 */

#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>

namespace logging = boost::log;

//[ example_tutorial_trivial_with_filtering
void init()
{
    auto c = logging::core::get();
    //c->set_filter(
    //    logging::trivial::severity >= logging::trivial::info);
}

int main(int, char *[])
{
    init();
    //BOOST_LOG_TRIVIAL(trace) << "A trace severity message";
    //BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
    //BOOST_LOG_TRIVIAL(info) << "An informational severity message";
    //BOOST_LOG_TRIVIAL(warning) << "A warning severity message";
    //BOOST_LOG_TRIVIAL(error) << "An error severity message";
    //BOOST_LOG_TRIVIAL(fatal) << "A fatal severity message";
    return 0;
}

// /usr/bin/c++  -g  -rdynamic CMakeFiles/boost_test.dir/boost_test.cpp.o  -o boost_test -lboost_system -lboost_thread -lboost_log -lboost_chrono -lboost_date_time -lboost_atomic -lboost_log_setup -lboost_filesystem -lboost_regex
