
#ifndef CL_GLOBAL_H
#define CL_GLOBAL_H
#include "cl_global.h"
#endif

string cl_ip, tr1_ip, tr2_ip, log_file;
int cl_port, tr1_port, tr2_port;
string curdir, homedir;
char cur_dir[4096],home_dir[4096];
mutex logfile_mutex, stastusfile_mutex;
string SEP = "|*|";
map<string, string> status_map;
