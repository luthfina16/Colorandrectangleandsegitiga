/*	dopebot - a modular IRC bot for Win32
	Copyright (C) 2004 dope

	This program is free software; you can redistribute it and/or
	modify it under the terms of the GNU General Public License
	as published by the Free Software Foundation; either version 2
	of the License, or (at your option) any later version.

	This program is distributed in the hope that it will be useful,
	but WITHOUT ANY WARRANTY; without even the implied warranty of
	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
	GNU General Public License for more details.

	You should have received a copy of the GNU General Public License
	along with this program; if not, write to the Free Software
	Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA. */

#ifndef NO_SYSINFO
static inline unsigned __int64 cyclecount();
void get_computername(char *szBuffer);
void get_cpu(char *szBuffer);
void get_mem(char *szBuffer);
void get_os(char *szBuffer);
void get_sysinfo(char *szBuffer);
void get_uptime(char *szBuffer);
void get_username(char *szBuffer);
bool is_os9x();
bool is_osnt();
#endif