/* connection.h - definition for the psycopg ConnectionInfo type
 *
 * Copyright (C) 2018-2019  Daniele Varrazzo <daniele.varrazzo@gmail.com>
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

#ifndef PSYCOPG_CONNINFO_H
#define PSYCOPG_CONNINFO_H 1

#include "psycopg/connection.h"

extern HIDDEN PyTypeObject connInfoType;

typedef struct {
    PyObject_HEAD

    connectionObject *conn;

} connInfoObject;

#endif /* PSYCOPG_CONNINFO_H */