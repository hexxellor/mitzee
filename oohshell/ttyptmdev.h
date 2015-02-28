/**
# Copyright (C) 2007-2015 s(mariuschincisan@gmail.com) - coinscode.com - N/A
#
# Licensed under the Apache License, Version 2.0 (the "License");
# you may not use this file except in compliance with the License.
# You may obtain a copy of the License at
#
# http://www.apache.org/licenses/LICENSE-2.0
#
# Unless required by applicable law or agreed to in writing, software
# distributed under the License is distributed on an "AS IS" BASIS,
# WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
# See the License for the specific language governing permissions and
# limitations under the License.
*/

#ifndef TTYIO_H
#define TTYIO_H

#include <string>
#include "main.h"

class ttyio
{
public:
    ttyio();
    virtual ~ttyio();


    pid_t opendev();
    int read(char* outbuff, int cap);
    void reopen();
    int write(const char* intbuff, int chars);
    int grant(uid_t u, gid_t g, mode_t mode);
    void closems();
    int master(){return _master;}
    int slave(){return _slave;}
private:

    void _childproc();
private:

    int _master;
    int _slave;
    std::string _m;
    std::string _s;
    pid_t  _bashid;
};

#endif // TTYIO_H

