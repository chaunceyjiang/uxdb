#!/usr/bin/env python

# bugX000.py - test for DateTime object allocation bug
#
# Copyright (C) 2007-2019 Federico Di Gregorio  <fog@debian.org>
#
# uxdb is free software: you can redistribute it and/or modify it
# under the terms of the GNU Lesser General Public License as published
# by the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
#
# In addition, as a special exception, the copyright holders give
# permission to link this program with the OpenSSL library (or with
# modified versions of OpenSSL that use the same license as OpenSSL),
# and distribute linked combinations including the two.
#
# You must obey the GNU Lesser General Public License in all respects for
# all of the code used other than OpenSSL.
#
# uxdb is distributed in the hope that it will be useful, but WITHOUT
# ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
# FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
# License for more details.

import uxdb
import time
import unittest


class DateTimeAllocationBugTestCase(unittest.TestCase):
    def test_date_time_allocation_bug(self):
        d1 = uxdb.Date(2002, 12, 25)
        d2 = uxdb.DateFromTicks(time.mktime((2002, 12, 25, 0, 0, 0, 0, 0, 0)))
        t1 = uxdb.Time(13, 45, 30)
        t2 = uxdb.TimeFromTicks(time.mktime((2001, 1, 1, 13, 45, 30, 0, 0, 0)))
        t1 = uxdb.Timestamp(2002, 12, 25, 13, 45, 30)
        t2 = uxdb.TimestampFromTicks(
            time.mktime((2002, 12, 25, 13, 45, 30, 0, 0, 0)))
        del d1, d2, t1, t2


def test_suite():
    return unittest.TestLoader().loadTestsFromName(__name__)


if __name__ == "__main__":
    unittest.main()
