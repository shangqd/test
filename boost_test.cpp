
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

#include <boost/thread/thread.hpp>
#include <iostream>

void hello()
{
    std::cout << "Hello world, I''m a thread!" << std::endl;
}

//[ example_tutorial_trivial_with_filtering
void init()
{
    auto c = logging::core::get();
    //c->set_filter(
    //    logging::trivial::severity >= logging::trivial::info);
}

int main(int, char *[])
{
    boost::thread thrd(&hello);
    thrd.join();
    init();
    //BOOST_LOG_TRIVIAL(trace) << "A trace severity message";
    //BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
    //BOOST_LOG_TRIVIAL(info) << "An informational severity message";
    //BOOST_LOG_TRIVIAL(warning) << "A warning severity message";
    //BOOST_LOG_TRIVIAL(error) << "An error severity message";
    //BOOST_LOG_TRIVIAL(fatal) << "A fatal severity message";
    return 0;
}