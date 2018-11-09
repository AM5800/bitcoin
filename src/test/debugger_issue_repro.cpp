// Copyright (c) 2012-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <boost/test/unit_test.hpp>
#include <my/validation.h>
#include <test/test_bitcoin.h>
#include <validation.h>

BOOST_FIXTURE_TEST_SUITE(debugger_issue_repro, TestChain100Setup)

BOOST_AUTO_TEST_CASE(my_validation)
{
    MyValidation();
}

BOOST_AUTO_TEST_CASE(validation)
{
    DumpMempool();
}

BOOST_AUTO_TEST_SUITE_END()
