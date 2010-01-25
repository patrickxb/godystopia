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

#ifndef _TD_WRAPPER_H_
#define _TD_WRAPPER_H_

#include <dystopia.h>

/* Tokyo Cabinet Maps */
/*
void* xtc_mapnew();
void xtc_mapput(void* cols, const char* name, const char* value);
void xtc_mapdel(void* cols);
const char* xtc_mapget2(void* cols, const char* name);
void xtc_mapiterinit(void* map);
const char* xtc_mapiternext2(void* map);
*/

/* Tokyo Cabinet Lists */
/*
int xtc_listnum(void* list);
const char* xtc_listval(void* list, int index);
*/

/* Tokyo Dystopia Q-Gram new/open/close/del */
/*
void* xtcidb_new(void); 
void xtcidb_del(void* idb);
int xtcidb_open(void* idb, const char* path, int omode);
int xtcidb_close(void* idb);
*/

int x_idbowriter();
int x_idboreader();
int x_idbocreate();
int x_idbotrunc();
int x_idbonolock();
int x_idbolocknoblock();

/* search flags */
int x_substring();
int x_prefix();
int x_suffix();
int x_full();
int x_token();
int x_token_pre();
int x_token_suf();

/* get item from array */
uint64_t x_get_result_item(uint64_t* result_set, int index);

/* Tokyo Tyrant errors */
/*
int xtcidb_ecode(void* idb);
const char* xtcidb_errmsg(int ecode);

int xtcidb_put(void* idb, long long id, const char* text);
typedef struct {
        int* items;
        int count;
} search_result;
void* xtcidb_search(void* idb, const char* query);

void* xtcidb_search_items(void* resp);
int xtcidb_search_count(void* resp);
int xtcidb_item(void* resp, int index);
*/

/* Tokyo Tyrant query conditions */
/*
int x_streq();
int x_strinc();
int x_strbw();
int x_numlt();
*/

/* Tokyo Tyrant query orders */
/*
int x_strasc();
int x_strdesc();
int x_numasc();
int x_numdesc();
*/

/* Tokyo Tyrant error codes */
//int x_errcode_keep();

#endif
