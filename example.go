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

package main

import (
        "dystopia";
        "fmt";
        "os";
)

func main() {
        fmt.Printf("using dystopia to make a search db\n");
        connection, err := dystopia.OpenAndCreate("test.qgram");
        if err != nil {
                fmt.Printf("no connection: %s\n", err.String());
                os.Exit(1);
        }
        defer connection.Close()

        connection.Put(1, "George Washington");
        connection.Put(2, "John Adams");
        connection.Put(3, "Thomas Jefferson");

        ids := connection.Search("john");
        for _, id := range ids {
                fmt.Printf("search result id: %d\n", id);
        }

        /*
        columns := make(map[string]string);
        columns["name"] = "falcon";
        columns["age"] = "31";
        columns["lang"] = "ja";
        err = connection.Put("12345", columns);
        if err != nil {
                fmt.Printf("put failed: %s\n", err.String())
        }

        query := connection.MakeQuery();
        query.AddCondition("name", tyrant.StringBeginsWith(), "f");
        count := query.Count();
        fmt.Printf("count = %d\n", count);
        result := connection.Execute(query);
        fmt.Printf("%d rows returned\n", len(result.Rows));
        for index, row := range result.Rows {
                fmt.Printf("ROW %d ------------------\n", index);
                for name, value := range row.Data {
                        fmt.Printf("%s => %s\n", name, value)
                }
                fmt.Printf("\n");
        }

        err = query.Remove()
        if err != nil {
                fmt.Printf("error removing: %s\n", err)
        }
        count = query.Count()
        fmt.Printf("count after remove: %d\n", count)
        
        columns["name"] = "falcon";
        columns["age"] = "31";
        columns["lang"] = "ja";
        err = connection.Put("12345", columns);
        if err != nil {
                fmt.Printf("put failed: %s\n", err.String())
        }
        columns["name"] = "jackson";
        columns["age"] = "19";
        columns["lang"] = "ja";
        err = connection.Put("2345", columns);
        if err != nil {
                fmt.Printf("put failed: %s\n", err.String())
        }
        columns["name"] = "bacon";
        columns["age"] = "57";
        columns["lang"] = "ja";
        err = connection.Put("345", columns);
        if err != nil {
                fmt.Printf("put failed: %s\n", err.String())
        }
        q := connection.MakeQuery();
        q.AddCondition("lang", tyrant.StringEqual(), "ja");
        q.SetOrder("age", tyrant.OrderNumAsc());
        result = connection.Execute(q);
        fmt.Printf("%d rows returned\n", len(result.Rows));
        for index, row := range result.Rows {
                fmt.Printf("ROW %d ------------------\n", index);
                for name, value := range row.Data {
                        fmt.Printf("%s => %s\n", name, value)
                }
                fmt.Printf("\n");
        }
        */ 

        fmt.Printf("done\n");
}
