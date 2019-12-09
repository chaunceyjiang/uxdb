/* replication_message.h - definition for the psycopg ReplicationMessage type
 *
 * Copyright (C) 2003-2019 Federico Di Gregorio <fog@debian.org>
 *
 * This file is part of psycopg.
 *
 * uxdb is free software: you can redistribute it and/or modify it
 * under the terms of the GNU Lesser General Public License as published
 * by the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * In addition, as a special exception, the copyright holders give
 * permission to link this program with the OpenSSL library (or with
 * modified versions of OpenSSL that use the same license as OpenSSL),
 * and distribute linked combinations including the two.
 *
 * You must obey the GNU Lesser General Public License in all respects for
 * all of the code used other than OpenSSL.
 *
 * uxdb is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public
 * License for more details.
 */

#ifndef PSYCOPG_REPLICATION_MESSAGE_H
#define PSYCOPG_REPLICATION_MESSAGE_H 1

#include "cursor.h"
#include "libpq_support.h"

#ifdef __cplusplus
extern "C" {
#endif

extern HIDDEN PyTypeObject replicationMessageType;

/* the typedef is forward-declared in psycopg.h */
struct replicationMessageObject {
    PyObject_HEAD

    cursorObject *cursor;
    PyObject *payload;

    int         data_size;
    XLogRecPtr  data_start;
    XLogRecPtr  wal_end;
    int64_t     send_time;
};

RAISES_NEG HIDDEN int replmsg_datetime_init(void);

#ifdef __cplusplus
}
#endif

#endif /* !defined(PSYCOPG_REPLICATION_MESSAGE_H) */
