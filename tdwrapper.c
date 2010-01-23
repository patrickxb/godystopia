/**
 * Copyright 2009 Patrick Crosby, XB Labs LLC
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "tdwrapper.h"
#include <dystopia.h>

/* Tokyo Dystopia new/open/close/del */

void*
xtcidb_new()
{
        return tcidbnew();
}

int
xtcidb_open(void* idb, const char* path, int ocode)
{
        return (int)tcidbopen(idb, path, ocode);
}

int 
xtcidb_close(void* idb)
{
        return (int)tcidbclose(idb);
}

void 
xtcidb_del(void* idb)
{
        tcidbdel(idb);
}

/* Tokyo Dystopia Q-Gram errors */

int
xtcidb_ecode(void* idb)
{
        return tcidbecode(idb);
}

const char* 
xtcidb_errmsg(int ecode)
{
        return tcidberrmsg(ecode);
}

/* open flags */

int x_idbowriter() { return IDBOWRITER; }
int x_idboreader() { return IDBOREADER; }
int x_idbocreate() { return IDBOCREAT; }
int x_idbotrunc() { return IDBOTRUNC; }
int x_idbonolock() { return IDBONOLCK; }
int x_idbolocknoblock() { return IDBOLCKNB; }

int 
xtcidb_put(void* idb, long long id, const char* text)
{
        return tcidbput(idb, id, text);
}

/* Tokyo Tyrant query conditions */
/*
int x_streq() { return RDBQCSTREQ; }
int x_strinc() { return RDBQCSTRINC; }
int x_strbw() { return RDBQCSTRBW; }
int x_numlt() { return RDBQCNUMLT; }
*/

/* Tokyo Tyrant query orders */
/*
int x_strasc() { return RDBQOSTRASC; }
int x_strdesc() { return RDBQOSTRDESC; }
int x_numasc() { return RDBQONUMASC; }
int x_numdesc() { return RDBQONUMDESC; }
*/

/* Tokyo Tyrant error codes */
//int x_errcode_keep() { return TTEKEEP; }

