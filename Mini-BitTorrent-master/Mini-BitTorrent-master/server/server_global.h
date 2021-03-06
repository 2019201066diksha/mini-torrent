

#ifndef SR_HEADER_H
#define SR_HEADER_H
#include "server_header.h"
#endif

extern string tr1_ip, tr2_ip, seeder_list, log_file;
extern int tr1_port, tr2_port;
extern map<string, map<string, string>> seeder_map;
extern mutex seedfile_mutex, logfile_mutex;
extern string SEP;
