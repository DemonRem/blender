/*
 * ***** BEGIN GPL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301, USA.
 *
 * The Original Code is Copyright (C) Blender Foundation.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): Lukas Toenne
 *
 * ***** END GPL LICENSE BLOCK *****
 */

/** \file bvm_instruction_list.cc
 *  \ingroup bvm
 */

#include "bvm_instruction_list.h"

namespace blenvm {

InstructionList::InstructionList() :
    m_entry_point(0)
{
}

InstructionList::~InstructionList()
{
}

void InstructionList::add_instruction(Instruction v)
{
	m_instructions.push_back(v);
}

void InstructionList::set_entry_point(int entry_point)
{
	m_entry_point = entry_point;
}

} /* namespace blenvm */
