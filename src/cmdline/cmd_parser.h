/* cmd_parser_popt.h
 *
 * Created on: Jun 16, 2014
 *     Author: rock
 *
 * <copyright>
 * Copyright (C) 2014-2015 Sanford Rockowitz <rockowitz@minsoft.com>
 *
 * Licensed under the GNU General Public License Version 2
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 * </endcopyright>
 */

#ifndef CMD_PARSER_POPT_H_
#define CMD_PARSER_POPT_H_

#include "base/common.h"
#include "base/displays.h"
#include "base/msg_control.h"
#include "base/util.h"

#include "cmdline/parsed_cmd.h"


Parsed_Cmd * parse_command(int argc, char * argv[]);
// Parsed_Cmd * parse_command_goption(int argc, char * argv[]);

#endif /* CMD_PARSER_POPT_H_ */
