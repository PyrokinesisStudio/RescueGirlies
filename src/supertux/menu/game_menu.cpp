//  SuperTux
//  Copyright (C) 2009 Ingo Ruhnke <grumbel@gmx.de>
//
//  This program is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program.  If not, see <http://www.gnu.org/licenses/>.

#include "supertux/menu/game_menu.hpp"

#include "supertux/level.hpp"
#include "supertux/menu/menu_storage.hpp"
#include "supertux/menu/options_menu.hpp"
#include "util/gettext.hpp"

GameMenu::GameMenu(const Level& level)
{
  add_label(level.name);
  add_hl();
  add_entry(MNID_CONTINUE, _("Continue"));
	add_entry(MNID_BUYBIG, _("Chest - 100 Coins"));
	add_entry(MNID_BUYICE, _("Snowman - 300 Coins"));
	add_entry(MNID_BUYFIRE, _("Cupcake - 900 Coins"));
	add_entry(MNID_BUYSTAR, _("Star - 200 Coins"));
  add_hl();
  add_entry(MNID_ABORTLEVEL, _("Abort Level"));
}

void
GameMenu::check_menu()
{
}

/* EOF */
